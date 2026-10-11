/* Ghidra pseudocode. PS2 address: 001c7210. Not validated source. */

undefined4 FUN_001c7210(int param_1,float *param_2,float *param_3,uint *param_4)

{
  float *pfVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = *param_4 | param_4[1];
  if ((uVar4 & 0x20) != 0) {
    uVar4 = ((int)*param_4 >> 5 ^ 1U) & 1;
    fVar10 = param_3[5];
    fVar8 = param_3[1];
    fVar7 = (param_3[3] - *(float *)(param_1 + 0x136c)) / (param_3[3] - param_3[7]);
    pfVar1 = param_3 + uVar4 * 4;
    pfVar5 = param_2 + uVar4 * 0xc;
    fVar6 = param_2[4];
    fVar11 = (fVar7 * param_3[7]) / *(float *)(param_1 + 0x136c);
    *pfVar1 = *param_3 - fVar7 * (*param_3 - param_3[4]);
    pfVar1[1] = param_3[1] - fVar7 * (fVar8 - fVar10);
    pfVar1[2] = *(float *)(param_1 + 0x1368);
    pfVar1[3] = *(float *)(param_1 + 0x136c);
    *pfVar5 = *param_2 + fVar11 * (param_2[0xc] - *param_2);
    pfVar5[1] = param_2[1] + fVar11 * (param_2[0xd] - param_2[1]);
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x10];
    }
    else {
      fVar7 = param_2[0x10];
    }
    pfVar5[4] = (float)(int)((float)(uint)fVar6 + fVar11 * (float)(uint)((int)fVar7 - (int)fVar6));
    fVar6 = param_2[5];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x11];
      fVar8 = param_2[5];
    }
    else {
      fVar7 = param_2[0x11];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 5] =
         (float)(int)((float)(uint)fVar6 + fVar11 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[6];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x12];
      fVar8 = param_2[6];
    }
    else {
      fVar7 = param_2[0x12];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 6] =
         (float)(int)((float)(uint)fVar6 + fVar11 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[7];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x13];
      fVar8 = param_2[7];
    }
    else {
      fVar7 = param_2[0x13];
      fVar8 = fVar6;
    }
    pfVar1 = param_3 + uVar4 * 4;
    fVar9 = *(float *)(param_1 + 0x1360);
    fVar10 = *pfVar1;
    puVar2 = param_4 + uVar4;
    param_2[uVar4 * 0xc + 7] =
         (float)(int)((float)(uint)fVar6 + fVar11 * (float)(uint)((int)fVar7 - (int)fVar8));
    *puVar2 = 0;
    if (fVar10 < fVar9) {
      *puVar2 = 2;
    }
    if (*(float *)(param_1 + 0x1370) < *pfVar1) {
      *puVar2 = *puVar2 | 1;
      fVar6 = pfVar1[1];
    }
    else {
      fVar6 = pfVar1[1];
    }
    if (fVar6 < *(float *)(param_1 + 0x1364)) {
      *puVar2 = *puVar2 | 8;
      fVar7 = *(float *)(param_1 + 0x1374);
    }
    else {
      fVar7 = *(float *)(param_1 + 0x1374);
    }
    if (fVar7 < fVar6) {
      *puVar2 = *puVar2 | 4;
      uVar3 = *param_4;
    }
    else {
      uVar3 = *param_4;
    }
    uVar4 = uVar3 | param_4[1];
    if ((uVar3 & param_4[1]) != 0) {
      return 0;
    }
  }
  if ((uVar4 & 0x10) != 0) {
    fVar10 = param_3[1];
    fVar8 = (param_3[3] - *(float *)(param_1 + 0x137c)) / (param_3[3] - param_3[7]);
    uVar4 = ((int)*param_4 >> 4 ^ 1U) & 1;
    fVar7 = param_3[5];
    fVar6 = param_2[4];
    pfVar5 = param_2 + uVar4 * 0xc;
    pfVar1 = param_3 + uVar4 * 4;
    fVar11 = (fVar8 * param_3[7]) / *(float *)(param_1 + 0x137c);
    *pfVar1 = *param_3 - fVar8 * (*param_3 - param_3[4]);
    pfVar1[1] = param_3[1] - fVar8 * (fVar10 - fVar7);
    pfVar1[2] = *(float *)(param_1 + 0x1378);
    pfVar1[3] = *(float *)(param_1 + 0x137c);
    *pfVar5 = *param_2 + fVar11 * (param_2[0xc] - *param_2);
    pfVar5[1] = param_2[1] + fVar11 * (param_2[0xd] - param_2[1]);
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x10];
    }
    else {
      fVar7 = param_2[0x10];
    }
    pfVar5[4] = (float)(int)((float)(uint)fVar6 + fVar11 * (float)(uint)((int)fVar7 - (int)fVar6));
    fVar6 = param_2[5];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x11];
      fVar8 = param_2[5];
    }
    else {
      fVar7 = param_2[0x11];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 5] =
         (float)(int)((float)(uint)fVar6 + fVar11 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[6];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x12];
      fVar8 = param_2[6];
    }
    else {
      fVar7 = param_2[0x12];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 6] =
         (float)(int)((float)(uint)fVar6 + fVar11 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[7];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x13];
      fVar8 = param_2[7];
    }
    else {
      fVar7 = param_2[0x13];
      fVar8 = fVar6;
    }
    pfVar1 = param_3 + uVar4 * 4;
    fVar9 = *(float *)(param_1 + 0x1360);
    fVar10 = *pfVar1;
    puVar2 = param_4 + uVar4;
    param_2[uVar4 * 0xc + 7] =
         (float)(int)((float)(uint)fVar6 + fVar11 * (float)(uint)((int)fVar7 - (int)fVar8));
    *puVar2 = 0;
    if (fVar10 < fVar9) {
      *puVar2 = 2;
    }
    if (*(float *)(param_1 + 0x1370) < *pfVar1) {
      *puVar2 = *puVar2 | 1;
      fVar6 = pfVar1[1];
    }
    else {
      fVar6 = pfVar1[1];
    }
    if (fVar6 < *(float *)(param_1 + 0x1364)) {
      *puVar2 = *puVar2 | 8;
      fVar7 = *(float *)(param_1 + 0x1374);
    }
    else {
      fVar7 = *(float *)(param_1 + 0x1374);
    }
    if (fVar7 < fVar6) {
      *puVar2 = *puVar2 | 4;
      uVar3 = *param_4;
    }
    else {
      uVar3 = *param_4;
    }
    uVar4 = uVar3 | param_4[1];
    if ((uVar3 & param_4[1]) != 0) {
      return 0;
    }
  }
  if ((uVar4 & 8) != 0) {
    fVar11 = param_3[2];
    fVar9 = (param_3[1] - *(float *)(param_1 + 0x1364)) / (param_3[1] - param_3[5]);
    uVar4 = ((int)*param_4 >> 3 ^ 1U) & 1;
    fVar7 = param_3[6];
    fVar8 = param_3[7];
    fVar10 = param_3[3];
    pfVar5 = param_2 + uVar4 * 0xc;
    fVar6 = param_2[4];
    pfVar1 = param_3 + uVar4 * 4;
    *pfVar1 = *param_3 - fVar9 * (*param_3 - param_3[4]);
    pfVar1[1] = *(float *)(param_1 + 0x1364);
    pfVar1[2] = param_3[2] - fVar9 * (fVar11 - fVar7);
    pfVar1[3] = param_3[3] - fVar9 * (fVar10 - fVar8);
    *pfVar5 = *param_2 + fVar9 * (param_2[0xc] - *param_2);
    pfVar5[1] = param_2[1] + fVar9 * (param_2[0xd] - param_2[1]);
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x10];
    }
    else {
      fVar7 = param_2[0x10];
    }
    pfVar5[4] = (float)(int)((float)(uint)fVar6 + fVar9 * (float)(uint)((int)fVar7 - (int)fVar6));
    fVar6 = param_2[5];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x11];
      fVar8 = param_2[5];
    }
    else {
      fVar7 = param_2[0x11];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 5] =
         (float)(int)((float)(uint)fVar6 + fVar9 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[6];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x12];
      fVar8 = param_2[6];
    }
    else {
      fVar7 = param_2[0x12];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 6] =
         (float)(int)((float)(uint)fVar6 + fVar9 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[7];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x13];
      fVar8 = param_2[7];
    }
    else {
      fVar7 = param_2[0x13];
      fVar8 = fVar6;
    }
    fVar11 = *(float *)(param_1 + 0x1360);
    fVar10 = param_3[uVar4 * 4];
    puVar2 = param_4 + uVar4;
    param_2[uVar4 * 0xc + 7] =
         (float)(int)((float)(uint)fVar6 + fVar9 * (float)(uint)((int)fVar7 - (int)fVar8));
    *puVar2 = 0;
    if (fVar10 < fVar11) {
      *puVar2 = 2;
    }
    if (*(float *)(param_1 + 0x1370) < param_3[uVar4 * 4]) {
      *puVar2 = *puVar2 | 1;
      uVar3 = *param_4;
    }
    else {
      uVar3 = *param_4;
    }
    uVar4 = uVar3 | param_4[1];
    if ((uVar3 & param_4[1]) != 0) {
      return 0;
    }
  }
  if ((uVar4 & 4) != 0) {
    fVar11 = param_3[2];
    fVar9 = (param_3[1] - *(float *)(param_1 + 0x1374)) / (param_3[1] - param_3[5]);
    uVar4 = ((int)*param_4 >> 2 ^ 1U) & 1;
    fVar7 = param_3[6];
    fVar8 = param_3[7];
    fVar10 = param_3[3];
    pfVar5 = param_2 + uVar4 * 0xc;
    fVar6 = param_2[4];
    pfVar1 = param_3 + uVar4 * 4;
    *pfVar1 = *param_3 - fVar9 * (*param_3 - param_3[4]);
    pfVar1[1] = *(float *)(param_1 + 0x1374);
    pfVar1[2] = param_3[2] - fVar9 * (fVar11 - fVar7);
    pfVar1[3] = param_3[3] - fVar9 * (fVar10 - fVar8);
    *pfVar5 = *param_2 + fVar9 * (param_2[0xc] - *param_2);
    pfVar5[1] = param_2[1] + fVar9 * (param_2[0xd] - param_2[1]);
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x10];
    }
    else {
      fVar7 = param_2[0x10];
    }
    pfVar5[4] = (float)(int)((float)(uint)fVar6 + fVar9 * (float)(uint)((int)fVar7 - (int)fVar6));
    fVar6 = param_2[5];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x11];
      fVar8 = param_2[5];
    }
    else {
      fVar7 = param_2[0x11];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 5] =
         (float)(int)((float)(uint)fVar6 + fVar9 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[6];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x12];
      fVar8 = param_2[6];
    }
    else {
      fVar7 = param_2[0x12];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 6] =
         (float)(int)((float)(uint)fVar6 + fVar9 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[7];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x13];
      fVar8 = param_2[7];
    }
    else {
      fVar7 = param_2[0x13];
      fVar8 = fVar6;
    }
    fVar11 = *(float *)(param_1 + 0x1360);
    fVar10 = param_3[uVar4 * 4];
    puVar2 = param_4 + uVar4;
    param_2[uVar4 * 0xc + 7] =
         (float)(int)((float)(uint)fVar6 + fVar9 * (float)(uint)((int)fVar7 - (int)fVar8));
    *puVar2 = 0;
    if (fVar10 < fVar11) {
      *puVar2 = 2;
    }
    if (*(float *)(param_1 + 0x1370) < param_3[uVar4 * 4]) {
      *puVar2 = *puVar2 | 1;
      uVar3 = *param_4;
    }
    else {
      uVar3 = *param_4;
    }
    uVar4 = uVar3 | param_4[1];
    if ((uVar3 & param_4[1]) != 0) {
      return 0;
    }
  }
  if ((uVar4 & 2) != 0) {
    uVar3 = ((int)*param_4 >> 1 ^ 1U) & 1;
    fVar7 = param_3[5];
    fVar10 = param_3[1];
    fVar13 = (*param_3 - *(float *)(param_1 + 0x1360)) / (*param_3 - param_3[4]);
    fVar12 = param_3[2];
    pfVar5 = param_2 + uVar3 * 0xc;
    fVar8 = param_3[6];
    fVar11 = param_3[3];
    pfVar1 = param_3 + uVar3 * 4;
    fVar9 = param_3[7];
    *pfVar1 = *(float *)(param_1 + 0x1360);
    fVar6 = param_2[4];
    pfVar1[1] = param_3[1] - fVar13 * (fVar10 - fVar7);
    pfVar1[2] = param_3[2] - fVar13 * (fVar12 - fVar8);
    pfVar1[3] = param_3[3] - fVar13 * (fVar11 - fVar9);
    *pfVar5 = *param_2 + fVar13 * (param_2[0xc] - *param_2);
    pfVar5[1] = param_2[1] + fVar13 * (param_2[0xd] - param_2[1]);
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x10];
    }
    else {
      fVar7 = param_2[0x10];
    }
    pfVar5[4] = (float)(int)((float)(uint)fVar6 + fVar13 * (float)(uint)((int)fVar7 - (int)fVar6));
    fVar6 = param_2[5];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x11];
      fVar8 = param_2[5];
    }
    else {
      fVar7 = param_2[0x11];
      fVar8 = fVar6;
    }
    param_2[uVar3 * 0xc + 5] =
         (float)(int)((float)(uint)fVar6 + fVar13 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[6];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x12];
      fVar8 = param_2[6];
    }
    else {
      fVar7 = param_2[0x12];
      fVar8 = fVar6;
    }
    param_2[uVar3 * 0xc + 6] =
         (float)(int)((float)(uint)fVar6 + fVar13 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[7];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x13];
      fVar8 = param_2[7];
    }
    else {
      fVar7 = param_2[0x13];
      fVar8 = fVar6;
    }
    param_2[uVar3 * 0xc + 7] =
         (float)(int)((float)(uint)fVar6 + fVar13 * (float)(uint)((int)fVar7 - (int)fVar8));
    param_4[uVar3] = 0;
  }
  if ((uVar4 & 1) != 0) {
    fVar10 = param_3[1];
    uVar4 = (*param_4 ^ 1) & 1;
    fVar7 = param_3[5];
    fVar12 = param_3[2];
    fVar13 = (*param_3 - *(float *)(param_1 + 0x1370)) / (*param_3 - param_3[4]);
    fVar9 = param_3[7];
    fVar8 = param_3[6];
    pfVar5 = param_2 + uVar4 * 0xc;
    fVar11 = param_3[3];
    pfVar1 = param_3 + uVar4 * 4;
    *pfVar1 = *(float *)(param_1 + 0x1370);
    fVar6 = param_2[4];
    pfVar1[1] = param_3[1] - fVar13 * (fVar10 - fVar7);
    pfVar1[2] = param_3[2] - fVar13 * (fVar12 - fVar8);
    pfVar1[3] = param_3[3] - fVar13 * (fVar11 - fVar9);
    *pfVar5 = *param_2 + fVar13 * (param_2[0xc] - *param_2);
    pfVar5[1] = param_2[1] + fVar13 * (param_2[0xd] - param_2[1]);
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x10];
    }
    else {
      fVar7 = param_2[0x10];
    }
    pfVar5[4] = (float)(int)((float)(uint)fVar6 + fVar13 * (float)(uint)((int)fVar7 - (int)fVar6));
    fVar6 = param_2[5];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x11];
      fVar8 = param_2[5];
    }
    else {
      fVar7 = param_2[0x11];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 5] =
         (float)(int)((float)(uint)fVar6 + fVar13 * (float)(uint)((int)fVar7 - (int)fVar8));
    fVar6 = param_2[6];
    if ((int)fVar6 < 0) {
      fVar7 = param_2[0x12];
      fVar8 = param_2[6];
    }
    else {
      fVar7 = param_2[0x12];
      fVar8 = fVar6;
    }
    param_2[uVar4 * 0xc + 6] =
         (float)(int)((float)(uint)fVar6 + fVar13 * (float)(uint)((int)fVar7 - (int)fVar8));
    if ((int)param_2[7] < 0) {
      fVar6 = param_2[7];
    }
    else {
      fVar6 = param_2[7];
    }
    param_2[uVar4 * 0xc + 7] =
         (float)(int)((float)(uint)param_2[7] +
                     fVar13 * (float)(uint)((int)param_2[0x13] - (int)fVar6));
    param_4[uVar4] = 0;
  }
  return 1;
}

