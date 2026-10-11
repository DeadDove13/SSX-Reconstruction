/* Ghidra pseudocode. PS2 address: 0019bb78. Not validated source. */

float FUN_0019bb78(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar3 = 0.0;
  fVar2 = 0.0;
  if (fVar1 < *(float *)(param_1 + 0x1c)) {
    fVar3 = *(float *)(param_1 + 0x1c) - fVar1;
  }
  else if (*(float *)(param_1 + 0x28) < fVar1) {
    fVar3 = fVar1 - *(float *)(param_1 + 0x28);
  }
  fVar1 = param_2[1];
  if (fVar1 < *(float *)(param_1 + 0x20)) {
    fVar2 = *(float *)(param_1 + 0x20) - fVar1;
  }
  else if (*(float *)(param_1 + 0x2c) < fVar1) {
    fVar2 = fVar1 - *(float *)(param_1 + 0x2c);
  }
  if (fVar2 < fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}

