/* Ghidra pseudocode. PS2 address: 001772a8. Not validated source. */

void FUN_001772a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  **(undefined4 **)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x24) + 0x24))(iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 0x20));
  }
  return;
}

