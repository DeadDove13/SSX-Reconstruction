/* Ghidra pseudocode. PS2 address: 001a36e8. Not validated source. */

void FUN_001a36e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x18);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0x10));
  return;
}

