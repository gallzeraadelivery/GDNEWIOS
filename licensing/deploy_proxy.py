from pathlib import Path
import subprocess,datetime
p=Path('/opt/edge/nginx/active.conf')
original=p.read_text()
marker='# GDNEWIOS LICENSING'
if marker in original:raise SystemExit('Domain config already exists; inspect before updating')
backup=p.with_name('active.conf.gdnewios-backup-'+datetime.datetime.now().strftime('%Y%m%d%H%M%S'))
backup.write_text(original)
http='''
# GDNEWIOS LICENSING HTTP
server {
    listen 80;
    server_name gdnewios.gdapps.online;
    location /.well-known/acme-challenge/ { root /var/www/certbot; }
    location / { return 301 https://$host$request_uri; }
}
'''
def apply(text):
    p.write_text(text)
    test=subprocess.run(['docker','exec','edge-nginx','nginx','-t'],capture_output=True)
    if test.returncode:
        p.write_text(original)
        raise RuntimeError(test.stderr.decode())
    subprocess.run(['docker','exec','edge-nginx','nginx','-s','reload'],check=True)
apply(original+http)
cert=subprocess.run(['docker','compose','run','--rm','certbot','certonly','--webroot','-w','/var/www/certbot','--non-interactive','--agree-tos','--register-unsafely-without-email','-d','gdnewios.gdapps.online'],cwd='/opt/edge')
if cert.returncode:
    apply(original)
    raise SystemExit('Certificate failed; original proxy restored')
ssl='''
# GDNEWIOS LICENSING HTTPS
limit_req_zone $binary_remote_addr zone=gdnewios_api:1m rate=30r/m;
server {
    listen 443 ssl;
    http2 on;
    server_name gdnewios.gdapps.online;
    ssl_certificate /etc/letsencrypt/live/gdnewios.gdapps.online/fullchain.pem;
    ssl_certificate_key /etc/letsencrypt/live/gdnewios.gdapps.online/privkey.pem;
    client_max_body_size 8k;
    access_log off;
    location ~ ^/(v1/|admin/) {
        limit_req zone=gdnewios_api burst=10 nodelay;
        limit_req_status 429;
        proxy_pass http://gdnewios-licensing:8080;
        proxy_set_header Host $host;
        proxy_set_header X-Forwarded-Proto https;
        proxy_connect_timeout 5s;
        proxy_read_timeout 30s;
    }
    location / {
        proxy_pass http://gdnewios-licensing:8080;
        proxy_set_header Host $host;
        proxy_set_header X-Forwarded-Proto https;
    }
}
'''
apply(original+http+ssl)
print('Proxy configured; backup:',backup)
subprocess.run(['curl','--fail','--silent','--show-error','--max-time','15','https://gdnewios.gdapps.online/health'],check=True)
