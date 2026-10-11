/* Ghidra pseudocode. PS2 address: 001fac48. Not validated source. */

void FUN_001fac48(float param_1,int param_2)

{
  if ((1.0 <= param_1) || (0.0 <= param_1)) {
    if (param_1 < 1.0) {
      *(float *)(param_2 + 0x8b6dc) = param_1;
    }
    else {
      *(undefined4 *)(param_2 + 0x8b6dc) = 0x3f800000;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x8b6dc) = 0;
  }
  FUN_002072b0();
  return;
}

