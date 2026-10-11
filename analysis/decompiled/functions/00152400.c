/* Ghidra pseudocode. PS2 address: 00152400. Not validated source. */

void FUN_00152400(undefined8 param_1)

{
  int iVar1;
  
  FUN_00153020();
  FUN_00156fe0(param_1);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x1670) = 1;
  *(undefined4 *)(iVar1 + 0x166c) = 2;
  *(undefined4 *)(iVar1 + 0x1668) = 0;
  return;
}

