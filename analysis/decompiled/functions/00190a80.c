/* Ghidra pseudocode. PS2 address: 00190a80. Not validated source. */

void FUN_00190a80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x118) + 0xc);
  (**(code **)(iVar1 + 0x44))(*(int *)(param_1 + 0x118) + (int)*(short *)(iVar1 + 0x40));
  return;
}

