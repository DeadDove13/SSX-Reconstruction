/* Ghidra pseudocode. PS2 address: 002407a0. Not validated source. */

bool FUN_002407a0(int param_1)

{
  return (uint)(&DAT_002a4b80)[param_1] < 0x10 && (uint)(&DAT_002a4b70)[param_1] < 0x10;
}

