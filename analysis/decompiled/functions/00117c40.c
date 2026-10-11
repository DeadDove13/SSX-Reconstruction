/* Ghidra pseudocode. PS2 address: 00117c40. Not validated source. */

void FUN_00117c40(undefined1 (*param_1) [16],int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  fVar18 = DAT_002c16e0;
  iVar13 = *(int *)param_1[0x1c1] + -1;
  if (-1 < iVar13) {
    iVar8 = *(int *)(param_1[0x1c1] + 4);
    iVar10 = *(int *)param_1[0x1c1] + 0x3e + iVar8;
    do {
      iVar12 = iVar8 + iVar13;
      iVar2 = iVar10;
      if (-1 < iVar12) {
        iVar2 = iVar12;
      }
      fVar16 = *(float *)param_1[(iVar12 + (iVar2 >> 6) * -0x40) * 7 + 1] + fVar18;
      *(float *)param_1[(iVar12 + (iVar2 >> 6) * -0x40) * 7 + 1] = fVar16;
      if (2.0 < fVar16) {
        iVar10 = iVar12 + 1;
        iVar8 = iVar12 + 0x40;
        if (-1 < iVar10) {
          iVar8 = iVar10;
        }
        *(int *)param_1[0x1c1] = (*(int *)param_1[0x1c1] + -1) - iVar13;
        *(int *)(param_1[0x1c1] + 4) = iVar10 + (iVar8 >> 6) * -0x40;
        break;
      }
      iVar13 = iVar13 + -1;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar13);
  }
  if ((*(int *)(param_2 + 0x260) != 2) && (*(int *)(param_2 + 0x34c) == 2)) {
    uVar20 = *(undefined4 *)(param_2 + 0x75ec);
    uVar21 = *(undefined4 *)*(undefined1 (*) [16])(param_2 + 0x75e0);
    uVar15 = *(undefined4 *)(param_2 + 0x75e4);
    bVar1 = 1 < *(int *)(param_2 + 0x210) - 3U;
    uVar17 = *(undefined4 *)(param_2 + 0x75e8);
    if ((!bVar1) || (DAT_002c16e4 < ABS(*(float *)(param_2 + 0x1a4)))) {
      auVar23 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x75e0));
      auVar24 = _lqc2(*param_1);
      auVar23 = _vsub(auVar23,auVar24);
      auVar23 = _sqc2(auVar23);
      auVar23 = _lqc2(auVar23);
      auVar24 = _vaddbc(in_vf0,in_vf0);
      auVar23 = _vmul(auVar23,auVar23);
      _vaddabc(auVar23,auVar23);
      _vmaddabc(auVar24,auVar23);
      auVar23 = _vmaddbc(auVar24,auVar23);
      _vsqrt(auVar23);
      _vwaitq();
      uVar9 = _cfc2(in_vc6);
      if (70.0 < (float)uVar9) {
        if (*(int *)param_1[0x1c1] == 0x40) {
          iVar13 = *(int *)(param_1[0x1c1] + 4);
          iVar8 = iVar13 + 1;
          *(undefined4 *)param_1[0x1c1] = 0x3f;
          iVar13 = iVar13 + 0x40;
          if (-1 < iVar8) {
            iVar13 = iVar8;
          }
          *(int *)(param_1[0x1c1] + 4) = iVar8 + (iVar13 >> 6) * -0x40;
          iVar13 = *(int *)param_1[0x1c1];
        }
        else {
          iVar13 = *(int *)param_1[0x1c1];
        }
        fVar18 = *(float *)(param_2 + 0x1a4);
        iVar8 = *(int *)(param_1[0x1c1] + 4) + iVar13;
        *(int *)param_1[0x1c1] = iVar13 + 1;
        iVar13 = iVar8 + 0x3f;
        if (-1 < iVar8) {
          iVar13 = iVar8;
        }
        fVar18 = ABS(fVar18);
        pauVar14 = param_1 + (iVar8 + (iVar13 >> 6) * -0x40) * 7 + 1;
        if (!bVar1) {
          fVar18 = 1.0;
        }
        uVar3 = FUN_002109b0();
        uVar4 = FUN_002109b0();
        *(undefined4 *)*pauVar14 = 0;
        *(undefined4 *)pauVar14[2] = uVar21;
        *(undefined4 *)(pauVar14[2] + 4) = uVar15;
        *(undefined4 *)(pauVar14[2] + 8) = uVar17;
        *(undefined4 *)(pauVar14[2] + 0xc) = uVar20;
        uVar5 = *(undefined4 *)(param_2 + 0x134);
        uVar6 = *(undefined4 *)(param_2 + 0x138);
        uVar7 = *(undefined4 *)(param_2 + 0x13c);
        *(undefined4 *)pauVar14[3] = *(undefined4 *)(param_2 + 0x130);
        *(undefined4 *)(pauVar14[3] + 4) = uVar5;
        *(undefined4 *)(pauVar14[3] + 8) = uVar6;
        *(undefined4 *)(pauVar14[3] + 0xc) = uVar7;
        uVar5 = 0;
        *(float *)(*pauVar14 + 4) = (float)(uVar3 & 1);
        *(float *)(*pauVar14 + 8) = (float)(uVar4 & 1);
        if ((uVar3 & 1) == 0) {
          uVar5 = 0x3f800000;
        }
        uVar6 = 0;
        *(undefined4 *)(*pauVar14 + 0xc) = uVar5;
        if ((uVar4 & 1) == 0) {
          uVar6 = 0x3f800000;
        }
        *(undefined4 *)pauVar14[1] = uVar6;
        uVar3 = FUN_002109b0();
        fVar16 = DAT_002c16e8;
        *(uint *)pauVar14[4] = uVar3 & 3;
        fVar19 = DAT_002c16ec;
        pfVar11 = (float *)(pauVar14[4] + 8);
        *(float *)(pauVar14[4] + 4) = fVar18 * fVar16;
        uVar9 = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x478);
        *(undefined8 *)(pauVar14[4] + 8) = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x470);
        *(undefined8 *)pauVar14[5] = uVar9;
        fVar22 = *(float *)(pauVar14[4] + 0xc);
        fVar16 = *(float *)pauVar14[5];
        fVar18 = *(float *)(pauVar14[5] + 4);
        fVar19 = (fVar22 + fVar16 + fVar18) * fVar19;
        *(float *)(pauVar14[5] + 4) = fVar18 + (fVar19 - fVar18) * 0.5;
        *(float *)(pauVar14[4] + 0xc) = fVar22 + (fVar19 - fVar22) * 0.5;
        *(float *)pauVar14[5] = fVar16 + (fVar19 - fVar16) * 0.5;
        *(undefined4 *)(pauVar14[4] + 8) = 0;
        fVar16 = *(float *)(pauVar14[4] + 8);
        fVar18 = *(float *)(pauVar14[4] + 0xc);
        if (fVar18 < fVar16) {
          fVar19 = *(float *)pauVar14[5];
          fVar18 = fVar16;
        }
        else {
          if (1.0 < fVar18) {
            fVar18 = 1.0;
          }
          fVar19 = *(float *)pauVar14[5];
        }
        *(float *)(pauVar14[4] + 0xc) = fVar18;
        if (fVar19 < fVar16) {
          fVar19 = 0.0;
          fVar18 = *(float *)(pauVar14[5] + 4);
        }
        else {
          if (1.0 < fVar19) {
            fVar19 = 1.0;
          }
          fVar18 = *(float *)(pauVar14[5] + 4);
        }
        *(float *)pauVar14[5] = fVar19;
        if (fVar18 < fVar16) {
          fVar18 = 0.0;
          fVar19 = *pfVar11;
        }
        else {
          if (1.0 < fVar18) {
            fVar18 = 1.0;
          }
          fVar19 = *pfVar11;
        }
        *(float *)(pauVar14[5] + 4) = fVar18;
        if (fVar19 < fVar16) {
          *pfVar11 = 0.0;
        }
        else if (1.0 < fVar19) {
          *pfVar11 = 1.0;
        }
        else {
          *pfVar11 = fVar19;
        }
        if (bVar1) {
          *(undefined4 *)(pauVar14[5] + 8) = DAT_002c16f0;
        }
        else {
          *(undefined4 *)(pauVar14[5] + 8) = 0;
        }
        *(undefined4 *)(pauVar14[5] + 0xc) = 0x40000000;
        *(undefined4 *)(pauVar14[6] + 4) = 0x43c80000;
        *(undefined4 *)pauVar14[6] = 0x42a00000;
        *(undefined4 *)*param_1 = uVar21;
        *(undefined4 *)(*param_1 + 4) = uVar15;
        *(undefined4 *)(*param_1 + 8) = uVar17;
        *(undefined4 *)(*param_1 + 0xc) = uVar20;
      }
    }
  }
  return;
}

