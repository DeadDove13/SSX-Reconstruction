/* Ghidra pseudocode. PS2 address: 00212360. Not validated source. */

bool FUN_00212360(int param_1,int param_2)

{
  return *(int *)(param_2 * 0x6c + param_1 + 0x170) != 0;
}

