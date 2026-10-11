/* Ghidra pseudocode. PS2 address: 00235630. Not validated source. */

void FUN_00235630(int *param_1,int param_2)

{
  FUN_0023ee58(DAT_002c5be4);
  if (*param_1 == 0) {
    *param_1 = param_2;
  }
  else {
    *(int *)(param_1[1] + 4) = param_2;
  }
  param_1[1] = param_2;
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_0023ea60(DAT_002c5be4);
  return;
}

