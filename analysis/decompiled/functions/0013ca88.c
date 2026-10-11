/* Ghidra pseudocode. PS2 address: 0013ca88. Not validated source. */

void FUN_0013ca88(float param_1,float param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_4;
  fVar1 = param_1 * fVar2;
  if (0.0 < fVar1) {
    param_5[1] = param_2;
    param_5[2] = fVar2;
    return;
  }
  if (fVar1 < 0.0) {
    param_5[2] = 0.0;
    param_5[1] = param_2;
    *param_4 = *param_5;
    return;
  }
  if (param_1 < 0.0) {
    *param_4 = -1.0;
    return;
  }
  if (param_1 <= 0.0) {
    param_5[1] = 0.0;
    param_5[2] = *param_5;
    return;
  }
  *param_4 = 1.0;
  return;
}

