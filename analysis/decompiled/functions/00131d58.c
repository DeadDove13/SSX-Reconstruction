/* Ghidra pseudocode. PS2 address: 00131d58. Not validated source. */

int FUN_00131d58(int param_1,int param_2)

{
  return param_2 - *(int *)(param_1 + 8) >> 5;
}

