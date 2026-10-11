/* Ghidra pseudocode. PS2 address: 002557e0. Not validated source. */

uint FUN_002557e0(uint param_1)

{
  return 0x7f800000 - (param_1 & 0x7fffffff) >> 0x1f;
}

