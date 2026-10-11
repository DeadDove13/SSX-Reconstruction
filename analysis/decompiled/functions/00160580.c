/* Ghidra pseudocode. PS2 address: 00160580. Not validated source. */

int FUN_00160580(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 0x11c;
  *(int *)(*(int *)(param_1 + 4) + 0x160) = iVar1;
  return iVar1;
}

