/* Ghidra pseudocode. PS2 address: 001499e0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00149a2c) */

void FUN_001499e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  FUN_001493f0();
  iVar1 = FUN_002109e0();
  *(int *)((int)param_2 + 0x21c) = iVar1 % 3;
  FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad6c0 + (iVar1 % 3) * 4));
  FUN_00149630(param_1,param_2,param_3,param_4,param_7,1);
  return;
}

