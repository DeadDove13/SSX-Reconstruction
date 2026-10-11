/* Ghidra pseudocode. PS2 address: 001fad00. Not validated source. */

void FUN_001fad00(float param_1,int param_2)

{
  if ((param_1 < 1.0) && (param_1 < 0.0)) {
    *(undefined4 *)(param_2 + 0x8b6e4) = 0;
    return;
  }
  if (param_1 < 1.0) {
    *(float *)(param_2 + 0x8b6e4) = param_1;
    return;
  }
  *(undefined4 *)(param_2 + 0x8b6e4) = 0x3f800000;
  return;
}

