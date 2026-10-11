/* Ghidra pseudocode. PS2 address: 001be110. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001be110(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  uVar4 = 0;
  uVar3 = 0xffffffff;
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (uVar1 == 0) {
      uVar7 = *param_3;
    }
    else {
      uVar7 = *param_2;
    }
    if ((uVar2 & 2) == 0) {
      uVar5 = param_3[1];
    }
    else {
      uVar5 = param_2[1];
    }
    if ((uVar2 & 4) == 0) {
      uVar6 = param_3[2];
    }
    else {
      uVar6 = param_2[2];
    }
    if (DAT_00292770 == 0) {
      DAT_00292770 = 1;
      auVar8 = _lqc2(_DAT_002926d0);
      auVar9 = _lqc2(_DAT_002926e0);
      auVar10 = _lqc2(_DAT_002926f0);
      auVar11 = _lqc2(_DAT_00292700);
      auVar12 = _lqc2(_DAT_00292690);
      auVar13 = _lqc2(_DAT_002926a0);
      auVar14 = _lqc2(_DAT_002926b0);
      auVar15 = _lqc2(_DAT_002926c0);
      _vmulabc(auVar8,auVar12);
      _vmaddabc(auVar9,auVar12);
      _vmaddabc(auVar10,auVar12);
      auVar12 = _vmaddbc(auVar11,auVar12);
      _vmulabc(auVar8,auVar13);
      _vmaddabc(auVar9,auVar13);
      _vmaddabc(auVar10,auVar13);
      auVar13 = _vmaddbc(auVar11,auVar13);
      _vmulabc(auVar8,auVar14);
      _vmaddabc(auVar9,auVar14);
      _vmaddabc(auVar10,auVar14);
      auVar14 = _vmaddbc(auVar11,auVar14);
      _vmulabc(auVar8,auVar15);
      _vmaddabc(auVar9,auVar15);
      _vmaddabc(auVar10,auVar15);
      auVar11 = _vmaddbc(auVar11,auVar15);
      auVar8 = _sqc2(auVar12);
      auVar9 = _sqc2(auVar13);
      auVar10 = _sqc2(auVar14);
      auVar11 = _sqc2(auVar11);
      uStack_c0 = auVar9._0_8_;
      DAT_00292730 = auVar8._0_8_;
      DAT_00292738 = auVar8._8_8_;
      DAT_00292740 = uStack_c0;
      uStack_b8 = auVar9._8_8_;
      DAT_00292748 = uStack_b8;
      DAT_00292750 = auVar10._0_8_;
      DAT_00292758 = auVar10._8_8_;
      DAT_00292760 = auVar11._0_8_;
      DAT_00292768 = auVar11._8_8_;
    }
    auVar8._8_8_ = DAT_00292738;
    auVar8._0_8_ = DAT_00292730;
    auVar8 = _lqc2(auVar8);
    auVar9._8_8_ = DAT_00292748;
    auVar9._0_8_ = DAT_00292740;
    auVar9 = _lqc2(auVar9);
    auVar10._8_8_ = DAT_00292758;
    auVar10._0_8_ = DAT_00292750;
    auVar10 = _lqc2(auVar10);
    auVar11._8_8_ = DAT_00292768;
    auVar11._0_8_ = DAT_00292760;
    auVar11 = _lqc2(auVar11);
    auVar12._4_4_ = uVar5;
    auVar12._0_4_ = uVar7;
    auVar12._8_4_ = uVar6;
    auVar12._12_4_ = 0x3f800000;
    auVar12 = _lqc2(auVar12);
    _vmulabc(auVar8,auVar12);
    _vmaddabc(auVar9,auVar12);
    _vmaddabc(auVar10,auVar12);
    auVar8 = _vmaddbc(auVar11,auVar12);
    auVar8 = _sqc2(auVar8);
    uStack_c0._0_4_ = auVar8._0_4_;
    uStack_c0._4_4_ = auVar8._4_4_;
    uStack_b8._0_4_ = auVar8._8_4_;
    uStack_b8._4_4_ = auVar8._12_4_;
    uVar1 = 0;
    uStack_b8._4_4_ = 1.0 / uStack_b8._4_4_;
    if ((float)uStack_c0 * uStack_b8._4_4_ < DAT_00292710) {
      uVar1 = 2;
    }
    if (DAT_00292720 < (float)uStack_c0 * uStack_b8._4_4_) {
      uVar1 = uVar1 | 1;
    }
    if (uStack_c0._4_4_ * uStack_b8._4_4_ < DAT_00292714) {
      uVar1 = uVar1 | 8;
    }
    if (DAT_00292724 < uStack_c0._4_4_ * uStack_b8._4_4_) {
      uVar1 = uVar1 | 4;
    }
    if (uStack_b8._4_4_ < 0.0) {
      uVar1 = uVar1 ^ 0x2f;
    }
    else {
      if (DAT_00292718 < (float)uStack_b8) {
        uVar1 = uVar1 | 0x20;
      }
      if ((float)uStack_b8 < DAT_00292728) {
        uVar1 = uVar1 | 0x10;
      }
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 & uVar1;
    uVar4 = uVar4 | uVar1;
    uVar1 = uVar2 & 1;
  } while ((int)uVar2 < 8);
  uVar7 = 1;
  if ((uVar3 == 0) && (uVar7 = 2, uVar4 == 0)) {
    uVar7 = 0;
  }
  return uVar7;
}

