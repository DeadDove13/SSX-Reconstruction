/* Ghidra pseudocode. PS2 address: 001398a0. Not validated source. */

void FUN_001398a0(float param_1,int param_2)

{
  param_1 = param_1 * DAT_002c1d4c;
  *(float *)(param_2 + 8) = param_1;
  if (param_1 < 0.25) {
    param_1 = 0.25;
  }
  else if (1.0 < param_1) {
    param_1 = 1.0;
  }
  *(float *)(param_2 + 8) = param_1;
  return;
}

