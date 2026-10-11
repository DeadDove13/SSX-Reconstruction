/* Ghidra pseudocode. PS2 address: 00136a48. Not validated source. */

float FUN_00136a48(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x20) * DAT_002c1c8c;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

