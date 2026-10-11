/* Ghidra pseudocode. PS2 address: 001662b8. Not validated source. */

void FUN_001662b8(float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (DAT_002c2748 <= fVar1) {
    *param_1 = fVar1 - (float)(int)(((fVar1 + DAT_002c2748) * 0.5) / DAT_002c2748) * DAT_002c274c;
    return;
  }
  if (fVar1 < DAT_002c2750) {
    *param_1 = fVar1 + (float)(int)(((DAT_002c2748 - fVar1) * 0.5) / DAT_002c2748) * DAT_002c2754;
  }
  return;
}

