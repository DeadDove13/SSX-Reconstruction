/* Ghidra pseudocode. PS2 address: 00126378. Not validated source. */

void FUN_00126378(int param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [12];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [8];
  float fStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  
  iVar3 = (int)param_2;
  lVar1 = FUN_0020ef10(param_1 + 0x150,iVar3 + 0x150,auStack_100,auStack_f0);
  if (lVar1 != 0) {
    auVar9 = _lqc2(auStack_100);
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _vmul(auVar9,auVar9);
    _vaddabc(auVar10,auVar10);
    _vmaddabc(auVar13,auVar10);
    auVar10 = _vmaddbc(auVar13,auVar10);
    _vrsqrt(in_vf0,auVar10);
    uVar15 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar15);
    auVar9 = _sqc2(auVar9);
    auStack_d0._8_4_ = auVar9._8_4_;
    uStack_c4 = auVar9._12_4_;
    fStack_e0 = auVar9._0_4_;
    fStack_dc = auVar9._4_4_;
    fStack_d8 = (float)auStack_d0._8_4_;
    uStack_d4 = uStack_c4;
    auVar10 = _lqc2(auStack_f0);
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
    auVar10 = _vsub(auVar10,auVar13);
    auVar10 = _sqc2(auVar10);
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xb0));
    auVar10 = _lqc2(auVar10);
    _vopmula(auVar13,auVar10);
    auVar10 = _vopmsub(auVar10,auVar13);
    auVar10 = _vsub(auVar10,auVar10);
    auVar10 = _sqc2(auVar10);
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar10 = _lqc2(auVar10);
    auVar10 = _vadd(auVar13,auVar10);
    auVar10 = _sqc2(auVar10);
    auVar13 = _lqc2(auStack_f0);
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x60));
    auVar13 = _vsub(auVar13,auVar11);
    auVar13 = _sqc2(auVar13);
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xb0));
    auVar13 = _lqc2(auVar13);
    _vopmula(auVar11,auVar13);
    auVar13 = _vopmsub(auVar13,auVar11);
    auVar13 = _vsub(auVar13,auVar13);
    auVar13 = _sqc2(auVar13);
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar13 = _lqc2(auVar13);
    auVar13 = _vadd(auVar11,auVar13);
    auVar13 = _sqc2(auVar13);
    fStack_68 = auVar13._8_4_;
    uStack_64 = auVar13._12_4_;
    uStack_c0 = auVar13._0_4_;
    uStack_bc = auVar13._4_4_;
    uStack_b8 = fStack_68;
    uStack_b4 = uStack_64;
    auVar11 = _lqc2(auVar10);
    auVar13 = _lqc2(auVar13);
    auVar13 = _vsub(auVar11,auVar13);
    auVar13 = _sqc2(auVar13);
    auVar13 = _lqc2(auVar13);
    auVar11 = _lqc2(auVar9);
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _vmul(auVar13,auVar11);
    _vaddabc(auVar13,auVar13);
    _vmaddabc(auVar14,auVar13);
    auVar13 = _vmaddbc(auVar14,auVar13);
    auVar13 = _qmfc2(auVar13._0_4_);
    if (auVar13._0_4_ < 0.0) {
      auVar11 = _lqc2(auStack_f0);
      auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
      auVar11 = _vsub(auVar11,auVar14);
      auVar11 = _sqc2(auVar11);
      fStack_98 = auVar11._8_4_;
      uStack_94 = auVar11._12_4_;
      fStack_b0 = auVar11._0_4_;
      fStack_ac = auVar11._4_4_;
      fStack_a8 = fStack_98;
      uStack_a4 = uStack_94;
      auVar14 = _lqc2(auStack_f0);
      auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x60));
      auVar14 = _vsub(auVar14,auVar12);
      auVar14 = _sqc2(auVar14);
      auVar11 = _lqc2(auVar11);
      auVar12 = _lqc2(auVar9);
      _vopmula(auVar11,auVar12);
      auVar11 = _vopmsub(auVar12,auVar11);
      auVar11 = _vsub(auVar11,auVar11);
      auVar11 = _sqc2(auVar11);
      auStack_70._0_4_ = auVar11._0_4_;
      auStack_70._4_4_ = auVar11._4_4_;
      fStack_68 = auVar11._8_4_;
      fVar6 = *(float *)(param_1 + 0x3c) * (float)auStack_70._0_4_ +
              *(float *)(param_1 + 0x48) * (float)auStack_70._4_4_ +
              *(float *)(param_1 + 0x54) * fStack_68;
      fVar4 = *(float *)(param_1 + 0x40) * (float)auStack_70._0_4_ +
              *(float *)(param_1 + 0x4c) * (float)auStack_70._4_4_ +
              *(float *)(param_1 + 0x58) * fStack_68;
      fVar8 = *(float *)(param_1 + 0x44) * (float)auStack_70._0_4_ +
              *(float *)(param_1 + 0x50) * (float)auStack_70._4_4_ +
              *(float *)(param_1 + 0x5c) * fStack_68;
      fVar7 = fVar6 * fStack_98;
      fVar5 = fVar4 * fStack_98;
      auVar11 = _lqc2(auVar14);
      auVar12 = _lqc2(auVar9);
      _vopmula(auVar11,auVar12);
      auVar11 = _vopmsub(auVar12,auVar11);
      auVar11 = _vsub(auVar11,auVar11);
      _auStack_70 = _sqc2(auVar11);
      uStack_54 = auStack_70._12_4_;
      fVar2 = auStack_70._0_4_;
      fStack_60 = *(float *)(iVar3 + 0x3c) * fVar2 +
                  *(float *)(iVar3 + 0x48) * (float)auStack_70._4_4_ +
                  *(float *)(iVar3 + 0x54) * fStack_68;
      fStack_5c = *(float *)(iVar3 + 0x40) * fVar2 +
                  *(float *)(iVar3 + 0x4c) * (float)auStack_70._4_4_ +
                  *(float *)(iVar3 + 0x58) * fStack_68;
      fStack_58 = *(float *)(iVar3 + 0x44) * fVar2 +
                  *(float *)(iVar3 + 0x50) * (float)auStack_70._4_4_ +
                  *(float *)(iVar3 + 0x5c) * fStack_68;
      auStack_a0._0_4_ = auVar14._0_4_;
      auStack_a0._4_4_ = auVar14._4_4_;
      fStack_98 = auVar14._8_4_;
      auVar11 = _lqc2(auVar9);
      auVar9 = _qmtc2((-((*(float *)(param_1 + 0xd8) + *(float *)(iVar3 + 0xd8)) * 0.5 + 1.0) *
                      auVar13._0_4_) /
                      (*(float *)(param_1 + 0x38) + *(float *)(iVar3 + 0x38) +
                       fStack_e0 * (fVar5 - fVar8 * fStack_ac) +
                       fStack_dc * (fVar8 * fStack_b0 - fVar7) +
                       (float)auStack_d0._8_4_ * (fVar6 * fStack_ac - fVar4 * fStack_b0) +
                      fStack_e0 * (fStack_5c * fStack_98 - fStack_58 * (float)auStack_a0._4_4_) +
                      fStack_dc * (fStack_58 * (float)auStack_a0._0_4_ - fStack_60 * fStack_98) +
                      (float)auStack_d0._8_4_ *
                      (fStack_60 * (float)auStack_a0._4_4_ - fStack_5c * (float)auStack_a0._0_4_)));
      auVar9 = _vmulbc(auVar11,auVar9);
      auStack_90 = _sqc2(auVar9);
      _auStack_d0 = auVar10;
      _auStack_a0 = auVar14;
      auStack_80 = auStack_90;
      FUN_00136610(param_1 + 0x30,&fStack_b0,auStack_90);
      FUN_001110c0(0xbf800000,auStack_80,auStack_90);
      FUN_00136610(iVar3 + 0x30,auStack_a0,auStack_80);
      FUN_001261f8(param_2,0);
    }
  }
  return;
}

