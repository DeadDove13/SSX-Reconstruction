/* Ghidra pseudocode. PS2 address: 001112f8. Not validated source. */

void FUN_001112f8(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_002c13a4;
  if (0.0 < param_1) {
    if (*(float *)(param_2 + 0x18c) != 0.0) {
      param_1 = 0.0;
    }
    fVar3 = *(float *)(param_2 + 0x198);
  }
  else {
    fVar3 = *(float *)(param_2 + 0x198);
  }
  fVar2 = DAT_002c13a0;
  if (DAT_002c13a0 <= ABS(param_1 - fVar3)) {
    fVar2 = ABS(param_1 - fVar3);
  }
  *(float *)(param_2 + 0x1a0) = param_1;
  *(float *)(param_2 + 0x19c) = fVar2 * fVar1;
  return;
}

