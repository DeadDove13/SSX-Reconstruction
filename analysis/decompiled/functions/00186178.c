/* Ghidra pseudocode. PS2 address: 00186178. Not validated source. */

int FUN_00186178(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x20);
  *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x20) = iVar1 + 1;
  return iVar1;
}

