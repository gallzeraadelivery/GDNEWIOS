/* Ghidra pseudocode, not original source. Types and names may be inferred. */

/* 000042a0 resolveNetworkProblmeForAppWithBundleId: */

/* Function Stack Size: 0x18 bytes */

void fdaff3dfa3::resolveNetworkProblmeForAppWithBundleId_(ID param_1,SEL param_2,ID param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000041b94 = iRam0000000000041b94 + 0xb;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_00024250(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000041b94 < 7) * 8 + 0x41b98));
                    /* WARNING: Could not recover jumptable at 0x00004324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00023a8c setAppWirelessDataOption:forBundleIdentifier:completionHandler: */

/* Function Stack Size: 0x28 bytes */

void fdaff3dfa3::setAppWirelessDataOption_forBundleIdentifier_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000041b94 = iRam0000000000041b94 + 9;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_00024270(*(undefined8 *)
                             ((long)(int)(uint)(0 < iRam0000000000041b94) * 8 + 0x41ba8));
                    /* WARNING: Could not recover jumptable at 0x00023af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00023d7c setAppCellularDataEnabled:forBundleIdentifier:completionHandler: */

/* Function Stack Size: 0x28 bytes */

void fdaff3dfa3::setAppCellularDataEnabled_forBundleIdentifier_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_00024290(*(undefined8 *)
                             ((long)(int)(uint)(8 < iRam0000000000041b94) * 8 + 0x41bb8));
                    /* WARNING: Could not recover jumptable at 0x00023dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00023f4c setUsagePoliciesForBundle:cellular:wifi: */

/* Function Stack Size: 0x20 bytes */

void fdaff3dfa3::setUsagePoliciesForBundle_cellular_wifi_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_000242b0(*(undefined8 *)
                             ((long)(int)(uint)(4 < iRam0000000000041b94) * 8 + 0x41bc8));
                    /* WARNING: Could not recover jumptable at 0x00023fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000240d4 sharedInstance */

/* Function Stack Size: 0x10 bytes */

ID fdaff3dfa3::sharedInstance(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  
  iRam0000000000041b94 = iRam0000000000041b94 + 1;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_000242d0(*(undefined8 *)
                             ((long)(int)(uint)(5 < iRam0000000000041b94) * 8 + 0x41bd8));
                    /* WARNING: Could not recover jumptable at 0x00024124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*UNRECOVERED_JUMPTABLE)();
  return IVar1;
}



/* 000241b8 FUN_000241b8 */

long FUN_000241b8(long param_1,uint param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  while( true ) {
    if (local_4 == param_2) break;
    *(byte *)(param_1 + (int)local_4) =
         *(byte *)(param_1 + (int)local_4) ^ *(byte *)(param_3 + local_8);
    local_4 = local_4 + 1;
    uVar1 = 0;
    if (param_4 != 0) {
      uVar1 = local_4 / param_4;
    }
    local_8 = local_4 - uVar1 * param_4;
  }
  return param_1;
}



/* 00024250 FUN_00024250 */

long FUN_00024250(long param_1)

{
  return param_1 + -0x37c7815b;
}



/* 00024270 FUN_00024270 */

long FUN_00024270(long param_1)

{
  return param_1 + 0xfaaa091;
}



/* 00024290 FUN_00024290 */

long FUN_00024290(long param_1)

{
  return param_1 + 0xb6d7f07;
}



/* 000242b0 FUN_000242b0 */

long FUN_000242b0(long param_1)

{
  return param_1 + 0x45777288;
}



/* 000242d0 FUN_000242d0 */

long FUN_000242d0(long param_1)

{
  return param_1 + 0x48fc479c;
}



/* 000242f0 FUN_000242f0 */

void FUN_000242f0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 0x12;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003ad84(*(undefined8 *)
                             ((long)(int)(uint)(6 < iRam0000000000045748) * 8 + 0x45750));
                    /* WARNING: Could not recover jumptable at 0x0002434c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000251f4 daj39das11003985dkfja */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* daj39das11003985dkfja() */

void daj39das11003985dkfja(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 0x14;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003ada4(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 6) * 8 + 0x45760));
                    /* WARNING: Could not recover jumptable at 0x00025258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00025878 FUN_00025878 */

void FUN_00025878(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003adc4(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 4) * 8 + 0x45770));
                    /* WARNING: Could not recover jumptable at 0x000258c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000259b8 FUN_000259b8 */

void FUN_000259b8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 2;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003ade4(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 3) * 8 + 0x45780));
                    /* WARNING: Could not recover jumptable at 0x00025a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00025aa4 FUN_00025aa4 */

void FUN_00025aa4(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = iRam0000000000045748 + 7;
  iRam0000000000045748 = iRam0000000000045748 + 10;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003ae04(*(undefined8 *)((long)(int)(uint)(6 < iVar1) * 8 + 0x45790));
                    /* WARNING: Could not recover jumptable at 0x00025af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00025be8 FUN_00025be8 */

void FUN_00025be8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003ae24(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 4) * 8 + 0x457a0));
                    /* WARNING: Could not recover jumptable at 0x00025c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00025cc0 FUN_00025cc0 */

void FUN_00025cc0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003ae44(*(undefined8 *)
                             ((long)(int)(uint)(5 < iRam0000000000045748) * 8 + 0x457b0));
                    /* WARNING: Could not recover jumptable at 0x00025d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00025d40 FUN_00025d40 */

void FUN_00025d40(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003ae64(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 3) * 8 + 0x457c0));
                    /* WARNING: Could not recover jumptable at 0x00025da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0002631c FUN_0002631c */

void FUN_0002631c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 4;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003ae84(*(undefined8 *)
                             ((long)(int)(uint)(9 < iRam0000000000045748) * 8 + 0x457d0));
                    /* WARNING: Could not recover jumptable at 0x0002637c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000265b8 FUN_000265b8 */

void FUN_000265b8(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = iRam0000000000045748 + 8;
  iRam0000000000045748 = iRam0000000000045748 + 0xf;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003aea4(*(undefined8 *)((long)(int)(uint)(6 < iVar1) * 8 + 0x457e0));
                    /* WARNING: Could not recover jumptable at 0x00026614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0002671c FUN_0002671c */

void FUN_0002671c(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = iRam0000000000045748 + 8;
  iRam0000000000045748 = iRam0000000000045748 + 0xb;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003aec4(*(undefined8 *)((long)(int)(uint)(iVar1 < 9) * 8 + 0x457f0));
                    /* WARNING: Could not recover jumptable at 0x00026780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000269cc FUN_000269cc */

void FUN_000269cc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003aee4(*(undefined8 *)
                             ((long)(int)(uint)(8 < iRam0000000000045748 + -2) * 8 + 0x45800));
                    /* WARNING: Could not recover jumptable at 0x00026a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00034148 FUN_00034148 */

void FUN_00034148(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003af04(*(undefined8 *)
                             ((long)(int)(uint)(5 < iRam0000000000045748) * 8 + 0x45810));
                    /* WARNING: Could not recover jumptable at 0x000341a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00034320 FUN_00034320 */

void FUN_00034320(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003af24(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 + -8 < 4) * 8 + 0x45820));
                    /* WARNING: Could not recover jumptable at 0x00034364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000343d8 FUN_000343d8 */

void FUN_000343d8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003af44(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 5) * 8 + 0x45830));
                    /* WARNING: Could not recover jumptable at 0x00034418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000344ac FUN_000344ac */

void FUN_000344ac(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003af64(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 6) * 8 + 0x45840));
                    /* WARNING: Could not recover jumptable at 0x000344ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000345c8 FUN_000345c8 */

void FUN_000345c8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003af84(*(undefined8 *)
                             ((long)(int)(uint)(7 < iRam0000000000045748) * 8 + 0x45850));
                    /* WARNING: Could not recover jumptable at 0x0003460c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000346d4 FUN_000346d4 */

void FUN_000346d4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 0x14;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003afa4(*(undefined8 *)
                             ((long)(int)(uint)(6 < iRam0000000000045748) * 8 + 0x45860));
                    /* WARNING: Could not recover jumptable at 0x00034720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000347b8 FUN_000347b8 */

void FUN_000347b8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003afc4(*(undefined8 *)
                             ((long)(int)(uint)(4 < iRam0000000000045748) * 8 + 0x45870));
                    /* WARNING: Could not recover jumptable at 0x000347fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 000348a4 FUN_000348a4 */

void FUN_000348a4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003afe4(*(undefined8 *)
                             ((long)(int)(uint)(6 < iRam0000000000045748 + -3) * 8 + 0x45880));
                    /* WARNING: Could not recover jumptable at 0x000348fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00034ad0 FUN_00034ad0 */

void FUN_00034ad0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b004(*(undefined8 *)
                             ((long)(int)(uint)(8 < iRam0000000000045748 + -7) * 8 + 0x45890));
                    /* WARNING: Could not recover jumptable at 0x00034b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00034c04 FUN_00034c04 */

void FUN_00034c04(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 4;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b024(*(undefined8 *)
                             ((long)(int)(uint)(8 < iRam0000000000045748) * 8 + 0x458a0));
                    /* WARNING: Could not recover jumptable at 0x00034c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 00034cc4 FUN_00034cc4 */

void FUN_00034cc4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b044(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 3) * 8 + 0x458b0));
                    /* WARNING: Could not recover jumptable at 0x00034d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0003a5d0 FUN_0003a5d0 */

void FUN_0003a5d0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 0x14;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b064(*(undefined8 *)
                             ((long)(int)(uint)(0 < iRam0000000000045748) * 8 + 0x458c0));
                    /* WARNING: Could not recover jumptable at 0x0003a61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0003a730 FUN_0003a730 */

void FUN_0003a730(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 0xf;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b084(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 10) * 8 + 0x458d0));
                    /* WARNING: Could not recover jumptable at 0x0003a778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0003a820 FUN_0003a820 */

void FUN_0003a820(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b0a4(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 < 6) * 8 + 0x458e0));
                    /* WARNING: Could not recover jumptable at 0x0003a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0003a928 FUN_0003a928 */

void FUN_0003a928(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = iRam0000000000045748 + 0xc;
  iRam0000000000045748 = iRam0000000000045748 + 0x10;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b0c4(*(undefined8 *)((long)(int)(uint)(3 < iVar1) * 8 + 0x458f0));
                    /* WARNING: Could not recover jumptable at 0x0003a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0003aa1c FUN_0003aa1c */

void FUN_0003aa1c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  iRam0000000000045748 = iRam0000000000045748 + 10;
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b0e4(*(undefined8 *)
                             ((long)(int)(uint)(6 < iRam0000000000045748) * 8 + 0x45900));
                    /* WARNING: Could not recover jumptable at 0x0003aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0003ab08 FUN_0003ab08 */

void FUN_0003ab08(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b104(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 + -3 < 10) * 8 + 0x45910));
                    /* WARNING: Could not recover jumptable at 0x0003ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0003ac14 FUN_0003ac14 */

void FUN_0003ac14(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0003b124(*(undefined8 *)
                             ((long)(int)(uint)(iRam0000000000045748 + -2 < 6) * 8 + 0x45920));
                    /* WARNING: Could not recover jumptable at 0x0003ac58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* 0003acec FUN_0003acec */

long FUN_0003acec(long param_1,uint param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  while( true ) {
    if (local_4 == param_2) break;
    *(byte *)(param_1 + (int)local_4) =
         *(byte *)(param_1 + (int)local_4) ^ *(byte *)(param_3 + local_8);
    local_4 = local_4 + 1;
    uVar1 = 0;
    if (param_4 != 0) {
      uVar1 = local_4 / param_4;
    }
    local_8 = local_4 - uVar1 * param_4;
  }
  return param_1;
}



/* 0003ad84 FUN_0003ad84 */

long FUN_0003ad84(long param_1)

{
  return param_1 + -0x53703e95;
}



/* 0003ada4 FUN_0003ada4 */

long FUN_0003ada4(long param_1)

{
  return param_1 + -0x5e1114a;
}



/* 0003adc4 FUN_0003adc4 */

long FUN_0003adc4(long param_1)

{
  return param_1 + 0x6dd1e536;
}



/* 0003ade4 FUN_0003ade4 */

long FUN_0003ade4(long param_1)

{
  return param_1 + 0x5d4db767;
}



/* 0003ae04 FUN_0003ae04 */

long FUN_0003ae04(long param_1)

{
  return param_1 + -0x6fb0f0b2;
}



/* 0003ae24 FUN_0003ae24 */

long FUN_0003ae24(long param_1)

{
  return param_1 + -0x6a63ca48;
}



/* 0003ae44 FUN_0003ae44 */

long FUN_0003ae44(long param_1)

{
  return param_1 + -0x71ee9b94;
}



/* 0003ae64 FUN_0003ae64 */

long FUN_0003ae64(long param_1)

{
  return param_1 + -0x2d4f69d;
}



/* 0003ae84 FUN_0003ae84 */

long FUN_0003ae84(long param_1)

{
  return param_1 + 0x702027a4;
}



/* 0003aea4 FUN_0003aea4 */

long FUN_0003aea4(long param_1)

{
  return param_1 + 0x4001ac62;
}



/* 0003aec4 FUN_0003aec4 */

long FUN_0003aec4(long param_1)

{
  return param_1 + 0x2b8976ca;
}



/* 0003aee4 FUN_0003aee4 */

long FUN_0003aee4(long param_1)

{
  return param_1 + -0x318779f6;
}



/* 0003af04 FUN_0003af04 */

long FUN_0003af04(long param_1)

{
  return param_1 + -0x1f2df7f2;
}



/* 0003af24 FUN_0003af24 */

long FUN_0003af24(long param_1)

{
  return param_1 + -0x471fed0a;
}



/* 0003af44 FUN_0003af44 */

long FUN_0003af44(long param_1)

{
  return param_1 + -0x5e653fa6;
}



/* 0003af64 FUN_0003af64 */

long FUN_0003af64(long param_1)

{
  return param_1 + 0xdf6e463;
}



/* 0003af84 FUN_0003af84 */

long FUN_0003af84(long param_1)

{
  return param_1 + -0x461cf14;
}



/* 0003afa4 FUN_0003afa4 */

long FUN_0003afa4(long param_1)

{
  return param_1 + 0x18bb33f1;
}



/* 0003afc4 FUN_0003afc4 */

long FUN_0003afc4(long param_1)

{
  return param_1 + 0x25509b9b;
}



/* 0003afe4 FUN_0003afe4 */

long FUN_0003afe4(long param_1)

{
  return param_1 + -0xa8378;
}



/* 0003b004 FUN_0003b004 */

long FUN_0003b004(long param_1)

{
  return param_1 + -0x7f1c097d;
}



/* 0003b024 FUN_0003b024 */

long FUN_0003b024(long param_1)

{
  return param_1 + 0x6be5ef21;
}



/* 0003b044 FUN_0003b044 */

long FUN_0003b044(long param_1)

{
  return param_1 + 0x7606d25c;
}



/* 0003b064 FUN_0003b064 */

long FUN_0003b064(long param_1)

{
  return param_1 + 0x5ebea68c;
}



/* 0003b084 FUN_0003b084 */

long FUN_0003b084(long param_1)

{
  return param_1 + 0x2c0a7790;
}



/* 0003b0a4 FUN_0003b0a4 */

long FUN_0003b0a4(long param_1)

{
  return param_1 + 0x6fd0e151;
}



/* 0003b0c4 FUN_0003b0c4 */

long FUN_0003b0c4(long param_1)

{
  return param_1 + 0x4eccf24c;
}



/* 0003b0e4 FUN_0003b0e4 */

long FUN_0003b0e4(long param_1)

{
  return param_1 + -0x3b423745;
}



/* 0003b104 FUN_0003b104 */

long FUN_0003b104(long param_1)

{
  return param_1 + 0x63581fc8;
}



/* 0003b124 FUN_0003b124 */

long FUN_0003b124(long param_1)

{
  return param_1 + 0x1447a0c5;
}



/* 0003b144 FUN_0003b144 */

void FUN_0003b144(void)

{
  FUN_0003b2dc(1);
  return;
}



/* 0003b14c FUN_0003b14c */

void FUN_0003b14c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_0003c008;
  if (lRam00000000000459a0 != -1) {
    _dispatch_once_f((dispatch_once_t *)0x459a0,(void *)0x0,FUN_0003b2d4);
  }
  if (pcRam00000000000459a8 != (code *)0x0) {
    uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
    local_40 = param_1;
    uVar2 = (*pcRam00000000000459a8)(1,&local_40);
    if (*(long *)PTR____stack_chk_guard_0003c008 == local_38) {
      return;
    }
    goto LAB_0003b2a4;
  }
  if (lRam0000000000045998 == -1) {
    iVar1 = iRam0000000000045988 - param_2;
  }
  else {
    _dispatch_once_f((dispatch_once_t *)0x45998,(void *)0x0,FUN_0003b144);
    iVar1 = iRam0000000000045988 - param_2;
  }
  if (param_2 < iRam0000000000045988) {
LAB_0003b228:
    uVar2 = 1;
    lVar3 = *(long *)PTR____stack_chk_guard_0003c008;
  }
  else if (iVar1 < 0 == SBORROW4(iRam0000000000045988,param_2)) {
    if ((int)param_3 < iRam000000000004598c) goto LAB_0003b228;
    if (iRam000000000004598c < (int)param_3) goto LAB_0003b24c;
    uVar2 = (ulong)((int)param_4 <= iRam0000000000045990);
    lVar3 = *(long *)PTR____stack_chk_guard_0003c008;
  }
  else {
LAB_0003b24c:
    uVar2 = 0;
    lVar3 = *(long *)PTR____stack_chk_guard_0003c008;
  }
  if (lVar3 == local_38) {
    return;
  }
LAB_0003b2a4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}



/* 0003b2d4 FUN_0003b2d4 */

void FUN_0003b2d4(void)

{
  FUN_0003b2dc(0);
  return;
}



/* 0003b2dc FUN_0003b2dc */

void FUN_0003b2dc(code *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  FILE *pFVar13;
  size_t sVar14;
  void *pvVar15;
  size_t sVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar23;
  char acStack_88 [32];
  long local_68;
  code *pcVar22;
  
  local_68 = *(long *)PTR____stack_chk_guard_0003c008;
  pcVar22 = param_1;
  if ((pcRam00000000000459a8 == (code *)0x0 || (int)param_1 != 0) &&
     ((pcRam00000000000459a8 = (code *)_dlsym(0xfffffffffffffffe,"_availability_version_check"),
      pcRam00000000000459a8 == (code *)0x0 || (pcVar22 = pcRam00000000000459a8, (int)param_1 != 0)))
     ) {
    puVar3 = (undefined8 *)_dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
    pcVar22 = (code *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      uVar23 = *puVar3;
      pcVar4 = (code *)_dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
      pcVar22 = (code *)0x0;
      if (pcVar4 != (code *)0x0) {
        pcVar5 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
        pcVar6 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
        pcVar22 = pcVar6;
        if (pcVar5 != (code *)0x0 || pcVar6 != (code *)0x0) {
          pcVar7 = (code *)_dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
          pcVar22 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            pcVar8 = (code *)_dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
            pcVar22 = (code *)0x0;
            if (pcVar8 != (code *)0x0) {
              pcVar9 = (code *)_dlsym(0xfffffffffffffffe,"CFGetTypeID");
              pcVar22 = (code *)0x0;
              if (pcVar9 != (code *)0x0) {
                pcVar10 = (code *)_dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                pcVar22 = (code *)0x0;
                if (pcVar10 != (code *)0x0) {
                  pcVar11 = (code *)_dlsym(0xfffffffffffffffe,"CFStringGetCString");
                  pcVar22 = (code *)0x0;
                  if (pcVar11 != (code *)0x0) {
                    pcVar12 = (code *)_dlsym(0xfffffffffffffffe,"CFRelease");
                    pcVar22 = (code *)0x0;
                    if (pcVar12 != (code *)0x0) {
                      pFVar13 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                      pcVar22 = (code *)0x0;
                      if (pFVar13 != (FILE *)0x0) {
                        _fseek(pFVar13,0,2);
                        sVar14 = _ftell(pFVar13);
                        if ((long)sVar14 < 0) {
                          pvVar15 = (void *)0x0;
                        }
                        else {
                          _rewind(pFVar13);
                          pvVar15 = _malloc(sVar14);
                          if (((pvVar15 != (void *)0x0) &&
                              (sVar16 = _fread(pvVar15,1,sVar14,pFVar13), sVar16 == sVar14)) &&
                             (lVar17 = (*pcVar4)(0,pvVar15,sVar14,uVar23), lVar17 != 0)) {
                            if (pcVar5 == (code *)0x0) {
                              lVar18 = (*pcVar6)(0,lVar17,0,0);
                            }
                            else {
                              lVar18 = (*pcVar5)();
                            }
                            if (lVar18 != 0) {
                              lVar19 = (*pcVar7)(0,"ProductVersion",0x600,uVar23);
                              if (lVar19 != 0) {
                                lVar20 = (*pcVar8)(lVar18,lVar19);
                                (*pcVar12)(lVar19);
                                if (lVar20 != 0) {
                                  lVar19 = (*pcVar9)(lVar20);
                                  lVar21 = (*pcVar10)();
                                  if ((lVar19 == lVar21) &&
                                     (iVar1 = (*pcVar11)(lVar20,acStack_88,0x20,0x8000100),
                                     iVar1 != 0)) {
                                    _sscanf(acStack_88,"%d.%d.%d");
                                  }
                                }
                              }
                              (*pcVar12)(lVar18);
                            }
                            (*pcVar12)(lVar17);
                          }
                        }
                        _free(pvVar15);
                        uVar2 = _fclose(pFVar13);
                        pcVar22 = (code *)(ulong)uVar2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_0003c008 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(pcVar22);
}



/* 0003b60c _NSLog */

void _NSLog(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSLog_0003c020)();
  return;
}



/* 0003b618 __Unwind_Resume */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __Unwind_Resume(_Unwind_Exception *exception_object)

{
                    /* WARNING: Could not recover jumptable at 0x0003b620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_0003c028)();
  return;
}



/* 0003b624 ~string */

/* std::string::~string() */

void __thiscall std::string::~string(string *this)

{
                    /* WARNING: Could not recover jumptable at 0x0003b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__string_0003c030)();
  return;
}



/* 0003b630 terminate */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_terminate_0003c038)();
  return;
}



/* 0003b63c ___cxa_begin_catch */

void ___cxa_begin_catch(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_begin_catch_0003c040)();
  return;
}



/* 0003b648 ___stack_chk_fail */

void ___stack_chk_fail(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____stack_chk_fail_0003c048)();
  return;
}



/* 0003b654 _bzero */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _bzero(void *param_1,size_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0003b65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_0003c050)();
  return;
}



/* 0003b660 _class_addMethod */

void _class_addMethod(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_addMethod_0003c058)();
  return;
}



/* 0003b66c _class_getInstanceMethod */

void _class_getInstanceMethod(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_getInstanceMethod_0003c060)();
  return;
}



/* 0003b678 _class_getMethodImplementation */

void _class_getMethodImplementation(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_getMethodImplementation_0003c068)();
  return;
}



/* 0003b684 _dispatch_once_f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _dispatch_once_f(dispatch_once_t *predicate,void *context,dispatch_function_t function)

{
                    /* WARNING: Could not recover jumptable at 0x0003b68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0003c070)();
  return;
}



/* 0003b690 _dlclose */

void _dlclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlclose_0003c078)();
  return;
}



/* 0003b69c _dlopen */

void _dlopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlopen_0003c080)();
  return;
}



/* 0003b6a8 _dlsym */

void _dlsym(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlsym_0003c088)();
  return;
}



/* 0003b6b4 _fclose */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fclose_0003c090)((int)param_1);
  return iVar1;
}



/* 0003b6c0 _fopen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FILE *)(*(code *)PTR__fopen_0003c098)();
  return pFVar1;
}



/* 0003b6cc _fread */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__fread_0003c0a0)();
  return sVar1;
}



/* 0003b6d8 _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0003b6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0003c0a8)();
  return;
}



/* 0003b6e4 _fseek */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fseek_0003c0b0)((int)param_1,param_2,param_3);
  return iVar1;
}



/* 0003b6f0 _ftell */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _ftell(FILE *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__ftell_0003c0b8)();
  return lVar1;
}



/* 0003b6fc _malloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__malloc_0003c0c0)();
  return pvVar1;
}



/* 0003b708 _memcpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__memcpy_0003c0c8)();
  return pvVar1;
}



/* 0003b714 _method_getImplementation */

void _method_getImplementation(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_getImplementation_0003c0d0)();
  return;
}



/* 0003b720 _method_getTypeEncoding */

void _method_getTypeEncoding(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_getTypeEncoding_0003c0d8)();
  return;
}



/* 0003b72c _method_setImplementation */

void _method_setImplementation(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_setImplementation_0003c0e0)();
  return;
}



/* 0003b738 _objc_autoreleasePoolPop */

void _objc_autoreleasePoolPop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0003c0e8)();
  return;
}



/* 0003b744 _objc_autoreleasePoolPush */

void _objc_autoreleasePoolPush(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_0003c0f0)();
  return;
}



/* 0003b750 _objc_getClass */

void _objc_getClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getClass_0003c0f8)();
  return;
}



/* 0003b75c _objc_msgSend */

void _objc_msgSend(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0003c100)();
  return;
}



/* 0003b768 _objc_release */

/* WARNING: This is an inlined function */

void _objc_release(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0003c108)();
  return;
}



/* 0003b774 _objc_retain */

/* WARNING: This is an inlined function */

void _objc_retain(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0003c110)();
  return;
}



/* 0003b780 _objc_retainAutoreleaseReturnValue */

/* WARNING: This is an inlined function */

void _objc_retainAutoreleaseReturnValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0003c118)();
  return;
}



/* 0003b78c _objc_retainAutoreleasedReturnValue */

/* WARNING: This is an inlined function */

void _objc_retainAutoreleasedReturnValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_0003c120)();
  return;
}



/* 0003b798 _objc_storeStrong */

/* WARNING: This is an inlined function */

void _objc_storeStrong(void)

{
                    /* WARNING: Could not recover jumptable at 0x0003b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0003c128)();
  return;
}



/* 0003b7a4 _rewind */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _rewind(FILE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0003b7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__rewind_0003c130)();
  return;
}



/* 0003b7b0 _sscanf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sscanf_0003c138)((int)param_1);
  return iVar1;
}



/* 0003b7bc _strlen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0003b7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__strlen_0003c140)();
  return sVar1;
}



/* 0004c700 assign */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::string::assign(char const*) */

void std::string::assign(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


