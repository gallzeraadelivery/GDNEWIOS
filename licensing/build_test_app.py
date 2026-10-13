from pathlib import Path
import argparse,gzip,io,tarfile

def ar(members):
    result=bytearray(b'!<arch>\n')
    for name,data in members.items():
        result.extend(f'{name:<16}{0:<12}{0:<6}{0:<6}{"100644":<8}{len(data):<10}`\n'.encode());result.extend(data)
        if len(data)%2:result.extend(b'\n')
    return bytes(result)
def archive(files,directories=()):
    result=io.BytesIO()
    with tarfile.open(fileobj=result,mode='w',format=tarfile.GNU_FORMAT) as tar:
        for name in directories:
            info=tarfile.TarInfo('./'+name);info.type=tarfile.DIRTYPE;info.mode=0o755;info.uid=info.gid=0;info.uname=info.gname='root';tar.addfile(info)
        for name,(data,mode) in files.items():
            info=tarfile.TarInfo('./'+name);info.size=len(data);info.mode=mode;info.uid=info.gid=0;info.uname=info.gname='root';tar.addfile(info,io.BytesIO(data))
    return gzip.compress(result.getvalue(),mtime=0)
if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--app',type=Path,required=True);parser.add_argument('--output',type=Path,required=True);args=parser.parse_args()
    control=b'Package: com.gdnewios.licensetest\nName: GD Chaves Teste\nVersion: 1.0\nArchitecture: iphoneos-arm64\nMaintainer: GDNEWIOS\nDescription: Independent new licensing test application. Does not modify AMG.\nSection: Development\n'
    postinst=b'#!/bin/sh\nset -e\n/var/jb/usr/bin/uicache -p /var/jb/Applications/GDLicenseTest.app\n'
    prefix='var/jb/Applications/GDLicenseTest.app'
    files={prefix+'/'+p.name:(p.read_bytes(),0o755 if p.name=='GDLicenseTest' else 0o644) for p in args.app.iterdir() if p.is_file()}
    args.output.write_bytes(ar({'debian-binary':b'2.0\n','control.tar.gz':archive({'control':(control,0o644),'postinst':(postinst,0o755)}),'data.tar.gz':archive(files,[prefix])}))
