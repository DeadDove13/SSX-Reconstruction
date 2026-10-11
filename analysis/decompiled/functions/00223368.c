/* Ghidra pseudocode. PS2 address: 00223368. Not validated source. */

int FUN_00223368(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x24) + param_2 * 0x34;
}

