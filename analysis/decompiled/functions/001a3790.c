/* Ghidra pseudocode. PS2 address: 001a3790. Not validated source. */

void FUN_001a3790(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x18);
  (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x20));
  return;
}

