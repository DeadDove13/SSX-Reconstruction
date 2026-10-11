/* Ghidra pseudocode. PS2 address: 00218240. Not validated source. */

float FUN_00218240(float param_1)

{
  float fVar1;
  uint uVar2;
  
  if (param_1 < 0.0) {
    fVar1 = param_1 * DAT_002c3a50 - 0.5;
  }
  else {
    fVar1 = param_1 * DAT_002c3a50 + 0.5;
  }
  uVar2 = (uint)fVar1;
  param_1 = param_1 - (float)(int)uVar2 * DAT_002c3a54;
  fVar1 = param_1 * param_1;
  if ((uVar2 & 1) == 0) {
    param_1 = (((fVar1 * DAT_002c3a64 + DAT_002c3a68) * fVar1 + DAT_002c3a6c) * fVar1 + DAT_002c3a70
              ) * fVar1 * param_1 + param_1;
  }
  else {
    param_1 = (((fVar1 * DAT_002c3a58 + DAT_002c3a5c) * fVar1 + DAT_002c3a60) * fVar1 + -0.5) *
              fVar1 + 1.0;
  }
  if ((uVar2 & 2) != 0) {
    param_1 = -param_1;
  }
  return param_1;
}

