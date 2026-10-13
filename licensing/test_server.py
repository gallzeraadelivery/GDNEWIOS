import importlib.util,os,tempfile,unittest,json,secrets,sqlite3,concurrent.futures
from pathlib import Path
root=tempfile.TemporaryDirectory(prefix='gd-license-test-')
os.environ['LICENSE_DATA']=root.name
spec=importlib.util.spec_from_file_location('license_server',Path(__file__).with_name('server.py'))
server=importlib.util.module_from_spec(spec);spec.loader.exec_module(server);server.initialize()
class LicenseTests(unittest.TestCase):
    def setUp(self):
        self.license=server.issue_license(30)
        self.body={'key':self.license['key'],'device':'a'*64,'challenge':secrets.token_hex(16),'product':server.PRODUCT}
    def test_activation_and_refresh(self):
        token=server.validate(self.body,True);claims=server.verified(token)
        self.assertEqual(claims['device'],self.body['device']);self.assertEqual(claims['challenge'],self.body['challenge'])
        request={**self.body,'challenge':secrets.token_hex(16),'token':token};request.pop('key')
        updated=server.verified(server.validate(request,False));self.assertEqual(updated['challenge'],request['challenge'])
    def test_invalid_key(self):
        with self.assertRaises(ValueError):server.validate({**self.body,'key':'GD-INVALID'},True)
    def test_other_device(self):
        server.validate(self.body,True)
        with self.assertRaises(ValueError):server.validate({**self.body,'device':'b'*64},True)
    def test_revocation(self):
        token=server.validate(self.body,True)
        with server.database() as db:db.execute('UPDATE licenses SET revoked=1 WHERE id=?',(self.license['id'],))
        with self.assertRaises(ValueError):server.validate({**self.body,'token':token},False)
    def test_expiration(self):
        with server.database() as db:db.execute('UPDATE licenses SET expires=1 WHERE id=?',(self.license['id'],))
        with self.assertRaises(ValueError):server.validate(self.body,True)
    def test_forged_signature(self):
        token=server.validate(self.body,True);token['signature']=server.b64(b'bad signature')
        with self.assertRaises(ValueError):server.verified(token)
    def test_tampered_payload(self):
        token=server.validate(self.body,True);claims=server.verified(token);claims['exp']+=999999
        token['payload']=server.b64(json.dumps(claims).encode())
        with self.assertRaises(ValueError):server.verified(token)
    def test_concurrent_device_binding(self):
        def activate(device):
            try:server.validate({**self.body,'device':device*64},True);return True
            except ValueError:return False
        with concurrent.futures.ThreadPoolExecutor(2) as pool:results=list(pool.map(activate,['c','d']))
        self.assertEqual(sum(results),1)
    def test_bad_input_and_no_plain_keys(self):
        with self.assertRaises(ValueError):server.validate({**self.body,'device':'invalid'},True)
        with server.database() as db:
            record=dict(db.execute('SELECT * FROM licenses WHERE id=?',(self.license['id'],)).fetchone())
        self.assertNotIn(self.license['key'],str(record))
if __name__=='__main__':unittest.main(verbosity=2)
