/* Ghidra pseudocode. PS2 address: 00132d78. Not validated source. */

void FUN_00132d78(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int **)(param_2 + 4) == param_1);
  *(int *)(param_2 + (uVar1 + 4) * 4) = param_1[1];
  *(undefined4 *)(param_2 + (uVar1 + 2) * 4) = 0;
  if (param_1[1] == 0) {
    *param_1 = param_2;
  }
  else {
    *(int *)(param_1[1] + 8 + (uint)(*(int **)(param_1[1] + 4) == param_1) * 4) = param_2;
  }
  param_1[1] = param_2;
  return;
}

