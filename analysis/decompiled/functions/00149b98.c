/* Ghidra pseudocode. PS2 address: 00149b98. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00149be0) */

void FUN_00149b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  FUN_001493f0();
  iVar1 = FUN_002109e0();
  iVar1 = iVar1 % 3;
  *(int *)((int)param_2 + 0x21c) = iVar1;
  if (param_4 == 0x3a) {
    FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad6e8 + iVar1 * 8));
  }
  else {
    FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad6ec + iVar1 * 8));
  }
  FUN_00149630(param_1,param_2,param_3,param_4,param_7,1);
  return;
}

