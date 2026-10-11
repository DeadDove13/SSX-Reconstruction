/* Ghidra pseudocode. PS2 address: 00111098. Not validated source. */

bool FUN_00111098(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) == param_2;
}

