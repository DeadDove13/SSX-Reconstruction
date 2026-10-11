/* Ghidra pseudocode. PS2 address: 00190e10. Not validated source. */

void FUN_00190e10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x114);
  (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 4) + (int)*(short *)(iVar1 + 0x20));
  return;
}

