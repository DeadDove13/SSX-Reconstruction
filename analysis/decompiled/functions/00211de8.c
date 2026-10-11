/* Ghidra pseudocode. PS2 address: 00211de8. Not validated source. */

int FUN_00211de8(int param_1,int param_2)

{
  return *(int *)(param_2 * 0x14 + param_1 + 0x150) + -2;
}

