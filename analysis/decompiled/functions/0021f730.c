/* Ghidra pseudocode. PS2 address: 0021f730. Not validated source. */

bool FUN_0021f730(int param_1,int param_2)

{
  return *(int *)(param_2 * 8 + *(int *)(param_1 + 0xc)) == 0;
}

