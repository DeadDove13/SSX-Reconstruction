/* Ghidra pseudocode. PS2 address: 00212388. Not validated source. */

bool FUN_00212388(int param_1,int param_2)

{
  return *(int *)(param_2 * 0x6c + param_1 + 0x174) != 0;
}

