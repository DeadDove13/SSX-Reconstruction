/* Ghidra pseudocode. PS2 address: 00218410. Not validated source. */

float FUN_00218410(float param_1)

{
  float fVar1;
  
  if (param_1 < DAT_002c3a98) {
    fVar1 = 1.0 - param_1 * param_1;
    return SQRT(fVar1) *
           (fVar1 * (DAT_002c58b8 +
                    fVar1 * (DAT_002c58bc + fVar1 * (DAT_002c58c0 + fVar1 * DAT_002c58c4))) + 1.0) +
           (float)PTR_DAT_002c3a9c;
  }
  fVar1 = param_1 * param_1;
  if (param_1 <= DAT_002c3aa0) {
    return fVar1 * (DAT_002c58b8 +
                   fVar1 * (DAT_002c58bc + fVar1 * (DAT_002c58c0 + fVar1 * DAT_002c58c4))) * param_1
           + param_1;
  }
  fVar1 = 1.0 - fVar1;
  return DAT_002c3aa4 -
         SQRT(fVar1) *
         (fVar1 * (DAT_002c58b8 +
                  fVar1 * (DAT_002c58bc + fVar1 * (DAT_002c58c0 + fVar1 * DAT_002c58c4))) + 1.0);
}

