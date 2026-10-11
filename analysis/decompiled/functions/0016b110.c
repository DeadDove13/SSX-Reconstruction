/* Ghidra pseudocode. PS2 address: 0016b110. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016b110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined8 param_8,long param_9,
                 long param_10,long param_11)

{
  undefined1 auStack_14f0 [5152];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  FUN_0011ed18(0x295e90,0xc);
  FUN_0019aa08(auStack_14f0);
  FUN_0019ae30(auStack_14f0);
  FUN_0019af18(auStack_14f0,*(int *)(param_7 + 0x174) + 0x400);
  FUN_0019af40(param_1,param_2,param_3,param_4,auStack_14f0);
  FUN_0019b0b8(param_5,param_6,auStack_14f0);
  FUN_0019af58(auStack_14f0,param_8);
  if (param_9 != 0) {
    uStack_d0 = 0;
    uStack_cc = 1;
  }
  FUN_0019b0e0(auStack_14f0);
  if (param_11 == 0) {
    if (param_10 != 0) {
      uStack_a0 = CONCAT44(0x3f800000,DAT_002c27b0);
      uStack_98 = 0x3f8000003f800000;
      uStack_c0 = uStack_a0;
      uStack_b8 = 0x3f8000003f800000;
    }
  }
  else {
    uStack_a0 = _DAT_00280f28;
    uStack_98 = _DAT_00280f30;
    uStack_c0 = _DAT_00280f28;
    uStack_b8 = _DAT_00280f30;
  }
  FUN_0019ac28(auStack_14f0);
  FUN_0019aa30(auStack_14f0,2);
  return;
}

