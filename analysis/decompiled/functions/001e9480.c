/* Ghidra pseudocode. PS2 address: 001e9480. Not validated source. */

void FUN_001e9480(uint *param_1)

{
  *param_1 = *param_1 & 0xffffff41 | 0x141;
  return;
}

