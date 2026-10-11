/* Ghidra pseudocode. PS2 address: 0019a400. Not validated source. */

int FUN_0019a400(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + *(int *)(param_1 + 4) * 4 + 8);
  return *(int *)(*piVar1 + 0x38) + piVar1[1];
}

