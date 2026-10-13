"""Repack only AMG 18.1.1 rootless with Portuguese storyboard resources."""
from pathlib import Path
import argparse, copy, gzip, hashlib, io, json, plistlib, re, tarfile
from nib_ptbr import translate_nib, chinese_strings, fit_label_text

EXPECTED_SHA = 'd07d1b04d7d2064a5ec1cc4eac4a6e09880f405524719ec3d156f433f51067a6'
APP = 'var/jb/Applications/AMG.app/'
VERSION = '18.1.1+ptbr5'

def read_ar(blob):
    if blob[:8] != b'!<arch>\n': raise ValueError('Not a Debian ar archive')
    result = {}; pos = 8
    while pos < len(blob):
        header = blob[pos:pos+60]
        if len(header) != 60 or header[58:] != b'`\n': raise ValueError('Invalid ar header')
        name = header[:16].decode('ascii').strip().rstrip('/')
        size = int(header[48:58]); result[name] = blob[pos+60:pos+60+size]
        if len(result[name]) != size: raise ValueError('Truncated ar member')
        pos += 60 + size + size % 2
    return result

def write_ar(members):
    out = bytearray(b'!<arch>\n')
    for name, content in members.items():
        header = f'{name:<16}{0:<12}{0:<6}{0:<6}{"100644":<8}{len(content):<10}`\n'.encode('ascii')
        if len(header) != 60: raise ValueError('Invalid member name or size')
        out.extend(header); out.extend(content)
        if len(content) % 2: out.extend(b'\n')
    return bytes(out)

def strings_entries(content):
    text = content.decode('utf-8-sig')
    text = re.sub(r'/\*.*?\*/', '', text, flags=re.S)
    pattern = re.compile(r'"(?:[^"\\]|\\.)*"\s*=\s*"(?:[^"\\]|\\.)*"\s*;')
    result = {}
    for entry in pattern.findall(text):
        key, value = entry.rstrip(';').split('=', 1)
        key, value = json.loads(key.strip()), json.loads(value.strip())
        if key in result: raise ValueError('Duplicate localization key: ' + key)
        result[key] = value
    if pattern.sub('', text).strip(): raise ValueError('Malformed .strings file')
    return result

def repack_tar(content, replacements, new_files=None, template_name=None, normalize_control=False):
    source = tarfile.open(fileobj=io.BytesIO(content), mode='r:*')
    stream = io.BytesIO(); seen = set(); template = None
    with tarfile.open(fileobj=stream, mode='w', format=tarfile.GNU_FORMAT) as target:
        for old in source.getmembers():
            name = old.name.lstrip('./'); seen.add(name); info = copy.copy(old)
            if normalize_control:
                info.mode = 0o644 if name == 'control' else 0o755
                info.uid = info.gid = 0
                info.uname = info.gname = 'root'
            if name == template_name: template = old
            if name in replacements:
                payload = replacements[name]; info.size = len(payload)
                target.addfile(info, io.BytesIO(payload))
            elif old.isfile(): target.addfile(info, source.extractfile(old))
            else: target.addfile(info)
        if set(replacements) - seen: raise ValueError('Missing replacement files')
        if new_files:
            if template is None: raise ValueError('Missing metadata template')
            directories = sorted({str(Path(name).parent).replace('\\', '/') for name in new_files})
            for name in directories:
                if name not in seen:
                    info = tarfile.TarInfo('./' + name); info.type = tarfile.DIRTYPE
                    info.mode = 0o755; info.uid = template.uid; info.gid = template.gid; info.mtime = template.mtime
                    info.uname = template.uname; info.gname = template.gname; target.addfile(info)
            for name, payload in new_files.items():
                if name in seen: raise ValueError('Would overwrite existing localization')
                info = copy.copy(template); info.name = './' + name; info.size = len(payload); info.mode = 0o644
                target.addfile(info, io.BytesIO(payload))
    source.close()
    return gzip.compress(stream.getvalue(), mtime=0)

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--input', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if args.input.resolve() == args.output.resolve(): raise ValueError('Output must differ from original')
    if args.output.exists(): raise ValueError('Output already exists')
    original = args.input.read_bytes()
    if hashlib.sha256(original).hexdigest() != EXPECTED_SHA: raise ValueError('Unexpected original package SHA256')
    members = read_ar(original)
    if members.get('debian-binary') != b'2.0\n': raise ValueError('Unexpected Debian format')
    with tarfile.open(fileobj=io.BytesIO(members['control.tar.gz'])) as control_tar:
        control_member = next(m for m in control_tar.getmembers() if m.name.lstrip('./') == 'control')
        control = control_tar.extractfile(control_member).read().decode('utf-8')
    fields = dict(re.findall(r'^([^:\n]+):\s*(.*)$', control, re.M))
    if fields.get('Package') != 'com.amgios.rootless' or fields.get('Version') != '18.1.1' or fields.get('Architecture') != 'iphoneos-arm64':
        raise ValueError('Wrong package, version or architecture')
    resources = Path(__file__).resolve().parents[1] / 'localization' / 'pt-BR'
    translations = json.loads((resources / 'nib-translations.json').read_text(encoding='utf-8-sig'))
    translated = (resources / 'Main.strings').read_bytes()
    launch = (resources / 'LaunchScreen.strings').read_bytes()
    localized = strings_entries(translated); strings_entries(launch)
    with tarfile.open(fileobj=io.BytesIO(members['data.tar.gz'])) as data_tar:
        files = {m.name.lstrip('./'): m for m in data_tar.getmembers()}
        source_strings = data_tar.extractfile(files[APP + 'zh-Hans.lproj/Main.strings']).read()
        if set(strings_entries(source_strings)) != set(localized): raise ValueError('Storyboard localization keys differ')
        if any(re.search(r'[\u3400-\u9fff]', value) for value in localized.values()): raise ValueError('Untranslated Chinese resource')
        info = plistlib.loads(data_tar.extractfile(files[APP + 'Info.plist']).read())
        info['CFBundleDevelopmentRegion'] = 'pt-BR'
        info['CFBundleLocalizations'] = list(dict.fromkeys(['pt-BR', 'pt', 'zh-Hans'] + info.get('CFBundleLocalizations', [])))
        replacements = {APP + 'Info.plist': plistlib.dumps(info, fmt=plistlib.FMT_XML)}
        nib_changes = 0; nib_files = 0
        for name, member in files.items():
            if not member.isfile() or not name.startswith(APP + 'Base.lproj/') or not name.endswith('.nib'):
                continue
            original_nib = data_tar.extractfile(member).read()
            if not original_nib.startswith(b'NIBArchive'): continue
            patched, changes = translate_nib(original_nib, translations)
            if chinese_strings(patched): raise ValueError('Untranslated storyboard text: ' + name)
            fitted_labels = 0
            if 'zDg-re-XMD-view-7vF-qn-HBB.nib/' in name:
                patched, fitted_labels = fit_label_text(patched)
            if changes or fitted_labels:
                replacements[name] = patched; nib_changes += len(changes); nib_files += 1
        if nib_files == 0: raise ValueError('Storyboard translation was not applied')
    new_files = {APP + locale + '.lproj/' + filename: payload for locale in ('pt-BR', 'pt')
                 for filename, payload in [('Main.strings', translated), ('LaunchScreen.strings', launch)]}
    new_control = re.sub(r'^Version:.*$', 'Version: ' + VERSION, control, flags=re.M)
    new_control = re.sub(r'^Name:.*$', 'Name: AMG 18.1.1 (rootless, PT-BR)', new_control, flags=re.M)
    if 'Maintainer' not in fields:
        new_control = new_control.rstrip() + '\nMaintainer: ' + fields.get('Author', 'AMG') + '\n'
    if 'Description' not in fields:
        new_control = new_control.rstrip() + '\nDescription: AMG rootless with Brazilian Portuguese interface resources.\n'
    control_payload = repack_tar(members['control.tar.gz'], {'control': new_control.encode('utf-8')}, normalize_control=True)
    data_payload = repack_tar(members['data.tar.gz'], replacements, new_files, APP + 'zh-Hans.lproj/Main.strings')
    package = write_ar({'debian-binary': b'2.0\n', 'control.tar.gz': control_payload, 'data.tar.gz': data_payload})
    # Check that every original file except Info.plist retains exactly the same bytes and modes.
    rebuilt = read_ar(package)
    if package[8:24] != b'debian-binary   ': raise ValueError('Non-canonical Debian ar header')
    with tarfile.open(fileobj=io.BytesIO(rebuilt['control.tar.gz'])) as checked_control, tarfile.open(fileobj=io.BytesIO(members['control.tar.gz'])) as original_control:
        ctrl = {m.name.lstrip('./'): m for m in checked_control.getmembers()}
        for member in original_control.getmembers():
            name = member.name.lstrip('./'); other = ctrl[name]
            if name == 'control':
                if other.mode != 0o644: raise ValueError('Control metadata must be readable')
                actual = checked_control.extractfile(other).read().decode('utf-8')
                for field in ('Package', 'Version', 'Architecture', 'Maintainer', 'Description'):
                    if not re.search(r'^' + field + r':\s*\S+', actual, re.M): raise ValueError('Missing Debian field: ' + field)
            elif member.isfile():
                if other.mode != 0o755: raise ValueError('Maintainer scripts must be executable')
                if original_control.extractfile(member).read() != checked_control.extractfile(other).read(): raise ValueError('Installation script content changed')
    with tarfile.open(fileobj=io.BytesIO(members['data.tar.gz'])) as before, tarfile.open(fileobj=io.BytesIO(rebuilt['data.tar.gz'])) as after:
        aft = {m.name.lstrip('./'): m for m in after.getmembers()}
        for member in before.getmembers():
            name = member.name.lstrip('./'); other = aft[name]
            if (member.mode, member.uid, member.gid, member.type, member.linkname) != (other.mode, other.uid, other.gid, other.type, other.linkname): raise ValueError('Metadata changed: ' + name)
            if member.isfile() and name not in replacements:
                if before.extractfile(member).read() != after.extractfile(other).read(): raise ValueError('Original file changed: ' + name)
        for name, payload in new_files.items():
            if after.extractfile(aft[name]).read() != payload: raise ValueError('Localization payload mismatch')
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_bytes(package)
    print(f'Created: {args.output}\nVersion: {VERSION}\nLocalized storyboard entries: {len(localized)}')
    print(f'Compiled storyboard files: {nib_files}; translated text values: {nib_changes}')
    print('Original binaries and installation scripts preserved; device testing still required.')
    print('SHA256: ' + hashlib.sha256(package).hexdigest())

if __name__ == '__main__': main()
