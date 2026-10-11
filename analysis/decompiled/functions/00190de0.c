/* Ghidra pseudocode. PS2 address: 00190de0. Not validated source. */

void FUN_00190de0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x114);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 4) + (int)*(short *)(iVar1 + 0x18));
  return;
}

