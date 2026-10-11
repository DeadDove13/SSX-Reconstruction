/* Ghidra pseudocode. PS2 address: 001055f8. Not validated source. */

float FUN_001055f8(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    fVar2 = *(float *)(param_1 + 0x2e4);
  }
  else {
    iVar1 = FUN_0019c4d0(0x28acf8);
    fVar2 = *(float *)(iVar1 + 0x38);
    if (fVar2 <= 0.0) {
      fVar2 = 1.0;
    }
    if (*(float *)(param_1 + 0x2e4) < *(float *)(param_1 + 0x2ec)) {
      iVar1 = *(int *)(param_1 + 0xa0);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xa0) + -1;
    }
    fVar2 = (float)iVar1 * fVar2 + *(float *)(param_1 + 0x2e4);
  }
  return fVar2;
}

