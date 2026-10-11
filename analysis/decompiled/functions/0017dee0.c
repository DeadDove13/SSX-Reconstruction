/* Ghidra pseudocode. PS2 address: 0017dee0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0017dfd4) */

void FUN_0017dee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined8 param_6,long param_7,int param_8)

{
  float fVar1;
  undefined1 auStack_14e0 [5152];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  FUN_0019aa08(auStack_14e0);
  FUN_0019ae30(auStack_14e0);
  FUN_0019af18(auStack_14e0,*(int *)(param_5 + 0xb3c) + 0x434);
  FUN_0019af40(param_1,param_2,param_3,param_4,auStack_14e0);
  FUN_0019b0b8(0x3fc00000,0x3f800000,auStack_14e0);
  FUN_0019b000(auStack_14e0,param_6);
  if (param_7 != 0) {
    uStack_c0 = 0;
    uStack_bc = 1;
  }
  if (DAT_002859d4 < param_8) {
    fStack_90 = 1.0;
    uStack_88 = 0;
    uStack_84 = 0;
  }
  else {
    fVar1 = (float)FUN_00218328(((float)(DAT_002859d4 % 0xb4) / 60.0) * DAT_002c2910);
    fStack_90 = ABS(fVar1) * DAT_002c2914 + DAT_002c2918;
    uStack_84 = 0x3f800000;
    uStack_88 = 0x3f800000;
  }
  uStack_8c = 0x3f800000;
  uStack_b0 = CONCAT44(0x3f800000,fStack_90);
  uStack_a8 = CONCAT44(uStack_84,uStack_88);
  FUN_0019aa58(auStack_14e0);
  FUN_0019aa30(auStack_14e0,2);
  return;
}

