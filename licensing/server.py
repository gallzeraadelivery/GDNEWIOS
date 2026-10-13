"""GDNEWIOS licensing. Private signing material stays on the server."""
import base64
import hashlib
import hmac
import json
import os
import re
import secrets
import sqlite3
import subprocess
import tempfile
import time
from http.cookies import SimpleCookie
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

DATA = Path(os.environ.get('LICENSE_DATA', '/data'))
PRODUCT = 'gdnewios.amg'
ISSUER = 'gdnewios.gdapps.online'
MAX_BODY = 8192


def b64(data):
    return base64.urlsafe_b64encode(data).rstrip(b'=').decode()


def unb64(value):
    if not isinstance(value, str) or not re.fullmatch(r'[A-Za-z0-9_-]+', value):
        raise ValueError('invalid_encoding')
    return base64.urlsafe_b64decode(value + '=' * (-len(value) % 4))


def initialize():
    DATA.mkdir(parents=True, exist_ok=True, mode=0o700)
    for name in ('admin-token', 'key-pepper'):
        p = DATA / name
        if not p.exists():
            p.write_text(secrets.token_urlsafe(32))
            p.chmod(0o600)
    private = DATA / 'signing-private.pem'
    if not private.exists():
        subprocess.run(['openssl', 'genpkey', '-algorithm', 'RSA', '-pkeyopt', 'rsa_keygen_bits:2048', '-out', str(private)], check=True, capture_output=True)
        private.chmod(0o600)
    subprocess.run(['openssl', 'rsa', '-in', str(private), '-pubout', '-out', str(DATA / 'signing-public.pem')], check=True, capture_output=True)
    with database() as db:
        db.execute('CREATE TABLE IF NOT EXISTS admin_sessions (digest TEXT PRIMARY KEY, csrf TEXT NOT NULL, expires INTEGER NOT NULL)')
        db.execute('CREATE TABLE IF NOT EXISTS licenses (id TEXT PRIMARY KEY, digest TEXT UNIQUE NOT NULL, expires INTEGER NOT NULL, device TEXT, revoked INTEGER NOT NULL DEFAULT 0, created INTEGER NOT NULL)')
        if 'owner' not in [row[1] for row in db.execute('PRAGMA table_info(licenses)')]:
            db.execute("ALTER TABLE licenses ADD COLUMN owner TEXT NOT NULL DEFAULT ''")


def database():
    db = sqlite3.connect(DATA / 'licenses.sqlite', timeout=10)
    db.row_factory = sqlite3.Row
    return db


def digest(key):
    if not isinstance(key, str) or len(key) > 128:
        raise ValueError('invalid_key')
    return hmac.new((DATA / 'key-pepper').read_bytes(), key.strip().upper().encode(), hashlib.sha256).hexdigest()


def signed(payload):
    encoded = b64(json.dumps(payload, sort_keys=True, separators=(',', ':')).encode())
    signature = subprocess.run(['openssl', 'dgst', '-sha256', '-sign', str(DATA / 'signing-private.pem')], input=encoded.encode(), capture_output=True, check=True).stdout
    return {'payload': encoded, 'signature': b64(signature)}


def verified(token):
    if not isinstance(token, dict):
        raise ValueError('invalid_token')
    payload = token.get('payload', '')
    signature = unb64(token.get('signature'))
    unb64(payload)
    with tempfile.NamedTemporaryFile() as temp:
        temp.write(signature)
        temp.flush()
        result = subprocess.run(['openssl', 'dgst', '-sha256', '-verify', str(DATA / 'signing-public.pem'), '-signature', temp.name], input=payload.encode(), capture_output=True)
    if result.returncode:
        raise ValueError('invalid_signature')
    value = json.loads(unb64(payload))
    if value.get('iss') != ISSUER or value.get('product') != PRODUCT:
        raise ValueError('invalid_token')
    return value


def issue_license(days, owner=""):
    if not isinstance(owner, str) or len(owner.strip()) > 120:
        raise ValueError("invalid_owner")
    owner = owner.strip()
    if isinstance(days, bool) or not isinstance(days, int) or not 1 <= days <= 3650:
        raise ValueError('invalid_days')
    key = 'GD-' + secrets.token_hex(16).upper()
    ident = secrets.token_hex(16)
    now = int(time.time())
    with database() as db:
        db.execute('INSERT INTO licenses (id,digest,expires,created,owner) VALUES (?,?,?,?,?)', (ident, digest(key), now + days * 86400, now, owner))
    return {'id': ident, 'key': key, 'expires': now + days * 86400, 'owner': owner}


def list_licenses():
    now = int(time.time())
    with database() as db:
        rows = db.execute('SELECT id,owner,expires,created,revoked,device IS NOT NULL AS bound FROM licenses ORDER BY created DESC,id DESC').fetchall()
    items = []
    for row in rows:
        item = dict(row)
        item['status'] = 'revoked' if item['revoked'] else 'expired' if item['expires'] <= now else 'active' if item['bound'] else 'pending'
        items.append(item)
    return items


def validate(body, activate):
    device, challenge = body.get('device'), body.get('challenge')
    if body.get('product') != PRODUCT or not isinstance(device, str) or not re.fullmatch('[0-9a-f]{64}', device) or not isinstance(challenge, str) or not re.fullmatch('[0-9a-f]{32}', challenge):
        raise ValueError('invalid_request')
    now = int(time.time())
    with database() as db:
        db.execute('BEGIN IMMEDIATE')
        if activate:
            row = db.execute('SELECT * FROM licenses WHERE digest=?', (digest(body.get('key')),)).fetchone()
        else:
            previous = verified(body.get('token'))
            if previous.get('device') != device:
                raise ValueError('device_mismatch')
            row = db.execute('SELECT * FROM licenses WHERE id=?', (previous.get('license'),)).fetchone()
        if not row or row['revoked']:
            raise ValueError('invalid_or_revoked_key')
        if row['expires'] <= now:
            raise ValueError('expired_key')
        if row['device'] and row['device'] != device:
            raise ValueError('device_mismatch')
        if not row['device']:
            db.execute('UPDATE licenses SET device=? WHERE id=?', (device, row['id']))
        return signed({'iss': ISSUER, 'product': PRODUCT, 'license': row['id'], 'device': device, 'challenge': challenge, 'iat': now, 'exp': row['expires'], 'refresh': min(now + 900, row['expires'])})


def authenticate(username, password):
    if not isinstance(username, str) or not isinstance(password, str) or len(password) > 256:
        return False
    config = json.loads((DATA / 'admin-credentials.json').read_text())
    actual = hashlib.scrypt(password.encode(), salt=bytes.fromhex(config['salt']), n=16384, r=8, p=1).hex()
    return hmac.compare_digest(actual, config['hash']) and hmac.compare_digest(username.encode(), config['username'].encode())


def create_session():
    token, csrf = secrets.token_urlsafe(32), secrets.token_urlsafe(32)
    with database() as db:
        db.execute('DELETE FROM admin_sessions WHERE expires<=?', (int(time.time()),))
        db.execute('INSERT INTO admin_sessions VALUES (?,?,?)', (hashlib.sha256(token.encode()).hexdigest(), csrf, int(time.time()) + 28800))
    return token, csrf


def session_from_cookie(header):
    cookie = SimpleCookie()
    try:
        cookie.load(header or '')
        token = cookie['gd_admin'].value
    except (KeyError, ValueError):
        return None
    with database() as db:
        row = db.execute('SELECT * FROM admin_sessions WHERE digest=? AND expires>?', (hashlib.sha256(token.encode()).hexdigest(), int(time.time()))).fetchone()
    return dict(row) if row else None


class Handler(BaseHTTPRequestHandler):
    server_version = 'GDNEWIOS'

    def log_message(self, fmt, *args):
        # Never log bodies, activation keys, tokens or authorization headers.
        pass

    def send(self, status, value, kind='application/json', cookie=None):
        content = value if isinstance(value, bytes) else json.dumps(value).encode()
        self.send_response(status)
        self.send_header('Content-Type', kind)
        if cookie:
            self.send_header('Set-Cookie', cookie)
        self.send_header('Content-Length', str(len(content)))
        self.send_header('Cache-Control', 'no-store')
        self.send_header('X-Content-Type-Options', 'nosniff')
        self.send_header('Content-Security-Policy', "default-src 'self'; script-src 'self'; style-src 'self'; frame-ancestors 'none'; base-uri 'none'")
        self.end_headers()
        self.wfile.write(content)

    def do_GET(self):
        if self.path == '/admin/licenses':
            if not session_from_cookie(self.headers.get('Cookie')):
                return self.send(401, {'error': 'unauthorized'})
            return self.send(200, {'licenses': list_licenses()})
        if self.path == '/admin/session':
            session = session_from_cookie(self.headers.get('Cookie'))
            return self.send(200 if session else 401, {'csrf': session['csrf']} if session else {'error': 'unauthorized'})
        if self.path == '/health':
            return self.send(200, {'status': 'ok', 'product': PRODUCT})
        if self.path == '/v1/public-key':
            return self.send(200, (DATA / 'signing-public.pem').read_bytes(), 'application/x-pem-file')
        resources = {'/assets/logo.png': ('assets/logo.png', 'image/png'), '/assets/icon.png': ('assets/icon.png', 'image/png'), '/': ('admin.html', 'text/html; charset=utf-8'), '/admin.js': ('admin.js', 'text/javascript; charset=utf-8'), '/style.css': ('style.css', 'text/css; charset=utf-8')}
        if self.path in resources:
            name, kind = resources[self.path]
            return self.send(200, (Path(__file__).parent / name).read_bytes(), kind)
        self.send(404, {'error': 'not_found'})

    def do_POST(self):
        try:
            length = int(self.headers.get('Content-Length', '0'))
            if not 0 < length <= MAX_BODY:
                return self.send(413, {'error': 'invalid_size'})
            if self.headers.get('Content-Type', '').split(';')[0] != 'application/json':
                return self.send(415, {'error': 'json_required'})
            body = json.loads(self.rfile.read(length))
            if not isinstance(body, dict):
                raise ValueError('invalid_request')
            if self.path.startswith('/admin/'):
                origin = self.headers.get('Origin')
                if origin and origin != 'https://' + ISSUER:
                    return self.send(403, {'error': 'invalid_origin'})
                if self.path == '/admin/login':
                    if not authenticate(body.get('username'), body.get('password')):
                        return self.send(401, {'error': 'invalid_login'})
                    token, csrf = create_session()
                    return self.send(200, {'csrf': csrf}, cookie='gd_admin=' + token + '; Path=/; Secure; HttpOnly; SameSite=Strict; Max-Age=28800')
                session = session_from_cookie(self.headers.get('Cookie'))
                if not session:
                    return self.send(401, {'error': 'unauthorized'})
                if not hmac.compare_digest(self.headers.get('X-CSRF-Token', ''), session['csrf']):
                    return self.send(403, {'error': 'invalid_csrf'})
                if self.path == '/admin/logout':
                    with database() as db:
                        db.execute('DELETE FROM admin_sessions WHERE digest=?', (session['digest'],))
                    return self.send(200, {'logged_out': True}, cookie='gd_admin=; Path=/; Secure; HttpOnly; SameSite=Strict; Max-Age=0')
                if self.path == '/admin/issue':
                    owner = body.get('owner')
                    if not isinstance(owner, str) or not owner.strip():
                        raise ValueError('owner_required')
                    return self.send(201, issue_license(body.get('days', 30), owner))
                if self.path == '/admin/owner':
                    ident, owner = body.get('id'), body.get('owner')
                    if not isinstance(ident, str) or not re.fullmatch('[0-9a-f]{32}', ident) or not isinstance(owner, str) or not 1 <= len(owner.strip()) <= 120:
                        raise ValueError('invalid_owner')
                    with database() as db:
                        count = db.execute('UPDATE licenses SET owner=? WHERE id=?', (owner.strip(), ident)).rowcount
                    return self.send(200 if count else 404, {'updated': bool(count)})
                if self.path == '/admin/revoke':
                    ident = body.get('id')
                    if not isinstance(ident, str) or not re.fullmatch('[0-9a-f]{32}', ident):
                        raise ValueError('invalid_id')
                    with database() as db:
                        count = db.execute('UPDATE licenses SET revoked=1 WHERE id=?', (ident,)).rowcount
                    return self.send(200 if count else 404, {'revoked': bool(count)})
            if self.path in ('/v1/activate', '/v1/check'):
                return self.send(200, validate(body, self.path == '/v1/activate'))
            self.send(404, {'error': 'not_found'})
        except (ValueError, TypeError, KeyError, json.JSONDecodeError):
            self.send(400, {'error': 'validation_failed'})
        except Exception:
            self.send(500, {'error': 'internal_error'})


if __name__ == '__main__':
    os.umask(0o077)
    initialize()
    ThreadingHTTPServer(('0.0.0.0', int(os.environ.get('PORT', '8080'))), Handler).serve_forever()
