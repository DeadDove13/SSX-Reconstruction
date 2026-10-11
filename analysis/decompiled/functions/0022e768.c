/* Ghidra pseudocode. PS2 address: 0022e768. Not validated source. */

int FUN_0022e768(int param_1)

{
  if (DAT_0029a888 == '\0') {
    return -10;
  }
  return ((int)*(short *)((&DAT_002a1b10)[param_1] + 0x10) -
         (int)*(short *)((&DAT_002a1b10)[param_1] + 0xc)) + -1;
}

