/* Ghidra pseudocode. PS2 address: 00218328. Not validated source. */

float FUN_00218328(float param_1)

{
  float fVar1;
  uint uVar2;
  
  if (param_1 < 0.0) {
    fVar1 = param_1 * DAT_002c3a74 - 0.5;
  }
  else {
    fVar1 = param_1 * DAT_002c3a74 + 0.5;
  }
  uVar2 = (uint)fVar1;
  param_1 = param_1 - (float)(int)uVar2 * DAT_002c3a78;
  fVar1 = param_1 * param_1;
  if ((uVar2 & 1) == 0) {
    param_1 = (((fVar1 * DAT_002c3a8c + DAT_002c3a90) * fVar1 + DAT_002c3a94) * fVar1 + -0.5) *
              fVar1 + 1.0;
  }
  else {
    param_1 = (((fVar1 * DAT_002c3a7c + DAT_002c3a80) * fVar1 + DAT_002c3a84) * fVar1 + DAT_002c3a88
              ) * fVar1 * param_1 + param_1;
  }
  if ((uVar2 + 1 & 2) != 0) {
    param_1 = -param_1;
  }
  return param_1;
}

