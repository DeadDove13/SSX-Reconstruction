/* Ghidra pseudocode. PS2 address: 0020cb18. Not validated source. */

undefined8
FUN_0020cb18(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 (*param_5) [16],undefined4 *param_6,undefined4 *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  int iVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 *puStack_d0;
  
  uStack_150 = *(undefined4 *)*param_5;
  uStack_14c = *(undefined4 *)(*param_5 + 4);
  uStack_148 = *(undefined4 *)(*param_5 + 8);
  uStack_144 = *(undefined4 *)(*param_5 + 0xc);
  auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  pauVar8 = (undefined1 (*) [16])param_2;
  auVar21 = _lqc2(*pauVar8);
  auVar20 = _vsub(auVar20,auVar21);
  auStack_130 = _sqc2(auVar20);
  fVar17 = *(float *)(param_1 + 0x20);
  uStack_140 = auStack_130._0_4_;
  uStack_13c = auStack_130._4_4_;
  uStack_138 = auStack_130._8_4_;
  uStack_134 = auStack_130._12_4_;
  auVar20 = _lqc2(*param_5);
  auVar21 = _lqc2(auStack_130);
  auVar22 = _vaddbc(in_vf0,in_vf0);
  auVar20 = _vmul(auVar20,auVar21);
  _vaddabc(auVar20,auVar20);
  _vmaddabc(auVar22,auVar20);
  auVar20 = _vmaddbc(auVar22,auVar20);
  auVar20 = _qmfc2(auVar20._0_4_);
  fVar19 = auVar20._0_4_;
  if (ABS(fVar19) <= fVar17) {
    puStack_d0 = param_6;
    if (fVar19 < 0.0) {
      fVar19 = -fVar19;
      FUN_001110c0(0xbf800000,&uStack_140,&uStack_150);
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      uStack_148 = uStack_138;
      uStack_144 = uStack_134;
    }
    auVar20._4_4_ = uStack_14c;
    auVar20._0_4_ = uStack_150;
    auVar20._8_4_ = uStack_148;
    auVar20._12_4_ = uStack_144;
    auVar21 = _lqc2(auVar20);
    auVar20 = _qmtc2(fVar19);
    auVar20 = _vmulbc(auVar21,auVar20);
    auStack_130 = _sqc2(auVar20);
    auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar21 = _lqc2(auStack_130);
    auVar20 = _vsub(auVar20,auVar21);
    auStack_120 = _sqc2(auVar20);
    uStack_140 = auStack_120._0_4_;
    uStack_13c = auStack_120._4_4_;
    uStack_138 = auStack_120._8_4_;
    uStack_134 = auStack_120._12_4_;
    lVar5 = FUN_002100f0(DAT_002c39a4,param_2,param_3,param_4,&uStack_140);
    bVar2 = true;
    pauVar11 = (undefined1 (*) [16])param_3;
    pauVar12 = (undefined1 (*) [16])param_4;
    if (lVar5 == 0) {
      auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
      auVar21 = _lqc2(*pauVar8);
      auVar20 = _vsub(auVar20,auVar21);
      auVar20 = _sqc2(auVar20);
      fVar15 = fVar17 * fVar17;
      auVar21 = _lqc2(auVar20);
      auVar22 = _lqc2(auVar20);
      auVar23 = _vaddbc(in_vf0,in_vf0);
      auVar21 = _vmul(auVar21,auVar22);
      _vaddabc(auVar21,auVar21);
      _vmaddabc(auVar23,auVar21);
      auVar21 = _vmaddbc(auVar23,auVar21);
      auVar21 = _qmfc2(auVar21._0_4_);
      fVar18 = auVar21._0_4_;
      bVar2 = true;
      auStack_100 = auVar20;
      if (fVar15 <= fVar18) {
        auVar21 = _lqc2(*pauVar11);
        auVar22 = _lqc2(*pauVar8);
        auVar21 = _vsub(auVar21,auVar22);
        auStack_f0 = _sqc2(auVar21);
        auVar21 = _lqc2(auStack_f0);
        auVar22 = _vaddbc(in_vf0,in_vf0);
        auVar21 = _vmul(auVar21,auVar21);
        _vaddabc(auVar21,auVar21);
        _vmaddabc(auVar22,auVar21);
        auVar21 = _vmaddbc(auVar22,auVar21);
        _vsqrt(auVar21);
        _vwaitq();
        uVar6 = _cfc2(in_vc6);
        auVar21 = _lqc2(auVar20);
        auVar22 = _lqc2(auStack_f0);
        auVar23 = _vaddbc(in_vf0,in_vf0);
        auVar21 = _vmul(auVar21,auVar22);
        _vaddabc(auVar21,auVar21);
        _vmaddabc(auVar23,auVar21);
        auVar21 = _vmaddbc(auVar23,auVar21);
        auVar21 = _qmfc2(auVar21._0_4_);
        fVar16 = auVar21._0_4_ / (float)uVar6;
        bVar1 = false;
        if (((0.0 <= fVar16) && (fVar13 = fVar18 - fVar16 * fVar16, fVar13 <= fVar15)) &&
           (bVar1 = true, (float)uVar6 < fVar16 - SQRT(fVar15 - fVar13))) {
          bVar1 = false;
        }
        bVar2 = true;
        auStack_100 = auStack_f0;
        if (!bVar1) {
          auVar21 = _lqc2(*pauVar12);
          auVar22 = _lqc2(*pauVar8);
          auVar21 = _vsub(auVar21,auVar22);
          auStack_f0 = _sqc2(auVar21);
          auVar21 = _lqc2(auStack_f0);
          auVar22 = _vaddbc(in_vf0,in_vf0);
          auVar21 = _vmul(auVar21,auVar21);
          _vaddabc(auVar21,auVar21);
          _vmaddabc(auVar22,auVar21);
          auVar21 = _vmaddbc(auVar22,auVar21);
          _vsqrt(auVar21);
          _vwaitq();
          uVar6 = _cfc2(in_vc6);
          auVar20 = _lqc2(auVar20);
          auVar21 = _lqc2(auStack_f0);
          auVar22 = _vaddbc(in_vf0,in_vf0);
          auVar20 = _vmul(auVar20,auVar21);
          _vaddabc(auVar20,auVar20);
          _vmaddabc(auVar22,auVar20);
          auVar20 = _vmaddbc(auVar22,auVar20);
          auVar20 = _qmfc2(auVar20._0_4_);
          fVar16 = auVar20._0_4_ / (float)uVar6;
          bVar1 = false;
          if (((0.0 <= fVar16) && (fVar18 = fVar18 - fVar16 * fVar16, fVar18 <= fVar15)) &&
             (bVar1 = true, (float)uVar6 < fVar16 - SQRT(fVar15 - fVar18))) {
            bVar1 = false;
          }
          bVar2 = true;
          auStack_100 = auStack_f0;
          if (!bVar1) {
            auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
            auVar21 = _lqc2(*pauVar11);
            auVar20 = _vsub(auVar20,auVar21);
            auStack_100 = _sqc2(auVar20);
            auVar20 = _lqc2(auStack_100);
            auVar21 = _lqc2(auStack_100);
            auVar22 = _vaddbc(in_vf0,in_vf0);
            auVar20 = _vmul(auVar20,auVar21);
            _vaddabc(auVar20,auVar20);
            _vmaddabc(auVar22,auVar20);
            auVar20 = _vmaddbc(auVar22,auVar20);
            auVar21 = _qmfc2(auVar20._0_4_);
            auVar20 = _lqc2(*pauVar12);
            auVar22 = _lqc2(*pauVar11);
            auVar20 = _vsub(auVar20,auVar22);
            auStack_f0 = _sqc2(auVar20);
            auVar20 = _lqc2(auStack_f0);
            auVar22 = _vaddbc(in_vf0,in_vf0);
            auVar20 = _vmul(auVar20,auVar20);
            _vaddabc(auVar20,auVar20);
            _vmaddabc(auVar22,auVar20);
            auVar20 = _vmaddbc(auVar22,auVar20);
            _vsqrt(auVar20);
            _vwaitq();
            uVar6 = _cfc2(in_vc6);
            auVar20 = _lqc2(auStack_100);
            auVar22 = _lqc2(auStack_f0);
            auVar23 = _vaddbc(in_vf0,in_vf0);
            auVar20 = _vmul(auVar20,auVar22);
            _vaddabc(auVar20,auVar20);
            _vmaddabc(auVar23,auVar20);
            auVar20 = _vmaddbc(auVar23,auVar20);
            auVar20 = _qmfc2(auVar20._0_4_);
            fVar18 = auVar20._0_4_ / (float)uVar6;
            bVar2 = false;
            auStack_e0 = auStack_f0;
            if (((0.0 <= fVar18) && (fVar16 = auVar21._0_4_ - fVar18 * fVar18, fVar16 <= fVar15)) &&
               (bVar2 = true, (float)uVar6 < fVar18 - SQRT(fVar15 - fVar16))) {
              bVar2 = false;
            }
          }
        }
      }
    }
    if (bVar2) {
      if (*(int *)(param_1 + 0x24) == 0) {
        auVar21._4_4_ = uStack_14c;
        auVar21._0_4_ = uStack_150;
        auVar21._8_4_ = uStack_148;
        auVar21._12_4_ = uStack_144;
        auVar21 = _lqc2(auVar21);
        auVar20 = _qmtc2(fVar17 - fVar19);
        auVar20 = _vmulbc(auVar21,auVar20);
        auVar20 = _sqc2(auVar20);
        auStack_120._12_4_ = auVar20._12_4_;
        auStack_130._4_4_ = auVar20._4_4_;
        auStack_130._8_4_ = auVar20._8_4_;
        *puStack_d0 = auVar20._0_4_;
        puStack_d0[1] = auStack_130._4_4_;
        puStack_d0[2] = auStack_130._8_4_;
        puStack_d0[3] = auStack_120._12_4_;
        *param_7 = uStack_140;
        param_7[1] = uStack_13c;
        param_7[2] = uStack_138;
        param_7[3] = uStack_134;
        return 1;
      }
      uVar10 = 0;
      fVar19 = DAT_002c39a8;
      if (0 < *(int *)(param_1 + 0x28)) {
        pauVar7 = (undefined1 (*) [16])(param_1 + 0x30);
        fVar17 = DAT_002c39a8;
        iVar9 = param_1;
        do {
          if (((*(int *)(param_1 + 0x24) >> (uVar10 & 0x1f) ^ 1U) & 1) == 0) {
            auVar20 = _lqc2(*pauVar7);
            auVar21 = _lqc2(*pauVar8);
            auVar20 = _vsub(auVar20,auVar21);
            auVar20 = _sqc2(auVar20);
            fVar18 = *(float *)(iVar9 + 0x40);
            auVar22._4_4_ = uStack_14c;
            auVar22._0_4_ = uStack_150;
            auVar22._8_4_ = uStack_148;
            auVar22._12_4_ = uStack_144;
            auVar21 = _lqc2(auVar22);
            auVar20 = _lqc2(auVar20);
            auVar22 = _vaddbc(in_vf0,in_vf0);
            auVar20 = _vmul(auVar21,auVar20);
            _vaddabc(auVar20,auVar20);
            _vmaddabc(auVar22,auVar20);
            auVar20 = _vmaddbc(auVar22,auVar20);
            auVar20 = _qmfc2(auVar20._0_4_);
            fVar19 = auVar20._0_4_;
            if (fVar19 < fVar18) {
              if (fVar19 < fVar17) {
                auVar23._4_4_ = uStack_14c;
                auVar23._0_4_ = uStack_150;
                auVar23._8_4_ = uStack_148;
                auVar23._12_4_ = uStack_144;
                auVar21 = _lqc2(auVar23);
                auVar20 = _qmtc2(fVar19);
                auVar20 = _vmulbc(auVar21,auVar20);
                auStack_120 = _sqc2(auVar20);
                auVar20 = _lqc2(*pauVar7);
                auVar21 = _lqc2(auStack_120);
                auVar20 = _vsub(auVar20,auVar21);
                auStack_130 = _sqc2(auVar20);
                auStack_110._12_4_ = auStack_130._12_4_;
                uStack_140 = auStack_130._0_4_;
                uStack_13c = auStack_130._4_4_;
                uStack_138 = auStack_130._8_4_;
                uStack_134 = auStack_110._12_4_;
                auStack_110 = auStack_130;
                lVar5 = FUN_002100f0(DAT_002c39ac,param_2,param_3,param_4,&uStack_140);
                bVar2 = true;
                if (lVar5 == 0) {
                  auVar20 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x30));
                  auVar21 = _lqc2(*pauVar8);
                  auVar20 = _vsub(auVar20,auVar21);
                  auVar20 = _sqc2(auVar20);
                  fVar16 = fVar18 * fVar18;
                  auVar21 = _lqc2(auVar20);
                  auVar22 = _lqc2(auVar20);
                  auVar23 = _vaddbc(in_vf0,in_vf0);
                  auVar21 = _vmul(auVar21,auVar22);
                  _vaddabc(auVar21,auVar21);
                  _vmaddabc(auVar23,auVar21);
                  auVar21 = _vmaddbc(auVar23,auVar21);
                  auVar21 = _qmfc2(auVar21._0_4_);
                  fVar15 = auVar21._0_4_;
                  bVar2 = true;
                  if (fVar16 <= fVar15) {
                    auVar21 = _lqc2(*pauVar11);
                    auVar22 = _lqc2(*pauVar8);
                    auVar21 = _vsub(auVar21,auVar22);
                    auVar21 = _sqc2(auVar21);
                    auVar22 = _lqc2(auVar21);
                    auVar23 = _vaddbc(in_vf0,in_vf0);
                    auVar22 = _vmul(auVar22,auVar22);
                    _vaddabc(auVar22,auVar22);
                    _vmaddabc(auVar23,auVar22);
                    auVar22 = _vmaddbc(auVar23,auVar22);
                    _vsqrt(auVar22);
                    _vwaitq();
                    uVar6 = _cfc2(in_vc6);
                    auVar22 = _lqc2(auVar20);
                    auVar21 = _lqc2(auVar21);
                    auVar23 = _vaddbc(in_vf0,in_vf0);
                    auVar21 = _vmul(auVar22,auVar21);
                    _vaddabc(auVar21,auVar21);
                    _vmaddabc(auVar23,auVar21);
                    auVar21 = _vmaddbc(auVar23,auVar21);
                    auVar21 = _qmfc2(auVar21._0_4_);
                    fVar13 = auVar21._0_4_ / (float)uVar6;
                    bVar1 = false;
                    if (((0.0 <= fVar13) && (fVar14 = fVar15 - fVar13 * fVar13, fVar14 <= fVar16))
                       && (bVar1 = true, (float)uVar6 < fVar13 - SQRT(fVar16 - fVar14))) {
                      bVar1 = false;
                    }
                    bVar2 = true;
                    if (!bVar1) {
                      auVar21 = _lqc2(*pauVar12);
                      auVar22 = _lqc2(*pauVar8);
                      auVar21 = _vsub(auVar21,auVar22);
                      auVar21 = _sqc2(auVar21);
                      auVar22 = _lqc2(auVar21);
                      auVar23 = _vaddbc(in_vf0,in_vf0);
                      auVar22 = _vmul(auVar22,auVar22);
                      _vaddabc(auVar22,auVar22);
                      _vmaddabc(auVar23,auVar22);
                      auVar22 = _vmaddbc(auVar23,auVar22);
                      _vsqrt(auVar22);
                      _vwaitq();
                      uVar6 = _cfc2(in_vc6);
                      auVar20 = _lqc2(auVar20);
                      auVar21 = _lqc2(auVar21);
                      auVar22 = _vaddbc(in_vf0,in_vf0);
                      auVar20 = _vmul(auVar20,auVar21);
                      _vaddabc(auVar20,auVar20);
                      _vmaddabc(auVar22,auVar20);
                      auVar20 = _vmaddbc(auVar22,auVar20);
                      auVar20 = _qmfc2(auVar20._0_4_);
                      fVar13 = auVar20._0_4_ / (float)uVar6;
                      bVar1 = false;
                      if (((0.0 <= fVar13) && (fVar15 = fVar15 - fVar13 * fVar13, fVar15 <= fVar16))
                         && (bVar1 = true, (float)uVar6 < fVar13 - SQRT(fVar16 - fVar15))) {
                        bVar1 = false;
                      }
                      bVar2 = true;
                      if (!bVar1) {
                        auVar20 = _lqc2(*pauVar7);
                        auVar21 = _lqc2(*pauVar11);
                        auVar20 = _vsub(auVar20,auVar21);
                        auVar20 = _sqc2(auVar20);
                        auVar21 = _lqc2(auVar20);
                        auVar22 = _lqc2(auVar20);
                        auVar23 = _vaddbc(in_vf0,in_vf0);
                        auVar21 = _vmul(auVar21,auVar22);
                        _vaddabc(auVar21,auVar21);
                        _vmaddabc(auVar23,auVar21);
                        auVar21 = _vmaddbc(auVar23,auVar21);
                        auVar21 = _qmfc2(auVar21._0_4_);
                        auVar22 = _lqc2(*pauVar12);
                        auVar23 = _lqc2(*pauVar11);
                        auVar22 = _vsub(auVar22,auVar23);
                        auStack_100 = _sqc2(auVar22);
                        auVar22 = _lqc2(auStack_100);
                        auVar23 = _vaddbc(in_vf0,in_vf0);
                        auVar22 = _vmul(auVar22,auVar22);
                        _vaddabc(auVar22,auVar22);
                        _vmaddabc(auVar23,auVar22);
                        auVar22 = _vmaddbc(auVar23,auVar22);
                        _vsqrt(auVar22);
                        _vwaitq();
                        uVar6 = _cfc2(in_vc6);
                        auVar20 = _lqc2(auVar20);
                        auVar22 = _lqc2(auStack_100);
                        auVar23 = _vaddbc(in_vf0,in_vf0);
                        auVar20 = _vmul(auVar20,auVar22);
                        _vaddabc(auVar20,auVar20);
                        _vmaddabc(auVar23,auVar20);
                        auVar20 = _vmaddbc(auVar23,auVar20);
                        auVar20 = _qmfc2(auVar20._0_4_);
                        fVar15 = auVar20._0_4_ / (float)uVar6;
                        bVar2 = false;
                        if (((0.0 <= fVar15) &&
                            (fVar13 = auVar21._0_4_ - fVar15 * fVar15, fVar13 <= fVar16)) &&
                           (bVar2 = true, (float)uVar6 < fVar15 - SQRT(fVar16 - fVar13))) {
                          bVar2 = false;
                        }
                      }
                    }
                  }
                }
                if (bVar2) {
                  auVar3._4_4_ = uStack_14c;
                  auVar3._0_4_ = uStack_150;
                  auVar3._8_4_ = uStack_148;
                  auVar3._12_4_ = uStack_144;
                  auVar21 = _lqc2(auVar3);
                  auVar20 = _qmtc2(fVar18 - fVar19);
                  auVar20 = _vmulbc(auVar21,auVar20);
                  auVar20 = _sqc2(auVar20);
                  auStack_120._12_4_ = auVar20._12_4_;
                  *puStack_d0 = auVar20._0_4_;
                  puStack_d0[1] = auVar20._4_4_;
                  puStack_d0[2] = auVar20._8_4_;
                  puStack_d0[3] = auStack_120._12_4_;
                  *param_7 = uStack_140;
                  param_7[1] = uStack_13c;
                  param_7[2] = uStack_138;
                  param_7[3] = uStack_134;
                  iVar4 = *(int *)(param_1 + 0x28);
                }
                else {
                  iVar4 = *(int *)(param_1 + 0x28);
                  fVar19 = fVar17;
                }
              }
              else {
                iVar4 = *(int *)(param_1 + 0x28);
                fVar19 = fVar17;
              }
            }
            else {
              iVar4 = *(int *)(param_1 + 0x28);
              fVar19 = fVar17;
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0x28);
            fVar19 = fVar17;
          }
          uVar10 = uVar10 + 1;
          pauVar7 = pauVar7 + 2;
          iVar9 = iVar9 + 0x20;
          fVar17 = fVar19;
        } while ((int)uVar10 < iVar4);
      }
      if (fVar19 != DAT_002c39b0) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

