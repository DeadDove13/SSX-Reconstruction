/* Ghidra pseudocode. PS2 address: 00147670. Not validated source. */

void FUN_00147670(float param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar1 = *(int *)(param_2 + 0xbc);
  iVar2 = *(int *)(param_2 + 8);
  iVar9 = (int)param_1;
  iVar4 = *(int *)(iVar2 + 8) * iVar9 + iVar1;
  *param_3 = iVar4;
  iVar4 = iVar4 + 0xc;
  if ((*(uint *)(iVar2 + 0xc) & 0x20) == 0) {
    *param_5 = 0;
  }
  else {
    *param_5 = iVar4;
    iVar4 = (*(uint *)(iVar2 + 0xc) >> 0x13 & 0x1f) * 0xc + iVar4;
  }
  *param_4 = iVar4;
  if ((param_1 != (float)iVar9) && ((*(uint *)(iVar2 + 0xc) & 0x20) == 0)) {
    iVar6 = param_2 + 0x2c;
    param_1 = param_1 - (float)iVar9;
    pfVar5 = (float *)(*(int *)(iVar2 + 8) * (iVar9 + 1) + iVar1);
    FUN_0023bac0(iVar6,iVar4,(*(uint *)(iVar2 + 0xc) >> 0x13 & 0x1f) * 6);
    FUN_001ea570(param_1,iVar6,pfVar5 + 3,*(uint *)(*(int *)(param_2 + 8) + 0xc) >> 0x13 & 0x1f);
    pfVar3 = (float *)*param_3;
    fVar10 = *pfVar5;
    fVar12 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar7 = pfVar5[1];
    fVar14 = pfVar3[2];
    fVar13 = pfVar5[2];
    *param_4 = iVar6;
    *param_3 = param_2 + 0xb0;
    fVar8 = pfVar3[2];
    fVar15 = pfVar3[1];
    *(float *)(param_2 + 0xb0) = (fVar10 - fVar12) * param_1 + *pfVar3;
    *(float *)(param_2 + 0xb4) = (fVar7 - fVar11) * param_1 + fVar15;
    *(float *)(param_2 + 0xb8) = (fVar13 - fVar14) * param_1 + fVar8;
  }
  return;
}

