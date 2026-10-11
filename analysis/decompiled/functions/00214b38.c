/* Ghidra pseudocode. PS2 address: 00214b38. Not validated source. */

void FUN_00214b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)((int)param_1 + 0x2dcc) * 4;
  FUN_00214530(param_1,param_2,*(undefined4 *)(iVar1 + 0x2964),*(undefined4 *)(iVar1 + 0x2564));
  FUN_00214988(param_1,param_2,0);
  FUN_00214530(param_1,param_2,param_3,9);
  return;
}

