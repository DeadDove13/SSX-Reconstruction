/* Ghidra pseudocode. PS2 address: 002556f8. Not validated source. */

float FUN_002556f8(float param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((int)param_1 >> 0x17 & 0xffU) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (0.0 < param_1 + 1e+30) {
        if ((int)param_1 < 0) {
          if (ABS(param_1) != 0.0) {
            param_1 = -1.0;
          }
        }
        else {
          param_1 = 0.0;
        }
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uint)param_1 & uVar2) == 0) {
        return param_1;
      }
      if (0.0 < param_1 + 1e+30) {
        if ((int)param_1 < 0) {
          param_1 = (float)((int)param_1 + (0x800000 >> (uVar1 & 0x1f)));
        }
        param_1 = (float)((uint)param_1 & ~uVar2);
      }
    }
    return param_1;
  }
  if (uVar1 != 0x80) {
    return param_1;
  }
  return param_1 + param_1;
}

