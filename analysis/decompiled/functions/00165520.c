/* Ghidra pseudocode. PS2 address: 00165520. Not validated source. */

void FUN_00165520(int *param_1)

{
  if (*param_1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_00103710();
    param_1[0xb] = 0;
  }
  *param_1 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

