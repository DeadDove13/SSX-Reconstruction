/* Ghidra pseudocode. PS2 address: 00232d18. Not validated source. */

int FUN_00232d18(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar4 = *param_1;
  if ((iVar4 == 0) ||
     (iVar4 = (**(code **)(iVar4 + 4))
                        (iVar4,param_2,param_4,param_3,*(undefined2 *)((int)param_1 + 0xe)),
     0 < iVar4)) {
    fVar9 = (float)param_1[4];
    if ((float)param_1[5] != fVar9) {
      fVar12 = (float)param_1[5] + (float)param_1[6];
      param_1[5] = (int)fVar12;
      if ((float)param_1[6] < 0.0) {
        bVar2 = fVar12 < fVar9;
      }
      else {
        bVar2 = fVar9 < fVar12;
      }
      if (bVar2) {
        param_1[5] = (int)fVar9;
      }
      uVar5 = FUN_00258948((float)param_1[5] * 3.1415927);
      uVar5 = FUN_002520b8(uVar5);
      fVar9 = (float)FUN_00257d50(uVar5);
      uVar5 = FUN_002521d0(0x4000000000000000);
      fVar13 = fVar9 * fVar9;
      fVar12 = (float)FUN_00257d50(uVar5);
      fVar12 = 1.0 / (fVar12 * fVar9 + 1.0 + fVar13);
      param_1[7] = (int)fVar12;
      param_1[9] = (int)fVar12;
      param_1[10] = (int)(((fVar13 - 1.0) + (fVar13 - 1.0)) * fVar12);
      param_1[8] = (int)(fVar12 * -2.0);
      uVar5 = FUN_002521d0(0x4000000000000000);
      fVar12 = (float)FUN_00257d50(uVar5);
      param_1[0xb] = (int)(((1.0 - fVar12 * fVar9) + fVar13) * (float)param_1[7]);
    }
    iVar8 = 0;
    iVar4 = param_2;
    if (0 < param_2) {
      fVar14 = (float)param_1[7];
      fVar15 = (float)param_1[8];
      fVar12 = (float)param_1[9];
      fVar13 = (float)param_1[10];
      fVar9 = (float)param_1[0xb];
      do {
        iVar6 = iVar8 * 2;
        psVar7 = (short *)(iVar6 + (int)param_3);
        fVar10 = (float)param_1[0xd];
        sVar1 = *psVar7;
        fVar11 = (float)param_1[0xe];
        param_1[0xd] = param_1[0xc];
        iVar8 = iVar8 + 1;
        sVar3 = (short)(int)(((fVar14 * (float)(int)sVar1 + fVar15 * (float)param_1[0xc] +
                              fVar12 * fVar10) - fVar13 * fVar11) - fVar9 * (float)param_1[0xf]);
        *(short *)(iVar6 + (int)param_4) = sVar3;
        sVar1 = *psVar7;
        param_1[0xf] = (int)fVar11;
        param_1[0xe] = (int)(float)(int)sVar3;
        param_1[0xc] = (int)(float)(int)sVar1;
      } while (iVar8 < param_2);
    }
  }
  return iVar4;
}

