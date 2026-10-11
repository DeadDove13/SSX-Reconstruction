/* Ghidra pseudocode. PS2 address: 00121ae8. Not validated source. */

float FUN_00121ae8(int *param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x8c) < 0) {
    fVar3 = 1.0;
  }
  else {
    pfVar2 = (float *)(iVar1 + *(int *)(iVar1 + 0x8c) * 0x10 + 0x2c);
    fVar3 = (float)FUN_00218328(pfVar2[1] - *(float *)(iVar1 + 0x2e0));
    fVar4 = *(float *)(*param_1 + 0x90);
    fVar3 = -*pfVar2 * fVar3;
    if (fVar3 < fVar4) {
      fVar4 = ((fVar3 - fVar4) / fVar4 + 1.0) * DAT_002c1a7c;
    }
    else {
      fVar4 = *(float *)(*param_1 + 0x94);
      if (fVar4 < fVar3) {
        fVar4 = (1.0 / (fVar3 - fVar4)) * DAT_002c1a80;
      }
      else {
        fVar4 = 1.0;
      }
    }
    fVar3 = DAT_002c1a84;
    if ((DAT_002c1a84 <= fVar4) && (fVar3 = fVar4, DAT_002c1a88 < fVar4)) {
      fVar3 = DAT_002c1a88;
    }
  }
  return fVar3;
}

