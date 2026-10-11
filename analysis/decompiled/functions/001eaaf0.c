/* Ghidra pseudocode. PS2 address: 001eaaf0. Not validated source. */

void FUN_001eaaf0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 8) = fVar1;
  if (1.0 <= fVar1) {
    *(undefined4 *)(param_1 + 8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  if (fVar1 <= 0.0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

