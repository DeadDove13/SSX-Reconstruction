/* Ghidra pseudocode. PS2 address: 001faca0. Not validated source. */

void FUN_001faca0(float param_1,int param_2)

{
  if ((param_1 < 1.0) && (param_1 < 0.0)) {
    *(undefined4 *)(param_2 + 0x8b6e0) = 0;
    return;
  }
  if (param_1 < 1.0) {
    *(float *)(param_2 + 0x8b6e0) = param_1;
    return;
  }
  *(undefined4 *)(param_2 + 0x8b6e0) = 0x3f800000;
  return;
}

