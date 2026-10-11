/* Ghidra pseudocode. PS2 address: 00149c78. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00149cc4) */

void FUN_00149c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  FUN_001493f0();
  iVar1 = FUN_002109e0();
  *(int *)((int)param_2 + 0x21c) = iVar1 % 5;
  FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad700 + (iVar1 % 5) * 4));
  FUN_00149630(param_1,param_2,param_3,param_4,param_7,1);
  return;
}

