/* Ghidra pseudocode. PS2 address: 00149a90. Not validated source. */

void FUN_00149a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  
  FUN_001493f0();
  uVar1 = FUN_002109e0();
  uVar1 = uVar1 & 1;
  *(uint *)((int)param_2 + 0x21c) = uVar1;
  if (param_4 == 0x3c) {
    FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad6d0 + uVar1 * 0xc));
  }
  else if (param_4 == 0x3d) {
    FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad6d4 + uVar1 * 0xc));
  }
  else {
    FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad6d8 + uVar1 * 0xc));
  }
  FUN_00149630(param_1,param_2,param_3,param_4,param_7,1);
  return;
}

