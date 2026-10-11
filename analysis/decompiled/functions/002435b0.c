/* Ghidra pseudocode. PS2 address: 002435b0. Not validated source. */

void FUN_002435b0(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  
  DAT_002c5b54 = DAT_002c5b54 + 1;
  if (0x1f < DAT_002c5b54) {
    DAT_002c5b54 = 0;
  }
  iVar1 = DAT_002c5b54;
  (&DAT_002a4fd0)[DAT_002c5b54 * 2] = param_1;
  (&DAT_002a4fd2)[iVar1 * 2] = param_2;
  return;
}

