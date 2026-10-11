/* Ghidra pseudocode. PS2 address: 00140b10. Not validated source. */

void FUN_00140b10(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined1 auStack_1d0 [16];
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [20];
  undefined4 uStack_19c;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [8];
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [8];
  float fStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [8];
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_80;
  undefined4 auStack_7c [3];
  
  bVar3 = false;
  iVar4 = *(int *)(param_1 + 0x10);
  auVar14 = _qmtc2(*(undefined4 *)(iVar4 + 0xe0));
  _vdiv(in_vf0,0,auVar14,0);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
  uVar18 = _vwaitq();
  auVar14 = _vmulq(auVar14,uVar18);
  auStack_180 = _sqc2(auVar14);
  fVar13 = *(float *)(iVar4 + 0xa4) * DAT_002c21d8;
  uStack_190 = auStack_180._0_4_;
  uStack_18c = auStack_180._4_4_;
  uStack_188 = auStack_180._8_4_;
  uStack_184 = auStack_180._12_4_;
  lVar5 = FUN_0021c970(0x299cc8,iVar4 + 0xc0,&uStack_190,auStack_1d0);
  if (lVar5 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x210) = uStack_19c;
    auVar14._4_4_ = uStack_18c;
    auVar14._0_4_ = uStack_190;
    auVar14._8_4_ = uStack_188;
    auVar14._12_4_ = uStack_184;
    auVar14 = _lqc2(auVar14);
    auVar16 = _lqc2(auStack_1b0._0_16_);
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _vmul(auVar14,auVar16);
    _vaddabc(auVar14,auVar14);
    _vmaddabc(auVar17,auVar14);
    auVar14 = _vmaddbc(auVar17,auVar14);
    auVar14 = _qmfc2(auVar14._0_4_);
    if (auVar14._0_4_ < 0.0) {
      auVar16 = _lqc2(auStack_1b0._0_16_);
      auVar14 = _qmtc2(0xbf800000);
      auVar14 = _vmulbc(auVar16,auVar14);
      auStack_1b0._0_16_ = _sqc2(auVar14);
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    *(undefined4 *)(iVar4 + 0x250) = uStack_1c0;
    *(undefined4 *)(iVar4 + 0x254) = uStack_1bc;
    *(undefined4 *)(iVar4 + 600) = uStack_1b8;
    *(undefined4 *)(iVar4 + 0x25c) = uStack_1b4;
    fVar9 = DAT_002c21e8;
    fVar8 = DAT_002c21e4;
    fVar7 = *(float *)(*(int *)(param_1 + 0x10) + 0xe0);
    iVar4 = *(int *)(param_1 + 0x10);
    if (fVar7 < DAT_002c21dc) {
      fVar7 = 0.5;
    }
    else {
      fVar7 = fVar7 * DAT_002c21e0;
    }
    fVar11 = 103.0;
    bVar1 = 1 < *(int *)(iVar4 + 0x16c) - 3U;
    if (bVar1) {
      fVar11 = 40.0;
    }
    auVar16._4_4_ = uStack_1bc;
    auVar16._0_4_ = uStack_1c0;
    auVar16._8_4_ = uStack_1b8;
    auVar16._12_4_ = uStack_1b4;
    auVar14 = _lqc2(auVar16);
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xc0));
    auVar14 = _vsub(auVar14,auVar16);
    auStack_180 = _sqc2(auVar14);
    auVar14 = _lqc2(auStack_180);
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x120));
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _vmul(auVar14,auVar16);
    _vaddabc(auVar14,auVar14);
    _vmaddabc(auVar17,auVar14);
    auVar14 = _vmaddbc(auVar17,auVar14);
    auVar14 = _qmfc2(auVar14._0_4_);
    fVar12 = auVar14._0_4_;
    if (ABS(fVar12) < fVar11) {
      bVar3 = true;
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + fVar13;
      auVar14 = _lqc2(auStack_180);
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x130));
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _vmul(auVar14,auVar16);
      _vaddabc(auVar14,auVar14);
      _vmaddabc(auVar17,auVar14);
      auVar14 = _vmaddbc(auVar17,auVar14);
      auVar14 = _qmfc2(auVar14._0_4_);
      fVar11 = auVar14._0_4_;
      if ((fVar8 <= fVar11) && (fVar8 = fVar11, fVar9 < fVar11)) {
        fVar8 = fVar9;
      }
      iVar4 = *(int *)(param_1 + 0x10);
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x130));
      auVar14 = _qmtc2(fVar8);
      auVar14 = _vmulbc(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xc0));
      auVar14 = _lqc2(auVar14);
      auVar14 = _vadd(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      *(undefined1 (*) [16])(iVar4 + 0xc0) = auVar14;
      iVar4 = *(int *)(param_1 + 0x10);
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
      auVar16 = _lqc2(auStack_1b0._0_16_);
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _vmul(auVar14,auVar16);
      _vaddabc(auVar14,auVar14);
      _vmaddabc(auVar17,auVar14);
      auVar14 = _vmaddbc(auVar17,auVar14);
      auVar17 = _qmfc2(auVar14._0_4_);
      auVar16 = _lqc2(auStack_1b0._0_16_);
      auVar14 = _qmtc2(auVar17._0_4_);
      auVar14 = _vmulbc(auVar16,auVar14);
      auStack_170 = _sqc2(auVar14);
      auVar16 = _lqc2(auStack_170);
      auVar14 = _qmtc2(fVar13 * 30.0);
      auVar14 = _vmulbc(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      auVar15 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
      auVar16 = _qmtc2(1.0 - fVar13 * 30.0);
      auVar16 = _vmulbc(auVar15,auVar16);
      auVar16 = _sqc2(auVar16);
      auVar14 = _lqc2(auVar14);
      auVar16 = _lqc2(auVar16);
      auVar14 = _vadd(auVar14,auVar16);
      auVar14 = _sqc2(auVar14);
      auStack_130._12_4_ = auVar14._12_4_;
      auStack_160._0_4_ = auVar14._0_4_;
      auStack_160._4_4_ = auVar14._4_4_;
      auStack_160._8_4_ = auVar14._8_4_;
      *(undefined4 *)(iVar4 + 0xd0) = auStack_160._0_4_;
      *(undefined4 *)(iVar4 + 0xd4) = auStack_160._4_4_;
      *(undefined4 *)(iVar4 + 0xd8) = auStack_160._8_4_;
      *(undefined4 *)(iVar4 + 0xdc) = auStack_130._12_4_;
      if (DAT_002c4380 == 0) {
        DAT_002c660c = 0;
        DAT_002c6608 = 0xc4750000;
        DAT_002c6600 = 0;
        DAT_002c4380 = 1;
        DAT_002c6604 = 0;
      }
      auVar15._4_4_ = DAT_002c6604;
      auVar15._0_4_ = DAT_002c6600;
      auVar15._8_4_ = DAT_002c6608;
      auVar15._12_4_ = DAT_002c660c;
      auVar14 = _lqc2(auVar15);
      auVar16 = _lqc2(auStack_1b0._0_16_);
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _vmul(auVar14,auVar16);
      _vaddabc(auVar14,auVar14);
      _vmaddabc(auVar15,auVar14);
      auVar14 = _vmaddbc(auVar15,auVar14);
      auVar14 = _qmfc2(auVar14._0_4_);
      auVar16 = _lqc2(auStack_1b0._0_16_);
      auVar14 = _qmtc2(auVar14._0_4_);
      auVar14 = _vmulbc(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      auVar15 = _lqc2(auStack_170);
      auVar16 = _qmtc2(0);
      auVar16 = _vmulbc(auVar15,auVar16);
      auVar16 = _sqc2(auVar16);
      auVar14 = _lqc2(auVar14);
      auVar16 = _lqc2(auVar16);
      auVar14 = _vsub(auVar14,auVar16);
      auStack_130 = _sqc2(auVar14);
      fVar8 = *(float *)(*(int *)(param_1 + 0x10) + 0xa8);
      auStack_160 = auStack_130;
      if (0.0 < fVar8) {
        fVar9 = DAT_002c21f0;
        if (auVar17._0_4_ <= 0.0) {
          fVar9 = DAT_002c21ec;
        }
        auVar16 = _lqc2(auStack_1b0._0_16_);
        auVar14 = _qmtc2(fVar8 * fVar9);
        auVar14 = _vmulbc(auVar16,auVar14);
        auVar14 = _sqc2(auVar14);
        auVar16 = _lqc2(auStack_130);
        auVar14 = _lqc2(auVar14);
        auVar14 = _vadd(auVar16,auVar14);
        auStack_160 = _sqc2(auVar14);
      }
      auVar16 = _lqc2(auStack_160);
      auVar14 = _qmtc2(fVar13);
      auVar14 = _vmulbc(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      fVar8 = 0.5;
      auVar16 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x10) + 0xd0));
      auVar14 = _lqc2(auVar14);
      auVar14 = _vadd(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      *(undefined1 (*) [16])(*(int *)(param_1 + 0x10) + 0xd0) = auVar14;
      iVar4 = *(int *)(param_1 + 0x10);
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
      auVar14 = _qmtc2(fVar13);
      auVar14 = _vmulbc(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xc0));
      auVar14 = _lqc2(auVar14);
      auVar14 = _vadd(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      *(undefined1 (*) [16])(iVar4 + 0xc0) = auVar14;
      if ((0.5 <= fVar7) && (fVar8 = fVar7, 2.0 < fVar7)) {
        fVar8 = 2.0;
      }
      iVar4 = *(int *)(param_1 + 0x10);
      if (*(float *)(iVar4 + 0x138) < 0.0) {
        fVar9 = *(float *)(iVar4 + 0x1a4);
      }
      else {
        fVar9 = -*(float *)(iVar4 + 0x1a4);
      }
      bVar2 = ABS((float)auStack_1b0._8_4_) <= DAT_002c21f8;
      if ((*(float *)(param_1 + 0xc) < DAT_002c21fc) || (fVar11 = DAT_002c2200, !bVar2)) {
        fVar11 = -5.0;
      }
      fVar10 = fVar11;
      if (((bVar1) && (ABS(fVar12) < 3.0)) && (fVar10 = DAT_002c2204, fVar11 <= DAT_002c2204)) {
        fVar10 = fVar11;
      }
      fVar11 = 1.0;
      fVar7 = 1.0 / (fVar7 * fVar7);
      if ((1.0 <= fVar7) && (fVar11 = fVar7, 4.0 < fVar7)) {
        fVar11 = 4.0;
      }
      fVar7 = fVar12;
      if ((0.0 <= fVar10) && (!bVar1)) {
        if (fVar12 < 0.0) {
          fVar7 = -20.0;
          bVar1 = fVar12 < -20.0;
        }
        else {
          fVar7 = 20.0;
          bVar1 = 20.0 < fVar12;
        }
        if (bVar1) {
          fVar7 = fVar12;
        }
      }
      iVar4 = *(int *)(param_1 + 0x10);
      fVar12 = fVar12 * DAT_002c2208;
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x120));
      auVar14 = _qmtc2((fVar9 * fVar8 * DAT_002c21f4 - fVar7 * fVar10 * fVar11) * fVar13);
      auVar14 = _vmulbc(auVar16,auVar14);
      auStack_150 = _sqc2(auVar14);
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xc0));
      auVar16 = _lqc2(auStack_150);
      auVar14 = _vadd(auVar14,auVar16);
      auVar14 = _sqc2(auVar14);
      *(undefined1 (*) [16])(iVar4 + 0xc0) = auVar14;
      auStack_140 = auStack_150;
      FUN_00218128(fVar12 / *(float *)(param_1 + 8),&uStack_80,auStack_7c);
      if (bVar2) {
        _auStack_120 = ZEXT412(0x3f800000) << 0x40;
        fStack_114 = 0.0;
        auVar16 = _lqc2(auStack_1b0._0_16_);
        auVar14 = _qmtc2(auStack_1b0._8_4_);
        auVar14 = _vmulbc(auVar16,auVar14);
        auVar14 = _sqc2(auVar14);
        auVar16 = _lqc2(_auStack_120);
        auVar14 = _lqc2(auVar14);
        auVar14 = _vsub(auVar16,auVar14);
        auVar14 = _sqc2(auVar14);
        auVar14 = _lqc2(auVar14);
        auVar17 = _vaddbc(in_vf0,in_vf0);
        auVar16 = _vmul(auVar14,auVar14);
        _vaddabc(auVar16,auVar16);
        _vmaddabc(auVar17,auVar16);
        auVar16 = _vmaddbc(auVar17,auVar16);
        _vrsqrt(in_vf0,auVar16);
        uVar18 = _vwaitq();
        auVar14 = _vmulq(auVar14,uVar18);
        auStack_150 = _sqc2(auVar14);
        auVar14 = _lqc2(auStack_150);
        auVar16 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x10) + 0x130));
        auVar17 = _vaddbc(in_vf0,in_vf0);
        auVar14 = _vmul(auVar14,auVar16);
        _vaddabc(auVar14,auVar14);
        _vmaddabc(auVar17,auVar14);
        auVar14 = _vmaddbc(auVar17,auVar14);
        auVar14 = _qmfc2(auVar14._0_4_);
        if (auVar14._0_4_ < 0.0) {
          auVar16 = _lqc2(auStack_150);
          auVar14 = _qmtc2(0xbf800000);
          auVar14 = _vmulbc(auVar16,auVar14);
          auStack_150 = _sqc2(auVar14);
          iVar4 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x10);
        }
      }
      else {
        auVar14 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x10) + 0x130));
        auVar16 = _lqc2(auStack_1b0._0_16_);
        _vopmula(auVar14,auVar16);
        auVar14 = _vopmsub(auVar16,auVar14);
        auVar14 = _vsub(auVar14,auVar14);
        auVar14 = _sqc2(auVar14);
        auVar14 = _lqc2(auVar14);
        auVar17 = _vaddbc(in_vf0,in_vf0);
        auVar16 = _vmul(auVar14,auVar14);
        _vaddabc(auVar16,auVar16);
        _vmaddabc(auVar17,auVar16);
        auVar16 = _vmaddbc(auVar17,auVar16);
        _vrsqrt(in_vf0,auVar16);
        uVar18 = _vwaitq();
        auVar14 = _vmulq(auVar14,uVar18);
        auVar14 = _sqc2(auVar14);
        auVar16 = _lqc2(auStack_1b0._0_16_);
        auVar17 = _lqc2(auVar14);
        _vopmula(auVar16,auVar17);
        auVar16 = _vopmsub(auVar17,auVar16);
        auVar16 = _vsub(auVar16,auVar16);
        auVar16 = _sqc2(auVar16);
        auVar17 = _lqc2(auVar16);
        auVar16 = _qmtc2(auStack_7c[0]);
        auVar16 = _vmulbc(auVar17,auVar16);
        auVar16 = _sqc2(auVar16);
        auVar17 = _lqc2(auVar14);
        auVar14 = _qmtc2(uStack_80);
        auVar14 = _vmulbc(auVar17,auVar14);
        auVar14 = _sqc2(auVar14);
        auVar16 = _lqc2(auVar16);
        auVar14 = _lqc2(auVar14);
        auVar14 = _vsub(auVar16,auVar14);
        auStack_150 = _sqc2(auVar14);
        iVar4 = *(int *)(param_1 + 0x10);
        _auStack_f0 = auStack_150;
      }
      *(undefined4 *)(iVar4 + 0x220) = auStack_150._0_4_;
      *(undefined4 *)(iVar4 + 0x224) = auStack_150._4_4_;
      *(undefined4 *)(iVar4 + 0x228) = auStack_150._8_4_;
      *(undefined4 *)(iVar4 + 0x22c) = auStack_150._12_4_;
      auVar14 = _lqc2(auStack_150);
      auVar16 = _lqc2(auStack_1b0._0_16_);
      _vopmula(auVar14,auVar16);
      auVar14 = _vopmsub(auVar16,auVar14);
      auVar14 = _vsub(auVar14,auVar14);
      auStack_140 = _sqc2(auVar14);
      auVar16 = _lqc2(auStack_150);
      auVar14 = _qmtc2(auStack_7c[0]);
      auVar14 = _vmulbc(auVar16,auVar14);
      _auStack_120 = _sqc2(auVar14);
      auVar16 = _lqc2(auStack_140);
      auVar14 = _qmtc2(uStack_80);
      auVar14 = _vmulbc(auVar16,auVar14);
      auStack_110 = _sqc2(auVar14);
      auVar14 = _lqc2(_auStack_120);
      auVar16 = _lqc2(auStack_110);
      auVar14 = _vadd(auVar14,auVar16);
      auStack_130 = _sqc2(auVar14);
      _auStack_100 = auStack_130;
      FUN_0010e158(0x3f800000,0,0,0,auStack_120);
      auStack_110._0_12_ = ZEXT412(0x3f800000) << 0x40;
      auStack_110._12_4_ = 0;
      FUN_00217dc8(auStack_120,auStack_110,auStack_130);
      auVar14 = _auStack_f0;
      auStack_110 = ZEXT816(0x3f80000000000000);
      auStack_f0._0_4_ = fStack_118 * 0.0 - fStack_114 * 1.0;
      auStack_f0._4_4_ = fStack_114 * 0.0 - (float)auStack_120._4_4_ * 0.0;
      fStack_e8 = (float)auStack_120._4_4_ * 1.0 - fStack_118 * 0.0;
      fStack_ac = (float)auStack_120._0_4_ + (float)auStack_120._0_4_;
      uStack_e4 = auVar14._12_4_;
      fStack_a8 = fStack_ac * fStack_e8;
      fStack_b0 = fStack_ac * (float)auStack_f0._0_4_;
      fStack_d8 = (float)auStack_120._4_4_ * (float)auStack_f0._4_4_ -
                  fStack_118 * (float)auStack_f0._0_4_;
      fStack_e0 = fStack_118 * fStack_e8 - fStack_114 * (float)auStack_f0._4_4_;
      fStack_dc = fStack_114 * (float)auStack_f0._0_4_ - (float)auStack_120._4_4_ * fStack_e8;
      fStack_ac = fStack_ac * (float)auStack_f0._4_4_;
      fStack_b8 = fStack_a8 + 0.0;
      fStack_c0 = fStack_b0 + 0.0;
      fStack_bc = fStack_ac + 1.0;
      fStack_a0 = fStack_e0 + fStack_e0;
      fStack_9c = fStack_dc + fStack_dc;
      fStack_98 = fStack_d8 + fStack_d8;
      fStack_d0 = fStack_c0 + fStack_a0;
      fStack_cc = fStack_bc + fStack_9c;
      fStack_c8 = fStack_b8 + fStack_98;
      auStack_100._4_4_ = fStack_cc;
      auStack_100._0_4_ = fStack_d0;
      fStack_f8 = fStack_c8;
      uStack_f4 = 0;
      FUN_00217dc8(auStack_120,auStack_100,auStack_1b0);
      FUN_00217f58(DAT_002c220c,auStack_100,*(int *)(param_1 + 0x10) + 0xf4,auStack_120);
      iVar4 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(iVar4 + 0xf8) = auStack_100._4_4_;
      *(float *)(iVar4 + 0xfc) = fStack_f8;
      *(undefined4 *)(iVar4 + 0x100) = uStack_f4;
      *(undefined4 *)(iVar4 + 0xf4) = auStack_100._0_4_;
      FUN_00112bd8(iVar4);
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x120));
      auVar14 = _qmtc2(fVar12 * DAT_002c2210);
      auVar14 = _vmulbc(auVar16,auVar14);
      auStack_170 = _sqc2(auVar14);
      auVar14 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
      auVar16 = _lqc2(auStack_170);
      auVar14 = _vsub(auVar14,auVar16);
      auVar14 = _sqc2(auVar14);
      *(undefined1 (*) [16])(iVar4 + 0xd0) = auVar14;
      iVar4 = *(int *)(param_1 + 0x10);
      auStack_160 = auStack_170;
    }
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
    auVar16 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _vmul(auVar14,auVar14);
    _vaddabc(auVar14,auVar14);
    _vmaddabc(auVar16,auVar14);
    auVar14 = _vmaddbc(auVar16,auVar14);
    _vsqrt(auVar14);
    _vwaitq();
    uVar6 = _cfc2(in_vc6);
    *(int *)(iVar4 + 0xe0) = (int)uVar6;
  }
  if (bVar3) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c4) = 3;
    FUN_0010f4d8();
    FUN_00110940(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c4) = 0xffffffff;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
    uVar18 = FUN_001375a0(iVar4 + 0x8370,
                          *(int *)(iVar4 + 0x144) != *(int *)(*(int *)(iVar4 + 0x394) + 0x28),
                          *(undefined4 *)(iVar4 + 0x16c),0,0);
    FUN_00107cb0(uVar18,*(undefined4 *)(param_1 + 0x10));
    FUN_00115308(*(undefined4 *)(param_1 + 0x10));
    iVar4 = *(int *)(param_1 + 0x10);
    fVar13 = 1.0 - *(float *)(iVar4 + 0x198);
    *(float *)(iVar4 + 0x188) = fVar13;
    *(float *)(iVar4 + 0x180) = fVar13;
    *(undefined4 *)(iVar4 + 0x184) = 0;
    FUN_00150460(*(undefined4 *)(iVar4 + 0x6cf4));
    FUN_0010b340(*(undefined4 *)(param_1 + 0x10),1);
    FUN_0010b330(*(undefined4 *)(param_1 + 0x10),0x13);
  }
  return;
}

