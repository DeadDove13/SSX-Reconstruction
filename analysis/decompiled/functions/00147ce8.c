/* Ghidra pseudocode. PS2 address: 00147ce8. Not validated source. */

float FUN_00147ce8(int param_1)

{
  float fVar1;
  
  fVar1 = (float)(int)((*(uint *)(*(int *)(*(int *)(param_1 + 0x224) + 8) + 0xc) >> 7 & 0xff) - 1);
  if (fVar1 == 0.0) {
    fVar1 = 1.0;
  }
  if (*(float *)(param_1 + 0x10) < 0.0) {
    return (fVar1 - *(float *)(param_1 + 0x1e8)) / fVar1;
  }
  return *(float *)(param_1 + 0x1e8) / fVar1;
}

