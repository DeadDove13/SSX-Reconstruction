/* Ghidra pseudocode. PS2 address: 00190ab0. Not validated source. */

void FUN_00190ab0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x118) + 0xc);
  (**(code **)(iVar1 + 0x4c))(*(int *)(param_1 + 0x118) + (int)*(short *)(iVar1 + 0x48));
  return;
}

