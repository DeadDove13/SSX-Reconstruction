/* Ghidra pseudocode. PS2 address: 0022e7b8. Not validated source. */

int FUN_0022e7b8(int param_1)

{
  int iVar1;
  
  if (DAT_0029a888 == '\0') {
    iVar1 = -10;
  }
  else {
    FUN_002250c0();
    iVar1 = *(int *)((&DAT_002a1b10)[param_1] + 0x18) + *(int *)((&DAT_002a1b10)[param_1] + 0x1c);
    FUN_002250a0();
  }
  return iVar1;
}

