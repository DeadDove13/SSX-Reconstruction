/* Ghidra pseudocode. PS2 address: 0018a3e8. Not validated source. */

void FUN_0018a3e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char acStack_4b0 [8];
  char acStack_4a8 [4];
  char cStack_4a4;
  char cStack_4a3;
  char cStack_4a2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  acStack_4b0 = (char  [8])s_abortmessage__002b39e8._0_8_;
  acStack_4a8 = (char  [4])s_abortmessage__002b39e8._8_4_;
  cStack_4a4 = s_abortmessage__002b39e8[0xc];
  cStack_4a3 = s_abortmessage__002b39e8[0xd];
  cStack_4a2 = s_abortmessage__002b39e8[0xe];
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_0025a60c((uint)acStack_4b0 | 0xf,0,0x3f1);
  if (param_1 != 0) {
    iVar1 = FUN_0025bcf8(acStack_4b0);
    FUN_0025e858(acStack_4b0 + iVar1,param_1,&uStack_38);
  }
  if (DAT_002c4e5c != 0) {
    FUN_0018ac08(0x2b39f8,DAT_002c4e5c,DAT_002c4e64);
  }
  iVar1 = 200000000;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  trap(0);
  return;
}

