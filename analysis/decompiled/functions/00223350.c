/* Ghidra pseudocode. PS2 address: 00223350. Not validated source. */

int FUN_00223350(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x1c) + param_2 * 0x14;
}

