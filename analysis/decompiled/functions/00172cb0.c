/* Ghidra pseudocode. PS2 address: 00172cb0. Not validated source. */

void FUN_00172cb0(int param_1)

{
  int iVar1;
  
  FUN_0016cf38();
  iVar1 = *(int *)(param_1 + 0xb60);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x40) + 0x1c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x40) + 0x18));
  }
  return;
}

