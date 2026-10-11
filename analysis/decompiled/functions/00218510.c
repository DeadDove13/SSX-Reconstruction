/* Ghidra pseudocode. PS2 address: 00218510. Not validated source. */

float FUN_00218510(float param_1)

{
  float fVar1;
  
  if (param_1 < -1.0) {
    fVar1 = 1.0 / (param_1 * param_1 + 1.0);
    return SQRT(fVar1) *
           (fVar1 * (DAT_002c58b8 +
                    fVar1 * (DAT_002c58bc + fVar1 * (DAT_002c58c0 + fVar1 * DAT_002c58c4))) + 1.0) +
           (float)PTR_DAT_002c3aa8;
  }
  fVar1 = param_1 * param_1;
  if (1.0 < param_1) {
    fVar1 = 1.0 / (fVar1 + 1.0);
    return DAT_002c3aac -
           SQRT(fVar1) *
           (fVar1 * (DAT_002c58b8 +
                    fVar1 * (DAT_002c58bc + fVar1 * (DAT_002c58c0 + fVar1 * DAT_002c58c4))) + 1.0);
  }
  fVar1 = fVar1 / (fVar1 + 1.0);
  fVar1 = SQRT(fVar1) *
          (fVar1 * (DAT_002c58b8 +
                   fVar1 * (DAT_002c58bc + fVar1 * (DAT_002c58c0 + fVar1 * DAT_002c58c4))) + 1.0);
  if (param_1 < 0.0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

