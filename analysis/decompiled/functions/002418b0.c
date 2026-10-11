/* Ghidra pseudocode. PS2 address: 002418b0. Not validated source. */

int FUN_002418b0(uint param_1)

{
  return (param_1 & 0x1f) * *(int *)(&DAT_002a47b0 + ((param_1 & 0xff) >> 5) * 4);
}

