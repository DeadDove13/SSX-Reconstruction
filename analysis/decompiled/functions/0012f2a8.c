/* Ghidra pseudocode. PS2 address: 0012f2a8. Not validated source. */

uint FUN_0012f2a8(int *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = param_1[6];
  uVar2 = (uint)(iVar1 < 2);
  if (iVar1 == 1) {
    param_1[7] = param_1[4];
    param_1[5] = *param_1 - 1U;
    return *param_1 - 1U;
  }
  if (uVar2 == 0) {
    if (iVar1 == 2) {
      fVar4 = (float)param_1[4];
      fVar3 = (float)param_1[7] + DAT_002c1bb8;
      param_1[7] = (int)fVar3;
      if (fVar4 <= fVar3) {
        param_1[7] = (int)fVar4;
        param_1[6] = 1;
      }
      fVar4 = ((float)param_1[7] / fVar4) * (float)(*param_1 + -1);
      fVar3 = (float)(int)fVar4;
      if (fVar4 < fVar3) {
        fVar3 = fVar3 - 1.0;
      }
      uVar2 = (uint)fVar3;
      param_1[5] = uVar2;
      if (-1 < (int)uVar2) {
        return (uint)((int)uVar2 < *param_1);
      }
    }
    else {
      if (iVar1 != 3) {
        return 3;
      }
      fVar3 = (float)param_1[7] - DAT_002c1bbc;
      param_1[7] = (int)fVar3;
      if (fVar3 <= 0.0) {
        param_1[7] = 0;
        param_1[6] = 0;
      }
      fVar3 = ((float)param_1[7] / (float)param_1[4]) * (float)(*param_1 + -1);
      fVar4 = (float)(int)fVar3;
      if (fVar3 < fVar4) {
        fVar4 = fVar4 - 1.0;
      }
      uVar2 = (uint)fVar4;
      param_1[5] = uVar2;
      if (-1 < (int)uVar2) {
        return (uint)((int)uVar2 < *param_1);
      }
    }
  }
  else if (iVar1 == 0) {
    param_1[5] = 0;
    param_1[7] = 0;
    return 1;
  }
  return uVar2;
}

