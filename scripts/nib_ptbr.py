"""Read/rewrite NIBArchive data values while preserving object and key references.
Format reference: https://github.com/matsmattsson/nibsqueeze/blob/master/NibArchive.md
"""
import struct, re

def varint(data, offset):
    result = 0; shift = 0; start = offset
    while offset < len(data) and shift < 35:
        value = data[offset]; offset += 1
        result |= (value & 127) << shift
        if value & 128: return result, offset
        shift += 7
    raise ValueError('Invalid NIB varint at ' + str(start))

def encode_varint(value):
    out = bytearray()
    while value >= 128:
        out.append(value & 127); value >>= 7
    out.append(value | 128)
    return bytes(out)

def parse_values(data):
    if data[:10] != b'NIBArchive': raise ValueError('Not NIBArchive')
    header = struct.unpack_from('<10I', data, 10)
    version, unknown, object_count, objects_offset, key_count, keys_offset, value_count, values_offset, class_count, classes_offset = header
    keys = []; at = keys_offset
    for _ in range(key_count):
        size, at = varint(data, at); keys.append(data[at:at+size].decode('utf-8')); at += size
    objects=[]; at=objects_offset
    for _ in range(object_count):
        cls,at=varint(data,at); first,at=varint(data,at); count,at=varint(data,at); objects.append((cls,first,count))
    values=[]; at=values_offset
    sizes={0:1,1:2,2:4,3:8,4:0,5:0,6:4,7:8,9:0,10:4}
    for _ in range(value_count):
        start=at; key,at=varint(data,at); kind=data[at]; at+=1; prefix=data[start:at]
        if kind==8:
            size,at=varint(data,at); payload=data[at:at+size]; at+=size
        elif kind in sizes:
            payload=data[at:at+sizes[kind]]; at+=sizes[kind]
        else: raise ValueError('Unknown NIB value type: '+str(kind))
        if key>=len(keys) or at>len(data): raise ValueError('Invalid NIB value bounds')
        values.append((keys[key],kind,payload,data[start:at],prefix))
    if at!=classes_offset: raise ValueError('Unexpected NIB section layout')
    return header, keys, objects, values

def chinese_strings(data):
    header,keys,objects,values=parse_values(data)
    result=[]
    for index,(key,kind,payload,raw,prefix) in enumerate(values):
        if kind!=8 or key!='NS.bytes': continue
        try: text=payload.decode('utf-8')
        except UnicodeDecodeError: continue
        if re.search(r'[\u3400-\u9fff]',text): result.append((index,text))
    return result

def translate_nib(data,translations):
    header,keys,objects,values=parse_values(data)
    blocks=[]; changes=[]
    for index,(key,kind,payload,raw,prefix) in enumerate(values):
        text=None
        if kind==8 and key=='NS.bytes':
            try: text=payload.decode('utf-8')
            except UnicodeDecodeError: pass
        if text in translations:
            replacement=translations[text].encode('utf-8')
            blocks.append(prefix+encode_varint(len(replacement))+replacement)
            changes.append((index,text,translations[text]))
        else: blocks.append(raw)
    values_blob=b''.join(blocks)
    out=bytearray(data[:header[7]]+values_blob+data[header[9]:])
    struct.pack_into('<I',out,46,header[7]+len(values_blob))
    new_header,new_keys,new_objects,new_values=parse_values(out)
    if new_header[:9]!=header[:9] or new_keys!=keys or new_objects!=objects: raise ValueError('NIB graph changed')
    changed_indices={item[0] for item in changes}
    for i,(before,after) in enumerate(zip(values,new_values)):
        if i not in changed_indices and before!=after: raise ValueError('Non-text NIB value changed')
        if before[0:2]!=after[0:2]: raise ValueError('NIB key or type changed')
    if data[header[9]:]!=out[new_header[9]:]: raise ValueError('NIB class section changed')
    return bytes(out),changes

def fit_label_text(data):
    """Add UILabel autoshrink settings without changing frames or actions."""
    header, keys, objects, values = parse_values(data)
    names=[]; at=header[9]
    for _ in range(header[8]):
        size,at=varint(data,at); extras,at=varint(data,at); at+=4*extras
        names.append(data[at:at+size].rstrip(b'\0').decode('utf-8')); at+=size
    labels=[i for i,(cls,first,count) in enumerate(objects) if names[cls]=='UILabel']
    if not labels: return data,0
    new_keys=list(keys)
    settings={'UIAdjustsFontSizeToFit':(4,b''),'UIMinimumScaleFactor':(7,struct.pack('<d',0.65)),'UIMinimumFontSize':(7,struct.pack('<d',11.0))}
    for key in settings:
        if key not in new_keys: new_keys.append(key)
    blocks=[v[3] for v in values]; new_objects=list(objects)
    for index in labels:
        cls,first,count=objects[index]
        selected=[]; seen=set()
        for key,kind,payload,raw,prefix in values[first:first+count]:
            if key in settings:
                kind,payload=settings[key]; raw=encode_varint(new_keys.index(key))+bytes([kind])+payload; seen.add(key)
            selected.append(raw)
        for key,(kind,payload) in settings.items():
            if key not in seen: selected.append(encode_varint(new_keys.index(key))+bytes([kind])+payload)
        new_objects[index]=(cls,len(blocks),len(selected)); blocks.extend(selected)
    object_blob=b''.join(encode_varint(cls)+encode_varint(first)+encode_varint(count) for cls,first,count in new_objects)
    key_blob=b''.join(encode_varint(len(k.encode('utf-8')))+k.encode('utf-8') for k in new_keys)
    value_blob=b''.join(blocks); prefix=data[:header[3]]
    keys_offset=len(prefix)+len(object_blob); values_offset=keys_offset+len(key_blob); classes_offset=values_offset+len(value_blob)
    out=bytearray(prefix+object_blob+key_blob+value_blob+data[header[9]:])
    updated=list(header); updated[4]=len(new_keys); updated[5]=keys_offset; updated[6]=len(blocks); updated[7]=values_offset; updated[9]=classes_offset
    struct.pack_into('<10I',out,10,*updated)
    checked, checked_keys, checked_objects, checked_values=parse_values(out)
    assert checked[2]==header[2] and checked[8]==header[8]
    assert out[checked[9]:]==data[header[9]:]
    for index,(cls,first,count) in enumerate(objects):
        nc,nf,nn=checked_objects[index]; assert cls==nc
        before={v[0]:(v[1],v[2]) for v in values[first:first+count]}
        after={v[0]:(v[1],v[2]) for v in checked_values[nf:nf+nn]}
        for key,value in before.items():
            if index in labels and key in settings: continue
            assert after[key]==value,(index,key)
        if index in labels:
            for key,value in settings.items(): assert after[key]==value
        else: assert before==after
    return bytes(out),len(labels)


def expand_settings_rows(data):
    """Give static settings rows room for wrapping; retain outlets and actions."""
    header,keys,objects,values=parse_values(data)
    names=[];at=header[9]
    for _ in range(header[8]):
        size,at=varint(data,at);extras,at=varint(data,at);at+=4*extras
        names.append(data[at:at+size].rstrip(b'\0').decode());at+=size
    switches={i for i,(c,_,_) in enumerate(objects) if names[c]=='UISwitch'}
    new_keys=list(keys);blocks=[v[3] for v in values];new_objects=list(objects);changed={}
    def raw(key,kind,payload):
        if key not in new_keys:new_keys.append(key)
        return encode_varint(new_keys.index(key))+bytes([kind])+(encode_varint(len(payload)) if kind==8 else b'')+payload
    for index,(cls,first,count) in enumerate(objects):
        typ=names[cls];old={k:(t,p) for k,t,p,*_ in values[first:first+count]};patch={}
        if typ in ('UILabel','UITableViewLabel'):
            patch.update({'UINumberOfLines':(2,struct.pack('<i',0)),'UILineBreakMode':(0,b'\0'),'UIAdjustsFontSizeToFit':(5,b''),'UIMinimumScaleFactor':(7,struct.pack('<d',1.0)),'UIMinimumFontSize':(7,struct.pack('<d',17.0)),'UIAutoresizingMask':(0,bytes([42]))})
            if 'UIBounds' in old:
                kind,payload=old['UIBounds'];assert kind==8 and len(payload)==33 and payload[0]==7
                x,y,w,h=struct.unpack('<4d',payload[1:]);neww=max(w,260.0);patch['UIBounds']=(8,b'\x07'+struct.pack('<4d',x,y,neww,54.0))
                if 'UICenter' in old:
                    kind,center=old['UICenter'];assert kind==8 and len(center)==17
                    cx,cy=struct.unpack('<2d',center[1:]);patch['UICenter']=(8,b'\x07'+struct.pack('<2d',cx+(neww-w)/2,36.0))
        elif typ=='UITableViewRow':patch['UITableRowHeight']=(6,struct.pack('<f',72.0))
        elif typ=='UITableView':
            patch['UIRowHeight']=(6,struct.pack('<f',72.0));patch['UIEstimatedRowHeight']=(6,struct.pack('<f',72.0))
        elif typ in ('UITableViewCell','UITableViewCellContentView') and 'UIBounds' in old:
            kind,payload=old['UIBounds'];assert kind==8 and len(payload)==33
            x,y,w,h=struct.unpack('<4d',payload[1:]);patch['UIBounds']=(8,b'\x07'+struct.pack('<4d',x,y,w,72.0))
            if typ=='UITableViewCellContentView' and 'UICenter' in old:
                kind,center=old['UICenter'];cx,cy=struct.unpack('<2d',center[1:]);patch['UICenter']=(8,b'\x07'+struct.pack('<2d',cx,36.0))
        elif typ=='NSLayoutConstraint':
            refs=[struct.unpack('<I',old[k][1])[0] for k in ('NSFirstItem','NSSecondItem') if k in old and old[k][0]==10]
            attr=old.get('NSFirstAttributeV2',old.get('NSFirstAttribute',(0,b'\0')))[1][0]
            if any(i in switches for i in refs) and attr in (3,4):
                for k in ('NSConstant','NSConstantV2'):
                    if k in old:patch[k]=(7,struct.pack('<d',20.5))
        if not patch:continue
        selected=[];seen=set()
        for key,kind,payload,original,*_ in values[first:first+count]:
            if key in patch:kind,payload=patch[key];selected.append(raw(key,kind,payload));seen.add(key)
            else:selected.append(original)
        for key,(kind,payload) in patch.items():
            if key not in seen:selected.append(raw(key,kind,payload))
        new_objects[index]=(cls,len(blocks),len(selected));blocks.extend(selected);changed[index]=patch
    object_blob=b''.join(encode_varint(c)+encode_varint(f)+encode_varint(n) for c,f,n in new_objects)
    key_blob=b''.join(encode_varint(len(k.encode()))+k.encode() for k in new_keys);value_blob=b''.join(blocks)
    prefix=data[:header[3]];ko=len(prefix)+len(object_blob);vo=ko+len(key_blob);co=vo+len(value_blob)
    out=bytearray(prefix+object_blob+key_blob+value_blob+data[header[9]:]);h=list(header);h[4]=len(new_keys);h[5]=ko;h[6]=len(blocks);h[7]=vo;h[9]=co;struct.pack_into('<10I',out,10,*h)
    nh,nk,no,nv=parse_values(out);assert bytes(out[nh[9]:])==data[header[9]:]
    for i,(c,f,n) in enumerate(objects):
        nc,nf,nn=no[i];assert nc==c
        before={k:(t,p) for k,t,p,*_ in values[f:f+n]};after={k:(t,p) for k,t,p,*_ in nv[nf:nf+nn]}
        assert after==dict(before,**changed.get(i,{})),(i,names[c])
    return bytes(out),len(changed)
