/* Ghidra pseudocode. PS2 address: 001183c0. Not validated source. */

void FUN_001183c0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  
  fVar15 = DAT_002c16fc;
  iVar12 = param_1[0x354] + -1;
  if (-1 < iVar12) {
    iVar2 = param_1[0x355];
    iVar6 = param_1[0x354] + 0x3e + iVar2;
    do {
      iVar11 = iVar2 + iVar12;
      iVar1 = iVar6;
      if (-1 < iVar11) {
        iVar1 = iVar11;
      }
      fVar14 = (float)param_1[(iVar11 + (iVar1 >> 6) * -0x40) * 0xd + 0x14] + fVar15;
      param_1[(iVar11 + (iVar1 >> 6) * -0x40) * 0xd + 0x14] = fVar14;
      if (1.0 < fVar14) {
        iVar6 = iVar11 + 1;
        iVar2 = iVar11 + 0x40;
        if (-1 < iVar6) {
          iVar2 = iVar6;
        }
        param_1[0x354] = (param_1[0x354] + -1) - iVar12;
        param_1[0x355] = iVar6 + (iVar2 >> 6) * -0x40;
        break;
      }
      iVar12 = iVar12 + -1;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar12);
  }
  fVar15 = DAT_002c1700;
  pfVar7 = (float *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x478);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x470);
  *(undefined8 *)(param_1 + 0x12) = uVar10;
  fVar14 = DAT_002c1704;
  fVar19 = (float)param_1[0x11];
  fVar18 = (float)param_1[0x12];
  fVar16 = (float)param_1[0x13];
  fVar15 = (fVar19 + fVar18 + fVar16) * fVar15;
  param_1[0x13] = fVar16 + (fVar15 - fVar16) * 0.5;
  param_1[0x11] = fVar19 + (fVar15 - fVar19) * 0.5;
  param_1[0x12] = fVar18 + (fVar15 - fVar18) * 0.5;
  param_1[0x10] = 0;
  fVar16 = (float)param_1[0x10];
  fVar15 = (float)param_1[0x11];
  if (fVar15 < fVar16) {
    fVar15 = (float)param_1[0x12];
    fVar18 = fVar16;
  }
  else {
    fVar18 = fVar14;
    if (fVar15 <= fVar14) {
      fVar18 = fVar15;
    }
    fVar15 = (float)param_1[0x12];
  }
  param_1[0x11] = fVar18;
  if (fVar15 < fVar16) {
    fVar18 = 0.0;
    fVar15 = (float)param_1[0x13];
  }
  else {
    fVar18 = DAT_002c1708;
    if (fVar15 <= fVar14) {
      fVar18 = fVar15;
    }
    fVar15 = (float)param_1[0x13];
  }
  param_1[0x12] = fVar18;
  if (fVar15 < fVar16) {
    fVar18 = 0.0;
    fVar15 = *pfVar7;
  }
  else {
    fVar18 = DAT_002c170c;
    if (fVar15 <= fVar14) {
      fVar18 = fVar15;
    }
    fVar15 = *pfVar7;
  }
  param_1[0x13] = fVar18;
  if (fVar15 < fVar16) {
    iVar12 = *(int *)(param_2 + 0x34c);
    fVar16 = 0.0;
  }
  else {
    iVar12 = *(int *)(param_2 + 0x34c);
    fVar16 = DAT_002c1710;
    if (fVar15 <= fVar14) {
      fVar16 = fVar15;
    }
  }
  *pfVar7 = fVar16;
  if (iVar12 == 2) {
    uVar23 = *(undefined4 *)(param_2 + 0x254);
    uVar8 = *(undefined4 *)(param_2 + 600);
    uVar9 = *(undefined4 *)(param_2 + 0x25c);
    *param_1 = *(undefined4 *)(param_2 + 0x250);
    param_1[1] = uVar23;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
  }
  else {
    uVar23 = *(undefined4 *)(param_2 + 0xc4);
    uVar8 = *(undefined4 *)(param_2 + 200);
    uVar9 = *(undefined4 *)(param_2 + 0xcc);
    *param_1 = *(undefined4 *)(param_2 + 0xc0);
    param_1[1] = uVar23;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
  }
  auVar20 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  auVar22 = _vaddbc(in_vf0,in_vf0);
  auVar20 = _vmul(auVar20,auVar21);
  _vaddabc(auVar20,auVar20);
  _vmaddabc(auVar22,auVar20);
  auVar20 = _vmaddbc(auVar22,auVar20);
  auVar20 = _qmfc2(auVar20._0_4_);
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  auVar20 = _qmtc2(auVar20._0_4_);
  auVar20 = _vmulbc(auVar21,auVar20);
  auVar20 = _sqc2(auVar20);
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
  auVar20 = _lqc2(auVar20);
  auVar20 = _vsub(auVar21,auVar20);
  auVar20 = _sqc2(auVar20);
  auVar20 = _lqc2(auVar20);
  auVar22 = _vaddbc(in_vf0,in_vf0);
  auVar21 = _vmul(auVar20,auVar20);
  _vaddabc(auVar21,auVar21);
  _vmaddabc(auVar22,auVar21);
  auVar21 = _vmaddbc(auVar22,auVar21);
  _vrsqrt(in_vf0,auVar21);
  uVar23 = _vwaitq();
  auVar20 = _vmulq(auVar20,uVar23);
  auVar20 = _sqc2(auVar20);
  uStack_d8 = auVar20._8_4_;
  uStack_d4 = auVar20._12_4_;
  param_1[4] = auVar20._0_4_;
  param_1[5] = auVar20._4_4_;
  param_1[6] = uStack_d8;
  param_1[7] = uStack_d4;
  auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  _vopmula(auVar20,auVar21);
  auVar20 = _vopmsub(auVar21,auVar20);
  auVar20 = _vsub(auVar20,auVar20);
  auVar20 = _sqc2(auVar20);
  uStack_f8 = auVar20._8_4_;
  uStack_f4 = auVar20._12_4_;
  param_1[8] = auVar20._0_4_;
  param_1[9] = auVar20._4_4_;
  param_1[10] = uStack_f8;
  param_1[0xb] = uStack_f4;
  uVar23 = *(undefined4 *)(param_2 + 0x224);
  uVar8 = *(undefined4 *)(param_2 + 0x228);
  uVar9 = *(undefined4 *)(param_2 + 0x22c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x220);
  param_1[0xd] = uVar23;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar9;
  fVar15 = DAT_002c1718;
  if (((*(int *)(param_2 + 0x260) != 2) && (*(int *)(param_2 + 0x34c) == 2)) &&
     (*(int *)(param_2 + 0x210) - 3U < 2)) {
    iVar12 = (int)(*(float *)(param_2 + 0xe0) / DAT_002c1714 + 0.5);
    if (iVar12 < 1) {
      iVar12 = 1;
    }
    fVar14 = DAT_002c171c;
    if (0 < iVar12) {
      do {
        if (param_1[0x354] == 0x40) {
          param_1[0x354] = 0x3f;
          iVar6 = param_1[0x355] + 1;
          iVar2 = param_1[0x355] + 0x40;
          if (-1 < iVar6) {
            iVar2 = iVar6;
          }
          param_1[0x355] = iVar6 + (iVar2 >> 6) * -0x40;
          iVar2 = param_1[0x354];
        }
        else {
          iVar2 = param_1[0x354];
        }
        iVar6 = param_1[0x355] + iVar2;
        param_1[0x354] = iVar2 + 1;
        iVar2 = iVar6 + 0x3f;
        if (-1 < iVar6) {
          iVar2 = iVar6;
        }
        puVar13 = param_1 + (iVar6 + (iVar2 >> 6) * -0x40) * 0xd + 0x14;
        uVar3 = FUN_002109b0();
        uVar4 = FUN_002109b0();
        *puVar13 = 0;
        uVar5 = FUN_002109b0();
        puVar13[5] = ((float)(uVar5 & 0x7fffff | 0x3f800000) - 1.0) * fVar14 + fVar15;
        uVar5 = FUN_002109b0();
        puVar13[2] = (float)(uVar4 & 1);
        puVar13[1] = (float)(uVar3 & 1);
        puVar13[6] = ((float)(uVar5 & 0x7fffff | 0x3f800000) - 1.0) * fVar14 + fVar15;
        uVar23 = 0;
        if ((uVar3 & 1) == 0) {
          uVar23 = 0x3f800000;
        }
        uVar8 = 0;
        if ((uVar4 & 1) == 0) {
          uVar8 = 0x3f800000;
        }
        puVar13[3] = uVar23;
        puVar13[4] = uVar8;
        uVar3 = FUN_002109b0();
        uVar23 = DAT_002c1724;
        fVar16 = DAT_002c1720;
        puVar13[9] = 0;
        puVar13[7] = uVar3 & 3;
        puVar13[8] = uVar23;
        uVar3 = FUN_002109b0();
        fVar18 = DAT_002c1728;
        fVar17 = *(float *)(param_2 + 0xe0) / DAT_002c172c;
        fVar19 = (((float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0) * fVar16 + DAT_002c1728) *
                 DAT_002c1730;
        if (fVar17 <= 1.0) {
          fVar19 = fVar19 * fVar17;
        }
        puVar13[10] = fVar19;
        iVar12 = iVar12 + -1;
        uVar3 = FUN_002109b0();
        puVar13[0xb] = (((float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0) * fVar16 + fVar18) *
                       DAT_002c1734;
        uVar3 = FUN_002109b0();
        puVar13[0xc] = (((float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0) * fVar16 + fVar18) *
                       DAT_002c1738;
      } while (iVar12 != 0);
    }
  }
  return;
}

