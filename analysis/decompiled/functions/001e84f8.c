/* Ghidra pseudocode. PS2 address: 001e84f8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e84f8(int *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  int *piStack_c0;
  int iStack_bc;
  int iStack_b8;
  
  if (DAT_002859e4 != 0) {
    iStack_bc = *(int *)(DAT_002859e4 + 0x24);
    piStack_c0 = param_1;
    FUN_001cb560(0x2913b0,*(undefined4 *)(DAT_002859e4 + 0x290));
    iVar3 = 0;
    while ((iVar3 < 0xa2 && (lVar2 = FUN_00221a60(piStack_c0 + 0x14,iVar3), lVar2 != 0))) {
      iVar4 = (int)lVar2;
      iStack_b8 = iVar3 + 1;
      iVar3 = iStack_b8;
      if (*(int *)(iVar4 + 0x24) != 0) {
        uVar6 = 0;
        while (uVar1 = uVar6, iVar3 = iStack_b8,
              (int)uVar1 < (int)*(short *)(*piStack_c0 + 0x42) * (int)*(short *)(*piStack_c0 + 0x42)
              ) {
          iVar3 = *(int *)(iVar4 + 4) + uVar1 * 0x30;
          lVar2 = (long)*(short *)(iVar3 + 6);
          uVar6 = uVar1 + 1;
          if (((lVar2 != 0) && ((*(uint *)(iVar4 + 0x20) & 1 << (uVar1 & 0x1f)) != 0)) &&
             (0 < lVar2)) {
            fVar7 = 1.0;
            puVar5 = (ushort *)(*(int *)(iVar4 + 8) + *(short *)(iVar3 + 0x12) * 4 + 2);
            do {
              iVar3 = *(int *)(iVar4 + 0x14) + (uint)*puVar5 * 0x58;
              uStack_150 = *(undefined4 *)*(undefined1 (*) [12])(iVar3 + 0x24);
              uStack_14c = *(undefined4 *)(iVar3 + 0x28);
              uStack_148 = *(undefined4 *)(iVar3 + 0x2c);
              fStack_144 = 1.0;
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
                auVar8 = _vmaddbc(auVar11,auVar15);
                auStack_100 = _sqc2(auVar12);
                auStack_f0 = _sqc2(auVar13);
                auStack_e0 = _sqc2(auVar14);
                auStack_d0 = _sqc2(auVar8);
                auStack_130 = auStack_f0._0_8_;
                uStack_120 = auStack_e0._0_4_;
                uStack_11c = auStack_e0._4_4_;
                uStack_118 = auStack_e0._8_4_;
                uStack_114 = auStack_e0._12_4_;
                uStack_110 = auStack_d0._0_4_;
                uStack_10c = auStack_d0._4_4_;
                uStack_108 = auStack_d0._8_4_;
                uStack_104 = auStack_d0._12_4_;
                DAT_00292730 = auStack_100._0_8_;
                DAT_00292738 = auStack_100._8_8_;
                DAT_00292740 = auStack_130;
                uStack_128 = auStack_f0._8_8_;
                DAT_00292748 = uStack_128;
                DAT_00292750 = auStack_e0._0_8_;
                DAT_00292758 = auStack_e0._8_8_;
                DAT_00292760 = auStack_d0._0_8_;
                DAT_00292768 = auStack_d0._8_8_;
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
              auVar12._12_4_ = 0x3f800000;
              auVar12._0_12_ = *(undefined1 (*) [12])(iVar3 + 0x24);
              auVar12 = _lqc2(auVar12);
              _vmulabc(auVar8,auVar12);
              _vmaddabc(auVar9,auVar12);
              _vmaddabc(auVar10,auVar12);
              auVar8 = _vmaddbc(auVar11,auVar12);
              _auStack_130 = _sqc2(auVar8);
              fStack_138 = (float)uStack_128;
              uVar1 = 0;
              fStack_134 = 1.0 / uStack_128._4_4_;
              fStack_140 = auStack_130._0_4_ * fStack_134;
              fStack_13c = auStack_130._4_4_ * fStack_134;
              if (fStack_140 < DAT_00292710) {
                uVar1 = 2;
              }
              if (DAT_00292720 < fStack_140) {
                uVar1 = uVar1 | 1;
              }
              if (fStack_13c < DAT_00292714) {
                uVar1 = uVar1 | 8;
              }
              if (DAT_00292724 < fStack_13c) {
                uVar1 = uVar1 | 4;
              }
              if (fStack_134 < 0.0) {
                uVar1 = uVar1 ^ 0x2f;
              }
              else {
                if (DAT_00292718 < (float)uStack_128) {
                  uVar1 = uVar1 | 0x20;
                }
                if ((float)uStack_128 < DAT_00292728) {
                  uVar1 = uVar1 | 0x10;
                }
              }
              if (uVar1 == 0) {
                fStack_140 = *(float *)(iVar3 + 0x24);
                fStack_13c = *(float *)(iVar3 + 0x28);
                fStack_138 = *(float *)(iVar3 + 0x2c);
                fStack_134 = fVar7;
                FUN_001c5c80(&uStack_150,0x2913b0,&fStack_140);
                if ((0.0 < fStack_144) && (fStack_144 < *(float *)(iStack_bc + 0x5c))) {
                  FUN_001cb6a0(0x2913b0,iVar3);
                }
              }
              lVar2 = (long)((int)lVar2 + -1);
              puVar5 = puVar5 + 2;
            } while (lVar2 != 0);
          }
        }
      }
    }
    FUN_001cb7a0(0x2913b0);
  }
  return;
}

