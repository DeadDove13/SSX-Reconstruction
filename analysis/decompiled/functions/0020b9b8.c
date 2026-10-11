/* Ghidra pseudocode. PS2 address: 0020b9b8. Not validated source. */

undefined8
FUN_0020b9b8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 (*param_5) [16],undefined4 *param_6,undefined4 *param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  float fVar5;
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
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  undefined4 *puStack_cc;
  
  auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  pauVar8 = (undefined1 (*) [16])param_2;
  auVar20 = _lqc2(*pauVar8);
  auVar19 = _vsub(auVar19,auVar20);
  auVar19 = _sqc2(auVar19);
  auVar20 = _lqc2(*param_5);
  auVar19 = _lqc2(auVar19);
  auVar21 = _vaddbc(in_vf0,in_vf0);
  auVar19 = _vmul(auVar20,auVar19);
  _vaddabc(auVar19,auVar19);
  _vmaddabc(auVar21,auVar19);
  auVar19 = _vmaddbc(auVar21,auVar19);
  auVar19 = _qmfc2(auVar19._0_4_);
  fVar5 = auVar19._0_4_;
  fVar17 = *(float *)(param_1 + 0x20);
  if (ABS(fVar5) <= fVar17) {
    auVar20 = _lqc2(*param_5);
    auVar19 = _qmtc2(fVar5);
    auVar19 = _vmulbc(auVar20,auVar19);
    auStack_130 = _sqc2(auVar19);
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar20 = _lqc2(auStack_130);
    auVar19 = _vsub(auVar19,auVar20);
    auStack_120 = _sqc2(auVar19);
    uStack_140 = auStack_120._0_4_;
    uStack_13c = auStack_120._4_4_;
    uStack_138 = auStack_120._8_4_;
    uStack_134 = auStack_120._12_4_;
    puStack_d0 = param_6;
    puStack_cc = param_7;
    lVar4 = FUN_002100f0(DAT_002c3984,param_2,param_3,param_4,&uStack_140);
    bVar2 = true;
    pauVar11 = (undefined1 (*) [16])param_3;
    pauVar12 = (undefined1 (*) [16])param_4;
    if (lVar4 == 0) {
      auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
      auVar20 = _lqc2(*pauVar8);
      auVar19 = _vsub(auVar19,auVar20);
      auVar19 = _sqc2(auVar19);
      fVar15 = fVar17 * fVar17;
      auVar20 = _lqc2(auVar19);
      auVar21 = _lqc2(auVar19);
      auVar22 = _vaddbc(in_vf0,in_vf0);
      auVar20 = _vmul(auVar20,auVar21);
      _vaddabc(auVar20,auVar20);
      _vmaddabc(auVar22,auVar20);
      auVar20 = _vmaddbc(auVar22,auVar20);
      auVar20 = _qmfc2(auVar20._0_4_);
      fVar18 = auVar20._0_4_;
      bVar2 = true;
      auStack_100 = auVar19;
      if (fVar15 <= fVar18) {
        auVar20 = _lqc2(*pauVar11);
        auVar21 = _lqc2(*pauVar8);
        auVar20 = _vsub(auVar20,auVar21);
        auStack_f0 = _sqc2(auVar20);
        auVar20 = _lqc2(auStack_f0);
        auVar21 = _vaddbc(in_vf0,in_vf0);
        auVar20 = _vmul(auVar20,auVar20);
        _vaddabc(auVar20,auVar20);
        _vmaddabc(auVar21,auVar20);
        auVar20 = _vmaddbc(auVar21,auVar20);
        _vsqrt(auVar20);
        _vwaitq();
        uVar6 = _cfc2(in_vc6);
        auVar20 = _lqc2(auVar19);
        auVar21 = _lqc2(auStack_f0);
        auVar22 = _vaddbc(in_vf0,in_vf0);
        auVar20 = _vmul(auVar20,auVar21);
        _vaddabc(auVar20,auVar20);
        _vmaddabc(auVar22,auVar20);
        auVar20 = _vmaddbc(auVar22,auVar20);
        auVar20 = _qmfc2(auVar20._0_4_);
        fVar16 = auVar20._0_4_ / (float)uVar6;
        bVar1 = false;
        if (((0.0 <= fVar16) && (fVar13 = fVar18 - fVar16 * fVar16, fVar13 <= fVar15)) &&
           (bVar1 = true, (float)uVar6 < fVar16 - SQRT(fVar15 - fVar13))) {
          bVar1 = false;
        }
        bVar2 = true;
        auStack_100 = auStack_f0;
        if (!bVar1) {
          auVar20 = _lqc2(*pauVar12);
          auVar21 = _lqc2(*pauVar8);
          auVar20 = _vsub(auVar20,auVar21);
          auStack_f0 = _sqc2(auVar20);
          auVar20 = _lqc2(auStack_f0);
          auVar21 = _vaddbc(in_vf0,in_vf0);
          auVar20 = _vmul(auVar20,auVar20);
          _vaddabc(auVar20,auVar20);
          _vmaddabc(auVar21,auVar20);
          auVar20 = _vmaddbc(auVar21,auVar20);
          _vsqrt(auVar20);
          _vwaitq();
          uVar6 = _cfc2(in_vc6);
          auVar19 = _lqc2(auVar19);
          auVar20 = _lqc2(auStack_f0);
          auVar21 = _vaddbc(in_vf0,in_vf0);
          auVar19 = _vmul(auVar19,auVar20);
          _vaddabc(auVar19,auVar19);
          _vmaddabc(auVar21,auVar19);
          auVar19 = _vmaddbc(auVar21,auVar19);
          auVar19 = _qmfc2(auVar19._0_4_);
          fVar16 = auVar19._0_4_ / (float)uVar6;
          bVar1 = false;
          if (((0.0 <= fVar16) && (fVar18 = fVar18 - fVar16 * fVar16, fVar18 <= fVar15)) &&
             (bVar1 = true, (float)uVar6 < fVar16 - SQRT(fVar15 - fVar18))) {
            bVar1 = false;
          }
          bVar2 = true;
          auStack_100 = auStack_f0;
          if (!bVar1) {
            auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
            auVar20 = _lqc2(*pauVar11);
            auVar19 = _vsub(auVar19,auVar20);
            auStack_100 = _sqc2(auVar19);
            auVar19 = _lqc2(auStack_100);
            auVar20 = _lqc2(auStack_100);
            auVar21 = _vaddbc(in_vf0,in_vf0);
            auVar19 = _vmul(auVar19,auVar20);
            _vaddabc(auVar19,auVar19);
            _vmaddabc(auVar21,auVar19);
            auVar19 = _vmaddbc(auVar21,auVar19);
            auVar20 = _qmfc2(auVar19._0_4_);
            auVar19 = _lqc2(*pauVar12);
            auVar21 = _lqc2(*pauVar11);
            auVar19 = _vsub(auVar19,auVar21);
            auStack_f0 = _sqc2(auVar19);
            auVar19 = _lqc2(auStack_f0);
            auVar21 = _vaddbc(in_vf0,in_vf0);
            auVar19 = _vmul(auVar19,auVar19);
            _vaddabc(auVar19,auVar19);
            _vmaddabc(auVar21,auVar19);
            auVar19 = _vmaddbc(auVar21,auVar19);
            _vsqrt(auVar19);
            _vwaitq();
            uVar6 = _cfc2(in_vc6);
            auVar19 = _lqc2(auStack_100);
            auVar21 = _lqc2(auStack_f0);
            auVar22 = _vaddbc(in_vf0,in_vf0);
            auVar19 = _vmul(auVar19,auVar21);
            _vaddabc(auVar19,auVar19);
            _vmaddabc(auVar22,auVar19);
            auVar19 = _vmaddbc(auVar22,auVar19);
            auVar19 = _qmfc2(auVar19._0_4_);
            fVar18 = auVar19._0_4_ / (float)uVar6;
            bVar2 = false;
            auStack_e0 = auStack_f0;
            if (((0.0 <= fVar18) && (fVar16 = auVar20._0_4_ - fVar18 * fVar18, fVar16 <= fVar15)) &&
               (bVar2 = true, (float)uVar6 < fVar18 - SQRT(fVar15 - fVar16))) {
              bVar2 = false;
            }
          }
        }
      }
    }
    if (bVar2) {
      if (*(int *)(param_1 + 0x24) == 0) {
        auVar20 = _lqc2(*param_5);
        auVar19 = _qmtc2(fVar17 - fVar5);
        auVar19 = _vmulbc(auVar20,auVar19);
        auVar19 = _sqc2(auVar19);
        auStack_120._12_4_ = auVar19._12_4_;
        auStack_130._4_4_ = auVar19._4_4_;
        auStack_130._8_4_ = auVar19._8_4_;
        *puStack_d0 = auVar19._0_4_;
        puStack_d0[1] = auStack_130._4_4_;
        puStack_d0[2] = auStack_130._8_4_;
        puStack_d0[3] = auStack_120._12_4_;
        *puStack_cc = uStack_140;
        puStack_cc[1] = uStack_13c;
        puStack_cc[2] = uStack_138;
        puStack_cc[3] = uStack_134;
        return 1;
      }
      uVar10 = 0;
      fVar5 = DAT_002c3988;
      if (0 < *(int *)(param_1 + 0x28)) {
        pauVar7 = (undefined1 (*) [16])(param_1 + 0x30);
        fVar17 = DAT_002c3988;
        iVar9 = param_1;
        do {
          if (((*(int *)(param_1 + 0x24) >> (uVar10 & 0x1f) ^ 1U) & 1) == 0) {
            auVar19 = _lqc2(*pauVar7);
            auVar20 = _lqc2(*pauVar8);
            auVar19 = _vsub(auVar19,auVar20);
            auVar19 = _sqc2(auVar19);
            fVar18 = *(float *)(iVar9 + 0x40);
            auVar20 = _lqc2(*param_5);
            auVar19 = _lqc2(auVar19);
            auVar21 = _vaddbc(in_vf0,in_vf0);
            auVar19 = _vmul(auVar20,auVar19);
            _vaddabc(auVar19,auVar19);
            _vmaddabc(auVar21,auVar19);
            auVar19 = _vmaddbc(auVar21,auVar19);
            auVar19 = _qmfc2(auVar19._0_4_);
            fVar5 = auVar19._0_4_;
            if (fVar5 < fVar18) {
              if (fVar5 < fVar17) {
                auVar20 = _lqc2(*param_5);
                auVar19 = _qmtc2(fVar5);
                auVar19 = _vmulbc(auVar20,auVar19);
                auStack_120 = _sqc2(auVar19);
                auVar19 = _lqc2(*pauVar7);
                auVar20 = _lqc2(auStack_120);
                auVar19 = _vsub(auVar19,auVar20);
                auStack_130 = _sqc2(auVar19);
                auStack_110._12_4_ = auStack_130._12_4_;
                uStack_140 = auStack_130._0_4_;
                uStack_13c = auStack_130._4_4_;
                uStack_138 = auStack_130._8_4_;
                uStack_134 = auStack_110._12_4_;
                auStack_110 = auStack_130;
                lVar4 = FUN_002100f0(DAT_002c398c,param_2,param_3,param_4,&uStack_140);
                bVar2 = true;
                if (lVar4 == 0) {
                  auVar19 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x30));
                  auVar20 = _lqc2(*pauVar8);
                  auVar19 = _vsub(auVar19,auVar20);
                  auVar19 = _sqc2(auVar19);
                  fVar16 = fVar18 * fVar18;
                  auVar20 = _lqc2(auVar19);
                  auVar21 = _lqc2(auVar19);
                  auVar22 = _vaddbc(in_vf0,in_vf0);
                  auVar20 = _vmul(auVar20,auVar21);
                  _vaddabc(auVar20,auVar20);
                  _vmaddabc(auVar22,auVar20);
                  auVar20 = _vmaddbc(auVar22,auVar20);
                  auVar20 = _qmfc2(auVar20._0_4_);
                  fVar15 = auVar20._0_4_;
                  bVar2 = true;
                  if (fVar16 <= fVar15) {
                    auVar20 = _lqc2(*pauVar11);
                    auVar21 = _lqc2(*pauVar8);
                    auVar20 = _vsub(auVar20,auVar21);
                    auVar20 = _sqc2(auVar20);
                    auVar21 = _lqc2(auVar20);
                    auVar22 = _vaddbc(in_vf0,in_vf0);
                    auVar21 = _vmul(auVar21,auVar21);
                    _vaddabc(auVar21,auVar21);
                    _vmaddabc(auVar22,auVar21);
                    auVar21 = _vmaddbc(auVar22,auVar21);
                    _vsqrt(auVar21);
                    _vwaitq();
                    uVar6 = _cfc2(in_vc6);
                    auVar21 = _lqc2(auVar19);
                    auVar20 = _lqc2(auVar20);
                    auVar22 = _vaddbc(in_vf0,in_vf0);
                    auVar20 = _vmul(auVar21,auVar20);
                    _vaddabc(auVar20,auVar20);
                    _vmaddabc(auVar22,auVar20);
                    auVar20 = _vmaddbc(auVar22,auVar20);
                    auVar20 = _qmfc2(auVar20._0_4_);
                    fVar13 = auVar20._0_4_ / (float)uVar6;
                    bVar1 = false;
                    if (((0.0 <= fVar13) && (fVar14 = fVar15 - fVar13 * fVar13, fVar14 <= fVar16))
                       && (bVar1 = true, (float)uVar6 < fVar13 - SQRT(fVar16 - fVar14))) {
                      bVar1 = false;
                    }
                    bVar2 = true;
                    if (!bVar1) {
                      auVar20 = _lqc2(*pauVar12);
                      auVar21 = _lqc2(*pauVar8);
                      auVar20 = _vsub(auVar20,auVar21);
                      auVar20 = _sqc2(auVar20);
                      auVar21 = _lqc2(auVar20);
                      auVar22 = _vaddbc(in_vf0,in_vf0);
                      auVar21 = _vmul(auVar21,auVar21);
                      _vaddabc(auVar21,auVar21);
                      _vmaddabc(auVar22,auVar21);
                      auVar21 = _vmaddbc(auVar22,auVar21);
                      _vsqrt(auVar21);
                      _vwaitq();
                      uVar6 = _cfc2(in_vc6);
                      auVar19 = _lqc2(auVar19);
                      auVar20 = _lqc2(auVar20);
                      auVar21 = _vaddbc(in_vf0,in_vf0);
                      auVar19 = _vmul(auVar19,auVar20);
                      _vaddabc(auVar19,auVar19);
                      _vmaddabc(auVar21,auVar19);
                      auVar19 = _vmaddbc(auVar21,auVar19);
                      auVar19 = _qmfc2(auVar19._0_4_);
                      fVar13 = auVar19._0_4_ / (float)uVar6;
                      bVar1 = false;
                      if (((0.0 <= fVar13) && (fVar15 = fVar15 - fVar13 * fVar13, fVar15 <= fVar16))
                         && (bVar1 = true, (float)uVar6 < fVar13 - SQRT(fVar16 - fVar15))) {
                        bVar1 = false;
                      }
                      bVar2 = true;
                      if (!bVar1) {
                        auVar19 = _lqc2(*pauVar7);
                        auVar20 = _lqc2(*pauVar11);
                        auVar19 = _vsub(auVar19,auVar20);
                        auVar19 = _sqc2(auVar19);
                        auVar20 = _lqc2(auVar19);
                        auVar21 = _lqc2(auVar19);
                        auVar22 = _vaddbc(in_vf0,in_vf0);
                        auVar20 = _vmul(auVar20,auVar21);
                        _vaddabc(auVar20,auVar20);
                        _vmaddabc(auVar22,auVar20);
                        auVar20 = _vmaddbc(auVar22,auVar20);
                        auVar20 = _qmfc2(auVar20._0_4_);
                        auVar21 = _lqc2(*pauVar12);
                        auVar22 = _lqc2(*pauVar11);
                        auVar21 = _vsub(auVar21,auVar22);
                        auStack_100 = _sqc2(auVar21);
                        auVar21 = _lqc2(auStack_100);
                        auVar22 = _vaddbc(in_vf0,in_vf0);
                        auVar21 = _vmul(auVar21,auVar21);
                        _vaddabc(auVar21,auVar21);
                        _vmaddabc(auVar22,auVar21);
                        auVar21 = _vmaddbc(auVar22,auVar21);
                        _vsqrt(auVar21);
                        _vwaitq();
                        uVar6 = _cfc2(in_vc6);
                        auVar19 = _lqc2(auVar19);
                        auVar21 = _lqc2(auStack_100);
                        auVar22 = _vaddbc(in_vf0,in_vf0);
                        auVar19 = _vmul(auVar19,auVar21);
                        _vaddabc(auVar19,auVar19);
                        _vmaddabc(auVar22,auVar19);
                        auVar19 = _vmaddbc(auVar22,auVar19);
                        auVar19 = _qmfc2(auVar19._0_4_);
                        fVar15 = auVar19._0_4_ / (float)uVar6;
                        bVar2 = false;
                        if (((0.0 <= fVar15) &&
                            (fVar13 = auVar20._0_4_ - fVar15 * fVar15, fVar13 <= fVar16)) &&
                           (bVar2 = true, (float)uVar6 < fVar15 - SQRT(fVar16 - fVar13))) {
                          bVar2 = false;
                        }
                      }
                    }
                  }
                }
                if (bVar2) {
                  auVar20 = _lqc2(*param_5);
                  auVar19 = _qmtc2(fVar18 - fVar5);
                  auVar19 = _vmulbc(auVar20,auVar19);
                  auVar19 = _sqc2(auVar19);
                  auStack_120._12_4_ = auVar19._12_4_;
                  *puStack_d0 = auVar19._0_4_;
                  puStack_d0[1] = auVar19._4_4_;
                  puStack_d0[2] = auVar19._8_4_;
                  puStack_d0[3] = auStack_120._12_4_;
                  *puStack_cc = uStack_140;
                  puStack_cc[1] = uStack_13c;
                  puStack_cc[2] = uStack_138;
                  puStack_cc[3] = uStack_134;
                  iVar3 = *(int *)(param_1 + 0x28);
                }
                else {
                  iVar3 = *(int *)(param_1 + 0x28);
                  fVar5 = fVar17;
                }
              }
              else {
                iVar3 = *(int *)(param_1 + 0x28);
                fVar5 = fVar17;
              }
            }
            else {
              iVar3 = *(int *)(param_1 + 0x28);
              fVar5 = fVar17;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x28);
            fVar5 = fVar17;
          }
          uVar10 = uVar10 + 1;
          pauVar7 = pauVar7 + 2;
          iVar9 = iVar9 + 0x20;
          fVar17 = fVar5;
        } while ((int)uVar10 < iVar3);
      }
      if (fVar5 != DAT_002c3990) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

