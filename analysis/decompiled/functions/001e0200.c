/* Ghidra pseudocode. PS2 address: 001e0200. Not validated source. */

void FUN_001e0200(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_002c36f0;
  fVar3 = 0.0;
  if (*param_1 != 0.0) {
    if (*param_1 < 0.0) {
      FUN_001dce80(DAT_002c36ec,param_1 + 4);
    }
    else {
      FUN_001dce40(DAT_002c36f0,param_1 + 4);
      fVar2 = *param_1;
      *param_1 = fVar2 - fVar1;
      if (fVar2 - fVar1 < fVar3) {
        *param_1 = fVar3;
      }
    }
  }
  return;
}

