/* Ghidra pseudocode. PS2 address: 001934d0. Not validated source. */

void FUN_001934d0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x30) = param_2 * 200;
  return;
}

