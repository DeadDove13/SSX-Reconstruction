/* Ghidra pseudocode. PS2 address: 001ee6a0. Not validated source. */

int FUN_001ee6a0(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x6584) + param_2 * 0x14;
}

