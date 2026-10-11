/* Ghidra pseudocode. PS2 address: 001c3a58. Not validated source. */

bool FUN_001c3a58(int param_1)

{
  return *(int *)(param_1 + 0x280) == 0;
}

