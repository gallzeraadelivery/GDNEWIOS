/* Ghidra pseudocode, not original source. Types and names may be inferred. */

/* 00004a3c FUN_00004a3c */

void FUN_00004a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00004b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000012e500)(0xa68b65c2);
  return;
}



/* 0000732c FUN_0000732c */

void FUN_0000732c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00007438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000012efe8)
            (0x8a6ec71e,bRam000000000012e473 ^ 0xffffffc0,uRam000000000012e474,
             bRam000000000012e475 ^ 0xffffffc6,bRam000000000012e476 ^ 0xffffff89,
             bRam000000000012e477 ^ 0xfffffff1,bRam000000000012e478 ^ 0xffffff82,
             bRam000000000012e479 ^ 0x7d,bRam000000000012e47a ^ 0xffffffdf);
  return;
}



/* 000076b4 FUN_000076b4 */

void FUN_000076b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00007718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000012f0a0)();
  return;
}



/* 00007b8c startHook: */

/* Function Stack Size: 0x18 bytes */

ID AMGHook::startHook_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00007c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam000000000012f250)(0x2972fc48);
  return IVar1;
}



/* 00009724 stophook: */

/* Function Stack Size: 0x18 bytes */

ID AMGHook::stophook_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00009754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam000000000012f920)();
  return IVar1;
}



/* 00009cb0 resetHook: */

/* Function Stack Size: 0x14 bytes */

int AMGHook::resetHook_(ID param_1,SEL param_2,char param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00009ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*pcRam000000000012fbb8)(0xafaff5,0x41a8c78b,0xdb66b729,0x12fbb0,0x9977f70e);
  return iVar1;
}



/* 0000ad64 DoEbgDjUj:: */

/* Function Stack Size: 0x20 bytes */

ID DoEbgDnUj::DoEbgDjUj__(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000ae38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam00000000001301e8)(0xf7932b50);
  return IVar1;
}



/* 0000b79c DoEBgDjUj:: */

/* Function Stack Size: 0x20 bytes */

ID DoEbgDnUj::DoEBgDjUj__(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000b878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam00000000001303d8)(0x44e87404);
  return IVar1;
}



/* 0000c274 DoEBgDjUj: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DoEbgDnUj::DoEBgDjUj_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  size_t dataInLength;
  void *dataOut;
  void *dataIn;
  ID IVar2;
  size_t local_98;
  undefined4 local_89;
  undefined1 local_85;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_68 = *(undefined8 *)PTR____stack_chk_guard_0012c080;
  uVar1 = _objc_msgSend(PTR_AMGHook_0012e220,PTR_s_stophook__0012e0a0,param_3);
  local_7c = 0;
  local_84 = 0;
  local_6c = 0;
  local_74 = 0;
  local_89 = 0x7879656b;
  local_85 = 0x78;
  dataInLength = _objc_msgSend(uVar1,PTR_s_length_0012de80);
  dataOut = _malloc(dataInLength + 0x10);
  local_98 = 0;
  uVar1 = _objc_retainAutorelease(uVar1);
  dataIn = (void *)_objc_msgSend(uVar1,PTR_s_bytes_0012da28);
  _CCCrypt(1,0,3,&local_89,0x10,(void *)0x0,dataIn,dataInLength,dataOut,dataInLength + 0x10,
           &local_98);
                    /* WARNING: Could not recover jumptable at 0x0000c3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar2 = (*pcRam00000000001305d0)(0xd79f0b60);
  return IVar2;
}



/* 0000c668 DoEBgDjUjHe:: */

/* Function Stack Size: 0x20 bytes */

ID DoEbgDnUj::DoEBgDjUjHe__(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000c738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam00000000001306a0)(0x98387aed);
  return IVar1;
}



/* 0000cf88 DBEBgDjUjHe:: */

/* Function Stack Size: 0x20 bytes */

ID DoEbgDnUj::DBEBgDjUjHe__(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000d058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam0000000000130888)(0x18a37d9b);
  return IVar1;
}



/* 0000d8b8 init */

/* Function Stack Size: 0x10 bytes */

ID nKp3MQFt8::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000d938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam0000000000131e90)(0x1af97d63);
  return IVar1;
}



/* 0000de74 NViEYZ3kga */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID nKp3MQFt8::NViEYZ3kga(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  uVar2 = _objc_msgSend(PTR__OBJC_CLASS___NSMutableArray_0012e230,PTR_s_new_0012def8);
  iVar1 = __dyld_image_count();
  switch(iVar1 != 0) {
  case false:
    uVar2 = _objc_msgSend(uVar2,PTR_s_copy_0012dac0);
                    /* WARNING: Could not recover jumptable at 0x0011b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IVar4 = (*(code *)PTR__objc_autoreleaseReturnValue_0012c478)(uVar2);
    return IVar4;
  }
  lVar3 = __dyld_get_image_name(0);
  switch(lVar3 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0000df54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IVar4 = (*pcRam00000000001320a0)();
    return IVar4;
  case true:
                    /* WARNING: Could not recover jumptable at 0x0000df2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IVar4 = (*pcRam0000000000132028)();
    return IVar4;
  }
}



/* 0000e164 kINGIlxjoN */

/* Function Stack Size: 0x10 bytes */

ID nKp3MQFt8::kINGIlxjoN(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0000e2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam0000000000132118)(0x982c4c10);
  return IVar1;
}



/* 00011298 xw2KhNHmk */

/* Function Stack Size: 0x10 bytes */

ID nKp3MQFt8::xw2KhNHmk(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00011440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam0000000000132ee8)(0x8480c7e7);
  return IVar1;
}



/* 00016740 ditktrcrCA */

/* Function Stack Size: 0x10 bytes */

ID nKp3MQFt8::ditktrcrCA(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00016808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam0000000000134378)
                    (0x130e60,&UNK_0011c000,0x130e80,0x130ea0,0x130ec0,&UNK_0011c000,&UNK_0011c000,
                     &UNK_0011c000);
  return IVar1;
}



/* 00016f9c PSE6FLbRyK: */

/* Function Stack Size: 0x18 bytes */

bool nKp3MQFt8::PSE6FLbRyK_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001707c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000134480)(0x7ce568eb);
  return bVar1;
}



/* 0001a664 X1Vxmhs7sQ: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool nKp3MQFt8::X1Vxmhs7sQ_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
  bVar1 = _objc_msgSend(param_1,PTR_s_X1Vxmhs7sQ_manager_partial__0012d928,param_3,uVar2,1);
  return bVar1;
}



/* 0001a6f0 X1Vxmhs7sQ:partial: */

/* Function Stack Size: 0x1c bytes */

bool nKp3MQFt8::X1Vxmhs7sQ_partial_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001a7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000135078)(1);
  return bVar1;
}



/* 0001a90c X1Vxmhs7sQ:manager: */

/* Function Stack Size: 0x20 bytes */

bool nKp3MQFt8::X1Vxmhs7sQ_manager_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam00000000001350e8)(0x62e62eb6);
  return bVar1;
}



/* 0001aac4 X1Vxmhs7sQ:manager:partial: */

/* Function Stack Size: 0x24 bytes */

bool nKp3MQFt8::X1Vxmhs7sQ_manager_partial_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  
  switch(iRam0000000000189c90 == 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0001b640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*pcRam0000000000135188)();
    return bVar1;
  case true:
                    /* WARNING: Could not recover jumptable at 0x0001abdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*pcRam0000000000135168)(0x1315e0,0x131650,0x1317f0,0x131660);
    return bVar1;
  }
}



/* 0001c974 EVVsBEpJu: */

/* Function Stack Size: 0x18 bytes */

bool nKp3MQFt8::EVVsBEpJu_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001ca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000135a30)(0);
  return bVar1;
}



/* 0001cb90 EVVsBEpJu:partial: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

bool nKp3MQFt8::EVVsBEpJu_partial_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
  bVar1 = _objc_msgSend(param_1,PTR_s_EVVsBEpJu_manager_partial__0012d8d8,param_3,uVar2,param_4);
  return bVar1;
}



/* 0001cc28 EVVsBEpJu:manager: */

/* Function Stack Size: 0x20 bytes */

bool nKp3MQFt8::EVVsBEpJu_manager_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001ccd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000135aa0)(0);
  return bVar1;
}



/* 0001cdb8 EVVsBEpJu:manager:partial: */

/* Function Stack Size: 0x24 bytes */

bool nKp3MQFt8::EVVsBEpJu_manager_partial_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001cf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000135b18)(0xa1759801);
  return bVar1;
}



/* 0001eddc r7s51zKZ:restricted: */

/* Function Stack Size: 0x1c bytes */

void nKp3MQFt8::r7s51zKZ_restricted_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001ee9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001363a0)(0,0x5876394c);
  return;
}



/* 0001ef4c r7s51zKZ:restricted:hidden: */

/* Function Stack Size: 0x20 bytes */

void nKp3MQFt8::r7s51zKZ_restricted_hidden_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001effc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000136410)(0);
  return;
}



/* 0001f09c r7s51zKZ:restricted:hidden:prestricted:phidden: */

/* Function Stack Size: 0x28 bytes */

void nKp3MQFt8::r7s51zKZ_restricted_hidden_prestricted_phidden_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5,bool param_6,
               bool param_7)

{
                    /* WARNING: Could not recover jumptable at 0x0001f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000136480)(0x11434ca1);
  return;
}



/* 00020fc4 hzKuOsg4te: */

/* Function Stack Size: 0x18 bytes */

void nKp3MQFt8::hzKuOsg4te_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00021070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000136b98)(1);
  return;
}



/* 00021118 NkP5q5Aly0: */

/* Function Stack Size: 0x18 bytes */

void nKp3MQFt8::NkP5q5Aly0_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0002122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000136c00)(0x49c50c67);
  return;
}



/* 00022ab4 nqq9CpG7X8: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void nKp3MQFt8::nqq9CpG7X8_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00022b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001373d0)(0x6b45b3e7);
  return;
}



/* 00022ce0 YEVazahQ2n:toPath: */

/* Function Stack Size: 0x20 bytes */

void nKp3MQFt8::YEVazahQ2n_toPath_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  switch(iRam0000000000189ca0 == 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00023228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000001374b8)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x00022dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000137490)
              (0x131be0,0x131c80,&UNK_0011c000,0x131ca0,0x131cc0,&UNK_0011c000,0x131ce0,
               &UNK_0011c000,0x131d00);
    return;
  }
}



/* 00023628 LyfexDDAdN: */

/* Function Stack Size: 0x18 bytes */

ID nKp3MQFt8::LyfexDDAdN_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00023674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*pcRam0000000000137738)();
  return IVar1;
}



/* 00023b98 useTweakCompatibilityMode */

/* Function Stack Size: 0x10 bytes */

bool nKp3MQFt8::useTweakCompatibilityMode(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00023c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000137990)((int)param_1,param_2,0,pcRam0000000000137990,0,0,1);
  return bVar1;
}



/* 00023c7c setUseTweakCompatibilityMode: */

/* Function Stack Size: 0x14 bytes */

void nKp3MQFt8::setUseTweakCompatibilityMode_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00023cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000137a00)(0xd54e7a15,param_1,1,param_3);
  return;
}



/* 00023d88 useInjectCompatibilityMode */

/* Function Stack Size: 0x10 bytes */

bool __thiscall nKp3MQFt8::useInjectCompatibilityMode(nKp3MQFt8 *this,ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00023e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000137a78)((int)this,0x137ad0,param_2,pcRam0000000000137a78,1,1,0,1);
  return bVar1;
}



/* 00023e88 setUseInjectCompatibilityMode: */

/* Function Stack Size: 0x14 bytes */

void nKp3MQFt8::setUseInjectCompatibilityMode_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0x29) = (char)param_3;
  return;
}



/* 00023e90 usePathStandardization */

/* Function Stack Size: 0x10 bytes */

bool __thiscall nKp3MQFt8::usePathStandardization(nKp3MQFt8 *this,ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00023f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000137ae0)((int)this,0x137b40,param_2,pcRam0000000000137ae0,0,0,0,0);
  return bVar1;
}



/* 00023f90 setUsePathStandardization: */

/* Function Stack Size: 0x14 bytes */

void nKp3MQFt8::setUsePathStandardization_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00023fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000137b50)(0xfae3c5cf,param_1,0,param_3);
  return;
}



/* 0002409c passthrough */

/* Function Stack Size: 0x10 bytes */

bool nKp3MQFt8::passthrough(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0002411c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam0000000000137bc0)((int)param_1,param_2,0,pcRam0000000000137bc0,0,0,0x3efab5ea,1);
  return bVar1;
}



/* 00024178 .cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void nKp3MQFt8::_cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00024238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000137c30)(0,0xa385ee17,0x3c7678ad);
  return;
}



/* 000242f8 _HdyBnXmudp */

void _HdyBnXmudp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013bbb8)();
  return;
}



/* 00027508 FUN_00027508 */

void FUN_00027508(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013c770)(0x14b94f9a);
  return;
}



/* 0002a138 FUN_0002a138 */

void FUN_0002a138(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002a1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013d1a8)(0xdbb5eb71);
  return;
}



/* 0002aa60 FUN_0002aa60 */

void FUN_0002aa60(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002ab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013d3d8)(0xd2e0bc3c);
  return;
}



/* 0002b6e8 FUN_0002b6e8 */

void FUN_0002b6e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002b7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013d660)(0x480998d3);
  return;
}



/* 0002c7f4 FUN_0002c7f4 */

void FUN_0002c7f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002c874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013d958)(0x8724badd);
  return;
}



/* 0002cc68 FUN_0002cc68 */

void FUN_0002cc68(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002cd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013da60)(0x11a3e738);
  return;
}



/* 0002d248 FUN_0002d248 */

void FUN_0002d248(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002d3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013dbd0)(0x4cb10908);
  return;
}



/* 0002f2f4 FUN_0002f2f4 */

void FUN_0002f2f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002f3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013e388)(0xa62be69c);
  return;
}



/* 000309b8 FUN_000309b8 */

void FUN_000309b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00030b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013e8f0)(0x2ef64354);
  return;
}



/* 00032894 FUN_00032894 */

void FUN_00032894(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013f0a0)(0x57bffe84);
  return;
}



/* 000342b4 FUN_000342b4 */

void FUN_000342b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003437c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013f798)(0xbe8375b5);
  return;
}



/* 0003622c FUN_0003622c */

void FUN_0003622c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00036324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000013ffa0)(0x70ea2013);
  return;
}



/* 00037ec8 FUN_00037ec8 */

void FUN_00037ec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00037f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001406f8)(0xb2219714);
  return;
}



/* 000399ec FUN_000399ec */

void FUN_000399ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00039a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000140ea0)(0x28ae49a3);
  return;
}



/* 0003a64c FUN_0003a64c */

void FUN_0003a64c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003a6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001411f8)(0xdd3d7885);
  return;
}



/* 0003b310 FUN_0003b310 */

void FUN_0003b310(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000141540)(0x45c0e0c1);
  return;
}



/* 0003d214 FUN_0003d214 */

void FUN_0003d214(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003d2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000141bd0)(0x1ce9c143);
  return;
}



/* 0003d98c FUN_0003d98c */

void FUN_0003d98c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000141da8)(0x9a062384);
  return;
}



/* 0003e728 FUN_0003e728 */

void FUN_0003e728(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003e800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001420f0)(0x51e30caf);
  return;
}



/* 0003f630 FUN_0003f630 */

void FUN_0003f630(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003f70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001423e8)(0x9d32fae2);
  return;
}



/* 00040784 FUN_00040784 */

void FUN_00040784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00040938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001427d0)(0xe648ea7);
  return;
}



/* 0004fe14 FUN_0004fe14 */

void FUN_0004fe14(void)

{
                    /* WARNING: Could not recover jumptable at 0x0004ff80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000146608)(0xe6118936);
  return;
}



/* 00056e7c FUN_00056e7c */

void FUN_00056e7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00056f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000148610)(0x162d1d26);
  return;
}



/* 000579c8 FUN_000579c8 */

void FUN_000579c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00057ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001488a0)(0x7c49afc2);
  return;
}



/* 00059710 FUN_00059710 */

void FUN_00059710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00059758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000149098)();
  return;
}



/* 00059a9c FUN_00059a9c */

void FUN_00059a9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00059b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000149218)(0x947e83d1);
  return;
}



/* 0005ab6c FUN_0005ab6c */

void FUN_0005ab6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0005ac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001496e0)(0x7c70079b);
  return;
}



/* 0005c068 FUN_0005c068 */

void FUN_0005c068(void)

{
                    /* WARNING: Could not recover jumptable at 0x0005c11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000149cd8)(0xa404c400);
  return;
}



/* 0005cbdc FUN_0005cbdc */

void FUN_0005cbdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0005cc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014a088)(0x14a0e0,1,1,pcRam000000000014a088,0,1,0);
  return;
}



/* 0005ccc0 FUN_0005ccc0 */

undefined8 FUN_0005ccc0(void)

{
  return 0;
}



/* 0005ccc8 FUN_0005ccc8 */

void FUN_0005ccc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0005cd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014a0f8)(0x97a40445);
  return;
}



/* 0005d798 FUN_0005d798 */

void FUN_0005d798(void)

{
                    /* WARNING: Could not recover jumptable at 0x0005d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014a3e0)(0x37225179);
  return;
}



/* 0005dd68 FUN_0005dd68 */

void FUN_0005dd68(void)

{
                    /* WARNING: Could not recover jumptable at 0x0005de08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014a550)(0);
  return;
}



/* 0005dec8 FUN_0005dec8 */

void FUN_0005dec8(undefined8 param_1,undefined8 param_2)

{
  switch(iRam0000000000189e6c == 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000601e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000014a5f8)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x0005dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000014a5d0)
              (0x13a580,param_1,param_2,0x13a61a,0x13a621,0x13a628,0x13a62f,0x13a636,0x13a63d);
    return;
  }
}



/* 00060e68 FUN_00060e68 */

void FUN_00060e68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00060f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014b378)(0x8996f7c3);
  return;
}



/* 00062b18 FUN_00062b18 */

void FUN_00062b18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00062c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014bc08)(0xde9203be);
  return;
}



/* 00064418 FUN_00064418 */

void FUN_00064418(void)

{
                    /* WARNING: Could not recover jumptable at 0x000644a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014c350)(0x14c3b0,0,0,pcRam000000000014c350,0,0,1);
  return;
}



/* 000644fc FUN_000644fc */

void FUN_000644fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000645d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014c3c8)(0x87a52e58);
  return;
}



/* 00064f44 FUN_00064f44 */

void FUN_00064f44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00065000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014c678)(0xa95e6b3b);
  return;
}



/* 00065acc FUN_00065acc */

void FUN_00065acc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00065bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014c960)
            (0x7b9ade6b,0x82303f3c,0x7d3e81d8,0x7b9ade6b,0x71f29f34,0x45c3fc8a,0x2f40b229,0x189e78);
  return;
}



/* 000667e4 FUN_000667e4 */

void FUN_000667e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000667f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014cc30)(param_2);
  return;
}



/* 00066808 FUN_00066808 */

void FUN_00066808(void)

{
                    /* WARNING: Could not recover jumptable at 0x00066918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014cc48)(0x975b6385,0x57151aae);
  return;
}



/* 000676f0 FUN_000676f0 */

void FUN_000676f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00067704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014cf18)(param_2);
  return;
}



/* 00067714 FUN_00067714 */

void FUN_00067714(undefined8 param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
                    /* WARNING: Could not recover jumptable at 0x000677f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014cf28)
            (0x92114b8b,0x92114b8b,0x44107662,0x3bb9d044,0x3829ff4f,0x1b651e0f,0x7b7dd8f,in_x6,in_x7
             ,param_1);
  return;
}



/* 00068264 FUN_00068264 */

void FUN_00068264(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00068278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014d1f8)(param_2);
  return;
}



/* 00068288 FUN_00068288 */

void FUN_00068288(void)

{
                    /* WARNING: Could not recover jumptable at 0x00068334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014d200)(0x308d2fe0);
  return;
}



/* 000683c4 FUN_000683c4 */

void FUN_000683c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00068470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014d270)(0);
  return;
}



/* 000684fc FUN_000684fc */

void FUN_000684fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000685b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014d2e0)(0x48612cbb);
  return;
}



/* 0006a340 FUN_0006a340 */

void FUN_0006a340(void)

{
                    /* WARNING: Could not recover jumptable at 0x0006a3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014dbd8)(0xc80c9aab);
  return;
}



/* 0006b2dc FUN_0006b2dc */

void FUN_0006b2dc(undefined8 param_1,undefined8 param_2)

{
  FUN_0006b464(param_1,param_2,1);
  return;
}



/* 0006b2e4 FUN_0006b2e4 */

void FUN_0006b2e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0006b390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014dfc0)(0x5d6c5e2d);
  return;
}



/* 0006b464 FUN_0006b464 */

void FUN_0006b464(void)

{
                    /* WARNING: Could not recover jumptable at 0x0006b574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014e030)(0x71b42bb2);
  return;
}



/* 0006fc58 FUN_0006fc58 */

void FUN_0006fc58(void)

{
                    /* WARNING: Could not recover jumptable at 0x0006fd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014eee0)(0);
  return;
}



/* 0006fd98 FUN_0006fd98 */

void FUN_0006fd98(void)

{
                    /* WARNING: Could not recover jumptable at 0x0006fe88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014ef50)(0xfb90b9da);
  return;
}



/* 00070b88 FUN_00070b88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00070b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0006fd98();
  (*pcRam0000000000189df0)(param_1,param_2,param_3,uVar1);
  return 0;
}



/* 00070c08 FUN_00070c08 */

void FUN_00070c08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00070cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014f268)(0xf6d0b9cc);
  return;
}



/* 00071ad0 FUN_00071ad0 */

void FUN_00071ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00071b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014f550)(0x189e98);
  return;
}



/* 00072b08 FUN_00072b08 */

void FUN_00072b08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00072bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014f660)(0x35c5a43e);
  return;
}



/* 00074f10 FUN_00074f10 */

void FUN_00074f10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00074fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000014fd78)(0xc2ddfcfc);
  return;
}



/* 000753d0 FUN_000753d0 */

void FUN_000753d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00075400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000015f868)();
  return;
}



/* 0007b718 FUN_0007b718 */

void FUN_0007b718(void)

{
                    /* WARNING: Could not recover jumptable at 0x0007b750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001608c8)(0x160000);
  return;
}



/* 0009fb14 FUN_0009fb14 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Switch with 1 destination removed at 0x0009fe08 */
/* WARNING: Switch with 1 destination removed at 0x0009fe1c */
/* WARNING: Switch with 1 destination removed at 0x000a00f8 */
/* WARNING: Switch with 1 destination removed at 0x000a0114 */
/* WARNING: Switch with 1 destination removed at 0x000a05b0 */
/* WARNING: Switch with 1 destination removed at 0x000a0a04 */
/* WARNING: Switch with 1 destination removed at 0x000a0db8 */
/* WARNING: Switch with 1 destination removed at 0x000a0dc8 */
/* WARNING: Exceeded maximum restarts with more pending */

code * FUN_0009fb14(code *param_1,_Unwind_Exception *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  int iVar12;
  code *extraout_x0;
  size_t sVar13;
  undefined8 uVar14;
  ulong uVar15;
  code *pcVar16;
  code *UNRECOVERED_JUMPTABLE_00;
  code *unaff_x21;
  code *unaff_x22;
  ulong *unaff_x23;
  long unaff_x24;
  ulong *unaff_x27;
  ulong *unaff_x28;
  ushort in_stack_00000000;
  long lStack_68;
  long lStack_48;
  
  puVar11 = (ulong *)&stack0xffffffffffffffc0;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(&bRam00000000001615f0 + (ulong)bRam000000000018a508 * 8);
  puVar1 = (ulong *)&stack0xffffffffffffffc0;
  puVar8 = (ulong *)&stack0xffffffffffffffc0;
  puVar2 = (ulong *)&stack0xffffffffffffffc0;
  puVar10 = (ulong *)&stack0xffffffffffffffc0;
  puVar3 = (ulong *)&stack0xffffffffffffffc0;
  puVar9 = (ulong *)&stack0xffffffffffffffc0;
  puVar6 = (ulong *)&stack0xffffffffffffffc0;
  puVar7 = (ulong *)&stack0xffffffffffffffc0;
  puVar4 = (ulong *)&stack0xffffffffffffffc0;
  puVar5 = (ulong *)&stack0xffffffffffffffc0;
  pcVar16 = param_1;
  switch(bRam000000000018a508) {
  case 0:
  case 3:
code_r0x0009fb4c:
                    /* WARNING: Could not recover jumptable at 0x0009fb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161600)();
    return pcVar16;
  case 1:
  case 4:
  case 0x17:
    goto code_r0x0009fbd4;
  case 2:
code_r0x0009fb54:
    switch(param_1 != (code *)0x0) {
    case true:
      goto code_r0x0009fb70;
    }
    goto code_r0x0009fbd4;
  case 5:
code_r0x0009fb70:
                    /* WARNING: Could not recover jumptable at 0x0009fb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161620)();
    return pcVar16;
  case 6:
    goto code_r0x0009fd04;
  case 7:
  case 9:
code_r0x0009fcf0:
    _objc_msgSend(*(undefined8 *)(unaff_x21 + 0x1f8),unaff_x23[0x16f]);
    goto code_r0x0009fd04;
  case 8:
code_r0x0009fc98:
    sVar13 = _strlen((char *)param_1);
    uVar14 = _objc_msgSend(param_1,PTR_s_stringWithFileSystemRepresentati_0012e0e0,param_1,sVar13);
                    /* WARNING: Could not recover jumptable at 0x0009fcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161648)(uVar14);
    return pcVar16;
  case 10:
  case 0xd:
code_r0x0009fcd4:
  case 0xb:
code_r0x0009fcdc:
                    /* WARNING: Could not recover jumptable at 0x0009fcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161650)(0);
    return pcVar16;
  case 0xc:
code_r0x0009fc60:
    uVar15 = _objc_msgSend(uRam0000000000189ea8,PTR_s_PSE6FLbRyK__0012d8f0);
                    /* WARNING: Could not recover jumptable at 0x0009fc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161660))();
    return pcVar16;
  case 0xe:
  case 0x11:
code_r0x0009fc2c:
                    /* WARNING: Could not recover jumptable at 0x0009fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((long)unaff_x23 * 8 + 0x161680))(0);
    return pcVar16;
  case 0xf:
  case 0x10:
code_r0x0009fb80:
                    /* WARNING: Could not recover jumptable at 0x0009fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161678)();
    return pcVar16;
  case 0x12:
code_r0x0009fc44:
                    /* WARNING: Could not recover jumptable at 0x0009fc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((long)unaff_x22 * 8 + 0x161690))(0);
    return pcVar16;
  case 0x13:
    goto code_r0x0009fbc0;
  case 0x14:
  case 0x16:
code_r0x0009fc58:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x9fc5c);
    (*pcVar16)();
  case 0x15:
  case 0x1d:
code_r0x0009fc10:
    UNRECOVERED_JUMPTABLE_00 = pcRam00000000001616e8;
  case 0x1e:
code_r0x0009fc14:
                    /* WARNING: Could not recover jumptable at 0x0009fc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0x18:
code_r0x0009fba8:
    puVar11 = puVar1;
    puVar1 = puVar11;
    puVar8 = puVar11;
    puVar2 = puVar11;
    puVar10 = puVar11;
    puVar3 = puVar11;
    puVar9 = puVar11;
    puVar6 = puVar11;
    puVar7 = puVar11;
    puVar4 = puVar11;
    puVar5 = puVar11;
    switch(bRam000000000018a508) {
    case 0:
    case 3:
      goto code_r0x0009fb4c;
    case 1:
    case 4:
    case 0x17:
      goto code_r0x0009fbd4;
    case 2:
      goto code_r0x0009fb54;
    case 5:
      goto code_r0x0009fb70;
    case 6:
      goto code_r0x0009fd04;
    case 7:
    case 9:
      goto code_r0x0009fcf0;
    case 8:
      goto code_r0x0009fc98;
    case 10:
    case 0xd:
      goto code_r0x0009fcd4;
    case 0xb:
      goto code_r0x0009fcdc;
    case 0xc:
      goto code_r0x0009fc60;
    case 0xe:
    case 0x11:
      goto code_r0x0009fc2c;
    case 0xf:
    case 0x10:
      goto code_r0x0009fb80;
    case 0x12:
      goto code_r0x0009fc44;
    case 0x13:
      goto code_r0x0009fbc0;
    case 0x14:
    case 0x16:
      goto code_r0x0009fc58;
    case 0x15:
    case 0x1d:
      goto code_r0x0009fc10;
    case 0x18:
      goto code_r0x0009fba8;
    case 0x19:
    case 0x20:
      goto code_r0x0009fbb0;
    case 0x1a:
      goto code_r0x0009fbe0;
    case 0x1b:
    case 0x1c:
      goto code_r0x0009fbf0;
    case 0x1e:
      goto code_r0x0009fc14;
    case 0x1f:
      goto code_r0x0009fc18;
    case 0x21:
      goto code_r0x0009fbb8;
    case 0x22:
    case 0x3a:
    case 0x3f:
      goto code_r0x0009fe7c;
    case 0x23:
      goto code_r0x0009fd60;
    case 0x24:
      goto code_r0x0009fd98;
    case 0x25:
      goto code_r0x0009fd90;
    case 0x26:
    case 0x28:
      goto code_r0x0009ff90;
    case 0x27:
      goto code_r0x0009ff98;
    case 0x29:
      goto code_r0x0009ff6c;
    case 0x2a:
    case 0x33:
      goto code_r0x0009fe24;
    case 0x2b:
    case 0x2d:
      goto code_r0x0009fdd0;
    case 0x2c:
      goto code_r0x0009fdd8;
    case 0x2e:
    case 0x30:
      goto code_r0x0009fe0c;
    case 0x2f:
      goto code_r0x0009fdfc;
    case 0x31:
    case 0x32:
      goto code_r0x0009fe34;
    case 0x34:
      goto code_r0x0009fe3c;
    case 0x35:
    case 0x37:
      goto code_r0x0009fe44;
    case 0x36:
      goto code_r0x0009fe58;
    case 0x38:
    case 0x44:
      goto code_r0x0009fefc;
    case 0x39:
    case 0x3b:
      goto code_r0x0009fe70;
    case 0x3c:
    case 0x47:
      goto code_r0x0009fed4;
    case 0x3d:
      goto code_r0x0009fef8;
    case 0x3e:
      goto code_r0x0009fe84;
    case 0x40:
      goto code_r0x0009fe9c;
    case 0x41:
      goto code_r0x0009fec4;
    case 0x42:
    case 0x45:
      goto code_r0x0009ff14;
    case 0x43:
      goto code_r0x0009ff38;
    case 0x46:
      goto code_r0x0009fedc;
    case 0x48:
    case 0x4d:
      goto code_r0x000a00bc;
    case 0x49:
      goto code_r0x000a0004;
    case 0x4a:
      goto code_r0x000a001c;
    case 0x4b:
    case 0x4c:
      goto code_r0x000a0064;
    case 0x4e:
      goto code_r0x000a0420;
    case 0x4f:
    case 0x50:
      goto code_r0x000a03fc;
    case 0x51:
      goto code_r0x000a03e4;
    case 0x52:
    case 0x83:
      goto code_r0x000a011c;
    case 0x53:
      goto code_r0x000a02d0;
    case 0x54:
      goto code_r0x000a02e0;
    case 0x55:
    case 0x57:
      goto code_r0x000a02f4;
    case 0x56:
      goto code_r0x000a0314;
    case 0x58:
      goto code_r0x000a0350;
    case 0x59:
    case 0x5a:
      goto code_r0x000a0358;
    case 0x5b:
      goto code_r0x000a0370;
    case 0x5c:
    case 0x65:
      goto code_r0x000a0398;
    case 0x5d:
    case 0x5f:
      goto code_r0x000a00c8;
    case 0x5e:
      goto code_r0x000a00d0;
    case 0x60:
      goto code_r0x000a00e4;
    case 0x61:
    case 99:
      goto code_r0x000a00fc;
    default:
      goto code_r0x000a0258;
    case 100:
      goto code_r0x000a0134;
    case 0x67:
    case 0x69:
      goto code_r0x000a0154;
    case 0x68:
      goto code_r0x000a0160;
    case 0x6a:
    case 0x7c:
      goto code_r0x000a024c;
    case 0x6b:
      goto code_r0x000a0188;
    case 0x6c:
      goto code_r0x000a01a8;
    case 0x6d:
      goto code_r0x000a01a4;
    case 0x6e:
    case 0x72:
    case 0x79:
      break;
    case 0x6f:
    case 0x70:
      goto code_r0x000a01c4;
    case 0x71:
      goto code_r0x000a01cc;
    case 0x73:
      goto code_r0x000a0200;
    case 0x74:
      goto code_r0x000a0208;
    case 0x75:
    case 0x76:
      goto code_r0x000a0210;
    case 0x77:
    case 0x78:
      goto code_r0x000a022c;
    case 0x7b:
    case 0x7d:
      goto code_r0x000a0240;
    case 0x7f:
      goto code_r0x000a0254;
    case 0x80:
      goto code_r0x000a0278;
    case 0x81:
    case 0x82:
      goto code_r0x000a02b0;
    case 0x84:
      goto code_r0x000a03c0;
    case 0x85:
    case 0x87:
      goto code_r0x000a03c8;
    case 0x86:
      goto code_r0x000a03dc;
    case 0x88:
      goto code_r0x000a04b0;
    case 0x89:
code_r0x000a0494:
      unaff_x23 = puVar8 + -0x80;
      unaff_x28 = puVar8 + -0x82;
      puVar11 = puVar8 + -0x84;
      puVar1 = puVar11;
      puVar8 = puVar11;
      puVar2 = puVar11;
      puVar10 = puVar11;
      puVar3 = puVar11;
      puVar9 = puVar11;
      puVar6 = puVar11;
      puVar7 = puVar11;
      puVar4 = puVar11;
      puVar5 = puVar11;
      unaff_x27 = puVar11;
      switch(bRam000000000018a508) {
      case 0:
      case 3:
        goto code_r0x0009fb4c;
      case 1:
      case 4:
      case 0x17:
        goto code_r0x0009fbd4;
      case 2:
        goto code_r0x0009fb54;
      case 5:
        goto code_r0x0009fb70;
      case 6:
        goto code_r0x0009fd04;
      case 7:
      case 9:
        goto code_r0x0009fcf0;
      case 8:
        goto code_r0x0009fc98;
      case 10:
      case 0xd:
        goto code_r0x0009fcd4;
      case 0xb:
        goto code_r0x0009fcdc;
      case 0xc:
        goto code_r0x0009fc60;
      case 0xe:
      case 0x11:
        goto code_r0x0009fc2c;
      case 0xf:
      case 0x10:
        goto code_r0x0009fb80;
      case 0x12:
        goto code_r0x0009fc44;
      case 0x13:
        goto code_r0x0009fbc0;
      case 0x14:
      case 0x16:
        goto code_r0x0009fc58;
      case 0x15:
      case 0x1d:
        goto code_r0x0009fc10;
      case 0x18:
        goto code_r0x0009fba8;
      case 0x19:
      case 0x20:
        goto code_r0x0009fbb0;
      case 0x1a:
        goto code_r0x0009fbe0;
      case 0x1b:
      case 0x1c:
        goto code_r0x0009fbf0;
      case 0x1e:
        goto code_r0x0009fc14;
      case 0x1f:
        goto code_r0x0009fc18;
      case 0x21:
        goto code_r0x0009fbb8;
      case 0x22:
      case 0x3a:
      case 0x3f:
        goto code_r0x0009fe7c;
      case 0x23:
        goto code_r0x0009fd60;
      case 0x24:
        goto code_r0x0009fd98;
      case 0x25:
        goto code_r0x0009fd90;
      case 0x26:
      case 0x28:
        goto code_r0x0009ff90;
      case 0x27:
        goto code_r0x0009ff98;
      case 0x29:
        goto code_r0x0009ff6c;
      case 0x2a:
      case 0x33:
        goto code_r0x0009fe24;
      case 0x2b:
      case 0x2d:
        goto code_r0x0009fdd0;
      case 0x2c:
        goto code_r0x0009fdd8;
      case 0x2e:
      case 0x30:
        goto code_r0x0009fe0c;
      case 0x2f:
        goto code_r0x0009fdfc;
      case 0x31:
      case 0x32:
        goto code_r0x0009fe34;
      case 0x34:
        goto code_r0x0009fe3c;
      case 0x35:
      case 0x37:
        goto code_r0x0009fe44;
      case 0x36:
        goto code_r0x0009fe58;
      case 0x38:
      case 0x44:
        goto code_r0x0009fefc;
      case 0x39:
      case 0x3b:
        goto code_r0x0009fe70;
      case 0x3c:
      case 0x47:
        goto code_r0x0009fed4;
      case 0x3d:
        goto code_r0x0009fef8;
      case 0x3e:
        goto code_r0x0009fe84;
      case 0x40:
        goto code_r0x0009fe9c;
      case 0x41:
        goto code_r0x0009fec4;
      case 0x42:
      case 0x45:
        goto code_r0x0009ff14;
      case 0x43:
        goto code_r0x0009ff38;
      case 0x46:
        goto code_r0x0009fedc;
      case 0x48:
      case 0x4d:
        goto code_r0x000a00bc;
      case 0x49:
        goto code_r0x000a0004;
      case 0x4a:
        goto code_r0x000a001c;
      case 0x4b:
      case 0x4c:
        goto code_r0x000a0064;
      case 0x4e:
        goto code_r0x000a0420;
      case 0x4f:
      case 0x50:
        goto code_r0x000a03fc;
      case 0x51:
        goto code_r0x000a03e4;
      case 0x52:
      case 0x83:
        goto code_r0x000a011c;
      case 0x53:
        goto code_r0x000a02d0;
      case 0x54:
        goto code_r0x000a02e0;
      case 0x55:
      case 0x57:
        goto code_r0x000a02f4;
      case 0x56:
        goto code_r0x000a0314;
      case 0x58:
        goto code_r0x000a0350;
      case 0x59:
      case 0x5a:
        goto code_r0x000a0358;
      case 0x5b:
        goto code_r0x000a0370;
      case 0x5c:
      case 0x65:
        goto code_r0x000a0398;
      case 0x5d:
      case 0x5f:
        goto code_r0x000a00c8;
      case 0x5e:
        goto code_r0x000a00d0;
      case 0x60:
        goto code_r0x000a00e4;
      case 0x61:
      case 99:
        goto code_r0x000a00fc;
      default:
        goto code_r0x000a0258;
      case 100:
        goto code_r0x000a0134;
      case 0x67:
      case 0x69:
        goto code_r0x000a0154;
      case 0x68:
        goto code_r0x000a0160;
      case 0x6a:
      case 0x7c:
        goto code_r0x000a024c;
      case 0x6b:
        goto code_r0x000a0188;
      case 0x6c:
        goto code_r0x000a01a8;
      case 0x6d:
        goto code_r0x000a01a4;
      case 0x6e:
      case 0x72:
      case 0x79:
        break;
      case 0x6f:
      case 0x70:
        goto code_r0x000a01c4;
      case 0x71:
        goto code_r0x000a01cc;
      case 0x73:
        goto code_r0x000a0200;
      case 0x74:
        goto code_r0x000a0208;
      case 0x75:
      case 0x76:
        goto code_r0x000a0210;
      case 0x77:
      case 0x78:
        goto code_r0x000a022c;
      case 0x7b:
      case 0x7d:
        goto code_r0x000a0240;
      case 0x7f:
        goto code_r0x000a0254;
      case 0x80:
        goto code_r0x000a0278;
      case 0x81:
      case 0x82:
        goto code_r0x000a02b0;
      case 0x84:
        goto code_r0x000a03c0;
      case 0x85:
      case 0x87:
        goto code_r0x000a03c8;
      case 0x86:
        goto code_r0x000a03dc;
      case 0x88:
        goto code_r0x000a04b0;
      case 0x89:
        goto code_r0x000a0494;
      case 0x8a:
      case 0xb1:
        goto code_r0x000a079c;
      case 0x8b:
        goto code_r0x000a04cc;
      case 0x8c:
        goto code_r0x000a0548;
      case 0x8d:
        goto code_r0x000a0648;
      case 0x8e:
        goto code_r0x000a0550;
      case 0x8f:
        goto code_r0x000a054c;
      case 0x90:
      case 0x9f:
        goto code_r0x000a06f4;
      case 0x91:
        goto code_r0x000a0584;
      case 0x92:
        goto code_r0x000a0590;
      case 0x93:
        goto code_r0x000a0588;
      case 0x94:
        goto code_r0x000a05b4;
      case 0x95:
        goto code_r0xaa1d03fd9401eca8;
      case 0x96:
        goto code_r0x000a05cc;
      case 0x97:
        goto code_r0x000a05c8;
      case 0x98:
      case 0x9a:
        goto code_r0x000a0600;
      case 0x99:
        goto code_r0x000a05f4;
      case 0x9b:
        goto code_r0x000a061c;
      case 0x9c:
        goto code_r0x000a0644;
      case 0x9d:
      case 0x9e:
        goto code_r0x000a06d8;
      case 0xa0:
        goto code_r0x000a0684;
      case 0xa1:
code_r0x000a0674:
        puVar11 = puVar2;
        puVar1 = puVar11;
        puVar8 = puVar11;
        puVar2 = puVar11;
        puVar10 = puVar11;
        puVar3 = puVar11;
        puVar9 = puVar11;
        puVar6 = puVar11;
        puVar7 = puVar11;
        puVar4 = puVar11;
        puVar5 = puVar11;
        switch(bRam000000000018a508) {
        case 0:
        case 3:
          goto code_r0x0009fb4c;
        case 1:
        case 4:
        case 0x17:
          goto code_r0x0009fbd4;
        case 2:
          goto code_r0x0009fb54;
        case 5:
          goto code_r0x0009fb70;
        case 6:
          goto code_r0x0009fd04;
        case 7:
        case 9:
          goto code_r0x0009fcf0;
        case 8:
          goto code_r0x0009fc98;
        case 10:
        case 0xd:
          goto code_r0x0009fcd4;
        case 0xb:
          goto code_r0x0009fcdc;
        case 0xc:
          goto code_r0x0009fc60;
        case 0xe:
        case 0x11:
          goto code_r0x0009fc2c;
        case 0xf:
        case 0x10:
          goto code_r0x0009fb80;
        case 0x12:
          goto code_r0x0009fc44;
        case 0x13:
          goto code_r0x0009fbc0;
        case 0x14:
        case 0x16:
          goto code_r0x0009fc58;
        case 0x15:
        case 0x1d:
          goto code_r0x0009fc10;
        case 0x18:
          goto code_r0x0009fba8;
        case 0x19:
        case 0x20:
          goto code_r0x0009fbb0;
        case 0x1a:
          goto code_r0x0009fbe0;
        case 0x1b:
        case 0x1c:
          goto code_r0x0009fbf0;
        case 0x1e:
          goto code_r0x0009fc14;
        case 0x1f:
          goto code_r0x0009fc18;
        case 0x21:
          goto code_r0x0009fbb8;
        case 0x22:
        case 0x3a:
        case 0x3f:
          goto code_r0x0009fe7c;
        case 0x23:
          goto code_r0x0009fd60;
        case 0x24:
          goto code_r0x0009fd98;
        case 0x25:
          goto code_r0x0009fd90;
        case 0x26:
        case 0x28:
          goto code_r0x0009ff90;
        case 0x27:
          goto code_r0x0009ff98;
        case 0x29:
          goto code_r0x0009ff6c;
        case 0x2a:
        case 0x33:
          goto code_r0x0009fe24;
        case 0x2b:
        case 0x2d:
          goto code_r0x0009fdd0;
        case 0x2c:
          goto code_r0x0009fdd8;
        case 0x2e:
        case 0x30:
          goto code_r0x0009fe0c;
        case 0x2f:
          goto code_r0x0009fdfc;
        case 0x31:
        case 0x32:
          goto code_r0x0009fe34;
        case 0x34:
          goto code_r0x0009fe3c;
        case 0x35:
        case 0x37:
          goto code_r0x0009fe44;
        case 0x36:
          goto code_r0x0009fe58;
        case 0x38:
        case 0x44:
          goto code_r0x0009fefc;
        case 0x39:
        case 0x3b:
          goto code_r0x0009fe70;
        case 0x3c:
        case 0x47:
          goto code_r0x0009fed4;
        case 0x3d:
          goto code_r0x0009fef8;
        case 0x3e:
          goto code_r0x0009fe84;
        case 0x40:
          goto code_r0x0009fe9c;
        case 0x41:
          goto code_r0x0009fec4;
        case 0x42:
        case 0x45:
          goto code_r0x0009ff14;
        case 0x43:
          goto code_r0x0009ff38;
        case 0x46:
          goto code_r0x0009fedc;
        case 0x48:
        case 0x4d:
          goto code_r0x000a00bc;
        case 0x49:
          goto code_r0x000a0004;
        case 0x4a:
          goto code_r0x000a001c;
        case 0x4b:
        case 0x4c:
          goto code_r0x000a0064;
        case 0x4e:
          goto code_r0x000a0420;
        case 0x4f:
        case 0x50:
          goto code_r0x000a03fc;
        case 0x51:
          goto code_r0x000a03e4;
        case 0x52:
        case 0x83:
          goto code_r0x000a011c;
        case 0x53:
          goto code_r0x000a02d0;
        case 0x54:
          goto code_r0x000a02e0;
        case 0x55:
        case 0x57:
          goto code_r0x000a02f4;
        case 0x56:
          goto code_r0x000a0314;
        case 0x58:
          goto code_r0x000a0350;
        case 0x59:
        case 0x5a:
          goto code_r0x000a0358;
        case 0x5b:
          goto code_r0x000a0370;
        case 0x5c:
        case 0x65:
          goto code_r0x000a0398;
        case 0x5d:
        case 0x5f:
          goto code_r0x000a00c8;
        case 0x5e:
          goto code_r0x000a00d0;
        case 0x60:
          goto code_r0x000a00e4;
        case 0x61:
        case 99:
          goto code_r0x000a00fc;
        default:
          goto code_r0x000a0258;
        case 100:
          goto code_r0x000a0134;
        case 0x67:
        case 0x69:
          goto code_r0x000a0154;
        case 0x68:
          goto code_r0x000a0160;
        case 0x6a:
        case 0x7c:
          goto code_r0x000a024c;
        case 0x6b:
          goto code_r0x000a0188;
        case 0x6c:
          goto code_r0x000a01a8;
        case 0x6d:
          goto code_r0x000a01a4;
        case 0x6e:
        case 0x72:
        case 0x79:
          break;
        case 0x6f:
        case 0x70:
          goto code_r0x000a01c4;
        case 0x71:
          goto code_r0x000a01cc;
        case 0x73:
          goto code_r0x000a0200;
        case 0x74:
          goto code_r0x000a0208;
        case 0x75:
        case 0x76:
          goto code_r0x000a0210;
        case 0x77:
        case 0x78:
          goto code_r0x000a022c;
        case 0x7b:
        case 0x7d:
          goto code_r0x000a0240;
        case 0x7f:
          goto code_r0x000a0254;
        case 0x80:
          goto code_r0x000a0278;
        case 0x81:
        case 0x82:
          goto code_r0x000a02b0;
        case 0x84:
          goto code_r0x000a03c0;
        case 0x85:
        case 0x87:
          goto code_r0x000a03c8;
        case 0x86:
          goto code_r0x000a03dc;
        case 0x88:
          goto code_r0x000a04b0;
        case 0x89:
          goto code_r0x000a0494;
        case 0x8a:
        case 0xb1:
          goto code_r0x000a079c;
        case 0x8b:
          goto code_r0x000a04cc;
        case 0x8c:
          goto code_r0x000a0548;
        case 0x8d:
          goto code_r0x000a0648;
        case 0x8e:
          goto code_r0x000a0550;
        case 0x8f:
          goto code_r0x000a054c;
        case 0x90:
        case 0x9f:
          goto code_r0x000a06f4;
        case 0x91:
          goto code_r0x000a0584;
        case 0x92:
          goto code_r0x000a0590;
        case 0x93:
          goto code_r0x000a0588;
        case 0x94:
          goto code_r0x000a05b4;
        case 0x95:
          goto code_r0xaa1d03fd9401eca8;
        case 0x96:
          goto code_r0x000a05cc;
        case 0x97:
          goto code_r0x000a05c8;
        case 0x98:
        case 0x9a:
          goto code_r0x000a0600;
        case 0x99:
          goto code_r0x000a05f4;
        case 0x9b:
          goto code_r0x000a061c;
        case 0x9c:
          goto code_r0x000a0644;
        case 0x9d:
        case 0x9e:
          goto code_r0x000a06d8;
        case 0xa0:
          goto code_r0x000a0684;
        case 0xa1:
          goto code_r0x000a0674;
        case 0xa2:
          goto code_r0x000a0690;
        case 0xa3:
          goto code_r0x000a0688;
        case 0xa4:
          goto code_r0x000a0708;
        case 0xa5:
          goto code_r0x000a0700;
        case 0xa6:
        case 0xac:
          goto code_r0x000a0730;
        case 0xa7:
          goto code_r0x000a073c;
        case 0xa8:
        case 0xaa:
          goto code_r0x000a0760;
        case 0xa9:
          goto code_r0x000a075c;
        case 0xab:
        case 0xad:
          goto code_r0x000a0774;
        case 0xae:
        case 0xbd:
          goto code_r0x000a07e8;
        case 0xaf:
        case 0xb0:
          goto code_r0x000a0794;
        case 0xb2:
        case 0xb4:
          goto code_r0x000a0890;
        case 0xb3:
          goto code_r0x000a0898;
        case 0xb5:
          goto code_r0x000a0824;
        case 0xb6:
          goto code_r0x000a07b4;
        case 0xb7:
          goto code_r0x000a07d0;
        case 0xb8:
        case 0xba:
          goto code_r0x000a082c;
        case 0xb9:
          goto code_r0x000a0858;
        case 0xbb:
          goto code_r0x000a07e0;
        case 0xbc:
          goto code_r0x000a07e4;
        case 0xbe:
          goto code_r0x000a0904;
        case 0xbf:
          goto code_r0x000a0940;
        case 0xc0:
          goto code_r0x000a0918;
        case 0xc1:
        case 0xc3:
          goto code_r0x000a090c;
        case 0xc2:
          goto code_r0x000a0930;
        case 0xc4:
        case 0xc6:
          goto code_r0x000a0a24;
        case 0xc5:
          goto code_r0x000a0a2c;
        case 199:
          goto code_r0x000a0a40;
        case 200:
        case 0xcd:
          goto code_r0x000a09d0;
        case 0xc9:
        case 0xcb:
          goto code_r0x000a09a8;
        case 0xca:
        case 0xcf:
          goto code_r0x0011b81c;
        case 0xcc:
          goto code_r0x000a09dc;
        case 0xce:
          goto code_r0x000a0a00;
        case 0xd0:
        case 0xd3:
          goto code_r0x000a0aa0;
        case 0xd1:
          goto code_r0x000a0a98;
        case 0xd2:
          goto code_r0x000a0ab4;
        case 0xd4:
          goto code_r0x000a0ae8;
        case 0xd5:
        case 0xd7:
          goto code_r0x000a0b30;
        case 0xd6:
        case 0xdc:
          goto code_r0x000a0b44;
        case 0xd8:
        case 0xda:
          goto code_r0x000a0afc;
        case 0xd9:
          goto code_r0x000a0af0;
        case 0xdb:
          goto code_r0x000a0b14;
        case 0xdd:
          goto code_r0x000a0b2c;
        case 0xde:
          goto code_r0x000a0b78;
        case 0xdf:
        case 0xe0:
          goto code_r0x000a0b68;
        case 0xe1:
          goto code_r0x000a0b94;
        case 0xe2:
        case 0xe4:
          goto code_r0x000a0bd0;
        case 0xe3:
          goto code_r0x000a0bd8;
        case 0xe5:
          goto code_r0x000a0bec;
        case 0xe6:
          goto code_r0x000a0c24;
        case 0xe7:
          goto code_r0x000a0c64;
        case 0xe8:
        case 0xeb:
          goto code_r0x000a0c38;
        case 0xe9:
          goto code_r0x000a0c2c;
        case 0xea:
          goto code_r0x000a0c50;
        case 0xec:
        case 0xef:
          goto code_r0x000a0c9c;
        case 0xed:
          goto code_r0x000a0cac;
        case 0xee:
          goto code_r0x000a0c88;
        case 0xf0:
        case 0xf2:
          goto code_r0x000a0d04;
        case 0xf1:
          goto code_r0x000a0cfc;
        case 0xf3:
          goto code_r0x000a0d18;
        case 0xf4:
          goto code_r0x000a0d4c;
        case 0xf5:
        case 0xf7:
          goto code_r0x000a0d80;
        case 0xf6:
          goto code_r0x000a0d88;
        case 0xf8:
        case 0xfc:
        case 0xff:
          goto code_r0x000a0dcc;
        case 0xf9:
          goto code_r0x000a0da4;
        case 0xfa:
          goto code_r0x000a0db0;
        case 0xfb:
        case 0xfd:
          goto code_r0x000a0dbc;
        case 0xfe:
          goto code_r0x000a0ddc;
        }
      case 0xa2:
        goto code_r0x000a0690;
      case 0xa3:
        goto code_r0x000a0688;
      case 0xa4:
        goto code_r0x000a0708;
      case 0xa5:
        goto code_r0x000a0700;
      case 0xa6:
      case 0xac:
        goto code_r0x000a0730;
      case 0xa7:
        goto code_r0x000a073c;
      case 0xa8:
      case 0xaa:
        goto code_r0x000a0760;
      case 0xa9:
        goto code_r0x000a075c;
      case 0xab:
      case 0xad:
        goto code_r0x000a0774;
      case 0xae:
      case 0xbd:
        goto code_r0x000a07e8;
      case 0xaf:
      case 0xb0:
        goto code_r0x000a0794;
      case 0xb2:
      case 0xb4:
        goto code_r0x000a0890;
      case 0xb3:
        goto code_r0x000a0898;
      case 0xb5:
        goto code_r0x000a0824;
      case 0xb6:
        goto code_r0x000a07b4;
      case 0xb7:
        goto code_r0x000a07d0;
      case 0xb8:
      case 0xba:
        goto code_r0x000a082c;
      case 0xb9:
        goto code_r0x000a0858;
      case 0xbb:
        goto code_r0x000a07e0;
      case 0xbc:
        goto code_r0x000a07e4;
      case 0xbe:
        goto code_r0x000a0904;
      case 0xbf:
        goto code_r0x000a0940;
      case 0xc0:
        goto code_r0x000a0918;
      case 0xc1:
      case 0xc3:
        goto code_r0x000a090c;
      case 0xc2:
        goto code_r0x000a0930;
      case 0xc4:
      case 0xc6:
        goto code_r0x000a0a24;
      case 0xc5:
        goto code_r0x000a0a2c;
      case 199:
        goto code_r0x000a0a40;
      case 200:
      case 0xcd:
        goto code_r0x000a09d0;
      case 0xc9:
      case 0xcb:
        goto code_r0x000a09a8;
      case 0xca:
      case 0xcf:
        goto code_r0x0011b81c;
      case 0xcc:
        goto code_r0x000a09dc;
      case 0xce:
        goto code_r0x000a0a00;
      case 0xd0:
      case 0xd3:
        goto code_r0x000a0aa0;
      case 0xd1:
        goto code_r0x000a0a98;
      case 0xd2:
        goto code_r0x000a0ab4;
      case 0xd4:
        goto code_r0x000a0ae8;
      case 0xd5:
      case 0xd7:
        goto code_r0x000a0b30;
      case 0xd6:
      case 0xdc:
        goto code_r0x000a0b44;
      case 0xd8:
      case 0xda:
        goto code_r0x000a0afc;
      case 0xd9:
        goto code_r0x000a0af0;
      case 0xdb:
        goto code_r0x000a0b14;
      case 0xdd:
        goto code_r0x000a0b2c;
      case 0xde:
        goto code_r0x000a0b78;
      case 0xdf:
      case 0xe0:
        goto code_r0x000a0b68;
      case 0xe1:
        goto code_r0x000a0b94;
      case 0xe2:
      case 0xe4:
        goto code_r0x000a0bd0;
      case 0xe3:
        goto code_r0x000a0bd8;
      case 0xe5:
        goto code_r0x000a0bec;
      case 0xe6:
        goto code_r0x000a0c24;
      case 0xe7:
        goto code_r0x000a0c64;
      case 0xe8:
      case 0xeb:
        goto code_r0x000a0c38;
      case 0xe9:
        goto code_r0x000a0c2c;
      case 0xea:
        goto code_r0x000a0c50;
      case 0xec:
      case 0xef:
        goto code_r0x000a0c9c;
      case 0xed:
        goto code_r0x000a0cac;
      case 0xee:
        goto code_r0x000a0c88;
      case 0xf0:
      case 0xf2:
        goto code_r0x000a0d04;
      case 0xf1:
        goto code_r0x000a0cfc;
      case 0xf3:
        goto code_r0x000a0d18;
      case 0xf4:
        goto code_r0x000a0d4c;
      case 0xf5:
      case 0xf7:
        goto code_r0x000a0d80;
      case 0xf6:
        goto code_r0x000a0d88;
      case 0xf8:
      case 0xfc:
      case 0xff:
        goto code_r0x000a0dcc;
      case 0xf9:
        goto code_r0x000a0da4;
      case 0xfa:
        goto code_r0x000a0db0;
      case 0xfb:
      case 0xfd:
        goto code_r0x000a0dbc;
      case 0xfe:
        goto code_r0x000a0ddc;
      }
    case 0x8a:
    case 0xb1:
      goto code_r0x000a079c;
    case 0x8b:
      goto code_r0x000a04cc;
    case 0x8c:
      goto code_r0x000a0548;
    case 0x8d:
      goto code_r0x000a0648;
    case 0x8e:
      goto code_r0x000a0550;
    case 0x8f:
      goto code_r0x000a054c;
    case 0x90:
    case 0x9f:
      goto code_r0x000a06f4;
    case 0x91:
      goto code_r0x000a0584;
    case 0x92:
      goto code_r0x000a0590;
    case 0x93:
      goto code_r0x000a0588;
    case 0x94:
      goto code_r0x000a05b4;
    case 0x95:
      goto code_r0xaa1d03fd9401eca8;
    case 0x96:
      goto code_r0x000a05cc;
    case 0x97:
      goto code_r0x000a05c8;
    case 0x98:
    case 0x9a:
      goto code_r0x000a0600;
    case 0x99:
      goto code_r0x000a05f4;
    case 0x9b:
      goto code_r0x000a061c;
    case 0x9c:
      goto code_r0x000a0644;
    case 0x9d:
    case 0x9e:
      goto code_r0x000a06d8;
    case 0xa0:
      goto code_r0x000a0684;
    case 0xa1:
      goto code_r0x000a0674;
    case 0xa2:
      goto code_r0x000a0690;
    case 0xa3:
      goto code_r0x000a0688;
    case 0xa4:
      goto code_r0x000a0708;
    case 0xa5:
      goto code_r0x000a0700;
    case 0xa6:
    case 0xac:
      goto code_r0x000a0730;
    case 0xa7:
      goto code_r0x000a073c;
    case 0xa8:
    case 0xaa:
      goto code_r0x000a0760;
    case 0xa9:
      goto code_r0x000a075c;
    case 0xab:
    case 0xad:
      goto code_r0x000a0774;
    case 0xae:
    case 0xbd:
      goto code_r0x000a07e8;
    case 0xaf:
    case 0xb0:
      goto code_r0x000a0794;
    case 0xb2:
    case 0xb4:
      goto code_r0x000a0890;
    case 0xb3:
      goto code_r0x000a0898;
    case 0xb5:
      goto code_r0x000a0824;
    case 0xb6:
      goto code_r0x000a07b4;
    case 0xb7:
      goto code_r0x000a07d0;
    case 0xb8:
    case 0xba:
      goto code_r0x000a082c;
    case 0xb9:
      goto code_r0x000a0858;
    case 0xbb:
      goto code_r0x000a07e0;
    case 0xbc:
      goto code_r0x000a07e4;
    case 0xbe:
      goto code_r0x000a0904;
    case 0xbf:
      goto code_r0x000a0940;
    case 0xc0:
      goto code_r0x000a0918;
    case 0xc1:
    case 0xc3:
      goto code_r0x000a090c;
    case 0xc2:
      goto code_r0x000a0930;
    case 0xc4:
    case 0xc6:
      goto code_r0x000a0a24;
    case 0xc5:
      goto code_r0x000a0a2c;
    case 199:
      goto code_r0x000a0a40;
    case 200:
    case 0xcd:
      goto code_r0x000a09d0;
    case 0xc9:
    case 0xcb:
      goto code_r0x000a09a8;
    case 0xca:
    case 0xcf:
      goto code_r0x0011b81c;
    case 0xcc:
      goto code_r0x000a09dc;
    case 0xce:
      goto code_r0x000a0a00;
    case 0xd0:
    case 0xd3:
      goto code_r0x000a0aa0;
    case 0xd1:
      goto code_r0x000a0a98;
    case 0xd2:
      goto code_r0x000a0ab4;
    case 0xd4:
      goto code_r0x000a0ae8;
    case 0xd5:
    case 0xd7:
      goto code_r0x000a0b30;
    case 0xd6:
    case 0xdc:
      goto code_r0x000a0b44;
    case 0xd8:
    case 0xda:
      goto code_r0x000a0afc;
    case 0xd9:
      goto code_r0x000a0af0;
    case 0xdb:
      goto code_r0x000a0b14;
    case 0xdd:
      goto code_r0x000a0b2c;
    case 0xde:
      goto code_r0x000a0b78;
    case 0xdf:
    case 0xe0:
      goto code_r0x000a0b68;
    case 0xe1:
      goto code_r0x000a0b94;
    case 0xe2:
    case 0xe4:
      goto code_r0x000a0bd0;
    case 0xe3:
      goto code_r0x000a0bd8;
    case 0xe5:
      goto code_r0x000a0bec;
    case 0xe6:
      goto code_r0x000a0c24;
    case 0xe7:
      goto code_r0x000a0c64;
    case 0xe8:
    case 0xeb:
      goto code_r0x000a0c38;
    case 0xe9:
      goto code_r0x000a0c2c;
    case 0xea:
      goto code_r0x000a0c50;
    case 0xec:
    case 0xef:
      goto code_r0x000a0c9c;
    case 0xed:
      goto code_r0x000a0cac;
    case 0xee:
      goto code_r0x000a0c88;
    case 0xf0:
    case 0xf2:
      goto code_r0x000a0d04;
    case 0xf1:
      goto code_r0x000a0cfc;
    case 0xf3:
      goto code_r0x000a0d18;
    case 0xf4:
      goto code_r0x000a0d4c;
    case 0xf5:
    case 0xf7:
      goto code_r0x000a0d80;
    case 0xf6:
      goto code_r0x000a0d88;
    case 0xf8:
    case 0xfc:
    case 0xff:
      goto code_r0x000a0dcc;
    case 0xf9:
      goto code_r0x000a0da4;
    case 0xfa:
      goto code_r0x000a0db0;
    case 0xfb:
    case 0xfd:
      goto code_r0x000a0dbc;
    case 0xfe:
      goto code_r0x000a0ddc;
    }
  case 0x19:
  case 0x20:
code_r0x0009fbb0:
                    /* WARNING: Could not recover jumptable at 0x0009fbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001616f8)();
    return pcVar16;
  case 0x1a:
code_r0x0009fbe0:
    (**(code **)(unaff_x21 + 0xeb0))(param_1,param_2);
  case 0x1b:
  case 0x1c:
code_r0x0009fbf0:
    (**(code **)(unaff_x21 + 0xeb0))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0009fc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001616d8)();
    return pcVar16;
  case 0x1f:
code_r0x0009fc18:
    return param_1;
  case 0x21:
code_r0x0009fbb8:
    __Unwind_Resume(param_2);
    goto code_r0x0009fbc0;
  case 0x22:
  case 0x3a:
  case 0x3f:
code_r0x0009fe7c:
                    /* WARNING: Could not recover jumptable at 0x0009fe80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001617e0)();
    return pcVar16;
  case 0x23:
code_r0x0009fd60:
    _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
    _strlen((char *)param_1);
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161710;
  case 0x25:
code_r0x0009fd90:
                    /* WARNING: Could not recover jumptable at 0x0009fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0x24:
code_r0x0009fd98:
    uVar14 = _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x0009fdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161728)(uVar14);
    return pcVar16;
  case 0x26:
  case 0x28:
code_r0x0009ff90:
  case 0x27:
code_r0x0009ff98:
                    /* WARNING: Could not recover jumptable at 0x0009ffa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161738)(0);
    return pcVar16;
  case 0x29:
code_r0x0009ff6c:
    uVar15 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ__0012d918);
                    /* WARNING: Could not recover jumptable at 0x0009ff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161740))();
    return pcVar16;
  case 0x2a:
  case 0x33:
code_r0x0009fe24:
                    /* WARNING: Could not recover jumptable at 0x0009fe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161780)();
    return pcVar16;
  case 0x2b:
  case 0x2d:
code_r0x0009fdd0:
                    /* WARNING: Could not recover jumptable at 0x0009fdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161750)();
    return pcVar16;
  case 0x2c:
code_r0x0009fdd8:
    ___error();
                    /* WARNING: Could not recover jumptable at 0x0009fdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161768)(0x161000);
    return pcVar16;
  case 0x2e:
  case 0x30:
code_r0x0009fe0c:
    *(int *)param_1 = (int)unaff_x23;
    *(int *)param_1 = (int)unaff_x23;
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  case 0x2f:
code_r0x0009fdfc:
    *(int *)param_1 = (int)unaff_x23;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  case 0x31:
  case 0x32:
code_r0x0009fe34:
                    /* WARNING: Could not recover jumptable at 0x0009fe38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161798)();
    return pcVar16;
  case 0x34:
code_r0x0009fe3c:
  case 0x35:
  case 0x37:
code_r0x0009fe44:
                    /* WARNING: Could not recover jumptable at 0x0009fe54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001617a0)(0);
    return pcVar16;
  case 0x36:
code_r0x0009fe58:
                    /* WARNING: Could not recover jumptable at 0x0009fe68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((long)unaff_x22 * 8 + 0x1617b0))(0xffffffff);
    return pcVar16;
  case 0x38:
  case 0x44:
code_r0x0009fefc:
    return param_1;
  case 0x39:
  case 0x3b:
code_r0x0009fe70:
                    /* WARNING: Could not recover jumptable at 0x0009fe74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001617c0)();
    return pcVar16;
  case 0x3c:
  case 0x47:
code_r0x0009fed4:
                    /* WARNING: Could not recover jumptable at 0x0009fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161820)();
    return pcVar16;
  case 0x3d:
    goto code_r0x0009fef8;
  case 0x3e:
code_r0x0009fe84:
    switch((uint)param_2 >> 9 & 1) {
    case 1:
      goto code_r0x0009fec4;
    }
  case 0x40:
code_r0x0009fe9c:
                    /* WARNING: Could not recover jumptable at 0x0009febc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000189eb8)(param_1,param_2);
    return pcVar16;
  case 0x41:
code_r0x0009fec4:
                    /* WARNING: Could not recover jumptable at 0x0009fecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161808)();
    return pcVar16;
  case 0x42:
  case 0x45:
code_r0x0009ff14:
    puVar4[1] = (ulong)&stack0x00000000 | 8;
    pcVar16 = *(code **)(unaff_x21 + 0xeb8);
    *puVar4 = (ulong)in_stack_00000000;
    (*pcVar16)(param_1,param_2);
    puVar5 = puVar4;
  case 0x43:
code_r0x0009ff38:
    puVar5[1] = (ulong)&stack0x00000000 | 8;
    pcVar16 = *(code **)(unaff_x21 + 0xeb8);
    *puVar5 = (ulong)in_stack_00000000;
    (*pcVar16)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0009ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161810)();
    return pcVar16;
  case 0x46:
code_r0x0009fedc:
    __Unwind_Resume(param_2);
    param_1 = (code *)0x0;
    UNRECOVERED_JUMPTABLE_00 = pcRam00000000001617d0;
    goto code_r0x0009fef8;
  case 0x48:
  case 0x4d:
code_r0x000a00bc:
                    /* WARNING: Could not recover jumptable at 0x000a00c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161860)();
    return pcVar16;
  case 0x49:
code_r0x000a0004:
                    /* WARNING: Could not recover jumptable at 0x000a0018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161848)(0x15e790);
    return pcVar16;
  case 0x4a:
code_r0x000a001c:
  case 0x4b:
  case 0x4c:
code_r0x000a0064:
    bRam00000000001615f0 = (byte)*UNRECOVERED_JUMPTABLE_00 ^ 0xa3;
    bRam00000000001615f1 = (byte)UNRECOVERED_JUMPTABLE_00[1] ^ 0x9f;
    bRam00000000001615f2 = (byte)UNRECOVERED_JUMPTABLE_00[2] ^ 0xb0;
    bRam00000000001615f3 = (byte)UNRECOVERED_JUMPTABLE_00[3] ^ 0x43;
    bRam00000000001615f4 = (byte)UNRECOVERED_JUMPTABLE_00[4] ^ 0x30;
                    /* WARNING: Could not recover jumptable at 0x000a00b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161858)();
    return pcVar16;
  case 0x4e:
    goto code_r0x000a0420;
  case 0x4f:
  case 0x50:
code_r0x000a03fc:
    *(undefined4 *)unaff_x22 = 1;
    puVar6[-0x82] = (ulong)(puVar6 + -0x80);
    _fcntl((int)param_1,0x32);
    puVar7 = puVar6 + -0x80;
    goto code_r0x000a0420;
  case 0x52:
  case 0x83:
    goto code_r0x000a011c;
  case 0x53:
    goto code_r0x000a02d0;
  case 0x54:
code_r0x000a02e0:
    _objc_msgSend(unaff_x23[0x3f],*(undefined8 *)(unaff_x24 + 0xb78));
  case 0x55:
  case 0x57:
code_r0x000a02f4:
    uVar14 = _objc_msgSend(unaff_x23[0x3f],*(undefined8 *)(unaff_x24 + 0xb78));
                    /* WARNING: Could not recover jumptable at 0x000a0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001618a0)(uVar14);
    return pcVar16;
  case 0x56:
code_r0x000a0314:
    _strlen((char *)unaff_x21);
    uVar14 = _objc_msgSend(param_1,PTR_s_stringWithFileSystemRepresentati_0012e0e0);
                    /* WARNING: Could not recover jumptable at 0x000a034c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001618b8)(uVar14);
    return pcVar16;
  case 0x58:
code_r0x000a0350:
  case 0x59:
  case 0x5a:
code_r0x000a0358:
                    /* WARNING: Could not recover jumptable at 0x000a0368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001618c8)(0);
    return pcVar16;
  case 0x5b:
code_r0x000a0370:
    uVar15 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ__0012d918);
                    /* WARNING: Could not recover jumptable at 0x000a0390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x1618d0))();
    return pcVar16;
  case 0x5c:
  case 0x65:
code_r0x000a0398:
                    /* WARNING: Could not recover jumptable at 0x000a039c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161910)();
    return pcVar16;
  case 0x5d:
  case 0x5f:
code_r0x000a00c8:
                    /* WARNING: Could not recover jumptable at 0x000a00cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001618e0)();
    return pcVar16;
  case 0x5e:
code_r0x000a00d0:
    ___error();
                    /* WARNING: Could not recover jumptable at 0x000a00e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001618f0)(0x161000);
    return pcVar16;
  case 0x60:
code_r0x000a00e4:
    *(undefined4 *)param_1 = 9;
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  case 0x61:
  case 99:
code_r0x000a00fc:
    *(undefined4 *)param_1 = 9;
    *(undefined4 *)param_1 = 9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  default:
    goto code_r0x000a0258;
  case 100:
code_r0x000a0134:
    unaff_x23 = (ulong *)0x0;
    switch(param_2 != (_Unwind_Exception *)0x0) {
    case true:
      goto code_r0x000a0154;
    }
    goto code_r0x000a0258;
  case 0x67:
  case 0x69:
code_r0x000a0154:
                    /* WARNING: Could not recover jumptable at 0x000a0158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161930)();
    return pcVar16;
  case 0x68:
code_r0x000a0160:
    uVar15 = _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x000a0180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161940))();
    return pcVar16;
  case 0x6a:
  case 0x7c:
code_r0x000a024c:
    UNRECOVERED_JUMPTABLE_00 = pcRam00000000001619e0;
  case 0x7f:
code_r0x000a0254:
                    /* WARNING: Could not recover jumptable at 0x000a0254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0x6b:
code_r0x000a0188:
    (*pcRam0000000000189ec0)(param_1,param_2);
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161950;
  case 0x6d:
code_r0x000a01a4:
                    /* WARNING: Could not recover jumptable at 0x000a01a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0x6c:
code_r0x000a01a8:
    switch((int)unaff_x22 == 0) {
    case true:
      goto code_r0x000a01c4;
    }
    break;
  case 0x6e:
  case 0x72:
  case 0x79:
    break;
  case 0x6f:
  case 0x70:
code_r0x000a01c4:
                    /* WARNING: Could not recover jumptable at 0x000a01c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161978)();
    return pcVar16;
  case 0x71:
code_r0x000a01cc:
    switch(0x80 < (long)param_2[2].exception_class) {
    case true:
      goto code_r0x000a0200;
    }
    break;
  case 0x73:
code_r0x000a0200:
                    /* WARNING: Could not recover jumptable at 0x000a0204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161998)();
    return pcVar16;
  case 0x74:
code_r0x000a0208:
    param_2[2].exception_class = 0x80;
  case 0x75:
  case 0x76:
code_r0x000a0210:
    param_2[2].exception_class = 0x80;
                    /* WARNING: Could not recover jumptable at 0x000a0228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001619a8)(0);
    return pcVar16;
  case 0x77:
  case 0x78:
code_r0x000a022c:
                    /* WARNING: Could not emulate address calculation at 0x000a0234 */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((long)UNRECOVERED_JUMPTABLE_00 * 8 + 0x1619c0))();
    return pcVar16;
  case 0x7b:
  case 0x7d:
code_r0x000a0240:
                    /* WARNING: Could not recover jumptable at 0x000a0244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam00000000001619d0)();
    return pcVar16;
  case 0x80:
    goto code_r0x000a0278;
  case 0x81:
  case 0x82:
    goto code_r0x000a02b0;
  case 0x84:
code_r0x000a03c0:
  case 0x85:
  case 0x87:
code_r0x000a03c8:
                    /* WARNING: Could not recover jumptable at 0x000a03d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161a20)(0);
    return pcVar16;
  case 0x86:
code_r0x000a03dc:
    __Unwind_Resume(param_2);
    pcVar16 = extraout_x0;
  case 0x51:
code_r0x000a03e4:
    switch((int)pcVar16 != -1) {
    case true:
code_r0x000a02d0:
                    /* WARNING: Could not recover jumptable at 0x000a02dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar16 = (code *)(*pcRam0000000000161898)();
      return pcVar16;
    }
code_r0x000a011c:
    unaff_x22 = (code *)(*pcRam0000000000189ec0)(param_1,param_2);
code_r0x000a0278:
    if (*(long *)PTR____stack_chk_guard_0012c080 != lStack_48) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return unaff_x22;
  case 0x88:
code_r0x000a04b0:
    switch(param_1 != (code *)0x0) {
    case true:
      goto code_r0x000a04cc;
    }
  case 0x8a:
  case 0xb1:
code_r0x000a079c:
    switch((uint)param_2 >> 9 & 1) {
    case 1:
code_r0x000a07d0:
                    /* WARNING: Could not recover jumptable at 0x000a07d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar16 = (code *)(*pcRam0000000000161bb8)();
      return pcVar16;
    }
code_r0x000a07b4:
    (*pcRam0000000000189ec8)();
code_r0x000a07e0:
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161bd8;
code_r0x000a07e4:
                    /* WARNING: Could not recover jumptable at 0x000a07e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0x89:
    goto code_r0x000a0494;
  case 0x8b:
code_r0x000a04cc:
    uVar14 = _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
    sVar13 = _strlen((char *)param_1);
    uVar14 = _objc_msgSend(uVar14,PTR_s_stringWithFileSystemRepresentati_0012e0e0,param_1,sVar13);
    uVar15 = _objc_msgSend(uVar14,PTR_s_isAbsolutePath_0012dd88);
                    /* WARNING: Could not recover jumptable at 0x000a0540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161a50))();
    return pcVar16;
  case 0x8c:
code_r0x000a0548:
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161a60;
  case 0x8f:
code_r0x000a054c:
                    /* WARNING: Could not recover jumptable at 0x000a054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0x8d:
code_r0x000a0648:
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161b10;
    goto code_r0x000a0700;
  case 0x8e:
code_r0x000a0550:
    puVar9[-2] = (ulong)unaff_x23;
    iVar12 = _fcntl((int)unaff_x21,0x32);
    switch(iVar12 != -1) {
    case true:
      goto code_r0x000a0584;
    }
  case 0x90:
  case 0x9f:
code_r0x000a06f4:
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161b10;
    goto code_r0x000a0700;
  case 0x91:
code_r0x000a0584:
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161a80;
code_r0x000a0588:
                    /* WARNING: Could not recover jumptable at 0x000a0588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0x92:
code_r0x000a0590:
    _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8);
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  case 0x93:
    goto code_r0x000a0588;
  case 0x94:
code_r0x000a05b4:
    _strlen((char *)unaff_x23);
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161aa0;
  case 0x97:
code_r0x000a05c8:
                    /* WARNING: Could not recover jumptable at 0x000a05c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0x95:
code_r0xaa1d03fd9401eca8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x96:
code_r0x000a05cc:
    uVar14 = _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x000a05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161ab0)(uVar14);
    return pcVar16;
  case 0x98:
  case 0x9a:
    goto code_r0x000a0600;
  case 0x99:
code_r0x000a05f4:
    *unaff_x28 = (ulong)unaff_x23;
code_r0x000a0600:
    *unaff_x28 = (ulong)unaff_x23;
                    /* WARNING: Could not recover jumptable at 0x000a0614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161ac8)(0);
    return pcVar16;
  case 0x9b:
code_r0x000a061c:
    uVar14 = _objc_msgSend(unaff_x23,PTR_s_stringByAppendingPathComponent__0012e0a8);
                    /* WARNING: Could not recover jumptable at 0x000a0640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161ad0)(uVar14);
    return pcVar16;
  case 0x9c:
code_r0x000a0644:
    goto code_r0x000a06b8;
  case 0x9d:
  case 0x9e:
code_r0x000a06d8:
code_r0x000a06b8:
                    /* WARNING: Could not recover jumptable at 0x000a06d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161ae8)(0);
    return pcVar16;
  case 0xa0:
code_r0x000a0684:
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161b00;
  case 0xa3:
code_r0x000a0688:
                    /* WARNING: Could not recover jumptable at 0x000a0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0xa1:
    goto code_r0x000a0674;
  case 0xa2:
code_r0x000a0690:
                    /* WARNING: Could not recover jumptable at 0x000a0694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161b88)();
    return pcVar16;
  case 0xa4:
code_r0x000a0708:
    uVar15 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ__0012d918);
                    /* WARNING: Could not recover jumptable at 0x000a0728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161b20))();
    return pcVar16;
  case 0xa5:
    goto code_r0x000a0700;
  case 0xa6:
  case 0xac:
code_r0x000a0730:
                    /* WARNING: Could not recover jumptable at 0x000a0738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161b58)();
    return pcVar16;
  case 0xa7:
code_r0x000a073c:
    ___error();
                    /* WARNING: Could not recover jumptable at 0x000a0758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161b30)();
    return pcVar16;
  case 0xa8:
  case 0xaa:
    goto code_r0x000a0760;
  case 0xa9:
code_r0x000a075c:
    *(int *)param_1 = (int)unaff_x23;
code_r0x000a0760:
    *(int *)param_1 = (int)unaff_x23;
                    /* WARNING: Could not recover jumptable at 0x000a0770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161b48)();
    return pcVar16;
  case 0xab:
  case 0xad:
code_r0x000a0774:
                    /* WARNING: Could not recover jumptable at 0x000a078c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)(unaff_x24 * 8 + 0x161b60))(0xffffffff);
    return pcVar16;
  case 0xae:
  case 0xbd:
code_r0x000a07e8:
    if (*(long *)PTR____stack_chk_guard_0012c080 != lStack_68) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return param_1;
  case 0xaf:
  case 0xb0:
code_r0x000a0794:
                    /* WARNING: Could not recover jumptable at 0x000a0798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161b78)();
    return pcVar16;
  case 0xb2:
  case 0xb4:
code_r0x000a0890:
  case 0xb3:
code_r0x000a0898:
                    /* WARNING: Could not recover jumptable at 0x000a08a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161b98)(0);
    return pcVar16;
  case 0xb5:
code_r0x000a0824:
    __Unwind_Resume(param_2);
    puVar3 = puVar10;
  case 0xb8:
  case 0xba:
code_r0x000a082c:
    puVar11 = puVar3;
    *unaff_x27 = (ulong)&stack0x00000000 | 8;
    pcVar16 = *(code **)(unaff_x22 + 0xec8);
    puVar11[-2] = (ulong)in_stack_00000000;
    (*pcVar16)();
code_r0x000a0858:
    *unaff_x27 = (ulong)&stack0x00000000 | 8;
    pcVar16 = *(code **)(unaff_x22 + 0xec8);
    puVar11[-2] = (ulong)in_stack_00000000;
    (*pcVar16)();
                    /* WARNING: Could not recover jumptable at 0x000a088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161bc8)();
    return pcVar16;
  case 0xb6:
    goto code_r0x000a07b4;
  case 0xb7:
    goto code_r0x000a07d0;
  case 0xb9:
    goto code_r0x000a0858;
  case 0xbb:
    goto code_r0x000a07e0;
  case 0xbc:
    goto code_r0x000a07e4;
  case 0xbe:
code_r0x000a0904:
                    /* WARNING: Could not recover jumptable at 0x000a0908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161bf0)();
    return pcVar16;
  case 0xbf:
    goto code_r0x000a0940;
  case 0xc0:
    goto code_r0x000a0918;
  case 0xc1:
  case 0xc3:
code_r0x000a090c:
code_r0x000a0918:
                    /* WARNING: Could not recover jumptable at 0x000a092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161c00)(param_2);
    return pcVar16;
  case 0xc2:
code_r0x000a0930:
    unaff_x22 = (code *)(*unaff_x22)();
code_r0x000a0940:
    return unaff_x22;
  case 0xc4:
  case 0xc6:
code_r0x000a0a24:
  case 0xc5:
code_r0x000a0a2c:
                    /* WARNING: Could not recover jumptable at 0x000a0a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161c28)();
    return pcVar16;
  case 199:
code_r0x000a0a40:
    uVar15 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000a0a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161c30))();
    return pcVar16;
  case 200:
  case 0xcd:
code_r0x000a09d0:
                    /* WARNING: Could not recover jumptable at 0x000a09d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161c50)();
    return pcVar16;
  case 0xc9:
  case 0xcb:
code_r0x000a09a8:
                    /* WARNING: Could not recover jumptable at 0x000a09b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161c40)();
    return pcVar16;
  case 0xca:
  case 0xcf:
code_r0x0011b81c:
                    /* WARNING: Could not recover jumptable at 0x0011b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*(code *)PTR__objc_autoreleaseReturnValue_0012c478)(param_1);
    return pcVar16;
  case 0xcc:
code_r0x000a09dc:
    (*pcRam0000000000189ed8)();
  case 0xce:
code_r0x000a0a00:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  case 0xd0:
  case 0xd3:
    goto code_r0x000a0aa0;
  case 0xd1:
code_r0x000a0a98:
code_r0x000a0aa0:
                    /* WARNING: Could not recover jumptable at 0x000a0ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161c80)();
    return pcVar16;
  case 0xd2:
code_r0x000a0ab4:
    uVar15 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000a0ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161c90))();
    return pcVar16;
  case 0xd4:
code_r0x000a0ae8:
                    /* WARNING: Could not recover jumptable at 0x000a0aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161cb0)();
    return pcVar16;
  case 0xd5:
  case 0xd7:
code_r0x000a0b30:
                    /* WARNING: Could not recover jumptable at 0x000a0b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161ca0)();
    return pcVar16;
  case 0xd6:
  case 0xdc:
code_r0x000a0b44:
                    /* WARNING: Could not recover jumptable at 0x000a0b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161ce0)();
    return pcVar16;
  case 0xd8:
  case 0xda:
    goto code_r0x000a0afc;
  case 0xd9:
code_r0x000a0af0:
code_r0x000a0afc:
                    /* WARNING: Could not recover jumptable at 0x000a0b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161cc8)(param_2);
    return pcVar16;
  case 0xdb:
code_r0x000a0b14:
    (*unaff_x22)();
    UNRECOVERED_JUMPTABLE_00 = pcRam0000000000161cd0;
  case 0xdd:
code_r0x000a0b2c:
                    /* WARNING: Could not recover jumptable at 0x000a0b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return pcVar16;
  case 0xde:
    goto code_r0x000a0b78;
  case 0xdf:
  case 0xe0:
code_r0x000a0b68:
code_r0x000a0b78:
                    /* WARNING: Could not recover jumptable at 0x000a0b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161cf8)(0);
    return pcVar16;
  case 0xe1:
code_r0x000a0b94:
    return unaff_x21;
  case 0xe2:
  case 0xe4:
code_r0x000a0bd0:
  case 0xe3:
code_r0x000a0bd8:
                    /* WARNING: Could not recover jumptable at 0x000a0be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161d18)();
    return pcVar16;
  case 0xe5:
code_r0x000a0bec:
    uVar15 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_partial__0012d8e0,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000a0c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161d20))();
    return pcVar16;
  case 0xe6:
code_r0x000a0c24:
                    /* WARNING: Could not recover jumptable at 0x000a0c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161d30)();
    return pcVar16;
  case 0xe7:
    goto code_r0x000a0c64;
  case 0xe8:
  case 0xeb:
    goto code_r0x000a0c38;
  case 0xe9:
code_r0x000a0c2c:
code_r0x000a0c38:
                    /* WARNING: Could not recover jumptable at 0x000a0c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161d40)(param_2);
    return pcVar16;
  case 0xea:
code_r0x000a0c50:
    (*unaff_x22)();
code_r0x000a0c64:
                    /* WARNING: Could not recover jumptable at 0x000a0c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161d58)();
    return pcVar16;
  case 0xec:
  case 0xef:
code_r0x000a0c9c:
  case 0xed:
code_r0x000a0cac:
                    /* WARNING: Could not recover jumptable at 0x000a0cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161d60)(0);
    return pcVar16;
  case 0xee:
code_r0x000a0c88:
    return unaff_x22;
  case 0xf0:
  case 0xf2:
    goto code_r0x000a0d04;
  case 0xf1:
code_r0x000a0cfc:
code_r0x000a0d04:
                    /* WARNING: Could not recover jumptable at 0x000a0d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161d88)();
    return pcVar16;
  case 0xf3:
code_r0x000a0d18:
    uVar15 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000a0d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)((uVar15 & 0xffffffff) * 8 + 0x161d90))();
    return pcVar16;
  case 0xf4:
code_r0x000a0d4c:
    (*pcRam0000000000189ef0)(param_2,unaff_x23,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a0d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161df8)();
    return pcVar16;
  case 0xf5:
  case 0xf7:
code_r0x000a0d80:
                    /* WARNING: Could not recover jumptable at 0x000a0d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161da0)();
    return pcVar16;
  case 0xf6:
code_r0x000a0d88:
    switch(unaff_x21 != (code *)0x0) {
    case true:
      goto code_r0x000a0da4;
    }
  case 0xf8:
  case 0xfc:
  case 0xff:
code_r0x000a0dcc:
                    /* WARNING: Could not recover jumptable at 0x000a0dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161de0)();
    return pcVar16;
  case 0xf9:
code_r0x000a0da4:
                    /* WARNING: Could not recover jumptable at 0x000a0dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161dc0)(0x161000);
    return pcVar16;
  case 0xfa:
code_r0x000a0db0:
    *(undefined8 *)unaff_x21 = 0;
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  case 0xfb:
  case 0xfd:
code_r0x000a0dbc:
    *(undefined8 *)unaff_x21 = 0;
    *(undefined8 *)unaff_x21 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  case 0xfe:
code_r0x000a0ddc:
    return unaff_x21;
  }
                    /* WARNING: Could not recover jumptable at 0x000a01f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar16 = (code *)(*pcRam00000000001619b0)(1);
  return pcVar16;
code_r0x000a0258:
  param_1 = (code *)0x0;
  switch((int)unaff_x23 == 0) {
  case true:
code_r0x000a02b0:
                    /* WARNING: Could not recover jumptable at 0x000a02b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*pcRam0000000000161a08)(param_1);
    return pcVar16;
  }
  goto code_r0x000a0278;
code_r0x000a0700:
                    /* WARNING: Could not recover jumptable at 0x000a0700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
  return pcVar16;
code_r0x000a0420:
  *(undefined4 *)unaff_x22 = 1;
  puVar7[-0x82] = (ulong)(puVar7 + -0x80);
  iVar12 = _fcntl((int)param_1,0x32);
                    /* WARNING: Could not recover jumptable at 0x000a044c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar16 = (code *)(*pcRam0000000000161878)(iVar12);
  return pcVar16;
code_r0x0009fef8:
                    /* WARNING: Could not recover jumptable at 0x0009fef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar16 = (code *)(*UNRECOVERED_JUMPTABLE_00)(param_1);
  return pcVar16;
code_r0x0009fbc0:
                    /* WARNING: Could not recover jumptable at 0x0009fbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar16 = (code *)(**(code **)((long)unaff_x23 * 8 + 0x1616a0))();
  return pcVar16;
code_r0x0009fd04:
  uVar14 = _objc_msgSend(*(undefined8 *)(unaff_x21 + 0x1f8),unaff_x23[0x16f]);
                    /* WARNING: Could not recover jumptable at 0x0009fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar16 = (code *)(*pcRam0000000000161630)(uVar14);
  return pcVar16;
code_r0x0009fbd4:
                    /* WARNING: Could not recover jumptable at 0x0009fbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar16 = (code *)(*pcRam00000000001616c8)();
  return pcVar16;
}



/* 0009fd24 FUN_0009fd24 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_0009fd24(char *param_1)

{
  switch(param_1 != (char *)0x0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0009fe80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000001617e0)();
    return;
  case true:
    _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
    _strlen(param_1);
                    /* WARNING: Could not recover jumptable at 0x0009fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000161710)();
    return;
  }
}



/* 0009ffac FUN_0009ffac */

void FUN_0009ffac(void)

{
  switch(iRam000000000018a514 == 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000a00c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000161860)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000a0018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000161848)(0x15e790);
    return;
  }
}



/* 000a0450 FUN_000a0450 */

void FUN_000a0450(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a04ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161a30)();
  return;
}



/* 000a08ac FUN_000a08ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a08ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000a08fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x161be0))();
  return;
}



/* 000a0980 FUN_000a0980 */

void FUN_000a0980(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a09a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161c18)();
  return;
}



/* 000a0a70 FUN_000a0a70 */

void FUN_000a0a70(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a0a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161c70)();
  return;
}



/* 000a0ba8 FUN_000a0ba8 */

void FUN_000a0ba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a0bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161d08)();
  return;
}



/* 000a0cc8 FUN_000a0cc8 */

void FUN_000a0cc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a0cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161d70)();
  return;
}



/* 000a0e20 FUN_000a0e20 */

void FUN_000a0e20(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a0e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161e08)();
  return;
}



/* 000a0f8c FUN_000a0f8c */

void FUN_000a0f8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a0fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161ea0)();
  return;
}



/* 000a107c FUN_000a107c */

void FUN_000a107c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a10a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161f00)();
  return;
}



/* 000a119c FUN_000a119c */

void FUN_000a119c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a11cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000161f88)();
  return;
}



/* 000a12f4 FUN_000a12f4 */

void FUN_000a12f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a1324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000162038)();
  return;
}



/* 000a1424 FUN_000a1424 */

void FUN_000a1424(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001620b0)();
  return;
}



/* 000a15ec FUN_000a15ec */

void FUN_000a15ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a1608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001621b0)();
  return;
}



/* 000a176c FUN_000a176c */

void FUN_000a176c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a1790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000162288)();
  return;
}



/* 000a19b0 FUN_000a19b0 */

void FUN_000a19b0(long param_1)

{
  switch(param_1 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000a1b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000162488)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000a19ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000162390)();
    return;
  }
}



/* 000a1bd4 FUN_000a1bd4 */

void FUN_000a1bd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001624b0)();
  return;
}



/* 000a1ef8 FUN_000a1ef8 */

void FUN_000a1ef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a1f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001625e8)(0xeb07d75e);
  return;
}



/* 000a2624 FUN_000a2624 */

void FUN_000a2624(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a2648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000162858)();
  return;
}



/* 000a270c FUN_000a270c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a270c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_manager__0012d920,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a2764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x1628b0))();
  return;
}



/* 000a27e8 FUN_000a27e8 */

void FUN_000a27e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a280c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001628f8)();
  return;
}



/* 000a28fc FUN_000a28fc */

void FUN_000a28fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a2920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000162980)();
  return;
}



/* 000a2a1c FUN_000a2a1c */

void FUN_000a2a1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a2a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000162a28)();
  return;
}



/* 000a2b24 FUN_000a2b24 */

void FUN_000a2b24(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a2b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000162aa8)();
  return;
}



/* 000a2c2c FUN_000a2c2c */

void FUN_000a2c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000162b20)(0x162000);
  return;
}



/* 000a4bec FUN_000a4bec */

void FUN_000a4bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a4c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000163038)();
  return;
}



/* 000a5020 FUN_000a5020 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a5020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_manager__0012d8d0,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a5068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001631c0)();
  return;
}



/* 000a5110 FUN_000a5110 */

void FUN_000a5110(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a5148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000163230)();
  return;
}



/* 000a52bc FUN_000a52bc */

void FUN_000a52bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a5304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001632f0)();
  return;
}



/* 000a54a0 FUN_000a54a0 */

void FUN_000a54a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a54ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000163390)();
  return;
}



/* 000a5ab8 FUN_000a5ab8 */

void FUN_000a5ab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a5b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000163698)();
  return;
}



/* 000a611c FUN_000a611c */

void FUN_000a611c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a6160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001639f8)();
  return;
}



/* 000a649c FUN_000a649c */

void FUN_000a649c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a64cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000163ae8)();
  return;
}



/* 000a682c FUN_000a682c */

void FUN_000a682c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a6874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000163c38)();
  return;
}



/* 000a6df0 FUN_000a6df0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a6df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_manager__0012d920,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a6e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x163ee0))();
  return;
}



/* 000a7364 FUN_000a7364 */

void FUN_000a7364(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a7398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164188)();
  return;
}



/* 000a7500 FUN_000a7500 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a7500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_manager__0012d920,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x164230))();
  return;
}



/* 000a7668 FUN_000a7668 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a7668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_manager__0012d8d0,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a76d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x164290))();
  return;
}



/* 000a77b8 FUN_000a77b8 */

void FUN_000a77b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a77ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164300)();
  return;
}



/* 000a795c FUN_000a795c */

void FUN_000a795c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a7980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001643c8)();
  return;
}



/* 000a7a84 FUN_000a7a84 */

void FUN_000a7a84(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164458)();
  return;
}



/* 000a7b90 FUN_000a7b90 */

void FUN_000a7b90(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a7bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001644c8)();
  return;
}



/* 000a7d00 FUN_000a7d00 */

void FUN_000a7d00(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a7d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164570)();
  return;
}



/* 000a7e68 FUN_000a7e68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a7e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_manager__0012d920,param_4,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a7ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x164620))();
  return;
}



/* 000a7fb0 FUN_000a7fb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a7fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_manager__0012d920,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a7ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001646a0)();
  return;
}



/* 000a80a0 FUN_000a80a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a80a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ__0012d918,param_3);
                    /* WARNING: Could not recover jumptable at 0x000a8100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x1646f0))();
  return;
}



/* 000a81f0 FUN_000a81f0 */

void FUN_000a81f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a8228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164788)();
  return;
}



/* 000a83b4 FUN_000a83b4 */

void FUN_000a83b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a83f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164850)();
  return;
}



/* 000a84f4 FUN_000a84f4 */

void FUN_000a84f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a8518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001648d8)();
  return;
}



/* 000a85fc FUN_000a85fc */

void FUN_000a85fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164950)();
  return;
}



/* 000a8900 FUN_000a8900 */

void FUN_000a8900(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a8934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164aa8)();
  return;
}



/* 000a8b7c FUN_000a8b7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a8b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_manager__0012d8d0,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a8be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x164be0))();
  return;
}



/* 000a8e28 FUN_000a8e28 */

void FUN_000a8e28(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a8e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164d28)();
  return;
}



/* 000a9050 FUN_000a9050 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a9050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_manager__0012d920,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000a90a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x164e30))();
  return;
}



/* 000a9244 FUN_000a9244 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a9244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu__0012d8c8,param_3);
                    /* WARNING: Could not recover jumptable at 0x000a9294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164f48)();
  return;
}



/* 000a9394 FUN_000a9394 */

void FUN_000a9394(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a93b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000164fd8)();
  return;
}



/* 000a94d8 FUN_000a94d8 */

void FUN_000a94d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a94fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000165070)();
  return;
}



/* 000a95dc FUN_000a95dc */

void FUN_000a95dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a960c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001650f8)();
  return;
}



/* 000a972c FUN_000a972c */

void FUN_000a972c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a9764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001651a8)();
  return;
}



/* 000a9884 FUN_000a9884 */

void FUN_000a9884(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a98a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000165220)();
  return;
}



/* 000a9990 FUN_000a9990 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a9990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu__0012d8c8,param_3);
                    /* WARNING: Could not recover jumptable at 0x000a99d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x165290))();
  return;
}



/* 000a9a7c FUN_000a9a7c */

void FUN_000a9a7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a9aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001652e8)();
  return;
}



/* 000a9bdc FUN_000a9bdc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000a9bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu__0012d8c8,param_3);
                    /* WARNING: Could not recover jumptable at 0x000a9c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x165370))();
  return;
}



/* 000a9cd0 FUN_000a9cd0 */

void FUN_000a9cd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a9d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001653d0)();
  return;
}



/* 000a9ea8 FUN_000a9ea8 */

void FUN_000a9ea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a9ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001654a8)();
  return;
}



/* 000a9fb4 FUN_000a9fb4 */

void FUN_000a9fb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000a9fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000165518)();
  return;
}



/* 000aa108 FUN_000aa108 */

void FUN_000aa108(void)

{
                    /* WARNING: Could not recover jumptable at 0x000aa134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001655c0)();
  return;
}



/* 000aa24c FUN_000aa24c */

void FUN_000aa24c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000aa278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000165670)();
  return;
}



/* 000aa3c8 FUN_000aa3c8 */

void FUN_000aa3c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000aa3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000165730)(0x18a524);
  return;
}



/* 000aa90c FUN_000aa90c */

void FUN_000aa90c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000aa9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000165978)(0xbf076148);
  return;
}



/* 000ab820 FUN_000ab820 */

void FUN_000ab820(long param_1,undefined8 param_2)

{
  switch(param_1 != 0) {
  case false:
    (*pcRam000000000018a0e8)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000ab940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000165e08)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000ab864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000165d38)();
    return;
  }
}



/* 000aba2c FUN_000aba2c */

void FUN_000aba2c(long param_1)

{
  switch(param_1 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000abb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000165f28)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000aba74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000165e20)();
    return;
  }
}



/* 000abc9c FUN_000abc9c */

void FUN_000abc9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000abcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000165f68)(0x18a52c);
  return;
}



/* 000ac0e8 FUN_000ac0e8 */

void FUN_000ac0e8(void)

{
  switch(iRam000000000018a530 == 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000ac6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000001661d8)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000ac1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000001661b0)
              (&UNK_0011f000,0x15f420,0x15f440,&UNK_0011f000,0x15f460,0x15f478,0x15f488,
               &UNK_00120000);
    return;
  }
}



/* 000acb68 FUN_000acb68 */

void FUN_000acb68(void)

{
                    /* WARNING: Could not recover jumptable at 0x000acbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000166518)();
  return;
}



/* 000ad1e0 FUN_000ad1e0 */

void FUN_000ad1e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ad210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000166778)(0x18a538);
  return;
}



/* 000ad69c FUN_000ad69c */

void FUN_000ad69c(undefined8 param_1,long param_2)

{
  switch(param_2 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000ad84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000001669f8)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000ad6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000166918)();
    return;
  }
}



/* 000ad90c FUN_000ad90c */

void FUN_000ad90c(undefined8 param_1,long param_2)

{
  switch(param_2 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000adabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000166b08)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000ad968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000166a58)();
    return;
  }
}



/* 000adb44 FUN_000adb44 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_000adb44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  switch(param_1 != 0) {
  case false:
    (*pcRam000000000018a128)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000adc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000166bc8)();
    return;
  case true:
    uVar1 = _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
                    /* WARNING: Could not recover jumptable at 0x000adba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000166b50)(uVar1);
    return;
  }
}



/* 000adf20 FUN_000adf20 */

void FUN_000adf20(void)

{
                    /* WARNING: Could not recover jumptable at 0x000adf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000166d20)();
  return;
}



/* 000ae304 FUN_000ae304 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_000ae304(long param_1,long param_2)

{
  undefined8 uVar1;
  
  switch(param_1 != 0) {
  case true:
    switch(param_2 != 0) {
    case true:
      uVar1 = _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
                    /* WARNING: Could not recover jumptable at 0x000ae3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*pcRam0000000000166ed0)(uVar1);
      return uVar1;
    }
  }
  uVar1 = (*pcRam000000000018a138)(param_1,param_2);
  return uVar1;
}



/* 000ae594 FUN_000ae594 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_000ae594(char *param_1)

{
  undefined8 uVar1;
  size_t sVar2;
  
  switch(param_1 != (char *)0x0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000ae6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000167030)();
    return;
  case true:
    uVar1 = _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
    sVar2 = _strlen(param_1);
    uVar1 = _objc_msgSend(uVar1,PTR_s_stringWithFileSystemRepresentati_0012e0e0,param_1,sVar2);
                    /* WARNING: Could not recover jumptable at 0x000ae614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000166f88)(uVar1);
    return;
  }
}



/* 000ae784 FUN_000ae784 */

void FUN_000ae784(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ae7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000167070)();
  return;
}



/* 000ae968 FUN_000ae968 */

void FUN_000ae968(undefined8 param_1,long param_2)

{
  switch(param_2 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000aeaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000001672a8)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000ae9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000167150)();
    return;
  }
}



/* 000aed34 FUN_000aed34 */

void FUN_000aed34(void)

{
                    /* WARNING: Could not recover jumptable at 0x000aed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001672d0)();
  return;
}



/* 000aef40 FUN_000aef40 */

void FUN_000aef40(long param_1)

{
  switch(param_1 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000af00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000018a160)(param_1);
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000aef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000001673d0)();
    return;
  }
}



/* 000af0ec FUN_000af0ec */

void FUN_000af0ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000af120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000167480)();
  return;
}



/* 000af3a0 FUN_000af3a0 */

void FUN_000af3a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000af3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001675d0)();
  return;
}



/* 000af748 FUN_000af748 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_000af748(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  size_t sVar2;
  
  switch(param_2 != (char *)0x0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000afaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000001678e8)();
    return;
  case true:
    uVar1 = _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
    sVar2 = _strlen(param_2);
    uVar1 = _objc_msgSend(uVar1,PTR_s_stringWithFileSystemRepresentati_0012e0e0,param_2,sVar2);
                    /* WARNING: Could not recover jumptable at 0x000af7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000167778)(uVar1);
    return;
  }
}



/* 000afb4c FUN_000afb4c */

void FUN_000afb4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000afbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000167920)();
  return;
}



/* 000b000c FUN_000b000c */

void FUN_000b000c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000167b60)(0x18a53c);
  return;
}



/* 000b03c8 FUN_000b03c8 */

void FUN_000b03c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b04e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000167ce0)
            (0x1113f01b,0xc42b782a,0x91018797,0xa67305d2,0x9ddb3851,0xbdc38b4,0x7222767f,0x5f8d97b9,
             0x4d0a769a);
  return;
}



/* 000b1b74 FUN_000b1b74 */

undefined8 FUN_000b1b74(void)

{
  return 1;
}



/* 000b1b7c FUN_000b1b7c */

void FUN_000b1b7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b1ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168458)();
  return;
}



/* 000b1c94 FUN_000b1c94 */

void FUN_000b1c94(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b1cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001684d0)();
  return;
}



/* 000b1de4 FUN_000b1de4 */

void FUN_000b1de4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b1e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168570)();
  return;
}



/* 000b1efc FUN_000b1efc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b1efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu__0012d8c8,param_3);
                    /* WARNING: Could not recover jumptable at 0x000b1f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x1685f0))();
  return;
}



/* 000b2020 FUN_000b2020 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b2020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ__0012d918,param_3);
                    /* WARNING: Could not recover jumptable at 0x000b2068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x168670))();
  return;
}



/* 000b2114 FUN_000b2114 */

void FUN_000b2114(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b2140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001686d0)();
  return;
}



/* 000b2260 FUN_000b2260 */

void FUN_000b2260(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b2300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168780)(0xebf1933b);
  return;
}



/* 000b25cc FUN_000b25cc */

void FUN_000b25cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b2654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168890)(0xa910937);
  return;
}



/* 000b2a8c FUN_000b2a8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b2a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu__0012d8c8,param_3);
                    /* WARNING: Could not recover jumptable at 0x000b2ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168a20)();
  return;
}



/* 000b2b78 FUN_000b2b78 */

void FUN_000b2b78(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b2bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168a90)(0x168000);
  return;
}



/* 000b2df8 FUN_000b2df8 */

void FUN_000b2df8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b2e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168b50)();
  return;
}



/* 000b2f1c FUN_000b2f1c */

void FUN_000b2f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b2f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168be0)();
  return;
}



/* 000b3034 FUN_000b3034 */

void FUN_000b3034(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b3058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168c68)();
  return;
}



/* 000b314c FUN_000b314c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b314c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ__0012d918,param_3);
                    /* WARNING: Could not recover jumptable at 0x000b3194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x168ce0))();
  return;
}



/* 000b3240 FUN_000b3240 */

undefined8 FUN_000b3240(void)

{
  return 1;
}



/* 000b3248 FUN_000b3248 */

void FUN_000b3248(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168d40)();
  return;
}



/* 000b3380 FUN_000b3380 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b3380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b33c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168dd8)();
  return;
}



/* 000b3464 FUN_000b3464 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b3464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b34b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x168e30))();
  return;
}



/* 000b3584 FUN_000b3584 */

void FUN_000b3584(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b35a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168eb8)();
  return;
}



/* 000b36c8 FUN_000b36c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b36c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b3710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168f50)();
  return;
}



/* 000b37b8 FUN_000b37b8 */

void FUN_000b37b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b37dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000168fa0)();
  return;
}



/* 000b38c0 FUN_000b38c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b38c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x169000))();
  return;
}



/* 000b39d4 FUN_000b39d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b39d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b3a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x169070))();
  return;
}



/* 000b3aac FUN_000b3aac */

void FUN_000b3aac(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b3ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001690c8)();
  return;
}



/* 000b3bd4 FUN_000b3bd4 */

void FUN_000b3bd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b3bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169150)();
  return;
}



/* 000b3d18 FUN_000b3d18 */

void FUN_000b3d18(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b3d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001691f8)();
  return;
}



/* 000b3e5c FUN_000b3e5c */

void FUN_000b3e5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b3e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169298)();
  return;
}



/* 000b3f4c FUN_000b3f4c */

void FUN_000b3f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b3f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001692e0)();
  return;
}



/* 000b4078 FUN_000b4078 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b4078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_partial__0012d8e0,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b40cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x169360))();
  return;
}



/* 000b41bc FUN_000b41bc */

void FUN_000b41bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b41e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001693e0)();
  return;
}



/* 000b42e4 FUN_000b42e4 */

void FUN_000b42e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b4310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169470)();
  return;
}



/* 000b4450 FUN_000b4450 */

void FUN_000b4450(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b4474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169538)();
  return;
}



/* 000b4578 FUN_000b4578 */

void FUN_000b4578(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b45a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001695c0)();
  return;
}



/* 000b46e4 FUN_000b46e4 */

void FUN_000b46e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b4714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169678)();
  return;
}



/* 000b4898 FUN_000b4898 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b4898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b48ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169750)();
  return;
}



/* 000b49e4 FUN_000b49e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b49e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b4a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x1697e0))();
  return;
}



/* 000b4af8 FUN_000b4af8 */

void FUN_000b4af8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169840)();
  return;
}



/* 000b4c6c FUN_000b4c6c */

void FUN_000b4c6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b4c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001698f0)();
  return;
}



/* 000b5088 FUN_000b5088 */

void FUN_000b5088(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b50c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169b38)();
  return;
}



/* 000b5430 FUN_000b5430 */

void FUN_000b5430(undefined8 param_1,long param_2)

{
  switch(param_2 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000b54b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000169d30)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000b5494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000169d18)();
    return;
  }
}



/* 000b59f0 FUN_000b59f0 */

undefined8 FUN_000b59f0(void)

{
  return 0;
}



/* 000b59f8 FUN_000b59f8 */

undefined8 FUN_000b59f8(void)

{
  return 0;
}



/* 000b5a00 FUN_000b5a00 */

undefined8 FUN_000b5a00(void)

{
  return 0;
}



/* 000b5a08 FUN_000b5a08 */

undefined8 FUN_000b5a08(void)

{
  return 0;
}



/* 000b5a10 FUN_000b5a10 */

undefined8 FUN_000b5a10(void)

{
  return 0;
}



/* 000b5a18 FUN_000b5a18 */

undefined8 FUN_000b5a18(void)

{
  return 0;
}



/* 000b5a20 FUN_000b5a20 */

undefined8 FUN_000b5a20(void)

{
  return 0;
}



/* 000b5a28 FUN_000b5a28 */

undefined8 FUN_000b5a28(void)

{
  return 0;
}



/* 000b5a30 FUN_000b5a30 */

undefined8 FUN_000b5a30(void)

{
  return 0;
}



/* 000b5a38 FUN_000b5a38 */

undefined8 FUN_000b5a38(void)

{
  return 0;
}



/* 000b5a40 FUN_000b5a40 */

undefined8 FUN_000b5a40(void)

{
  return 0;
}



/* 000b5a48 FUN_000b5a48 */

undefined8 FUN_000b5a48(void)

{
  return 0;
}



/* 000b5a50 FUN_000b5a50 */

undefined8 FUN_000b5a50(void)

{
  return 0;
}



/* 000b5a58 FUN_000b5a58 */

undefined8 FUN_000b5a58(void)

{
  return 0;
}



/* 000b5a60 FUN_000b5a60 */

undefined8 FUN_000b5a60(void)

{
  return 0;
}



/* 000b5a68 FUN_000b5a68 */

undefined8 FUN_000b5a68(void)

{
  return 0;
}



/* 000b5a70 FUN_000b5a70 */

undefined8 FUN_000b5a70(void)

{
  return 0;
}



/* 000b5a78 FUN_000b5a78 */

undefined8 FUN_000b5a78(void)

{
  return 0;
}



/* 000b5a80 FUN_000b5a80 */

undefined8 FUN_000b5a80(void)

{
  return 0;
}



/* 000b5a88 FUN_000b5a88 */

undefined8 FUN_000b5a88(void)

{
  return 0;
}



/* 000b5a90 FUN_000b5a90 */

undefined8 FUN_000b5a90(void)

{
  return 0;
}



/* 000b5a98 FUN_000b5a98 */

undefined8 FUN_000b5a98(void)

{
  return 0;
}



/* 000b5aa0 FUN_000b5aa0 */

undefined8 FUN_000b5aa0(void)

{
  return 0;
}



/* 000b5aa8 FUN_000b5aa8 */

undefined8 FUN_000b5aa8(void)

{
  return 0;
}



/* 000b5ab0 FUN_000b5ab0 */

undefined8 FUN_000b5ab0(void)

{
  return 0;
}



/* 000b5ab8 FUN_000b5ab8 */

undefined8 FUN_000b5ab8(void)

{
  return 0;
}



/* 000b5ac0 FUN_000b5ac0 */

undefined8 FUN_000b5ac0(void)

{
  return 0;
}



/* 000b5ac8 FUN_000b5ac8 */

undefined8 FUN_000b5ac8(void)

{
  return 0;
}



/* 000b5ad0 FUN_000b5ad0 */

undefined8 FUN_000b5ad0(void)

{
  return 0;
}



/* 000b5ad8 FUN_000b5ad8 */

undefined8 FUN_000b5ad8(void)

{
  return 0;
}



/* 000b5ae0 FUN_000b5ae0 */

undefined8 FUN_000b5ae0(void)

{
  return 1;
}



/* 000b5ae8 FUN_000b5ae8 */

void FUN_000b5ae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000169fc0)(0x1f8426bf);
  return;
}



/* 000b6028 FUN_000b6028 */

void FUN_000b6028(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a1b8)(0x18a544);
  return;
}



/* 000b643c FUN_000b643c */

void FUN_000b643c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b6464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a3a8)();
  return;
}



/* 000b6660 FUN_000b6660 */

void FUN_000b6660(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b6688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a4c8)();
  return;
}



/* 000b687c FUN_000b687c */

void FUN_000b687c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b68a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a5b0)();
  return;
}



/* 000b697c FUN_000b697c */

void FUN_000b697c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b69a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a618)();
  return;
}



/* 000b6a88 FUN_000b6a88 */

void FUN_000b6a88(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b6ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a688)();
  return;
}



/* 000b6b98 FUN_000b6b98 */

void FUN_000b6b98(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b6bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a6f8)();
  return;
}



/* 000b6d04 FUN_000b6d04 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b6d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_partial__0012d8e0,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b6d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x16a7b0))();
  return;
}



/* 000b6df0 FUN_000b6df0 */

void FUN_000b6df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b6e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a818)();
  return;
}



/* 000b6f08 FUN_000b6f08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b6f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_X1Vxmhs7sQ_partial__0012d930,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b6f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a890)(uVar1);
  return;
}



/* 000b7050 FUN_000b7050 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b7050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_partial__0012d8e0,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b70a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x16a930))();
  return;
}



/* 000b710c FUN_000b710c */

void FUN_000b710c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b713c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016a958)();
  return;
}



/* 000b727c FUN_000b727c */

void FUN_000b727c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b72b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016aa28)();
  return;
}



/* 000b73f8 FUN_000b73f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b73f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_partial__0012d8e0,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b7450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016aad8)();
  return;
}



/* 000b7538 FUN_000b7538 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b7538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_partial__0012d8e0,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x000b75a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x16ab60))();
  return;
}



/* 000b766c FUN_000b766c */

void FUN_000b766c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b76a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016abd8)();
  return;
}



/* 000b7814 FUN_000b7814 */

void FUN_000b7814(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b7848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016ac80)();
  return;
}



/* 000b7994 FUN_000b7994 */

void FUN_000b7994(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b79c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016ad00)();
  return;
}



/* 000b7ad8 FUN_000b7ad8 */

void FUN_000b7ad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b7b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016ad90)();
  return;
}



/* 000b7c2c FUN_000b7c2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_000b7c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_msgSend(uRam0000000000189ea8,PTR_s_EVVsBEpJu_manager__0012d8d0,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x000b7c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016ae48)();
  return;
}



/* 000b7d70 FUN_000b7d70 */

void FUN_000b7d70(long param_1)

{
  switch(param_1 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000b7f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000016aff0)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000b7db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000016aef8)();
    return;
  }
}



/* 000b7fb4 FUN_000b7fb4 */

void FUN_000b7fb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b804c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b028)(1);
  return;
}



/* 000b80d0 FUN_000b80d0 */

undefined8 FUN_000b80d0(void)

{
  int *piVar1;
  
  piVar1 = ___error();
  *piVar1 = 0x4e;
  return 0xffffffff;
}



/* 000b80f0 FUN_000b80f0 */

void FUN_000b80f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b8188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b098)(1);
  return;
}



/* 000b820c FUN_000b820c */

void FUN_000b820c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b8294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b108)(0x9b891a5e);
  return;
}



/* 000b86a0 FUN_000b86a0 */

void FUN_000b86a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b8714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b290)(0x5937ddc2);
  return;
}



/* 000b88fc FUN_000b88fc */

void FUN_000b88fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b898c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b368)(0xcfb3177c);
  return;
}



/* 000b8d70 FUN_000b8d70 */

void FUN_000b8d70(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b8df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b4f0)(0xe6902fdd);
  return;
}



/* 000b9310 FUN_000b9310 */

undefined8 FUN_000b9310(void)

{
  return 0x1f5;
}



/* 000b9318 FUN_000b9318 */

undefined8 FUN_000b9318(void)

{
  return 0x1f5;
}



/* 000b9320 FUN_000b9320 */

undefined8 FUN_000b9320(void)

{
  return 0x1f5;
}



/* 000b9328 FUN_000b9328 */

undefined8 FUN_000b9328(void)

{
  return 0x1f5;
}



/* 000b9330 FUN_000b9330 */

void FUN_000b9330(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b93b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b6e0)(0x248d4016);
  return;
}



/* 000b984c FUN_000b984c */

void FUN_000b984c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b98e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b898)(0xfc329132);
  return;
}



/* 000b9c60 FUN_000b9c60 */

void FUN_000b9c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x000b9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016b9e8)(0xa12728a9);
  return;
}



/* 000ba7c0 FUN_000ba7c0 */

void FUN_000ba7c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ba7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016bd58)();
  return;
}



/* 000ba9a0 FUN_000ba9a0 */

void FUN_000ba9a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ba9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016be58)(0x18a548);
  return;
}



/* 000bb030 FUN_000bb030 */

void FUN_000bb030(void)

{
                    /* WARNING: Could not recover jumptable at 0x000bb0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016c008)(0x6d587ff7);
  return;
}



/* 000bb1a0 FUN_000bb1a0 */

void FUN_000bb1a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000bb240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000016c070)(0);
  return;
}



/* 000bb2b4 _DoEbgDnUjc */

void _DoEbgDnUjc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000bb364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001772b8)(0xa6c090b2,param_1,0x5c37583f);
  return;
}



/* 000bce08 _DoEbgDjUjc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void _DoEbgDjUjc(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0012e1f8,PTR_s_defaultManager_0012db78);
  _objc_msgSend(uVar1,PTR_s_fileExistsAtPath_isDirectory__0012dc00,uRam000000000018a6f0,0);
                    /* WARNING: Could not recover jumptable at 0x000bceec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000177480)(0x464b7c28);
  return;
}



/* 000bd38c _DoEBgDjUjc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _DoEBgDjUjc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000bd440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000177618)();
  return;
}



/* 000bd4e8 _DoEBgDjUjHec */

void _DoEBgDjUjHec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000bd574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000177688)(0x9beb13f0);
  return;
}



/* 000bfd60 _DBEBgDjUjHec */

void _DBEBgDjUjHec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000bfde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000178158)(0x9e9e9175);
  return;
}



/* 000c2304 _DBEBgDjUjHbc */

void _DBEBgDjUjHbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000c2384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000178bc8)(0xc8851d);
  return;
}



/* 000d5ab0 _DBEBgDjUGdbc */

void _DBEBgDjUGdbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000d5b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000017c918)(0x8f0ef376);
  return;
}



/* 000d7260 _getInternalName */

void _getInternalName(void)

{
                    /* WARNING: Could not recover jumptable at 0x000d72cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000017ca88)(0xda089fd8);
  return;
}



/* 000f1a18 _getCpuVersion */

void _getCpuVersion(void)

{
                    /* WARNING: Could not recover jumptable at 0x000f1ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001829b8)(0xb45dc13a);
  return;
}



/* 00108460 _getBuildVersion */

void _getBuildVersion(void)

{
                    /* WARNING: Could not recover jumptable at 0x001084f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001880a0)();
  return;
}



/* 00114af4 _RgruogupvH */

void _RgruogupvH(void)

{
                    /* WARNING: Could not recover jumptable at 0x00114be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000001883a0)(0x5e0c2f92);
  return;
}



/* 00119d14 FUN_00119d14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119d14(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(double *)PTR__kCFCoreFoundationVersionNumber_0012c168 < _UNK_00121040) {
    uVar1 = _objc_getClass("NSMutableDictionary");
    auVar4 = _protocol_getMethodDescription
                       (PTR___ARCLiteKeyedSubscripting___0012e1f0,
                        PTR_s_setObject_forKeyedSubscript__0012e058,1,1);
    _class_replaceMethod(uVar1,auVar4._0_8_,FUN_0011a040,auVar4._8_8_);
  }
  if (PTR__objc_readClassPair_0012c1c8 == (undefined *)0x0) {
    __dyld_register_func_for_add_image(FUN_0011a050);
    lVar2 = _objc_getClass("NSUndoManagerProxy");
    if ((lVar2 != 0) &&
       (lRam000000000018a570 = _class_getInstanceVariable(lVar2,"_targetClass"),
       lRam000000000018a570 != 0)) {
      _class_addMethod(lVar2,PTR_s_isKindOfClass__0012de20,FUN_0011a434,"@:#");
    }
    lVar2 = _objc_getClass("NSManagedObject");
    if (lVar2 != 0) {
      uVar1 = _object_getClass();
      lVar2 = _class_getInstanceMethod(lVar2,PTR_s_init_0012dcc0);
      if (lVar2 == 0) {
        pcRam000000000018a578 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a578 = (code *)_method_setImplementation(lVar2,FUN_0011a488);
      }
      lVar2 = _class_getInstanceMethod(uVar1,PTR_s_allocWithEntity__0012d9a0);
      if (lVar2 == 0) {
        pcRam000000000018a580 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a580 = (code *)_method_setImplementation(lVar2,FUN_0011a4a4);
      }
      lVar2 = _class_getInstanceMethod(uVar1,PTR_s_allocBatch_withEntity_count__0012d998);
      if (lVar2 == 0) {
        pcRam000000000018a588 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a588 = (code *)_method_setImplementation(lVar2,FUN_0011a4c0);
      }
    }
    uRam000000000018a590 = _objc_getClass("NSMutableDictionary");
    uRam000000000018a598 = _objc_getClass("NSConstantString");
    uRam000000000018a5a0 = _objc_getClass("NSString");
    lVar2 = _objc_getClass("NSKnownKeysMappingStrategy1");
    if (lVar2 != 0) {
      lVar3 = _class_getInstanceMethod(lVar2,PTR_s_fastIndexForKnownKey__0012dbf0);
      if (lVar3 == 0) {
        pcRam000000000018a5a8 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a5a8 = (code *)_method_setImplementation(lVar3,FUN_0011a510);
      }
      lVar2 = _class_getInstanceMethod(lVar2,PTR_s_indexForKey__0012dca8);
      if (lVar2 == 0) {
        pcRam000000000018a5b0 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a5b0 = (code *)_method_setImplementation(lVar2,FUN_0011a578);
      }
    }
    lVar2 = _objc_getClass("NSKnownKeysDictionary1");
    if (lVar2 != 0) {
      lVar3 = _class_getInstanceMethod(lVar2,PTR_s_objectForKey__0012df38);
      if (lVar3 == 0) {
        pcRam000000000018a5b8 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a5b8 = (code *)_method_setImplementation(lVar3,FUN_0011a5e0);
      }
      lVar3 = _class_getInstanceMethod(lVar2,PTR_s_removeObjectForKey__0012dfe8);
      if (lVar3 == 0) {
        pcRam000000000018a5c0 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a5c0 = (code *)_method_setImplementation(lVar3,FUN_0011a648);
      }
      lVar3 = _class_getInstanceMethod(lVar2,PTR_s_setObject_forKey__0012e050);
      if (lVar3 == 0) {
        pcRam000000000018a5c8 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a5c8 = (code *)_method_setImplementation(lVar3,FUN_0011a6b4);
      }
      lVar2 = _class_getInstanceMethod(lVar2,PTR_s_addEntriesFromDictionary__0012d958);
      if (lVar2 == 0) {
        pcRam000000000018a5d0 = FUN_0011b4a4;
      }
      else {
        pcRam000000000018a5d0 = (code *)_method_setImplementation(lVar2,FUN_0011a734);
      }
    }
  }
  return;
}



/* 0011a040 FUN_0011a040 */

void FUN_0011a040(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    FUN_0011bf40();
    return;
  }
  FUN_0011bf20(param_1,param_2,param_4);
  return;
}



/* 0011a050 FUN_0011a050 */

void FUN_0011a050(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_80;
  long local_70;
  long local_68;
  
  if ((bRam000000000018a688 & 1) == 0) {
    pcRam000000000018a5d8 = "_objc_readClassPair";
    pcRam000000000018a5e0 = FUN_0011a800;
    pcRam000000000018a5e8 = "_objc_allocateClassPair";
    pcRam000000000018a5f0 = FUN_0011aaf0;
    puRam000000000018a690 = PTR__objc_allocateClassPair_0012c180;
    pcRam000000000018a5f8 = "_object_getIndexedIvars";
    pcRam000000000018a600 = FUN_0011abc0;
    puRam000000000018a698 = PTR__object_getIndexedIvars_0012c1d0;
    pcRam000000000018a608 = "_objc_getClass";
    pcRam000000000018a610 = FUN_0011ac20;
    puRam000000000018a6a0 = PTR__objc_getClass_0012c198;
    pcRam000000000018a618 = "_objc_getMetaClass";
    pcRam000000000018a620 = FUN_0011ac88;
    puRam000000000018a6a8 = PTR__objc_getMetaClass_0012c1a0;
    pcRam000000000018a628 = "_objc_getRequiredClass";
    pcRam000000000018a630 = FUN_0011acf0;
    puRam000000000018a6b0 = PTR__objc_getRequiredClass_0012c1b0;
    pcRam000000000018a638 = "_objc_lookUpClass";
    pcRam000000000018a640 = FUN_0011ad58;
    puRam000000000018a6b8 = PTR__objc_lookUpClass_0012c1b8;
    pcRam000000000018a648 = "_objc_getProtocol";
    pcRam000000000018a650 = FUN_0011adc0;
    puRam000000000018a6c0 = PTR__objc_getProtocol_0012c1a8;
    pcRam000000000018a658 = "_class_getName";
    pcRam000000000018a660 = FUN_0011ae28;
    puRam000000000018a6c8 = PTR__class_getName_0012c0b8;
    pcRam000000000018a668 = "_protocol_getName";
    pcRam000000000018a670 = FUN_0011ae48;
    puRam000000000018a6d0 = PTR__protocol_getName_0012c208;
    pcRam000000000018a678 = "_objc_copyClassNamesForImage";
    pcRam000000000018a680 = FUN_0011ae68;
    puRam000000000018a6d8 = PTR__objc_copyClassNamesForImage_0012c188;
    bRam000000000018a688 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    lVar14 = 0;
    local_80 = 0;
    piVar11 = (int *)(param_1 + 0x20);
    piVar7 = piVar11;
    iVar10 = iVar1;
    do {
      if (*piVar7 == 0x19) {
        iVar3 = _strcmp((char *)(piVar7 + 2),"__TEXT");
        if (iVar3 == 0) {
          local_80 = param_1 - *(long *)(piVar7 + 6);
        }
        else {
          iVar3 = _strcmp((char *)(piVar7 + 2),"__LINKEDIT");
          if (iVar3 == 0) {
            lVar14 = (*(long *)(piVar7 + 6) + local_80) - *(long *)(piVar7 + 10);
          }
        }
      }
      piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (lVar14 != 0) {
      local_70 = 0;
      local_68 = 0;
      uVar9 = 0;
      lVar8 = 0;
      piVar7 = piVar11;
      iVar10 = iVar1;
      do {
        if (*piVar7 == 0xb) {
          lVar8 = lVar14 + (ulong)(uint)piVar7[0xe];
        }
        else if (*piVar7 == 2) {
          uVar9 = piVar7[5];
          local_70 = lVar14 + (ulong)(uint)piVar7[4];
          local_68 = lVar14 + (ulong)(uint)piVar7[2];
        }
        piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (((local_68 != 0) && (local_70 != 0)) && (lVar8 != 0)) {
        iVar10 = 0;
        do {
          if (*piVar11 == 0x19) {
            piVar7 = piVar11 + 0x12;
            piVar5 = piVar7 + (ulong)(uint)piVar11[0x10] * 0x14;
            for (; piVar7 < piVar5; piVar7 = piVar7 + 0x14) {
              if (((char)piVar7[0x10] == '\a') && (uVar6 = *(ulong *)(piVar7 + 10), 7 < uVar6)) {
                uVar12 = 0;
                lVar14 = *(long *)(piVar7 + 8);
                iVar3 = piVar7[0x11];
                do {
                  uVar2 = *(uint *)(lVar8 + (ulong)(uint)((int)uVar12 + iVar3) * 4);
                  if (uVar2 < uVar9) {
                    lVar13 = 0;
                    uVar2 = *(uint *)(local_68 + (ulong)uVar2 * 0x10);
                    do {
                      iVar4 = _strcmp(*(char **)(lVar13 + 0x18a5d8),
                                      (char *)(local_70 + (ulong)uVar2));
                      if (iVar4 == 0) {
                        *(undefined8 *)(lVar14 + local_80 + uVar12 * 8) =
                             *(undefined8 *)(lVar13 + 0x18a5e0);
                        break;
                      }
                      lVar13 = lVar13 + 0x10;
                    } while (lVar13 != 0xb0);
                  }
                  uVar12 = (ulong)((int)uVar12 + 1);
                } while (uVar12 < uVar6 >> 3);
              }
            }
          }
          piVar11 = (int *)((long)piVar11 + (ulong)(uint)piVar11[1]);
          iVar10 = iVar10 + 1;
        } while (iVar10 != iVar1);
      }
    }
  }
  return;
}



/* 0011a434 FUN_0011a434 */

byte FUN_0011a434(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = _object_getIvar(param_1,uRam000000000018a570);
  bVar1 = lVar2 == 0;
  if (!bVar1 && lVar2 != param_3) {
    do {
      lVar2 = _class_getSuperclass();
      bVar1 = lVar2 == 0;
      if (lVar2 == 0) break;
    } while (lVar2 != param_3);
  }
  return bVar1 ^ 1;
}



/* 0011a488 FUN_0011a488 */

void FUN_0011a488(void)

{
  (*pcRam000000000018a578)();
  FUN_0011b4a8();
  return;
}



/* 0011a4a4 FUN_0011a4a4 */

void FUN_0011a4a4(void)

{
  (*pcRam000000000018a580)();
  FUN_0011b4a8();
  return;
}



/* 0011a4c0 FUN_0011a4c0 */

ulong FUN_0011a4c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (*pcRam000000000018a588)();
  if ((int)uVar1 != 0) {
    uVar2 = uVar1 & 0xffffffff;
    do {
      FUN_0011b4a8(*param_3);
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return uVar1;
}



/* 0011a510 FUN_0011a510 */

undefined8 FUN_0011a510(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0011b4dc(param_3);
  uVar2 = (*pcRam000000000018a5a8)(param_1,param_2,lVar1);
  if (lVar1 != param_3) {
    FUN_0011bf00(lVar1);
  }
  return uVar2;
}



/* 0011a578 FUN_0011a578 */

undefined8 FUN_0011a578(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0011b4dc(param_3);
  uVar2 = (*pcRam000000000018a5b0)(param_1,param_2,lVar1);
  if (lVar1 != param_3) {
    FUN_0011bf00(lVar1);
  }
  return uVar2;
}



/* 0011a5e0 FUN_0011a5e0 */

undefined8 FUN_0011a5e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0011b4dc(param_3);
  uVar2 = (*pcRam000000000018a5b8)(param_1,param_2,lVar1);
  if (lVar1 != param_3) {
    FUN_0011bf00(lVar1);
  }
  return uVar2;
}



/* 0011a648 FUN_0011a648 */

void FUN_0011a648(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_0011b4dc(param_3);
  (*pcRam000000000018a5c0)(param_1,param_2,lVar1);
  if (lVar1 != param_3) {
    FUN_0011bf00(lVar1);
    return;
  }
  return;
}



/* 0011a6b4 FUN_0011a6b4 */

void FUN_0011a6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = FUN_0011b4dc(param_4);
  (*pcRam000000000018a5c8)(param_1,param_2,param_3,lVar1);
  if (lVar1 != param_4) {
    FUN_0011bf00(lVar1);
    return;
  }
  return;
}



/* 0011a734 FUN_0011a734 */

void FUN_0011a734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  FUN_0011be00(uRam000000000018a590);
  uVar1 = FUN_0011be40();
  uVar2 = FUN_0011be80(param_3);
  lVar3 = FUN_0011bec0();
  while (lVar3 != 0) {
    auVar5 = FUN_0011b4dc(lVar3);
    lVar4 = auVar5._0_8_;
    auVar5 = FUN_0011bee0(param_3,auVar5._8_8_,lVar3);
    FUN_0011bf40(uVar1,auVar5._8_8_,auVar5._0_8_,lVar4);
    if (lVar4 != lVar3) {
      FUN_0011bf00(lVar4);
    }
    lVar3 = FUN_0011bec0(uVar2);
  }
  (*pcRam000000000018a5d0)(param_1,param_2,uVar1);
  FUN_0011bf00(uVar1);
  return;
}



/* 0011a800 FUN_0011a800 */

long FUN_0011a800(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  lVar4 = *(long *)PTR____stack_chk_guard_0012c080;
  puVar20 = (undefined8 *)*param_1;
  uVar19 = param_1[4];
  pbVar16 = (byte *)(uVar19 & 0x7ffffffffff8);
  if (*(int *)pbVar16 < 0) {
    pbVar16 = *(byte **)(pbVar16 + 8);
  }
  uVar21 = puVar20[4];
  piVar17 = (int *)(uVar21 & 0x7ffffffffff8);
  if (*piVar17 < 0) {
    piVar17 = *(int **)(piVar17 + 2);
  }
  if ((param_1[1] == 0) && ((*pbVar16 >> 1 & 1) == 0)) {
    lVar18 = 0;
  }
  else {
    uVar24 = param_1[1];
    uVar22 = *param_1;
    uVar28 = param_1[3];
    uVar26 = param_1[2];
    uVar5 = param_1[4];
    uVar25 = puVar20[1];
    uVar23 = *puVar20;
    uVar29 = puVar20[3];
    uVar27 = puVar20[2];
    uVar6 = puVar20[4];
    uVar3 = _objc_msgSend(param_1[1],PTR_s_self_0012e038);
    _bzero(param_1,0x28);
    _bzero(puVar20,0x28);
    lVar18 = _objc_initializeClassPair(uVar3,*(undefined8 *)(pbVar16 + 0x18),param_1,puVar20);
    if (lVar18 == 0) {
      param_1[1] = uVar24;
      *param_1 = uVar22;
      param_1[3] = uVar28;
      param_1[2] = uVar26;
      param_1[4] = uVar5;
      puVar20[4] = uVar6;
      puVar20[1] = uVar25;
      *puVar20 = uVar23;
      puVar20[3] = uVar29;
      puVar20[2] = uVar27;
    }
    else {
      uVar3 = _object_getClass(lVar18);
      param_1[4] = param_1[4] | uVar19 & 0xffff800000000007;
      puVar20[4] = puVar20[4] | uVar21 & 0xffff800000000007;
      puVar7 = (uint *)(*(ulong *)(lVar18 + 0x20) & 0x7ffffffffff8);
      if ((int)*puVar7 < 0) {
        puVar7 = *(uint **)(puVar7 + 2);
      }
      piVar8 = *(int **)(pbVar16 + 0x30);
      if (piVar8 != (int *)0x0) {
        uVar19 = (ulong)(uint)piVar8[1];
        if (piVar8[1] == 0) {
          uVar15 = puVar7[1] - *(uint *)(pbVar16 + 4);
        }
        else {
          uVar14 = 0;
          iVar11 = *piVar8;
          uVar15 = 1;
          uVar21 = uVar19;
          do {
            plVar1 = (long *)((long)piVar8 + uVar14 + 8);
            uVar13 = uVar15;
            if (*plVar1 != 0) {
              uVar2 = *(uint *)(plVar1 + 3);
              uVar13 = 8;
              if (uVar2 != 0xffffffff) {
                uVar13 = 1 << (ulong)(uVar2 & 0x1f);
              }
              if (uVar13 <= uVar15) {
                uVar13 = uVar15;
              }
            }
            uVar15 = uVar13;
            uVar14 = (ulong)(uint)((int)uVar14 + iVar11);
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
          uVar15 = puVar7[1] + ~*(uint *)(pbVar16 + 4) + uVar15 & -uVar15;
          uVar13 = 1;
          while( true ) {
            piVar12 = *(int **)((long)piVar8 + (ulong)(iVar11 * (uVar13 - 1)) + 8);
            if (piVar12 != (int *)0x0 && uVar15 != 0) {
              *piVar12 = *piVar12 + uVar15;
              uVar19 = (ulong)(uint)piVar8[1];
            }
            if ((uint)uVar19 <= uVar13) break;
            iVar11 = *piVar8;
            uVar13 = uVar13 + 1;
          }
        }
        if ((char)*pbVar16 < '\0') {
          pcVar9 = *(char **)(pbVar16 + 0x10);
          pcVar10 = *(char **)(pbVar16 + 0x38);
          *puVar7 = *puVar7 | 0x80;
        }
        else {
          pcVar9 = "";
          pcVar10 = "";
        }
        *(char **)(puVar7 + 4) = pcVar9;
        *(int **)(puVar7 + 0xc) = piVar8;
        *(char **)(puVar7 + 0xe) = pcVar10;
        *(ulong *)(puVar7 + 1) =
             CONCAT44((int)((ulong)*(undefined8 *)(pbVar16 + 4) >> 0x20) + uVar15,
                      (int)*(undefined8 *)(pbVar16 + 4) + uVar15);
      }
      FUN_0011aee8(lVar18,pbVar16);
      FUN_0011aee8(uVar3,piVar17);
      FUN_0011af78(lVar18,pbVar16);
      FUN_0011af78(uVar3,piVar17);
      FUN_0011afe0(lVar18,pbVar16);
      FUN_0011afe0(uVar3,piVar17);
      if ((*pbVar16 >> 1 & 1) != 0) {
        _class_addMethod(uVar3,PTR_s_initialize_0012dd70,FUN_0011b07c,"v@:");
      }
      _objc_registerClassPair(lVar18);
    }
  }
  if (*(long *)PTR____stack_chk_guard_0012c080 == lVar4) {
    return lVar18;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* 0011aaf0 FUN_0011aaf0 */

void FUN_0011aaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _object_getClass();
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && ((*(byte *)(lVar1 + 0x20) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0011ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000018a690)(param_1,param_2,param_3);
    return;
  }
  lVar2 = FUN_0011b080(param_1,param_3);
  lVar3 = FUN_0011b080(lVar1,param_3);
  _objc_initializeClassPair(param_1,param_2,lVar2,lVar3);
  *(ulong *)(lVar2 + 0x20) = *(ulong *)(param_1 + 0x20) & 1 | *(ulong *)(lVar2 + 0x20);
  *(ulong *)(lVar3 + 0x20) = *(ulong *)(lVar1 + 0x20) & 1 | *(ulong *)(lVar3 + 0x20);
  return;
}



/* 0011abc0 FUN_0011abc0 */

long FUN_0011abc0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    _object_getClass();
    uVar1 = _class_isMetaClass();
    if (((uVar1 & 1) == 0) || ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0011abfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*pcRam000000000018a698)(param_1);
      return lVar2;
    }
    lVar2 = (param_1 - (ulong)*(uint *)(param_1 + 0x3c)) +
            (ulong)(*(int *)(param_1 + 0x38) + 7U & 0xfffffff8);
  }
  return lVar2;
}



/* 0011ac20 FUN_0011ac20 */

long FUN_0011ac20(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_0011b104(param_1,0);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_getClass();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0011ac84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*pcRam000000000018a6a0)(param_1);
  return lVar2;
}



/* 0011ac88 FUN_0011ac88 */

long FUN_0011ac88(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_0011b104(param_1,0);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_getMetaClass();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0011acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*pcRam000000000018a6a8)(param_1);
  return lVar2;
}



/* 0011acf0 FUN_0011acf0 */

long FUN_0011acf0(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_0011b104(param_1,0);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_getRequiredClass();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0011ad54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*pcRam000000000018a6b0)(param_1);
  return lVar2;
}



/* 0011ad58 FUN_0011ad58 */

long FUN_0011ad58(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_0011b104(param_1,0);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_lookUpClass();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0011adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*pcRam000000000018a6b8)(param_1);
  return lVar2;
}



/* 0011adc0 FUN_0011adc0 */

long FUN_0011adc0(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)FUN_0011b104(param_1,1);
  if (pvVar1 != (void *)0x0) {
    lVar2 = _objc_getProtocol();
    _free(pvVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0011ae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*pcRam000000000018a6c0)(param_1);
  return lVar2;
}



/* 0011ae28 FUN_0011ae28 */

void FUN_0011ae28(void)

{
  undefined8 uVar1;
  
  uVar1 = (*pcRam000000000018a6c8)();
  FUN_0011b250(uVar1,0);
  return;
}



/* 0011ae48 FUN_0011ae48 */

void FUN_0011ae48(void)

{
  undefined8 uVar1;
  
  uVar1 = (*pcRam000000000018a6d0)();
  FUN_0011b250(uVar1,1);
  return;
}



/* 0011ae68 FUN_0011ae68 */

long FUN_0011ae68(undefined8 param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_34;
  
  lVar1 = (*pcRam000000000018a6d8)(param_1,&local_34);
  if (lVar1 != 0 && local_34 != 0) {
    uVar3 = 0;
    do {
      uVar2 = FUN_0011b250(*(undefined8 *)(lVar1 + uVar3 * 8),0);
      *(undefined8 *)(lVar1 + uVar3 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_34);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = local_34;
  }
  return lVar1;
}



/* 0011aee8 FUN_0011aee8 */

void FUN_0011aee8(long param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  piVar3 = *(int **)(param_2 + 0x20);
  if (piVar3 != (int *)0x0) {
    if (piVar3[1] != 0) {
      uVar5 = 0;
      do {
        uVar1 = *piVar3 * uVar5;
        uVar2 = _sel_getUid(*(undefined8 *)((long)piVar3 + (ulong)uVar1 + 8));
        _class_addMethod(param_1,uVar2,*(undefined8 *)((long)piVar3 + (ulong)uVar1 + 0x18),
                         *(undefined8 *)((long)piVar3 + (ulong)uVar1 + 0x10));
        uVar5 = uVar5 + 1;
        piVar3 = *(int **)(param_2 + 0x20);
      } while (uVar5 < (uint)piVar3[1]);
    }
    if ((*param_2 >> 2 & 1) != 0) {
      puVar4 = (uint *)(*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8);
      *puVar4 = *puVar4 | 0x180000;
    }
  }
  return;
}



/* 0011af78 FUN_0011af78 */

void FUN_0011af78(undefined8 param_1,long param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = *(ulong **)(param_2 + 0x28);
  if ((puVar2 != (ulong *)0x0) && (*puVar2 != 0)) {
    uVar3 = 0;
    uVar4 = 1;
    do {
      _class_addProtocol(param_1,puVar2[uVar3 + 1]);
      puVar2 = *(ulong **)(param_2 + 0x28);
      bVar1 = uVar4 < *puVar2;
      uVar3 = uVar4;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (bVar1);
  }
  return;
}



/* 0011afe0 FUN_0011afe0 */

void FUN_0011afe0(undefined8 param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_44;
  
  piVar3 = *(int **)(param_2 + 0x40);
  if ((piVar3 != (int *)0x0) && (piVar3[1] != 0)) {
    uVar4 = 0;
    do {
      iVar1 = *piVar3;
      pvVar2 = (void *)_property_copyAttributeList
                                 ((long)piVar3 + (ulong)(iVar1 * uVar4) + 8,&local_44);
      _class_addProperty(param_1,*(undefined8 *)((long)piVar3 + (ulong)(iVar1 * uVar4) + 8),pvVar2,
                         local_44);
      if (pvVar2 != (void *)0x0) {
        _free(pvVar2);
      }
      uVar4 = uVar4 + 1;
      piVar3 = *(int **)(param_2 + 0x40);
    } while (uVar4 < (uint)piVar3[1]);
  }
  return;
}



/* 0011b07c FUN_0011b07c */

void FUN_0011b07c(void)

{
  return;
}



/* 0011b080 FUN_0011b080 */

void * FUN_0011b080(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    pvVar3 = _calloc(param_2 + 0x28,1);
    return pvVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x3c);
  pvVar3 = _calloc(((ulong)uVar1 + 7 & 0x1fffffff8) + param_2,1);
  _memcpy(pvVar3,(void *)(param_1 - (ulong)uVar2),(ulong)uVar1);
  pvVar3 = (void *)((long)pvVar3 + (ulong)uVar2);
  _bzero(pvVar3,0x28);
  *(undefined8 *)((long)pvVar3 + 0x40) = 0;
  return pvVar3;
}



/* 0011b104 FUN_0011b104 */

undefined8 FUN_0011b104(int *param_1)

{
  char *pcVar1;
  ulong in_x9;
  ulong uVar2;
  long lVar3;
  char *local_18;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar2 = 0;
  lVar3 = 0;
  do {
    if (*(char *)((long)param_1 + uVar2) == '.') {
      lVar3 = lVar3 + 1;
      in_x9 = uVar2;
    }
    else if (*(char *)((long)param_1 + uVar2) == '\0') {
      if (lVar3 != 1) {
        return 0;
      }
      if (in_x9 == 0) {
        return 0;
      }
      if (uVar2 - 1 <= in_x9) {
        return 0;
      }
      if ((in_x9 == 5) && (*param_1 == 0x66697753 && (char)param_1[1] == 't')) {
        pcVar1 = "_Tt%cs%zu%.*s%s";
      }
      else {
        pcVar1 = "_Tt%c%zu%.*s%zu%.*s%s";
      }
      _asprintf(&local_18,pcVar1);
      return local_18;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* 0011b250 FUN_0011b250 */

char * FUN_0011b250(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *datum;
  size_t sVar3;
  char *local_70;
  undefined1 local_64 [4];
  undefined1 local_60 [12];
  undefined4 local_54;
  char *local_50;
  char *local_48;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar1 = "_TtP";
  if (param_2 == 0) {
    pcVar1 = "_TtC";
  }
  iVar2 = _strncmp(param_1,pcVar1,4);
  if (iVar2 != 0) {
    return param_1;
  }
  _pthread_mutex_lock((pthread_mutex_t *)0x189c30);
  if (phRam000000000018a6e0 == (hash_table *)0x0) {
    phRam000000000018a6e0 = _hash_create(0);
  }
  datum = _hash_search(phRam000000000018a6e0,param_1,(void *)0x0,(replace_func *)0x0);
  if (datum != (char *)0x0) goto LAB_0011b30c;
  iVar2 = _strncmp(param_1,pcVar1,4);
  if (iVar2 == 0) {
    pcVar1 = param_1 + 4;
    local_48 = pcVar1;
    sVar3 = _strlen(pcVar1);
    pcVar1 = pcVar1 + sVar3;
    if (param_1[4] == 's') {
      local_50 = "Swift";
      local_54 = 5;
      local_48 = param_1 + 5;
    }
    else {
      iVar2 = FUN_0011b3fc(&local_48,pcVar1,&local_50,&local_54);
      if (iVar2 == 0) goto LAB_0011b2ec;
    }
    iVar2 = FUN_0011b3fc(&local_48,pcVar1,local_60,local_64);
    if (iVar2 == 0) goto LAB_0011b2ec;
    if (param_2 == 0) {
      if (local_48 == pcVar1) goto LAB_0011b3cc;
      goto LAB_0011b2ec;
    }
    iVar2 = _strcmp(local_48,"_");
    if (iVar2 != 0) goto LAB_0011b2ec;
LAB_0011b3cc:
    _asprintf(&local_70,"%.*s.%.*s");
  }
  else {
LAB_0011b2ec:
    local_70 = (char *)0x0;
  }
  datum = param_1;
  if (local_70 != (char *)0x0) {
    datum = local_70;
  }
  _hash_search(phRam000000000018a6e0,param_1,datum,(replace_func *)0x0);
LAB_0011b30c:
  _pthread_mutex_unlock((pthread_mutex_t *)0x189c30);
  return datum;
}



/* 0011b3fc FUN_0011b3fc */

bool FUN_0011b3fc(ulong *param_1,char *param_2,long *param_3,int *param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)*param_1;
  if (*pcVar5 == '0') {
    return false;
  }
  *param_4 = 0;
  *param_3 = (long)pcVar5;
  puVar2 = PTR___DefaultRuneLocale_0012c068;
  if (pcVar5 < param_2) {
    iVar3 = 0;
    do {
      cVar1 = *pcVar5;
      if ((cVar1 < 0) || ((*(uint *)(puVar2 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) >> 10 & 1) == 0))
      break;
      *param_3 = (long)(pcVar5 + 1);
      iVar4 = (int)((long)iVar3 * 10);
      *param_4 = iVar4;
      if ((long)iVar3 * 10 - (long)iVar4 != 0) {
        return false;
      }
      iVar3 = iVar4 + cVar1 + -0x30;
      *param_4 = iVar3;
      if (SCARRY4(iVar4,cVar1 + -0x30)) {
        return false;
      }
      pcVar5 = (char *)*param_3;
    } while (pcVar5 < param_2);
  }
  else {
    iVar3 = 0;
  }
  *param_1 = (ulong)(pcVar5 + iVar3);
  return 0 < iVar3 && pcVar5 + iVar3 <= param_2;
}



/* 0011b4a4 FUN_0011b4a4 */

void FUN_0011b4a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x11b4a8);
  (*pcVar1)();
}



/* 0011b4a8 FUN_0011b4a8 */

void FUN_0011b4a8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    uVar1 = _object_getClass();
    puVar2 = (undefined8 *)_objc_constructInstance(uVar1,param_1);
    *puVar2 = uVar1;
  }
  return;
}



/* 0011b4dc FUN_0011b4dc */

undefined8 FUN_0011b4dc(undefined8 param_1)

{
  long lVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  
  lVar1 = _object_getClass();
  if (((lVar1 != 0) && (lVar1 != lRam000000000018a598)) &&
     (auVar3 = _CFStringGetCStringPtr(param_1,0x600), auVar3._0_8_ == 0)) {
    lVar1 = FUN_0011bea0(param_1,auVar3._8_8_,4);
    pvVar2 = _malloc(lVar1 + 1);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    FUN_0011be20(param_1);
    auVar3 = FUN_0011be00(uRam000000000018a5a0);
    param_1 = FUN_0011be60(auVar3._0_8_,auVar3._8_8_,pvVar2,lVar1,4);
    _free(pvVar2);
  }
  return param_1;
}



/* 0011b590 _CCCrypt */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCCryptorStatus
_CCCrypt(CCOperation op,CCAlgorithm alg,CCOptions options,void *key,size_t keyLength,void *iv,
        void *dataIn,size_t dataInLength,void *dataOut,size_t dataOutAvailable,size_t *dataOutMoved)

{
  CCCryptorStatus CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR__CCCrypt_0012c2c8)(op,alg,options);
  return CVar1;
}



/* 0011b59c _CC_MD5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uchar * _CC_MD5(void *data,CC_LONG len,uchar *md)

{
  uchar *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (uchar *)(*(code *)PTR__CC_MD5_0012c2d0)(data,len);
  return puVar1;
}



/* 0011b5a8 _CFStringGetCStringPtr */

void _CFStringGetCStringPtr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFStringGetCStringPtr_0012c2d8)();
  return;
}



/* 0011b5b4 _MSFindSymbol */

void _MSFindSymbol(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__MSFindSymbol_0012c2e0)();
  return;
}



/* 0011b5c0 _MSGetImageByName */

void _MSGetImageByName(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__MSGetImageByName_0012c2e8)();
  return;
}



/* 0011b5cc _MSHookFunction */

void _MSHookFunction(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__MSHookFunction_0012c2f0)();
  return;
}



/* 0011b5d8 _MSHookMessageEx */

void _MSHookMessageEx(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__MSHookMessageEx_0012c2f8)();
  return;
}



/* 0011b5e4 _NSSearchPathForDirectoriesInDomains */

void _NSSearchPathForDirectoriesInDomains(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSSearchPathForDirectoriesInDomains_0012c300)();
  return;
}



/* 0011b5f0 _SecItemAdd */

void _SecItemAdd(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SecItemAdd_0012c308)();
  return;
}



/* 0011b5fc __Unwind_Resume */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __Unwind_Resume(_Unwind_Exception *exception_object)

{
                    /* WARNING: Could not recover jumptable at 0x0011b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_0012c310)();
  return;
}



/* 0011b608 ___error */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * ___error(void)

{
  int *piVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar1 = (int *)(*(code *)PTR____error_0012c318)();
  return piVar1;
}



/* 0011b614 ___memcpy_chk */

void ___memcpy_chk(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____memcpy_chk_0012c320)();
  return;
}



/* 0011b620 ___stack_chk_fail */

void ___stack_chk_fail(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____stack_chk_fail_0012c328)();
  return;
}



/* 0011b62c ___strcpy_chk */

void ___strcpy_chk(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____strcpy_chk_0012c330)();
  return;
}



/* 0011b638 __dyld_get_image_name */

void __dyld_get_image_name(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___dyld_get_image_name_0012c338)();
  return;
}



/* 0011b644 __dyld_image_count */

void __dyld_image_count(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___dyld_image_count_0012c340)();
  return;
}



/* 0011b650 __dyld_register_func_for_add_image */

void __dyld_register_func_for_add_image(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___dyld_register_func_for_add_image_0012c348)();
  return;
}



/* 0011b65c _abort */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _abort(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__abort_0012c350)();
  return;
}



/* 0011b668 _arc4random */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

u_int32_t _arc4random(void)

{
  u_int32_t uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR__arc4random_0012c358)();
  return uVar1;
}



/* 0011b674 _asprintf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _asprintf(char **param_1,char *param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__asprintf_0012c360)((int)param_1);
  return iVar1;
}



/* 0011b680 _atol */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _atol(char *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__atol_0012c368)();
  return lVar1;
}



/* 0011b68c _bzero */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _bzero(void *param_1,size_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0011b694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_0012c370)();
  return;
}



/* 0011b698 _calloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__calloc_0012c378)();
  return pvVar1;
}



/* 0011b6a4 _class_addMethod */

void _class_addMethod(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_addMethod_0012c380)();
  return;
}



/* 0011b6b0 _class_addProperty */

void _class_addProperty(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_addProperty_0012c388)();
  return;
}



/* 0011b6bc _class_addProtocol */

void _class_addProtocol(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_addProtocol_0012c390)();
  return;
}



/* 0011b6c8 _class_conformsToProtocol */

void _class_conformsToProtocol(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_conformsToProtocol_0012c398)();
  return;
}



/* 0011b6d4 _class_getInstanceMethod */

void _class_getInstanceMethod(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_getInstanceMethod_0012c3a0)();
  return;
}



/* 0011b6e0 _class_getInstanceVariable */

void _class_getInstanceVariable(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_getInstanceVariable_0012c3a8)();
  return;
}



/* 0011b6ec _class_getSuperclass */

void _class_getSuperclass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_getSuperclass_0012c3b0)();
  return;
}



/* 0011b6f8 _class_isMetaClass */

void _class_isMetaClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_isMetaClass_0012c3b8)();
  return;
}



/* 0011b704 _class_replaceMethod */

void _class_replaceMethod(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_replaceMethod_0012c3c0)();
  return;
}



/* 0011b710 _clock_gettime */

void _clock_gettime(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__clock_gettime_0012c3c8)();
  return;
}



/* 0011b71c _dirfd */

void _dirfd(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dirfd_0012c3d0)();
  return;
}



/* 0011b728 _dispatch_async */

void _dispatch_async(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_async_0012c3d8)();
  return;
}



/* 0011b734 _dladdr */

void _dladdr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dladdr_0012c3e0)();
  return;
}



/* 0011b740 _dlclose */

void _dlclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlclose_0012c3e8)();
  return;
}



/* 0011b74c _dlopen */

void _dlopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlopen_0012c3f0)();
  return;
}



/* 0011b758 _exit */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011b760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exit_0012c3f8)(param_1);
  return;
}



/* 0011b764 _fclose */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fclose_0012c400)((int)param_1);
  return iVar1;
}



/* 0011b770 _fcntl */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fcntl(int param_1,int param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fcntl_0012c408)(param_1,param_2);
  return iVar1;
}



/* 0011b77c _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011b784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0012c410)();
  return;
}



/* 0011b788 _getpid */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pid_t _getpid(void)

{
  pid_t pVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pVar1 = (*(code *)PTR__getpid_0012c418)();
  return pVar1;
}



/* 0011b794 _gettimeofday */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _gettimeofday(timeval *param_1,void *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__gettimeofday_0012c420)((int)param_1);
  return iVar1;
}



/* 0011b7a0 _hash_create */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hash_table * _hash_create(int size)

{
  hash_table *phVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = (hash_table *)(*(code *)PTR__hash_create_0012c428)(size);
  return phVar1;
}



/* 0011b7ac _hash_search */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _hash_search(hash_table *table,char *key,void *datum,replace_func *replace_func)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__hash_search_0012c430)();
  return pvVar1;
}



/* 0011b7b8 _if_indextoname */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _if_indextoname(uint param_1,char *param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__if_indextoname_0012c438)(param_1);
  return pcVar1;
}



/* 0011b7c4 _inet_ntop */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _inet_ntop(int param_1,void *param_2,char *param_3,socklen_t param_4)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__inet_ntop_0012c440)(param_1,param_2,param_3,param_4);
  return pcVar1;
}



/* 0011b7d0 _inet_pton */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _inet_pton(int param_1,char *param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__inet_pton_0012c448)(param_1);
  return iVar1;
}



/* 0011b7dc _malloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__malloc_0012c450)();
  return pvVar1;
}



/* 0011b7e8 _memcpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__memcpy_0012c458)();
  return pvVar1;
}



/* 0011b7f4 _method_setImplementation */

void _method_setImplementation(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_setImplementation_0012c460)();
  return;
}



/* 0011b800 _objc_alloc */

void _objc_alloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_0012c468)();
  return;
}



/* 0011b80c _objc_autorelease */

/* WARNING: This is an inlined function */

void _objc_autorelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0012c470)();
  return;
}



/* 0011b818 _objc_autoreleaseReturnValue */

/* WARNING: This is an inlined function */

void _objc_autoreleaseReturnValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0012c478)();
  return;
}



/* 0011b824 _objc_constructInstance */

void _objc_constructInstance(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_constructInstance_0012c480)();
  return;
}



/* 0011b830 _objc_enumerationMutation */

void _objc_enumerationMutation(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_enumerationMutation_0012c488)();
  return;
}



/* 0011b83c _objc_getClass */

void _objc_getClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getClass_0012c490)();
  return;
}



/* 0011b848 _objc_getMetaClass */

void _objc_getMetaClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getMetaClass_0012c498)();
  return;
}



/* 0011b854 _objc_getProtocol */

void _objc_getProtocol(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProtocol_0012c4a0)();
  return;
}



/* 0011b860 _objc_getRequiredClass */

void _objc_getRequiredClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getRequiredClass_0012c4a8)();
  return;
}



/* 0011b86c _objc_initializeClassPair */

void _objc_initializeClassPair(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_initializeClassPair_0012c4b0)();
  return;
}



/* 0011b878 _objc_lookUpClass */

void _objc_lookUpClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_lookUpClass_0012c4b8)();
  return;
}



/* 0011b884 _objc_msgSend */

void _objc_msgSend(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c4c0)();
  return;
}



/* 0011b890 _objc_msgSendSuper2 */

void _objc_msgSendSuper2(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_0012c4c8)();
  return;
}



/* 0011b89c _objc_registerClassPair */

void _objc_registerClassPair(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_registerClassPair_0012c4d0)();
  return;
}



/* 0011b8a8 _objc_release */

/* WARNING: This is an inlined function */

void _objc_release(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0012c4d8)();
  return;
}



/* 0011b8b4 _objc_retain */

/* WARNING: This is an inlined function */

void _objc_retain(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0012c4e0)();
  return;
}



/* 0011b8c0 _objc_retainAutorelease */

void _objc_retainAutorelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutorelease_0012c4e8)();
  return;
}



/* 0011b8cc _objc_retainAutoreleasedReturnValue */

/* WARNING: This is an inlined function */

void _objc_retainAutoreleasedReturnValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_0012c4f0)();
  return;
}



/* 0011b8d8 _objc_storeStrong */

/* WARNING: This is an inlined function */

void _objc_storeStrong(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0012c4f8)();
  return;
}



/* 0011b8e4 _object_getClass */

void _object_getClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__object_getClass_0012c500)();
  return;
}



/* 0011b8f0 _object_getIvar */

void _object_getIvar(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__object_getIvar_0012c508)();
  return;
}



/* 0011b8fc _property_copyAttributeList */

void _property_copyAttributeList(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__property_copyAttributeList_0012c510)();
  return;
}



/* 0011b908 _protocol_getMethodDescription */

void _protocol_getMethodDescription(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__protocol_getMethodDescription_0012c518)();
  return;
}



/* 0011b914 _pthread_create */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_create_0012c520)((int)param_1);
  return iVar1;
}



/* 0011b920 _pthread_mutex_lock */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_lock_0012c528)((int)param_1);
  return iVar1;
}



/* 0011b92c _pthread_mutex_unlock */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_unlock_0012c530)((int)param_1);
  return iVar1;
}



/* 0011b938 _sel_getUid */

void _sel_getUid(void)

{
                    /* WARNING: Could not recover jumptable at 0x0011b940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sel_getUid_0012c538)();
  return;
}



/* 0011b944 _sleep */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR__sleep_0012c540)(param_1);
  return uVar1;
}



/* 0011b950 _sscanf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sscanf_0012c548)((int)param_1);
  return iVar1;
}



/* 0011b95c _strcmp */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__strcmp_0012c550)((int)param_1);
  return iVar1;
}



/* 0011b968 _strcpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strcpy(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__strcpy_0012c558)();
  return pcVar1;
}



/* 0011b974 _strlcpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _strlcpy(char *param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__strlcpy_0012c560)();
  return sVar1;
}



/* 0011b980 _strlen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__strlen_0012c568)();
  return sVar1;
}



/* 0011b98c _strncmp */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__strncmp_0012c570)((int)param_1);
  return iVar1;
}



/* 0011b998 _strstr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__strstr_0012c578)();
  return pcVar1;
}



/* 0011b9a4 _strtol */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__strtol_0012c580)(param_1,param_2,param_3);
  return lVar1;
}



/* 0011b9b0 _time */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0011b9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tVar1 = (*(code *)PTR__time_0012c588)();
  return tVar1;
}



/* 0011be00 FUN_0011be00 */

void FUN_0011be00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_alloc_0012d990);
  return;
}



/* 0011be20 FUN_0011be20 */

void FUN_0011be20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_getCString_maxLength_encoding__0012dc58);
  return;
}



/* 0011be40 FUN_0011be40 */

void FUN_0011be40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_init_0012dcc0);
  return;
}



/* 0011be60 FUN_0011be60 */

void FUN_0011be60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011be70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_initWithBytes_length_encoding__0012dcd0);
  return;
}



/* 0011be80 FUN_0011be80 */

void FUN_0011be80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_keyEnumerator_0012de70);
  return;
}



/* 0011bea0 FUN_0011bea0 */

void FUN_0011bea0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_lengthOfBytesUsingEncoding__0012de88);
  return;
}



/* 0011bec0 FUN_0011bec0 */

void FUN_0011bec0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011bed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_nextObject_0012df08);
  return;
}



/* 0011bee0 FUN_0011bee0 */

void FUN_0011bee0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_objectForKey__0012df38);
  return;
}



/* 0011bf00 FUN_0011bf00 */

void FUN_0011bf00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_release_0012dfc8);
  return;
}



/* 0011bf20 FUN_0011bf20 */

void FUN_0011bf20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_removeObjectForKey__0012dfe8);
  return;
}



/* 0011bf40 FUN_0011bf40 */

void FUN_0011bf40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0012c1c0)(param_1,PTR_s_setObject_forKey__0012e050);
  return;
}


