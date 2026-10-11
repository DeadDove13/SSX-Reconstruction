/* Ghidra pseudocode. PS2 address: 0016e858. Not validated source. */

void FUN_0016e858(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00169b50(*(int *)((int)param_1 + 0xb3c) + 0x4c8);
  iVar1 = FUN_0016ddd0(param_1,param_2);
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  return;
}

