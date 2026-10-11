/* Ghidra pseudocode. PS2 address: 001467b0. Not validated source. */

void FUN_001467b0(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = *(int *)(param_2 + 8);
  param_1[1] = param_2 + *(int *)(param_2 + 4);
  param_1[2] = param_2 + iVar1;
  return;
}

