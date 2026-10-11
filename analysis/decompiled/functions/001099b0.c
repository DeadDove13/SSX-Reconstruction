/* Ghidra pseudocode. PS2 address: 001099b0. Not validated source. */

void FUN_001099b0(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0xa4);
  if (param_1 + DAT_002c11a8 < fVar1) {
    param_1 = fVar1 - DAT_002c11a8;
  }
  else if (fVar1 < param_1 - DAT_002c11a8) {
    param_1 = fVar1 + DAT_002c11a8;
  }
  *(float *)(param_2 + 0xa4) = param_1;
  return;
}

