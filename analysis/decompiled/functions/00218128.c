/* Ghidra pseudocode. PS2 address: 00218128. Not validated source. */

void FUN_00218128(float param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  
  if (param_1 < 0.0) {
    fVar2 = param_1 * DAT_002c3a38 - 0.5;
  }
  else {
    fVar2 = param_1 * DAT_002c3a38 + 0.5;
  }
  uVar1 = (int)fVar2 & 3;
  param_1 = param_1 - (float)(int)fVar2 * DAT_002c3a3c;
  fVar2 = param_1 * param_1;
  param_1 = ((((fVar2 * DAT_002c3a40 + DAT_002c3a44) * fVar2 + DAT_002c3a48) * fVar2 + DAT_002c3a4c)
             * fVar2 + 1.0) * param_1;
  fVar2 = SQRT(1.0 - param_1 * param_1);
  if (uVar1 == 1) {
    *param_2 = fVar2;
    *param_3 = -param_1;
    return;
  }
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      *param_2 = param_1;
      *param_3 = fVar2;
      return;
    }
    return;
  }
  if (uVar1 != 2) {
    if (uVar1 == 3) {
      *param_2 = -fVar2;
      *param_3 = param_1;
      return;
    }
    return;
  }
  *param_2 = -param_1;
  *param_3 = -fVar2;
  return;
}

