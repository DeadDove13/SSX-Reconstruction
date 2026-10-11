/* Ghidra pseudocode. PS2 address: 00131d38. Not validated source. */

int FUN_00131d38(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + param_2 * 0x20;
}

