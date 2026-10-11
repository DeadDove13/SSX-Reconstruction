/* Ghidra pseudocode. PS2 address: 0013fcb0. Not validated source. */

void FUN_0013fcb0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  float afStack_9c [3];
  
  iVar2 = *(int *)(param_1 + 0xc);
  fVar14 = *(float *)(iVar2 + 0xa4) * DAT_002c215c;
  fVar15 = *(float *)(iVar2 + 0x1a4);
  auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x290));
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar17);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  fVar13 = auVar16._0_4_;
  auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x2a0));
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar17);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  pfVar7 = (float *)(*(int *)(iVar2 + 0x210) * 0x60 + *(int *)(DAT_002859e4 + 0x1c));
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _vmul(auVar17,auVar18);
  _vaddabc(auVar17,auVar17);
  _vmaddabc(auVar19,auVar17);
  auVar17 = _vmaddbc(auVar19,auVar17);
  auVar17 = _qmfc2(auVar17._0_4_);
  uVar20 = auVar17._0_4_;
  fVar9 = (float)FUN_0013f678(*(undefined4 *)(iVar2 + 0x14c),uVar20,fVar14);
  fVar10 = (float)FUN_0013f758();
  fVar11 = (float)FUN_0013f9c8(fVar13,fVar9 / *pfVar7);
  uVar12 = FUN_0013fb58(auVar16._0_4_,fVar13,fVar15);
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(float *)(iVar2 + 0x228) < 0.0) {
    if (0.0 <= fVar9) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      fVar9 = 0.0;
    }
  }
  *(float *)(iVar2 + 0xe4) = fVar11;
  FUN_00218128(*(undefined4 *)(iVar2 + 0x168),&uStack_a0,afStack_9c);
  fVar8 = *pfVar7 + *pfVar7;
  if (fVar9 <= fVar8) {
    fVar8 = fVar9;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  fVar9 = fVar9 - fVar8 / afStack_9c[0];
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
  auVar16 = _qmtc2(afStack_9c[0]);
  auVar16 = _vmulbc(auVar17,auVar16);
  auVar16 = _sqc2(auVar16);
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x2a0));
  auVar17 = _qmtc2(uStack_a0);
  auVar17 = _vmulbc(auVar18,auVar17);
  auStack_130 = _sqc2(auVar17);
  auVar16 = _lqc2(auVar16);
  auVar17 = _lqc2(auStack_130);
  auVar16 = _vadd(auVar16,auVar17);
  auVar16 = _sqc2(auVar16);
  if (*(float *)(iVar2 + 0x18c) == 0.0) {
    if (fVar13 < DAT_002c2160) {
      iVar2 = *(int *)(iVar2 + 0x350);
      if (((iVar2 != 3) && (iVar2 != 5)) && (iVar2 != 0xc)) {
        iVar2 = *(int *)(param_1 + 0xc);
        goto LAB_0013ff10;
      }
      auStack_120 = auVar16;
      FUN_0010b330(*(undefined4 *)(param_1 + 0xc),4);
    }
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
  }
LAB_0013ff10:
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
  auVar17 = _qmtc2(fVar9);
  auVar17 = _vmulbc(auVar18,auVar17);
  auStack_100 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar16);
  auVar16 = _qmtc2(fVar8 / afStack_9c[0]);
  auVar16 = _vmulbc(auVar17,auVar16);
  auStack_f0 = _sqc2(auVar16);
  auVar16 = _lqc2(auStack_100);
  auVar17 = _lqc2(auStack_f0);
  auVar16 = _vadd(auVar16,auVar17);
  auStack_110 = _sqc2(auVar16);
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x290));
  auVar16 = _qmtc2(fVar11 + fVar10);
  auVar16 = _vmulbc(auVar17,auVar16);
  auStack_e0 = _sqc2(auVar16);
  auVar16 = _lqc2(auStack_110);
  auVar17 = _lqc2(auStack_e0);
  auVar16 = _vadd(auVar16,auVar17);
  auVar16 = _sqc2(auVar16);
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x2a0));
  auVar17 = _qmtc2(uVar12);
  auVar17 = _vmulbc(auVar18,auVar17);
  auStack_d0 = _sqc2(auVar17);
  auVar16 = _lqc2(auVar16);
  auVar17 = _lqc2(auStack_d0);
  auVar16 = _vadd(auVar16,auVar17);
  auVar16 = _sqc2(auVar16);
  auStack_c0 = ZEXT416((uint)-*pfVar7) << 0x40;
  auVar16 = _lqc2(auVar16);
  auVar17 = _lqc2(auStack_c0);
  auVar16 = _vadd(auVar16,auVar17);
  auStack_b0 = _sqc2(auVar16);
  fVar13 = *(float *)(iVar2 + 0x218) + *(float *)(iVar2 + 0x14c);
  if (fVar13 < -10.0) {
    fVar13 = -10.0;
  }
  auStack_140 = auStack_b0;
  if (fVar13 < 0.0) {
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
    auVar16 = _qmtc2(fVar13);
    auVar16 = _vmulbc(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xc0));
    auVar16 = _lqc2(auVar16);
    auVar16 = _vsub(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(iVar2 + 0xc0) = auVar16;
    iVar2 = *(int *)(param_1 + 0xc);
    *(float *)(iVar2 + 0x14c) = *(float *)(iVar2 + 0x14c) - fVar13;
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
    auVar16 = _qmtc2(uVar20);
    auVar16 = _vmulbc(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar16 = _lqc2(auVar16);
    auVar16 = _vsub(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(iVar2 + 0xd0) = auVar16;
    auVar16 = _lqc2(auStack_b0);
    auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0xc) + 0x220));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    if (auVar16._0_4_ < 0.0) {
      auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0xc) + 0x220));
      auVar16 = _qmtc2(auVar16._0_4_);
      auVar16 = _vmulbc(auVar17,auVar16);
      auVar16 = _sqc2(auVar16);
      auVar17 = _lqc2(auStack_b0);
      auVar16 = _lqc2(auVar16);
      auVar16 = _vsub(auVar17,auVar16);
      auStack_140 = _sqc2(auVar16);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xc0));
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x240));
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar17);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  auVar17 = _qmfc2(auVar16._0_4_);
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
  auVar16 = _qmtc2(fVar14);
  auVar16 = _vmulbc(auVar18,auVar16);
  auVar16 = _sqc2(auVar16);
  fVar13 = fVar14 * DAT_002c2164;
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xc0));
  auVar16 = _lqc2(auVar16);
  auVar16 = _vadd(auVar18,auVar16);
  auVar16 = _sqc2(auVar16);
  *(undefined1 (*) [16])(iVar2 + 0xc0) = auVar16;
  auVar18 = _lqc2(auStack_140);
  auVar16 = _qmtc2(fVar14);
  auVar16 = _vmulbc(auVar18,auVar16);
  auStack_130 = _sqc2(auVar16);
  auVar16 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0xc) + 0xd0));
  auVar18 = _lqc2(auStack_130);
  auVar16 = _vadd(auVar16,auVar18);
  auVar16 = _sqc2(auVar16);
  *(undefined1 (*) [16])(*(int *)(param_1 + 0xc) + 0xd0) = auVar16;
  iVar2 = *(int *)(param_1 + 0xc);
  auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar16);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  _vsqrt(auVar16);
  _vwaitq();
  uVar3 = _cfc2(in_vc6);
  *(int *)(iVar2 + 0xe0) = (int)uVar3;
  auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xc0));
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x240));
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar18);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar19,auVar16);
  auVar16 = _vmaddbc(auVar19,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  *(float *)(iVar2 + 0x150) =
       (*(float *)(iVar2 + 0x150) + (auVar17._0_4_ - auVar16._0_4_)) * (1.0 - fVar13);
  if (*(int *)(iVar2 + 0x344) == 2) {
    fVar9 = 15.0;
    fVar13 = -10.0;
  }
  else {
    fVar9 = 10.0;
    fVar13 = -20.0;
  }
  fVar9 = *(float *)(iVar2 + 0x198) * fVar9;
  fVar13 = (1.0 - *(float *)(iVar2 + 0x198)) * fVar13;
  fVar10 = *(float *)(*(int *)(param_1 + 0xc) + 0x150);
  if ((fVar13 <= fVar10) && (fVar13 = fVar10, fVar9 < fVar10)) {
    fVar13 = fVar9;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(float *)(iVar2 + 0x150) = fVar13;
  if ((*(int *)(iVar2 + 0x350) == 0xe) && (*(float *)(iVar2 + 0x1a4) == 0.0)) {
    iVar2 = *(int *)(param_1 + 0xc);
    auStack_120 = auStack_130;
  }
  else {
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x290));
    _vopmula(auVar16,auVar17);
    auVar16 = _vopmsub(auVar17,auVar16);
    auVar16 = _vsub(auVar16,auVar16);
    auStack_120 = _sqc2(auVar16);
    auVar16 = _qmtc2(*(undefined4 *)(iVar2 + 0xe0));
    _vdiv(in_vf0,0,auVar16,0);
    auVar16 = _lqc2(auStack_120);
    uVar20 = _vwaitq();
    auVar16 = _vmulq(auVar16,uVar20);
    auStack_130 = _sqc2(auVar16);
    auVar16 = _lqc2(auStack_130);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    fVar9 = auVar16._0_4_;
    fVar13 = DAT_002c2168;
    if ((DAT_002c2168 <= fVar9) && (fVar13 = fVar9, DAT_002c216c < fVar9)) {
      fVar13 = DAT_002c216c;
    }
    auStack_110 = auStack_130;
    fVar10 = (float)FUN_00218410(fVar13);
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x344);
    fVar13 = DAT_002c2170;
    fVar9 = DAT_002c2174;
    if ((iVar2 != 2) && (fVar13 = DAT_002c2180, fVar9 = DAT_002c2184, iVar2 == 0)) {
      fVar13 = DAT_002c2178;
      fVar9 = DAT_002c217c;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x290));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    fVar13 = -fVar10 + ((fVar13 * 0.5 * (1.0 - fVar15 * fVar15) + 1.0) * fVar15 * fVar9) /
                       (*(float *)(iVar2 + 0x198) * DAT_002c2188 + 1.0);
    if (auVar16._0_4_ < 0.0) {
      fVar13 = -fVar13;
    }
    fVar9 = *(float *)(iVar2 + 0xe0);
    fVar14 = fVar9 * DAT_002c218c * fVar9 * fVar14;
    if (1.0 < fVar14) {
      fVar14 = 1.0;
    }
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x230));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    fVar10 = fVar9 / DAT_002c2190;
    if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
    fVar9 = fVar10 * (0.5 - ABS(auVar16._0_4_) / fVar9) * 40.0;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    fVar9 = fVar9 + DAT_002c2194;
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    fVar10 = fVar15;
    if (fVar13 <= 0.0) {
      fVar10 = -fVar15;
    }
    if (fVar9 <= fVar10) {
      if (0.0 < fVar13) {
        fVar14 = fVar14 * fVar15;
      }
      else {
        fVar14 = fVar14 * -fVar15;
      }
    }
    else {
      fVar14 = fVar14 * fVar9;
    }
    FUN_001129e8(fVar13 * fVar14,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0xc) + 0x220);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x3c4) = DAT_002c4370;
  lVar4 = FUN_00110940(iVar2);
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar2 + 0x3c4) = 0xffffffff;
  lVar5 = FUN_001125e8(iVar2);
  fVar13 = DAT_002c2198;
  iVar2 = *(int *)(param_1 + 0xc);
  if (1 < *(int *)(iVar2 + 0x210) - 3U) {
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar16);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar17,auVar16);
    auVar16 = _vmaddbc(auVar17,auVar16);
    _vsqrt(auVar16);
    _vwaitq();
    uVar3 = _cfc2(in_vc6);
    *(int *)(iVar2 + 0xe0) = (int)uVar3;
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
    auVar16 = _qmtc2(auVar16._0_4_ * fVar13);
    auVar16 = _vmulbc(auVar17,auVar16);
    auStack_130 = _sqc2(auVar16);
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar17 = _lqc2(auStack_130);
    auVar16 = _vsub(auVar16,auVar17);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(iVar2 + 0xd0) = auVar16;
    iVar2 = *(int *)(param_1 + 0xc);
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar16);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar17,auVar16);
    auVar16 = _vmaddbc(auVar17,auVar16);
    _vsqrt(auVar16);
    _vwaitq();
    uVar3 = _cfc2(in_vc6);
    auStack_120 = auStack_130;
    if ((float)uVar3 != 0.0) {
      auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
      auVar16 = _qmtc2(*(float *)(iVar2 + 0xe0) / (float)uVar3);
      auVar16 = _vmulbc(auVar17,auVar16);
      auVar16 = _sqc2(auVar16);
      *(undefined1 (*) [16])(iVar2 + 0xd0) = auVar16;
    }
  }
  if (lVar4 == 0) {
    if ((lVar5 == 0) || (piVar6 = *(int **)(param_1 + 0xc), pfVar7[5] < (float)piVar6[0x53])) {
      FUN_00111f98(*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  else {
    piVar6 = *(int **)(param_1 + 0xc);
  }
  iVar2 = piVar6[0x84];
  bVar1 = false;
  if ((iVar2 != 6) && (iVar2 != 9)) {
    bVar1 = iVar2 != 10;
  }
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0xc);
    auStack_110 = ZEXT416((uint)(*(float *)(iVar2 + 0x228) * 0.5)) << 0x40;
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
    auVar17 = _lqc2(auStack_110);
    auVar16 = _vadd(auVar16,auVar17);
    auVar16 = _sqc2(auVar16);
    auVar16 = _lqc2(auVar16);
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar17 = _vmul(auVar16,auVar16);
    _vaddabc(auVar17,auVar17);
    _vmaddabc(auVar18,auVar17);
    auVar17 = _vmaddbc(auVar18,auVar17);
    _vrsqrt(in_vf0,auVar17);
    uVar20 = _vwaitq();
    auVar16 = _vmulq(auVar16,uVar20);
    auStack_130 = _sqc2(auVar16);
    auVar16 = _lqc2(auStack_130);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x130));
    _vopmula(auVar16,auVar17);
    auVar16 = _vopmsub(auVar17,auVar16);
    auVar16 = _vsub(auVar16,auVar16);
    auStack_110 = _sqc2(auVar16);
    auVar16 = _lqc2(auStack_110);
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar16);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar17,auVar16);
    auVar16 = _vmaddbc(auVar17,auVar16);
    _vsqrt(auVar16);
    _vwaitq();
    uVar3 = _cfc2(in_vc6);
    fVar13 = (float)uVar3;
    auStack_100 = auStack_130;
    if (DAT_002c219c < fVar13) {
      auVar16 = _qmtc2(fVar13);
      _vdiv(in_vf0,0,auVar16,0);
      auVar16 = _lqc2(auStack_110);
      uVar20 = _vwaitq();
      auVar16 = _vmulq(auVar16,uVar20);
      auStack_120 = _sqc2(auVar16);
      if (DAT_002c21a0 < fVar13) {
        fVar13 = DAT_002c21a0;
      }
      fVar13 = (float)FUN_00218410(fVar13);
      FUN_001129e8(-fVar13 * DAT_002c21a4,*(undefined4 *)(param_1 + 0xc),auStack_120);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
      auStack_120 = auStack_110;
    }
    fVar13 = DAT_002c21b4;
    fVar10 = *(float *)(iVar2 + 0xe0) * DAT_002c21a8;
    fVar9 = 1.0;
    if (fVar10 <= 1.0) {
      fVar9 = fVar10;
    }
    fVar9 = fVar9 * (ABS(fVar15) + ABS(*(float *)(iVar2 + 0x18c)) + DAT_002c21ac);
    fVar10 = *(float *)(param_1 + 8) + fVar9 * DAT_002c21b0;
    bVar1 = DAT_002c21b4 <= fVar10;
    *(float *)(param_1 + 8) = fVar10;
    if (bVar1) {
      *(float *)(param_1 + 8) = fVar10 - fVar13;
    }
    fVar13 = (float)FUN_00218328(*(undefined4 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0xc);
    *(float *)(iVar2 + 0x15c) = fVar9 * 7.5 * fVar13;
    FUN_00110148(iVar2);
    FUN_0010f4d8(*(undefined4 *)(param_1 + 0xc));
  }
  else {
    auStack_130 = *(undefined1 (*) [16])(piVar6 + 0x30);
    auVar16 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x34));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar17 = _vmul(auVar16,auVar16);
    _vaddabc(auVar17,auVar17);
    _vmaddabc(auVar18,auVar17);
    auVar17 = _vmaddbc(auVar18,auVar17);
    _vrsqrt(in_vf0,auVar17);
    uVar20 = _vwaitq();
    auVar16 = _vmulq(auVar16,uVar20);
    auStack_120 = _sqc2(auVar16);
    auStack_110 = *(undefined1 (*) [16])(piVar6 + 0x88);
    auVar16 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x88));
    auVar17 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x34));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    auStack_100._0_4_ = auVar16._0_4_;
    auStack_f0 = auStack_120;
    auStack_e0 = auStack_120;
    (**(code **)(*piVar6 + 100))
              ((int)piVar6 + (int)*(short *)(*piVar6 + 0x60),piVar6 + 0x30,piVar6 + 0x34,
               piVar6 + 0x88);
    FUN_0010a088(*(undefined4 *)(param_1 + 0xc),auStack_130);
    uVar20 = FUN_00137a48(*(int *)(param_1 + 0xc) + 0x8370,0);
    FUN_00107cb0(uVar20,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

