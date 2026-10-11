/* Ghidra pseudocode. PS2 address: 0013f678. Not validated source. */

float FUN_0013f678(float param_1,float param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < param_1) {
    fVar3 = -(*param_4 / 30.0) * param_1;
    if (0.0 < param_2) {
      fVar3 = fVar3 + -param_4[8] * param_2;
    }
  }
  else {
    fVar3 = *(float *)(*(int *)(param_3 + 0xc) + 0x214);
    if (-fVar3 < param_1) {
      fVar1 = param_4[8];
      fVar3 = (-*param_4 * param_1) / fVar3;
    }
    else {
      fVar4 = *(float *)(*(int *)(param_3 + 0xc) + 0x218);
      fVar2 = -fVar4;
      if (fVar2 < param_1) {
        fVar2 = param_1;
      }
      fVar1 = param_4[8];
      fVar3 = *param_4 * (1.0 - (fVar2 + fVar3 + fVar2 + fVar3) / (fVar4 - fVar3));
    }
    fVar3 = fVar3 + -fVar1 * param_2;
  }
  return fVar3;
}

