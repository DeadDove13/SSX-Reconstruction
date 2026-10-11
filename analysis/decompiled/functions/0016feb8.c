/* Ghidra pseudocode. PS2 address: 0016feb8. Not validated source. */

void FUN_0016feb8(float *param_1)

{
  float fVar1;
  
  FUN_00169e00((int)param_1[0x2cf] + 0x4c8);
  fVar1 = (float)DAT_002859d4;
  param_1[3] = 1.0;
  param_1[2] = fVar1 / 60.0 - *param_1;
  return;
}

