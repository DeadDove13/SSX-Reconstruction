/* Ghidra pseudocode. PS2 address: 0015bf40. Not validated source. */

void FUN_0015bf40(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  fStack_a0 = (float)param_1[0x11d];
  param_1[0x114] = 0;
  fStack_9c = (float)param_1[0x11e];
  fStack_98 = (float)param_1[0x11f];
  if (*param_1 == 0) {
    if (param_1[0x132] == 0) {
      fVar11 = (float)param_1[0x12f];
      pfVar3 = (float *)(param_1 + 0x133);
      if ((param_1[299] != 0) && (iVar10 = param_1[300], 0 < iVar10)) {
        iVar6 = iVar10;
        if (0 < iVar10) {
          do {
            iVar6 = iVar6 + -1;
            pfVar1 = pfVar3 + 2;
            fStack_a0 = fStack_a0 + *pfVar3;
            fStack_9c = fStack_9c + pfVar3[1];
            pfVar3 = pfVar3 + 0x16;
            fStack_98 = fStack_98 + *pfVar1;
          } while (iVar6 != 0);
        }
        fVar9 = 1.0 / (float)(iVar10 + 1);
        fStack_98 = fStack_98 * fVar9;
        fStack_a0 = fStack_a0 * fVar9;
        fStack_9c = fStack_9c * fVar9;
      }
      if ((fVar11 < 50.0) && (0.0 < (float)param_1[5])) {
        fVar11 = (float)param_1[5] * 20.0 + 10.0;
      }
      fStack_8c = 1.0;
      if ((param_1[0x12d] != 0) && ((float)param_1[0x12e] != 0.0)) {
        fStack_8c = (float)param_1[0x12e];
      }
      fStack_80 = fStack_a0 - (float)param_1[0x107];
      fStack_78 = fStack_98 - (float)param_1[0x109];
      fStack_90 = fStack_80 / fStack_8c;
      fStack_7c = fStack_9c - (float)param_1[0x108];
      fStack_88 = fStack_78 / fStack_8c;
      fStack_8c = fStack_7c / fStack_8c;
      param_1[0x107] = (int)((float)param_1[0x107] + fStack_90);
      param_1[0x108] = (int)((float)param_1[0x108] + fStack_8c);
      param_1[0x109] = (int)((float)param_1[0x109] + fStack_88);
      if (param_1[0x129] != 0) {
        if (0.0 < (float)param_1[5]) {
          fStack_90 = (float)param_1[0x126];
          fStack_8c = (float)param_1[0x127];
          fStack_88 = (float)param_1[0x128];
          FUN_00161b68(0x42480000,param_1 + 0x107,&fStack_90);
        }
        fVar8 = (float)FUN_0015bec0(param_1[0x120],param_1[0x130]);
        fVar9 = DAT_002c2508;
        if (fVar8 < 0.0) {
          iVar10 = FUN_0015bec0((float)param_1[0x120] + DAT_002c2508,0);
          param_1[0x120] = iVar10;
          iVar10 = FUN_0015bec0(fVar9,param_1[0x121]);
          param_1[0x121] = iVar10;
        }
      }
      fVar9 = (float)FUN_0015bec0(param_1[0x120],param_1[0x10a]);
      param_1[0x10a] = (int)((float)param_1[0x10a] + fVar9 / fVar11);
      fVar9 = (float)FUN_0015bec0(param_1[0x121],param_1[0x10b]);
      param_1[0x10b] = (int)((float)param_1[0x10b] + fVar9 / fVar11);
      fVar9 = (float)FUN_0015bec0(param_1[0x122],param_1[0x10c]);
      param_1[0x10c] = (int)((float)param_1[0x10c] + fVar9 / 25.0);
      param_1[0x10d] =
           (int)((float)param_1[0x10d] + ((float)param_1[0x123] - (float)param_1[0x10d]) / fVar11);
      goto LAB_0015c498;
    }
    iVar10 = param_1[0x129];
  }
  else {
    iVar10 = param_1[0x129];
  }
  param_1[0x132] = 0;
  if (iVar10 == 0) {
LAB_0015c298:
    iVar10 = param_1[0x11d];
  }
  else {
    fVar9 = (float)FUN_0015bec0(param_1[0x120],param_1[0x130]);
    fVar11 = DAT_002c250c;
    if (fVar9 < 0.0) {
      iVar10 = FUN_0015bec0((float)param_1[0x120] + DAT_002c250c);
      param_1[0x120] = iVar10;
      iVar10 = FUN_0015bec0(fVar11,param_1[0x121]);
      param_1[0x121] = iVar10;
      goto LAB_0015c298;
    }
    iVar10 = param_1[0x11d];
  }
  param_1[0x107] = iVar10;
  param_1[0x113] = param_1[0x129];
  param_1[0x108] = param_1[0x11e];
  param_1[0x114] = param_1[0x12a];
  param_1[0x109] = param_1[0x11f];
  param_1[0x115] = param_1[299];
  param_1[0x10a] = param_1[0x120];
  param_1[0x116] = param_1[300];
  param_1[0x10b] = param_1[0x121];
  param_1[0x10c] = param_1[0x122];
  param_1[0x10d] = param_1[0x123];
  param_1[0x10e] = param_1[0x124];
  param_1[0x10f] = param_1[0x125];
  param_1[0x110] = param_1[0x126];
  param_1[0x111] = param_1[0x127];
  param_1[0x112] = param_1[0x128];
  param_1[0x117] = param_1[0x12d];
  param_1[0x118] = param_1[0x12e];
  param_1[0x11c] = param_1[0x132];
  param_1[0x119] = param_1[0x12f];
  param_1[0x11a] = param_1[0x130];
  param_1[0x11b] = param_1[0x131];
  if ((param_1[0x129] != 0) && (0.0 < (float)param_1[5])) {
    fStack_90 = (float)param_1[0x126];
    fStack_8c = (float)param_1[0x127];
    fStack_88 = (float)param_1[0x128];
    FUN_00161b68(0x42480000,param_1 + 0x107,&fStack_90);
  }
  piVar5 = param_1 + 0x133;
  piVar4 = param_1 + 0x13c;
  iVar10 = 0xf;
  do {
    iVar10 = iVar10 + -1;
    iVar6 = param_1[0x129];
    *piVar5 = param_1[0x11d];
    piVar4[3] = iVar6;
    iVar6 = param_1[0x12a];
    piVar5[1] = param_1[0x11e];
    piVar4[4] = iVar6;
    iVar6 = param_1[299];
    piVar5[2] = param_1[0x11f];
    piVar4[5] = iVar6;
    iVar6 = param_1[300];
    piVar5[3] = param_1[0x120];
    iVar2 = param_1[0x12d];
    iVar7 = param_1[0x121];
    piVar4[6] = iVar6;
    piVar5[4] = iVar7;
    piVar5[5] = param_1[0x122];
    piVar5[6] = param_1[0x123];
    piVar5[7] = param_1[0x124];
    piVar5[8] = param_1[0x125];
    piVar5 = piVar5 + 0x16;
    *piVar4 = param_1[0x126];
    piVar4[1] = param_1[0x127];
    piVar4[2] = param_1[0x128];
    piVar4[7] = iVar2;
    iVar6 = param_1[0x132];
    piVar4[8] = param_1[0x12e];
    piVar4[0xc] = iVar6;
    piVar4[9] = param_1[0x12f];
    piVar4[10] = param_1[0x130];
    piVar4[0xb] = param_1[0x131];
    piVar4 = piVar4 + 0x16;
  } while (-1 < iVar10);
  param_1[3] = 0x43fa0000;
LAB_0015c498:
  if (param_1[1] == 0) {
    *param_1 = 0;
  }
  param_1[1] = 0;
  iVar10 = 0xe;
  piVar4 = param_1 + 0x270;
  piVar5 = param_1 + 0x267;
  do {
    iVar10 = iVar10 + -1;
    piVar5[0x1a] = piVar5[4];
    piVar5[0x16] = *piVar5;
    piVar5[0x17] = piVar5[1];
    piVar5[0x18] = piVar5[2];
    piVar5[0x19] = piVar5[3];
    piVar5[0x1b] = piVar5[5];
    piVar5[0x1c] = piVar5[6];
    piVar5[0x1d] = piVar5[7];
    piVar5[0x1e] = piVar5[8];
    piVar5 = piVar5 + -0x16;
    piVar4[0x16] = *piVar4;
    piVar4[0x17] = piVar4[1];
    piVar4[0x18] = piVar4[2];
    piVar4[0x1a] = piVar4[4];
    piVar4[0x19] = piVar4[3];
    piVar4[0x1b] = piVar4[5];
    piVar4[0x1c] = piVar4[6];
    piVar4[0x1d] = piVar4[7];
    piVar4[0x1e] = piVar4[8];
    piVar4[0x1f] = piVar4[9];
    piVar4[0x20] = piVar4[10];
    piVar4[0x21] = piVar4[0xb];
    piVar4[0x22] = piVar4[0xc];
    piVar4 = piVar4 + -0x16;
  } while (-1 < iVar10);
  param_1[0x133] = param_1[0x11d];
  param_1[0x13f] = param_1[0x129];
  param_1[0x134] = param_1[0x11e];
  param_1[0x140] = param_1[0x12a];
  param_1[0x135] = param_1[0x11f];
  param_1[0x141] = param_1[299];
  param_1[0x136] = param_1[0x120];
  param_1[0x142] = param_1[300];
  param_1[0x137] = param_1[0x121];
  param_1[0x138] = param_1[0x122];
  param_1[0x139] = param_1[0x123];
  param_1[0x13a] = param_1[0x124];
  param_1[0x13b] = param_1[0x125];
  param_1[0x13c] = param_1[0x126];
  param_1[0x13d] = param_1[0x127];
  param_1[0x13e] = param_1[0x128];
  param_1[0x143] = param_1[0x12d];
  param_1[0x144] = param_1[0x12e];
  param_1[0x148] = param_1[0x132];
  param_1[0x145] = param_1[0x12f];
  param_1[0x146] = param_1[0x130];
  param_1[0x147] = param_1[0x131];
  return;
}

