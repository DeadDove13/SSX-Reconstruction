/* Ghidra pseudocode. PS2 address: 00214bb0. Not validated source. */

void FUN_00214bb0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == *(int *)((int)param_1 + 0x2dcc)) {
    FUN_00214b38();
    return;
  }
  iVar1 = (int)param_1 + param_3 * 4;
  FUN_00214530(param_1,param_2,*(undefined4 *)(iVar1 + 0x2964),*(undefined4 *)(iVar1 + 0x2564));
  return;
}

