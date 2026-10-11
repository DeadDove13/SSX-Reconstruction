/* Ghidra pseudocode. PS2 address: 001a3760. Not validated source. */

void FUN_001a3760(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x18);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x24) + (int)*(short *)(iVar1 + 0x18));
  return;
}

