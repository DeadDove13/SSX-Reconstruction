/* Ghidra pseudocode. PS2 address: 002254c8. Not validated source. */

int FUN_002254c8(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0029a908 + 8);
  if (iVar1 == 0) {
    trap(7);
  }
  return ((iVar1 - *(int *)(DAT_0029a908 + 0x10)) * 100) / iVar1;
}

