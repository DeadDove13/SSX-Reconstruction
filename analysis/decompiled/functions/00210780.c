/* Ghidra pseudocode. PS2 address: 00210780. Not validated source. */

void FUN_00210780(int *param_1)

{
  if (*param_1 == 0) {
    param_1[3] = 0;
  }
  else {
    FUN_00103710();
    param_1[3] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

