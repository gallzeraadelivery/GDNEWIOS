import importlib.util,os,tempfile,unittest,json,hashlib,secrets,threading,http.client
from pathlib import Path
root=tempfile.TemporaryDirectory(prefix='gd-admin-test-');os.environ['LICENSE_DATA']=root.name
spec=importlib.util.spec_from_file_location('license_server',Path(__file__).with_name('server.py'));server=importlib.util.module_from_spec(spec);spec.loader.exec_module(server);server.initialize()
salt=secrets.token_bytes(16)
(Path(root.name)/'admin-credentials.json').write_text(json.dumps({'username':'test-admin','salt':salt.hex(),'hash':hashlib.scrypt(b'Synthetic-Test-Password',salt=salt,n=16384,r=8,p=1).hex()}))
httpd=server.ThreadingHTTPServer(('127.0.0.1',0),server.Handler);threading.Thread(target=httpd.serve_forever,daemon=True).start()
class AdminTests(unittest.TestCase):
    def call(self,path,body=None,cookie=None,csrf=None,origin=None):
        conn=http.client.HTTPConnection(*httpd.server_address,timeout=5);headers={}
        if cookie:headers['Cookie']=cookie
        if csrf:headers['X-CSRF-Token']=csrf
        if origin:headers['Origin']=origin
        if body is not None:headers['Content-Type']='application/json'
        conn.request('POST' if body is not None else 'GET',path,json.dumps(body) if body is not None else None,headers)
        response=conn.getresponse();status=response.status;cookie=response.getheader('Set-Cookie');result=json.loads(response.read());conn.close();return status,result,cookie
    def login(self):
        status,body,cookie=self.call('/admin/login',{'username':'test-admin','password':'Synthetic-Test-Password'});self.assertEqual(status,200);return body['csrf'],cookie.split(';',1)[0],cookie
    def test_login_and_secure_cookie(self):
        csrf,cookie,full=self.login()
        for flag in ['Secure','HttpOnly','SameSite=Strict']:self.assertIn(flag,full)
        self.assertEqual(self.call('/admin/session',cookie=cookie)[0],200)
    def test_wrong_password(self):self.assertEqual(self.call('/admin/login',{'username':'test-admin','password':'wrong'})[0],401)
    def test_wrong_user(self):self.assertEqual(self.call('/admin/login',{'username':'wrong','password':'Synthetic-Test-Password'})[0],401)
    def test_unauthenticated(self):self.assertEqual(self.call('/admin/issue',{'days':1,'owner':'Cliente de teste'})[0],401)
    def test_csrf_required(self):
        csrf,cookie,_=self.login();self.assertEqual(self.call('/admin/issue',{'days':1,'owner':'Cliente de teste'},cookie=cookie)[0],403)
    def test_origin_rejected(self):
        self.assertEqual(self.call('/admin/login',{'username':'test-admin','password':'Synthetic-Test-Password'},origin='https://invalid.example')[0],403)
    def test_issue_revoke_logout(self):
        csrf,cookie,_=self.login();status,issued,_=self.call('/admin/issue',{'days':1,'owner':'Cliente de teste'},cookie,csrf);self.assertEqual(status,201)
        self.assertEqual(self.call('/admin/revoke',{'id':issued['id']},cookie,csrf)[0],200)
        self.assertEqual(self.call('/admin/logout',{},cookie,csrf)[0],200)
        self.assertEqual(self.call('/admin/session',cookie=cookie)[0],401)
    def test_named_license_management(self):
        self.assertEqual(self.call('/admin/licenses')[0],401)
        csrf,cookie,_=self.login()
        status,issued,_=self.call('/admin/issue',{'days':1,'owner':'Maria Silva'},cookie,csrf);self.assertEqual(status,201)
        status,listed,_=self.call('/admin/licenses',cookie=cookie);self.assertEqual(status,200)
        item=next(x for x in listed['licenses'] if x['id']==issued['id']);self.assertEqual(item['owner'],'Maria Silva');self.assertEqual(item['status'],'pending');self.assertNotIn('digest',item);self.assertNotIn('device',item)
        self.assertEqual(self.call('/admin/owner',{'id':issued['id'],'owner':'Maria Souza'},cookie,csrf)[0],200)
        item=next(x for x in self.call('/admin/licenses',cookie=cookie)[1]['licenses'] if x['id']==issued['id']);self.assertEqual(item['owner'],'Maria Souza')
        self.call('/admin/revoke',{'id':issued['id']},cookie,csrf)
        item=next(x for x in self.call('/admin/licenses',cookie=cookie)[1]['licenses'] if x['id']==issued['id']);self.assertEqual(item['status'],'revoked')
    def test_owner_required(self):
        csrf,cookie,_=self.login();self.assertEqual(self.call('/admin/issue',{'days':1,'owner':'   '},cookie,csrf)[0],400)
    def test_expired_session(self):
        csrf,cookie,_=self.login()
        with server.database() as db:db.execute('UPDATE admin_sessions SET expires=1')
        self.assertEqual(self.call('/admin/session',cookie=cookie)[0],401)
if __name__=='__main__':
    try:unittest.main(verbosity=2)
    finally:httpd.shutdown()
