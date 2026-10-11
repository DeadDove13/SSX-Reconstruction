/* Ghidra pseudocode. PS2 address: 00177720. Not validated source. */

void FUN_00177720(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x24) + 0x24))(iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 0x20));
  }
  return;
}

