/* Ghidra pseudocode. PS2 address: 001a3718. Not validated source. */

void FUN_001a3718(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x18);
  (**(code **)(iVar1 + 0x2c))(*(int *)(param_1 + 0x28) + (int)*(short *)(iVar1 + 0x28));
  return;
}

