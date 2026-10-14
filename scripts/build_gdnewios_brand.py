"""Rebrand the verified PT-BR rootless build, retaining runtime paths and binaries."""
from pathlib import Path
import sys,io,tarfile,gzip,plistlib,re,hashlib,json
sys.path.insert(0,str(Path(__file__).resolve().parent))
from build_rootless_ptbr import read_ar,write_ar
from nib_ptbr import translate_nib
ROOT=Path(__file__).resolve().parents[1]
APP='var/jb/Applications/AMG.app/'
VERSION='18.1.1+gdnewios4'
def pack(files):
    stream=io.BytesIO()
    with tarfile.open(fileobj=stream,mode='w',format=tarfile.GNU_FORMAT) as archive:
        for member,content in files:
            archive.addfile(member,io.BytesIO(content) if content is not None else None)
    return gzip.compress(stream.getvalue(),mtime=0)
def main():
    import argparse
    parser=argparse.ArgumentParser();parser.add_argument('--input',type=Path,required=True);parser.add_argument('--output',type=Path,required=True);args=parser.parse_args()
    original=args.input.read_bytes()
    if hashlib.sha256(original).hexdigest()!='2a33765575d9a647bd16b51e5d179af3391edb5dafd639cd002c3150ed7d732b':raise ValueError('Use the verified ptbr7 package')
    members=read_ar(original);files=[];changed=[];binary_hashes={};nib_count=0
    with tarfile.open(fileobj=io.BytesIO(members['data.tar.gz'])) as archive:
        for member in archive.getmembers():
            content=archive.extractfile(member).read() if member.isfile() else None
            name=member.name.lstrip('./');before=content
            if name==APP+'Info.plist':
                info=plistlib.loads(content);info['CFBundleDisplayName']='gdnewios'
                info['CFBundleIcons']={'CFBundlePrimaryIcon':{'CFBundleIconFiles':['GDNewIOSIcon20x20','GDNewIOSIcon40x40','GDNewIOSIcon60x60']}}
                info.pop('CFBundleIconFiles',None);info.pop('CFBundleIconName',None);content=plistlib.dumps(info)
            elif content and content.startswith(b'NIBArchive'):
                content,changes=translate_nib(content,{'AMG':'gdnewios'});nib_count+=len(changes)
            elif name.startswith(APP) and name.endswith('.strings') and content:
                text=content.decode('utf-8-sig');text=re.sub(r'(=\s*)"AMG"',r'\1"gdnewios"',text);content=text.encode('utf-8')
            if content!=before:member.size=len(content);changed.append(name)
            if content and (name.endswith('.dylib') or name==APP+'AMG'):
                if content!=before:raise ValueError('Executable bytes changed')
                binary_hashes[name]=hashlib.sha256(content).hexdigest()
            files.append((member,content))
    for path in sorted((ROOT/'branding/ios').glob('*.png')):
        content=path.read_bytes();member=tarfile.TarInfo('./'+APP+path.name);member.size=len(content);member.mode=0o644;member.uid=member.gid=0;member.uname=member.gname='root';files.append((member,content))
    control=f'''Package: com.gdnewios.rootless
Name: gdnewios
Version: {VERSION}
Architecture: iphoneos-arm64
Maintainer: GDNEWIOS
Author: GDNEWIOS
Section: Tweaks
Priority: optional
Depends: firmware (>= 8.0), mobilesubstrate
Conflicts: com.amgios.rootless
Replaces: com.amgios.rootless
Provides: com.amgios.rootless
Icon: https://gdnewios.gdapps.online/assets/icon.png
Description: gdnewios rootless with Brazilian Portuguese interface and GD branding.
'''.encode()
    postinst=b'#!/bin/sh\nset -e\nchown -R root:wheel /var/jb/Applications/AMG.app\nchmod u+s /var/jb/Applications/AMG.app/AMG\n/var/jb/usr/bin/uicache -p /var/jb/Applications/AMG.app\n'
    controls=[]
    for name,content,mode in [('control',control,0o644),('postinst',postinst,0o755)]:
        member=tarfile.TarInfo('./'+name);member.size=len(content);member.mode=mode;member.uid=member.gid=0;member.uname=member.gname='root';controls.append((member,content))
    output=write_ar({'debian-binary':b'2.0\n','control.tar.gz':pack(controls),'data.tar.gz':pack(files)})
    checked=read_ar(output)
    with tarfile.open(fileobj=io.BytesIO(checked['data.tar.gz'])) as archive:
        lookup={m.name.lstrip('./'):m for m in archive.getmembers()}
        for name,expected in binary_hashes.items():
            assert hashlib.sha256(archive.extractfile(lookup[name]).read()).hexdigest()==expected
        info=plistlib.loads(archive.extractfile(lookup[APP+'Info.plist']).read())
        assert info['CFBundleIdentifier']=='com.superdev.AMG' and info['CFBundleDisplayName']=='gdnewios'
    args.output.write_bytes(output)
    print('Package:',args.output,'Version:',VERSION,'Renamed NIB text values:',nib_count)
    print('Executable files unchanged:',len(binary_hashes),'SHA256:',hashlib.sha256(output).hexdigest())
    (ROOT/'branding/build-verification.json').write_text(json.dumps({'package':'com.gdnewios.rootless','name':'gdnewios','version':VERSION,'runtime_bundle_id_preserved':'com.superdev.AMG','changed_resources':changed,'executable_sha256':binary_hashes,'sha256':hashlib.sha256(output).hexdigest()},indent=2))
if __name__=='__main__':main()
