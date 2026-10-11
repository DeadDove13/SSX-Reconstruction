/* Ghidra pseudocode. PS2 address: 00186158. Not validated source. */

int FUN_00186158(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x1c);
  *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x1c) = iVar1 + 1;
  return iVar1;
}

