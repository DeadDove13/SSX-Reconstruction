/* Ghidra pseudocode. PS2 address: 001e93d8. Not validated source. */

void FUN_001e93d8(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffeff | 0xff;
  return;
}

