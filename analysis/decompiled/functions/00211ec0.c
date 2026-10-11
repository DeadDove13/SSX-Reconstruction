/* Ghidra pseudocode. PS2 address: 00211ec0. Not validated source. */

bool FUN_00211ec0(int param_1,int param_2)

{
  return *(int *)(param_2 * 0x14 + param_1 + 0x158) != 0;
}

