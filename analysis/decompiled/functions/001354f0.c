/* Ghidra pseudocode. PS2 address: 001354f0. Not validated source. */

void FUN_001354f0(int *param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *param_1;
  fVar5 = 1.0;
  if (-1 < *(int *)(iVar1 + 0x8c)) {
    pfVar2 = (float *)(iVar1 + *(int *)(iVar1 + 0x8c) * 0x10 + 0x2c);
    fVar3 = (float)FUN_00218328((pfVar2[1] - *(float *)(iVar1 + 0x2e0)) + DAT_002c1c54);
    fVar3 = *pfVar2 * fVar3;
    fVar4 = *(float *)(*param_1 + 0x90);
    fVar5 = 1.0;
    if (fVar3 < fVar4) {
      fVar5 = ((fVar3 - fVar4) / fVar4 + 1.0) * DAT_002c1c58;
    }
  }
  fVar3 = 1.0;
  if (1.0 <= fVar5) {
    fVar3 = DAT_002c1c5c;
    if (fVar5 <= DAT_002c1c5c) {
      fVar3 = fVar5;
    }
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  FUN_001099b0(fVar3,iVar1);
  return;
}

