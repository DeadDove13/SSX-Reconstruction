/* Ghidra pseudocode. PS2 address: 00141898. Not validated source. */

uint FUN_00141898(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [8];
  float fStack_138;
  undefined1 auStack_130 [16];
  int aiStack_120 [10];
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_ec;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [8];
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  fVar12 = DAT_002c2230;
  iVar11 = (int)param_1;
  iVar8 = *(int *)(iVar11 + 0x60);
  fVar15 = *(float *)(iVar8 + 0xa4) * DAT_002c2230;
  iVar1 = *(int *)(*(int *)(iVar8 + 0x6cf4) + 8);
  *(float *)(iVar11 + 0xc) = *(float *)(iVar11 + 0xc) + fVar15;
  iVar4 = DAT_002859e4;
  if (iVar1 - 0x79U < 2) {
    *(float *)(iVar11 + 0x10) = *(float *)(iVar11 + 0x10) + fVar15;
    fVar13 = DAT_002c223c;
    fVar15 = DAT_002c2238;
    uVar9 = DAT_002c2234;
    fStack_148 = *(float *)(*(int *)(iVar8 + 0x210) * 0x60 + *(int *)(iVar4 + 0x1c));
    uStack_144 = 0;
    fStack_14c = *(float *)(iVar8 + 0x228) * fStack_148;
    fStack_148 = fStack_14c - fStack_148;
    fStack_150 = *(float *)(iVar8 + 0x220) * fStack_14c;
    fStack_14c = *(float *)(iVar8 + 0x224) * fStack_14c;
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0xd0));
    auVar16 = _qmtc2(fVar12);
    auVar16 = _vmulbc(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0xc0));
    auVar16 = _lqc2(auVar16);
    auVar16 = _vadd(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(iVar8 + 0xc0) = auVar16;
    auVar16._4_4_ = fStack_14c;
    auVar16._0_4_ = fStack_150;
    auVar16._8_4_ = fStack_148;
    auVar16._12_4_ = 0;
    auVar17 = _lqc2(auVar16);
    auVar16 = _qmtc2(fVar12);
    auVar16 = _vmulbc(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x60) + 0xd0));
    auVar16 = _lqc2(auVar16);
    auVar16 = _vadd(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(*(int *)(iVar11 + 0x60) + 0xd0) = auVar16;
    auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x60) + 0xd0));
    auVar16 = _qmtc2(uVar9);
    auVar16 = _vmulbc(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(*(int *)(iVar11 + 0x60) + 0xd0) = auVar16;
    iVar8 = *(int *)(iVar11 + 0x60);
    fVar12 = *(float *)(iVar8 + 0x14c) + *(float *)(iVar8 + 0x214);
    if ((fVar15 <= fVar12) && (fVar15 = fVar12, fVar13 < fVar12)) {
      iVar8 = *(int *)(iVar11 + 0x60);
      fVar15 = fVar13;
    }
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
    auVar16 = _qmtc2(fVar15);
    auVar16 = _vmulbc(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0xc0));
    auVar16 = _lqc2(auVar16);
    auVar16 = _vsub(auVar17,auVar16);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(iVar8 + 0xc0) = auVar16;
    iVar8 = *(int *)(iVar11 + 0x60);
    *(float *)(iVar8 + 0x14c) = *(float *)(iVar8 + 0x14c) - fVar15;
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0xd0));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
    auVar19 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar19,auVar16);
    auVar16 = _vmaddbc(auVar19,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
    auVar16 = _qmtc2(auVar16._0_4_);
    auVar16 = _vmulbc(auVar17,auVar16);
    _auStack_140 = _sqc2(auVar16);
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0xd0));
    auVar17 = _lqc2(_auStack_140);
    auVar16 = _vsub(auVar16,auVar17);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(iVar8 + 0xd0) = auVar16;
    auVar16 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x60) + 0xd0));
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar16);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar17,auVar16);
    auVar16 = _vmaddbc(auVar17,auVar16);
    _vsqrt(auVar16);
    _vwaitq();
    uVar6 = _cfc2(in_vc6);
    *(int *)(*(int *)(iVar11 + 0x60) + 0xe0) = (int)uVar6;
    auStack_130 = _auStack_140;
    lVar7 = FUN_001450f8(param_1);
    iVar8 = *(int *)(iVar11 + 0x60);
    if ((lVar7 == 0) || (*(float *)(iVar8 + 0x228) < DAT_002c2240)) {
LAB_00141b1c:
      FUN_0014cd18(*(undefined4 *)(iVar8 + 0x6cf4),0x7b,0,5);
      iVar8 = *(int *)(iVar11 + 0x60);
      uVar6 = *(undefined8 *)(iVar8 + 0xc0);
      uVar9 = *(undefined4 *)(iVar8 + 200);
      uVar10 = *(undefined4 *)(iVar8 + 0xcc);
      *(int *)(iVar11 + 0x20) = (int)uVar6;
      *(int *)(iVar11 + 0x24) = (int)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(iVar11 + 0x28) = uVar9;
      *(undefined4 *)(iVar11 + 0x2c) = uVar10;
      iVar8 = *(int *)(iVar11 + 0x60);
      uVar6 = *(undefined8 *)(iVar8 + 0x220);
      uVar9 = *(undefined4 *)(iVar8 + 0x228);
      uVar10 = *(undefined4 *)(iVar8 + 0x22c);
      *(int *)(iVar11 + 0x30) = (int)uVar6;
      *(int *)(iVar11 + 0x34) = (int)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(iVar11 + 0x38) = uVar9;
      *(undefined4 *)(iVar11 + 0x3c) = uVar10;
      iVar8 = *(int *)(iVar11 + 0x60);
      uVar6 = *(undefined8 *)(iVar8 + 0x220);
      uVar9 = *(undefined4 *)(iVar8 + 0x228);
      uVar10 = *(undefined4 *)(iVar8 + 0x22c);
      *(int *)(iVar11 + 0x40) = (int)uVar6;
      *(int *)(iVar11 + 0x44) = (int)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(iVar11 + 0x48) = uVar9;
      *(undefined4 *)(iVar11 + 0x4c) = uVar10;
      *(undefined4 *)(iVar11 + 0x50) = *(undefined4 *)(*(int *)(iVar11 + 0x60) + 0xe0);
      FUN_00142f28(param_1);
      iVar8 = *(int *)(iVar11 + 0x60);
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x210);
      bVar2 = false;
      if ((iVar8 != 6) && (iVar8 != 9)) {
        bVar2 = iVar8 != 10;
      }
      iVar8 = *(int *)(iVar11 + 0x60);
      if (!bVar2) goto LAB_00141b1c;
    }
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x110));
    _vopmula(auVar16,auVar17);
    auVar16 = _vopmsub(auVar17,auVar16);
    auVar16 = _vsub(auVar16,auVar16);
    _auStack_140 = _sqc2(auVar16);
    auStack_130 = _auStack_140;
    if (iVar1 == 0x7a) {
      FUN_001110c0(0xbf800000,auStack_130,auStack_140);
    }
    auVar16 = _lqc2(auStack_130);
    auVar17 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar16);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar17,auVar16);
    auVar16 = _vmaddbc(auVar17,auVar16);
    _vsqrt(auVar16);
    _vwaitq();
    uVar6 = _cfc2(in_vc6);
    fVar12 = (float)uVar6;
    _auStack_140 = auStack_130;
    if (DAT_002c2244 < fVar12) {
      auVar16 = _qmtc2(fVar12);
      _vdiv(in_vf0,0,auVar16,0);
      auVar16 = _lqc2(auStack_130);
      uVar9 = _vwaitq();
      auVar16 = _vmulq(auVar16,uVar9);
      _auStack_140 = _sqc2(auVar16);
      if (DAT_002c2248 < fVar12) {
        fVar12 = DAT_002c2248;
      }
      fVar15 = (float)FUN_00218410(fVar12);
      FUN_001129e8(-fVar15 * DAT_002c224c,*(undefined4 *)(iVar11 + 0x60),auStack_140);
    }
    fVar13 = *(float *)(iVar11 + 0x10) * DAT_002c2250 + DAT_002c2254;
    fVar15 = DAT_002c2258;
    if (fVar13 <= DAT_002c2258) {
      fVar15 = fVar13;
    }
    if (fVar12 < DAT_002c225c) {
      iVar8 = *(int *)(iVar11 + 0x60);
      if (*(float *)(iVar8 + 0xe0) < fVar15) {
        auVar16 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x110));
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
        auVar19 = _vaddbc(in_vf0,in_vf0);
        auVar16 = _vmul(auVar16,auVar17);
        _vaddabc(auVar16,auVar16);
        _vmaddabc(auVar19,auVar16);
        auVar16 = _vmaddbc(auVar19,auVar16);
        auVar16 = _qmfc2(auVar16._0_4_);
        if (DAT_002c2260 < ABS(auVar16._0_4_)) {
          lVar7 = FUN_001125e8();
          if (lVar7 != 0) {
LAB_00142b70:
            uVar5 = FUN_001446b8(param_1);
            return uVar5;
          }
          iVar8 = *(int *)(iVar11 + 0x60);
        }
        else {
          iVar8 = *(int *)(iVar11 + 0x60);
        }
      }
      else {
        iVar8 = *(int *)(iVar11 + 0x60);
      }
    }
    else {
      iVar8 = *(int *)(iVar11 + 0x60);
    }
    *(undefined4 *)(iVar8 + 0x3c4) = DAT_002c4398;
    FUN_0010f4d8(iVar8);
    FUN_00110940(*(undefined4 *)(iVar11 + 0x60));
    *(undefined4 *)(*(int *)(iVar11 + 0x60) + 0x3c4) = 0xffffffff;
  }
  else {
    bVar2 = true;
    fVar12 = (*(float *)(iVar8 + 0x214) + 10.0) * 0.5;
    if (*(float *)(iVar8 + 0x228) < 0.0) {
      fVar12 = fVar12 * 0.0;
    }
    else {
      fVar12 = fVar12 * *(float *)(iVar8 + 0x228);
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    else {
      auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x60) + 0x220));
      auVar16 = _qmtc2(fVar12);
      auVar16 = _vmulbc(auVar17,auVar16);
      _auStack_140 = _sqc2(auVar16);
      auStack_130._12_4_ = auStack_140._12_4_;
      fStack_150 = (float)auStack_140._0_4_;
      fStack_14c = (float)auStack_140._4_4_;
      fStack_148 = fStack_138;
      uStack_144 = auStack_130._12_4_;
      auStack_130 = _auStack_140;
      FUN_00110ea8(*(int *)(iVar11 + 0x60),&fStack_150);
    }
    FUN_001430f8(fVar15,param_1,aiStack_120);
    if (0.0 < fVar12) {
      FUN_001110c0(0xbf800000,auStack_140,&fStack_150);
      FUN_00110ea8(*(undefined4 *)(iVar11 + 0x60),auStack_140);
    }
    lVar7 = FUN_001450f8(param_1);
    iVar8 = *(int *)(iVar11 + 0x60);
    *(int *)(iVar8 + 0x260) = aiStack_120[0];
    if (aiStack_120[0] == 3) {
      fVar12 = *(float *)(iVar11 + 8);
      if (DAT_002c2264 < fVar12) {
        if (iVar1 == 0x7c) {
          FUN_0014cd18(*(undefined4 *)(iVar8 + 0x6cf4),0x7d,0,5);
          FUN_0010e260(*(int *)(iVar11 + 0x60) + 0x8300);
          iVar8 = *(int *)(iVar11 + 0x60);
        }
        else {
          FUN_0010e5e8(iVar8 + 0x8300);
          iVar8 = *(int *)(iVar11 + 0x60);
        }
        if (DAT_002c2268 < *(float *)(iVar8 + 0x8308)) {
          iVar1 = *(int *)(iVar8 + 0x8340);
          bVar3 = false;
          if ((iVar1 != 6) && (iVar1 != 9)) {
            bVar3 = iVar1 != 10;
          }
          if (!bVar3) goto LAB_0014235c;
          auVar16 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x130));
          auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x8330));
          auVar19 = _vaddbc(in_vf0,in_vf0);
          auVar16 = _vmul(auVar16,auVar17);
          _vaddabc(auVar16,auVar16);
          _vmaddabc(auVar19,auVar16);
          auVar16 = _vmaddbc(auVar19,auVar16);
          auVar16 = _qmfc2(auVar16._0_4_);
          if (ABS(*(float *)(iVar11 + 0x14)) < 0.5) {
            if (ABS(*(float *)(iVar11 + 0x18)) < 0.5) {
              auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x8320));
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x8330));
              auVar18 = _vaddbc(in_vf0,in_vf0);
              auVar17 = _vmul(auVar17,auVar19);
              _vaddabc(auVar17,auVar17);
              _vmaddabc(auVar18,auVar17);
              auVar17 = _vmaddbc(auVar18,auVar17);
              auVar17 = _qmfc2(auVar17._0_4_);
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x8330));
              auVar17 = _qmtc2(auVar17._0_4_);
              auVar17 = _vmulbc(auVar19,auVar17);
              auVar17 = _sqc2(auVar17);
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x8320));
              auVar17 = _lqc2(auVar17);
              auVar17 = _vsub(auVar19,auVar17);
              auVar17 = _sqc2(auVar17);
              auVar17 = _lqc2(auVar17);
              auVar18 = _vaddbc(in_vf0,in_vf0);
              auVar19 = _vmul(auVar17,auVar17);
              _vaddabc(auVar19,auVar19);
              _vmaddabc(auVar18,auVar19);
              auVar19 = _vmaddbc(auVar18,auVar19);
              _vrsqrt(in_vf0,auVar19);
              uVar9 = _vwaitq();
              auVar17 = _vmulq(auVar17,uVar9);
              _auStack_140 = _sqc2(auVar17);
              auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x110));
              auVar19 = _lqc2(_auStack_140);
              auVar18 = _vaddbc(in_vf0,in_vf0);
              auVar17 = _vmul(auVar17,auVar19);
              _vaddabc(auVar17,auVar17);
              _vmaddabc(auVar18,auVar17);
              auVar17 = _vmaddbc(auVar18,auVar17);
              auVar17 = _qmfc2(auVar17._0_4_);
              if (*(float *)(iVar11 + 0x78) == 0.0) {
                fVar12 = -1.0;
              }
              else {
                fVar12 = 1.0 / *(float *)(iVar11 + 0x78);
              }
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x130));
              auVar18 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x8330));
              _vopmula(auVar19,auVar18);
              auVar19 = _vopmsub(auVar18,auVar19);
              auVar19 = _vsub(auVar19,auVar19);
              auVar19 = _sqc2(auVar19);
              auVar18 = _lqc2(auVar19);
              auVar19 = _qmtc2(fVar15 * DAT_002c226c * fVar12);
              auVar19 = _vmulbc(auVar18,auVar19);
              auVar19 = _sqc2(auVar19);
              fVar12 = *(float *)(iVar11 + 0x78);
              if (0.0 < auVar17._0_4_) {
                if (fVar12 == 0.0) {
                  fVar12 = -1.0;
                }
                else {
                  fVar12 = 1.0 / fVar12;
                }
                iVar8 = *(int *)(iVar11 + 0x60);
                fVar13 = DAT_002c2270;
              }
              else {
                if (fVar12 == 0.0) {
                  fVar12 = -1.0;
                }
                else {
                  fVar12 = 1.0 / fVar12;
                }
                iVar8 = *(int *)(iVar11 + 0x60);
                fVar13 = DAT_002c2274;
              }
              auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x110));
              auVar18 = _lqc2(_auStack_140);
              _vopmula(auVar17,auVar18);
              auVar17 = _vopmsub(auVar18,auVar17);
              auVar17 = _vsub(auVar17,auVar17);
              auVar17 = _sqc2(auVar17);
              auVar18 = _lqc2(auVar17);
              auVar17 = _qmtc2(fVar15 * fVar13 * fVar12);
              auVar17 = _vmulbc(auVar18,auVar17);
              auVar17 = _sqc2(auVar17);
              auVar19 = _lqc2(auVar19);
              auVar17 = _lqc2(auVar17);
              auVar17 = _vadd(auVar19,auVar17);
              auStack_130 = _sqc2(auVar17);
              bVar2 = false;
              bVar3 = DAT_002c227c < auVar16._0_4_;
              auVar17 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xd0));
              auVar16 = _qmtc2(1.0 - fVar15 * DAT_002c2278);
              auVar16 = _vmulbc(auVar17,auVar16);
              _auStack_d0 = _sqc2(auVar16);
              auVar16 = _lqc2(_auStack_d0);
              auVar17 = _lqc2(auStack_130);
              auVar16 = _vadd(auVar16,auVar17);
              _auStack_e0 = _sqc2(auVar16);
              uStack_b4 = auStack_e0._12_4_;
              *(int *)(iVar11 + 0xd0) = auStack_e0._0_4_;
              *(int *)(iVar11 + 0xd4) = auStack_e0._4_4_;
              *(float *)(iVar11 + 0xd8) = fStack_d8;
              *(undefined4 *)(iVar11 + 0xdc) = uStack_b4;
              fStack_88 = *(float *)(iVar11 + 0xd8);
              fStack_90 = *(float *)(iVar11 + 0xd0);
              fStack_8c = *(float *)(iVar11 + 0xd4);
              fStack_b0 = *(float *)(iVar11 + 0x7c) * fStack_90 +
                          *(float *)(iVar11 + 0x88) * fStack_8c +
                          *(float *)(iVar11 + 0x94) * fStack_88;
              fStack_ac = *(float *)(iVar11 + 0x80) * fStack_90 +
                          *(float *)(iVar11 + 0x8c) * fStack_8c +
                          *(float *)(iVar11 + 0x98) * fStack_88;
              fStack_a8 = *(float *)(iVar11 + 0x84) * fStack_90 +
                          *(float *)(iVar11 + 0x90) * fStack_8c +
                          *(float *)(iVar11 + 0x9c) * fStack_88;
              uStack_a4 = 0;
              *(float *)(iVar11 + 0xf0) = fStack_b0;
              *(float *)(iVar11 + 0xf4) = fStack_ac;
              *(float *)(iVar11 + 0xf8) = fStack_a8;
              *(undefined4 *)(iVar11 + 0xfc) = 0;
              auVar16 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xf0));
              auVar17 = _vaddbc(in_vf0,in_vf0);
              auVar16 = _vmul(auVar16,auVar16);
              _vaddabc(auVar16,auVar16);
              _vmaddabc(auVar17,auVar16);
              auVar16 = _vmaddbc(auVar17,auVar16);
              _vsqrt(auVar16);
              _vwaitq();
              uVar6 = _cfc2(in_vc6);
              _auStack_c0 = _auStack_e0;
              fStack_a0 = fStack_b0;
              fStack_9c = fStack_ac;
              fStack_98 = fStack_a8;
              fStack_80 = fStack_b0;
              fStack_7c = fStack_ac;
              fStack_78 = fStack_a8;
              if (bVar3) {
                if ((float)uVar6 < 4.0) {
                  iVar8 = *(int *)(iVar11 + 0x60);
                  *(undefined4 *)(iVar8 + 0x188) = 0;
                  *(undefined4 *)(iVar8 + 0x180) = 0;
                  *(undefined4 *)(iVar8 + 0x184) = 0;
                  FUN_0014cd18(*(undefined4 *)(iVar8 + 0x6cf4),0x53,0,5);
                  FUN_0010b340(*(undefined4 *)(iVar11 + 0x60),1);
                  uVar5 = FUN_0010b330(*(undefined4 *)(iVar11 + 0x60),0xd);
                  return uVar5;
                }
                goto LAB_0014235c;
              }
              *(undefined4 *)(iVar11 + 0x10) = 0;
            }
            else {
              *(undefined4 *)(iVar11 + 0x10) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar11 + 0x10) = 0;
          }
        }
        else {
LAB_0014235c:
          *(undefined4 *)(iVar11 + 0x10) = 0;
        }
        fVar12 = *(float *)(iVar11 + 8);
      }
      else if (lVar7 == 0) {
        *(undefined4 *)(iVar11 + 0x10) = 0;
      }
      else {
        fVar13 = *(float *)(iVar11 + 0x10);
        *(undefined4 *)(iVar8 + 0x260) = 0;
        *(float *)(iVar11 + 0x10) = fVar13 + fVar15;
      }
      *(float *)(iVar11 + 8) = fVar12 + fVar15;
    }
    else {
      if ((lVar7 == 0) || (*(float *)(iVar8 + 0x228) < fStack_f8)) {
        *(int *)(iVar8 + 0x220) = (int)aiStack_120._32_8_;
        *(int *)(iVar8 + 0x224) = SUB84(aiStack_120._32_8_,4);
        *(float *)(iVar8 + 0x228) = fStack_f8;
        *(undefined4 *)(iVar8 + 0x22c) = uStack_f4;
      }
      if ((aiStack_120[0] == 0) || (aiStack_120[0] == 2)) {
        *(undefined4 *)(*(int *)(iVar11 + 0x60) + 0x210) = uStack_ec;
      }
      else {
        *(undefined4 *)(*(int *)(iVar11 + 0x60) + 0x210) = 10;
      }
      if ((((*(float *)(iVar11 + 0x10) == 0.0) && (iVar1 == 0x7c)) || (iVar1 == 0x7b)) ||
         (iVar1 == 0x7d)) {
        FUN_00144df0(param_1);
        FUN_0010e618(*(int *)(iVar11 + 0x60) + 0x8300);
        fVar12 = *(float *)(iVar11 + 0x10);
      }
      else {
        fVar12 = *(float *)(iVar11 + 0x10);
      }
      *(undefined4 *)(iVar11 + 8) = 0;
      *(float *)(iVar11 + 0x10) = fVar12 + fVar15;
    }
    auVar16 = _auStack_d0;
    if (lVar7 == 0) {
      fVar12 = *(float *)(iVar11 + 0xc);
    }
    else if (0.25 < *(float *)(iVar11 + 0x10)) {
      iVar8 = *(int *)(*(int *)(iVar11 + 0x60) + 0x210);
      bVar3 = false;
      if ((iVar8 != 6) && (iVar8 != 9)) {
        bVar3 = iVar8 != 10;
      }
      if (bVar3) {
        iVar8 = *(int *)(iVar11 + 0x60);
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x110));
        auVar19 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
        auVar18 = _vaddbc(in_vf0,in_vf0);
        auVar17 = _vmul(auVar17,auVar19);
        _vaddabc(auVar17,auVar17);
        _vmaddabc(auVar18,auVar17);
        auVar17 = _vmaddbc(auVar18,auVar17);
        auVar17 = _qmfc2(auVar17._0_4_);
        fVar12 = auVar17._0_4_;
        if (DAT_002c2280 < *(float *)(iVar8 + 0x228)) {
          uVar9 = 0x79;
          if (0.75 < fVar12) {
            uVar10 = *(undefined4 *)(iVar8 + 0x6cf4);
          }
          else {
            uVar9 = 0x7a;
            if (-0.75 <= fVar12) {
              auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x110));
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
              _vopmula(auVar17,auVar19);
              auVar17 = _vopmsub(auVar19,auVar17);
              auVar17 = _vsub(auVar17,auVar17);
              auVar17 = _sqc2(auVar17);
              if (*(float *)(iVar11 + 0x78) == 0.0) {
                fVar13 = -1.0;
              }
              else {
                fVar13 = 1.0 / *(float *)(iVar11 + 0x78);
              }
              fVar14 = DAT_002c2288;
              if (0.0 <= fVar12) {
                fVar14 = DAT_002c2284;
              }
              auVar19 = _lqc2(auVar17);
              auVar17 = _qmtc2(fVar15 * fVar14 * fVar13);
              auVar17 = _vmulbc(auVar19,auVar17);
              auVar17 = _sqc2(auVar17);
              auVar19 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xd0));
              auVar17 = _lqc2(auVar17);
              auVar17 = _vadd(auVar19,auVar17);
              auVar17 = _sqc2(auVar17);
              uStack_d4 = auVar17._12_4_;
              auStack_130._8_4_ = auVar17._8_4_;
              *(int *)(iVar11 + 0xd0) = auVar17._0_4_;
              *(int *)(iVar11 + 0xd4) = auVar17._4_4_;
              *(undefined4 *)(iVar11 + 0xd8) = auStack_130._8_4_;
              *(undefined4 *)(iVar11 + 0xdc) = uStack_d4;
              fVar13 = *(float *)(iVar11 + 0xd8);
              fVar12 = *(float *)*(undefined1 (*) [12])(iVar11 + 0xd0);
              fVar14 = *(float *)(iVar11 + 0xd4);
              _auStack_c0 = *(undefined1 (*) [12])(iVar11 + 0xd0);
              fStack_b0 = *(float *)(iVar11 + 0x7c) * fVar12 + *(float *)(iVar11 + 0x88) * fVar14 +
                          *(float *)(iVar11 + 0x94) * fVar13;
              fStack_ac = *(float *)(iVar11 + 0x80) * fVar12 + *(float *)(iVar11 + 0x8c) * fVar14 +
                          *(float *)(iVar11 + 0x98) * fVar13;
              auStack_d0._4_4_ = fStack_ac;
              auStack_d0._0_4_ = fStack_b0;
              fStack_a8 = *(float *)(iVar11 + 0x84) * fVar12 + *(float *)(iVar11 + 0x90) * fVar14 +
                          *(float *)(iVar11 + 0x9c) * fVar13;
              uStack_c4 = auVar16._12_4_;
              fStack_c8 = fStack_a8;
              *(float *)(iVar11 + 0xf0) = fStack_b0;
              *(float *)(iVar11 + 0xf4) = fStack_ac;
              *(float *)(iVar11 + 0xf8) = fStack_a8;
              *(undefined4 *)(iVar11 + 0xfc) = 0;
              goto LAB_001425cc;
            }
            uVar10 = *(undefined4 *)(iVar8 + 0x6cf4);
          }
          FUN_0014cd18(uVar10,uVar9,0,5);
          fVar12 = *(float *)(iVar11 + 0xc);
        }
        else {
          fVar12 = *(float *)(iVar11 + 0xc);
        }
      }
      else {
        fVar12 = *(float *)(iVar11 + 0xc);
      }
    }
    else {
LAB_001425cc:
      fVar12 = *(float *)(iVar11 + 0xc);
    }
    if ((0.5 < fVar12) && (DAT_002c228c < *(float *)(iVar11 + 0x10))) {
      iVar8 = *(int *)(*(int *)(iVar11 + 0x60) + 0x210);
      bVar3 = false;
      if ((iVar8 != 6) && (iVar8 != 9)) {
        bVar3 = iVar8 != 10;
      }
      if (bVar3) {
        auVar16 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xf0));
        auVar17 = _vaddbc(in_vf0,in_vf0);
        auVar16 = _vmul(auVar16,auVar16);
        _vaddabc(auVar16,auVar16);
        _vmaddabc(auVar17,auVar16);
        auVar16 = _vmaddbc(auVar17,auVar16);
        _vsqrt(auVar16);
        _vwaitq();
        uVar6 = _cfc2(in_vc6);
        if (((float)uVar6 < 7.0) &&
           (iVar8 = *(int *)(iVar11 + 0x60), DAT_002c2290 < *(float *)(iVar8 + 0x228))) {
          auVar16 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x2d0));
          auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0xc0));
          auVar16 = _vsub(auVar16,auVar17);
          auStack_130 = _sqc2(auVar16);
          auVar16 = _lqc2(auStack_130);
          auVar19 = _vaddbc(in_vf0,in_vf0);
          auVar17 = _vmul(auVar16,auVar16);
          _vaddabc(auVar17,auVar17);
          _vmaddabc(auVar19,auVar17);
          auVar17 = _vmaddbc(auVar19,auVar17);
          _vrsqrt(in_vf0,auVar17);
          uVar9 = _vwaitq();
          auVar16 = _vmulq(auVar16,uVar9);
          _auStack_140 = _sqc2(auVar16);
          auVar16 = _lqc2(_auStack_140);
          auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x110));
          auVar19 = _vaddbc(in_vf0,in_vf0);
          auVar16 = _vmul(auVar16,auVar17);
          _vaddabc(auVar16,auVar16);
          _vmaddabc(auVar19,auVar16);
          auVar16 = _vmaddbc(auVar19,auVar16);
          auVar16 = _qmfc2(auVar16._0_4_);
          if (DAT_002c2294 < ABS(auVar16._0_4_)) {
            auVar16 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x130));
            auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
            auVar19 = _vaddbc(in_vf0,in_vf0);
            auVar16 = _vmul(auVar16,auVar17);
            _vaddabc(auVar16,auVar16);
            _vmaddabc(auVar19,auVar16);
            auVar16 = _vmaddbc(auVar19,auVar16);
            auVar16 = _qmfc2(auVar16._0_4_);
            if (DAT_002c2298 < auVar16._0_4_) {
              _auStack_e0 = _auStack_140;
              lVar7 = FUN_001125e8();
              bVar3 = false;
              if (lVar7 != 0) {
                iVar8 = *(int *)(*(int *)(iVar11 + 0x60) + 0x210);
                if ((iVar8 != 6) && (iVar8 != 9)) {
                  bVar3 = iVar8 != 10;
                }
                if (bVar3) {
                  iVar8 = *(int *)(*(int *)(iVar11 + 0x60) + 0x6cf4);
                  if (*(int *)(&DAT_002ac2c4 + *(int *)(iVar8 + 8) * 0xc) == 0x11) {
                    FUN_0014cd18(iVar8,0x90,0,5);
                    uVar9 = *(undefined4 *)(iVar11 + 0x60);
                  }
                  else {
                    FUN_0014cd18(iVar8,0x91,0,5);
                    uVar9 = *(undefined4 *)(iVar11 + 0x60);
                  }
                  FUN_0010b340(uVar9,2);
                  uVar5 = FUN_0010b330(*(undefined4 *)(iVar11 + 0x60),3);
                  return uVar5;
                }
              }
            }
          }
        }
      }
    }
    auVar16 = _auStack_d0;
    if (*(float *)(iVar11 + 0x78) == 0.0) {
      fVar12 = -1.0;
    }
    else {
      fVar12 = 1.0 / *(float *)(iVar11 + 0x78);
    }
    auVar19 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x60) + 0x120));
    auVar17 = _qmtc2(fVar15 * DAT_002c229c * fVar12 * *(float *)(iVar11 + 0x14));
    auVar17 = _vmulbc(auVar19,auVar17);
    auVar17 = _sqc2(auVar17);
    if (*(float *)(iVar11 + 0x78) == 0.0) {
      fVar12 = -1.0;
    }
    else {
      fVar12 = 1.0 / *(float *)(iVar11 + 0x78);
    }
    auVar18 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x60) + 0x110));
    auVar19 = _qmtc2(fVar15 * DAT_002c22a0 * fVar12 * *(float *)(iVar11 + 0x18));
    auVar19 = _vmulbc(auVar18,auVar19);
    auVar19 = _sqc2(auVar19);
    auVar17 = _lqc2(auVar17);
    auVar19 = _lqc2(auVar19);
    auVar17 = _vadd(auVar17,auVar19);
    _auStack_140 = _sqc2(auVar17);
    if (bVar2) {
      auVar17 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xd0));
      auVar16 = _qmtc2(1.0 - fVar15 * DAT_002c22a4);
      auVar16 = _vmulbc(auVar17,auVar16);
      _auStack_e0 = _sqc2(auVar16);
      auVar16 = _lqc2(_auStack_e0);
      auVar17 = _lqc2(_auStack_140);
      auVar16 = _vadd(auVar16,auVar17);
      auStack_130 = _sqc2(auVar16);
      uStack_c4 = auStack_130._12_4_;
      *(int *)(iVar11 + 0xd0) = auStack_130._0_4_;
      *(int *)(iVar11 + 0xd4) = auStack_130._4_4_;
      *(undefined4 *)(iVar11 + 0xd8) = auStack_130._8_4_;
      *(undefined4 *)(iVar11 + 0xdc) = uStack_c4;
      fStack_a8 = *(float *)(iVar11 + 0xd8);
      fStack_b0 = *(float *)(iVar11 + 0xd0);
      fStack_ac = *(float *)(iVar11 + 0xd4);
      fStack_a0 = *(float *)(iVar11 + 0x7c) * fStack_b0 + *(float *)(iVar11 + 0x88) * fStack_ac +
                  *(float *)(iVar11 + 0x94) * fStack_a8;
      fStack_9c = *(float *)(iVar11 + 0x80) * fStack_b0 + *(float *)(iVar11 + 0x8c) * fStack_ac +
                  *(float *)(iVar11 + 0x98) * fStack_a8;
      fStack_98 = *(float *)(iVar11 + 0x84) * fStack_b0 + *(float *)(iVar11 + 0x90) * fStack_ac +
                  *(float *)(iVar11 + 0x9c) * fStack_a8;
      auStack_d0._4_4_ = fStack_9c;
      auStack_d0._0_4_ = fStack_a0;
      fStack_c8 = fStack_98;
      auStack_c0._4_4_ = fStack_9c;
      auStack_c0._0_4_ = fStack_a0;
      fStack_b8 = fStack_98;
      uStack_c4 = 0;
      *(float *)(iVar11 + 0xf0) = fStack_a0;
      *(float *)(iVar11 + 0xf4) = fStack_9c;
      *(float *)(iVar11 + 0xf8) = fStack_98;
      *(undefined4 *)(iVar11 + 0xfc) = 0;
      fVar12 = *(float *)(iVar11 + 0x10);
    }
    else {
      auVar17 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xd0));
      auVar19 = _lqc2(_auStack_140);
      auVar17 = _vadd(auVar17,auVar19);
      auStack_130 = _sqc2(auVar17);
      uStack_d4 = auStack_130._12_4_;
      *(int *)(iVar11 + 0xd0) = auStack_130._0_4_;
      *(int *)(iVar11 + 0xd4) = auStack_130._4_4_;
      *(undefined4 *)(iVar11 + 0xd8) = auStack_130._8_4_;
      *(undefined4 *)(iVar11 + 0xdc) = uStack_d4;
      fVar15 = *(float *)(iVar11 + 0xd8);
      fVar12 = *(float *)*(undefined1 (*) [12])(iVar11 + 0xd0);
      fVar13 = *(float *)(iVar11 + 0xd4);
      _auStack_c0 = *(undefined1 (*) [12])(iVar11 + 0xd0);
      fStack_b0 = *(float *)(iVar11 + 0x7c) * fVar12 + *(float *)(iVar11 + 0x88) * fVar13 +
                  *(float *)(iVar11 + 0x94) * fVar15;
      fStack_ac = *(float *)(iVar11 + 0x80) * fVar12 + *(float *)(iVar11 + 0x8c) * fVar13 +
                  *(float *)(iVar11 + 0x98) * fVar15;
      auStack_e0._4_4_ = fStack_ac;
      auStack_e0._0_4_ = fStack_b0;
      auStack_d0._4_4_ = fStack_ac;
      auStack_d0._0_4_ = fStack_b0;
      fStack_a8 = *(float *)(iVar11 + 0x84) * fVar12 + *(float *)(iVar11 + 0x90) * fVar13 +
                  *(float *)(iVar11 + 0x9c) * fVar15;
      fStack_d8 = fStack_a8;
      uStack_c4 = auVar16._12_4_;
      fStack_c8 = fStack_a8;
      uStack_d4 = 0;
      *(float *)(iVar11 + 0xf0) = fStack_b0;
      *(float *)(iVar11 + 0xf4) = fStack_ac;
      *(float *)(iVar11 + 0xf8) = fStack_a8;
      *(undefined4 *)(iVar11 + 0xfc) = 0;
      fVar12 = *(float *)(iVar11 + 0x10);
    }
    if (3.0 <= fVar12) {
      iVar8 = *(int *)(iVar11 + 0x60);
    }
    else {
      if (*(float *)(iVar11 + 0xc) <= 7.0) {
        iVar8 = *(int *)(iVar11 + 0x60);
        goto LAB_00142b8c;
      }
      iVar8 = *(int *)(iVar11 + 0x60);
    }
    if (-1 < *(int *)(iVar8 + 0x348)) {
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x110));
      auVar17 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x220));
      auVar19 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vmul(auVar16,auVar17);
      _vaddabc(auVar16,auVar16);
      _vmaddabc(auVar19,auVar16);
      auVar16 = _vmaddbc(auVar19,auVar16);
      auVar16 = _qmfc2(auVar16._0_4_);
      if (0.0 < auVar16._0_4_) {
        FUN_0014cd18(*(undefined4 *)(iVar8 + 0x6cf4),0x79,0,5);
      }
      else {
        FUN_0014cd18(*(undefined4 *)(iVar8 + 0x6cf4),0x7a,0,5);
      }
      goto LAB_00142b70;
    }
    *(undefined4 *)(iVar8 + 0x264) = DAT_002c22a8;
  }
  iVar8 = *(int *)(iVar11 + 0x60);
LAB_00142b8c:
  uVar5 = 0;
  if (*(uint *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar8 + 0x6cf4) + 8) * 0xc) != 0x12) {
    uVar5 = *(uint *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar8 + 0x6cf4) + 8) * 0xc) ^ 0x11;
  }
  return uVar5;
}

