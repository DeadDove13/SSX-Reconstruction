/* Ghidra pseudocode. PS2 address: 00144240. Not validated source. */

void FUN_00144240(int param_1,undefined8 param_2)

{
  float fVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
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
  lVar2 = FUN_0020dff0(iVar3 + 0x150,*(int *)(param_1 + 0x60) + 0x3a0,auStack_100,auStack_f0);
  if (lVar2 != 0) {
    auVar10 = _lqc2(auStack_100);
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _vmul(auVar10,auVar10);
    _vaddabc(auVar11,auVar11);
    _vmaddabc(auVar14,auVar11);
    auVar11 = _vmaddbc(auVar14,auVar11);
    _vrsqrt(in_vf0,auVar11);
    uVar16 = _vwaitq();
    auVar10 = _vmulq(auVar10,uVar16);
    auVar10 = _sqc2(auVar10);
    auStack_d0._8_4_ = auVar10._8_4_;
    uStack_c4 = auVar10._12_4_;
    fStack_e0 = auVar10._0_4_;
    fStack_dc = auVar10._4_4_;
    fStack_d8 = (float)auStack_d0._8_4_;
    uStack_d4 = uStack_c4;
    auVar11 = _lqc2(auStack_f0);
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar11 = _vsub(auVar11,auVar14);
    auVar11 = _sqc2(auVar11);
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xf0));
    auVar11 = _lqc2(auVar11);
    _vopmula(auVar14,auVar11);
    auVar11 = _vopmsub(auVar11,auVar14);
    auVar11 = _vsub(auVar11,auVar11);
    auVar11 = _sqc2(auVar11);
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
    auVar11 = _lqc2(auVar11);
    auVar11 = _vadd(auVar14,auVar11);
    auVar11 = _sqc2(auVar11);
    auVar14 = _lqc2(auStack_f0);
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x60));
    auVar14 = _vsub(auVar14,auVar12);
    auVar14 = _sqc2(auVar14);
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xb0));
    auVar14 = _lqc2(auVar14);
    _vopmula(auVar12,auVar14);
    auVar14 = _vopmsub(auVar14,auVar12);
    auVar14 = _vsub(auVar14,auVar14);
    auVar14 = _sqc2(auVar14);
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar14 = _lqc2(auVar14);
    auVar14 = _vadd(auVar12,auVar14);
    auVar14 = _sqc2(auVar14);
    fStack_68 = auVar14._8_4_;
    uStack_64 = auVar14._12_4_;
    uStack_c0 = auVar14._0_4_;
    uStack_bc = auVar14._4_4_;
    uStack_b8 = fStack_68;
    uStack_b4 = uStack_64;
    auVar12 = _lqc2(auVar11);
    auVar14 = _lqc2(auVar14);
    auVar14 = _vsub(auVar12,auVar14);
    auVar14 = _sqc2(auVar14);
    auVar14 = _lqc2(auVar14);
    auVar12 = _lqc2(auVar10);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _vmul(auVar14,auVar12);
    _vaddabc(auVar14,auVar14);
    _vmaddabc(auVar15,auVar14);
    auVar14 = _vmaddbc(auVar15,auVar14);
    auVar14 = _qmfc2(auVar14._0_4_);
    if (auVar14._0_4_ < 0.0) {
      auVar12 = _lqc2(auStack_f0);
      auVar15 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
      auVar12 = _vsub(auVar12,auVar15);
      auVar12 = _sqc2(auVar12);
      auStack_a0._0_4_ = auVar12._0_4_;
      auStack_a0._4_4_ = auVar12._4_4_;
      fStack_98 = auVar12._8_4_;
      uStack_94 = auVar12._12_4_;
      fStack_b0 = (float)auStack_a0._0_4_;
      fStack_ac = (float)auStack_a0._4_4_;
      fStack_a8 = fStack_98;
      uStack_a4 = uStack_94;
      auVar15 = _lqc2(auStack_f0);
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x60));
      auVar15 = _vsub(auVar15,auVar13);
      auVar15 = _sqc2(auVar15);
      auVar12 = _lqc2(auVar12);
      auVar13 = _lqc2(auVar10);
      _vopmula(auVar12,auVar13);
      auVar12 = _vopmsub(auVar13,auVar12);
      auVar12 = _vsub(auVar12,auVar12);
      auVar12 = _sqc2(auVar12);
      auStack_70._0_4_ = auVar12._0_4_;
      auStack_70._4_4_ = auVar12._4_4_;
      fStack_68 = auVar12._8_4_;
      fVar6 = *(float *)(param_1 + 0x7c) * (float)auStack_70._0_4_ +
              *(float *)(param_1 + 0x88) * (float)auStack_70._4_4_ +
              *(float *)(param_1 + 0x94) * fStack_68;
      fVar5 = *(float *)(param_1 + 0x80) * (float)auStack_70._0_4_ +
              *(float *)(param_1 + 0x8c) * (float)auStack_70._4_4_ +
              *(float *)(param_1 + 0x98) * fStack_68;
      fVar7 = *(float *)(param_1 + 0x84) * (float)auStack_70._0_4_ +
              *(float *)(param_1 + 0x90) * (float)auStack_70._4_4_ +
              *(float *)(param_1 + 0x9c) * fStack_68;
      fVar9 = fVar5 * (float)auStack_a0._0_4_;
      fVar8 = fVar6 * (float)auStack_a0._4_4_;
      fVar4 = fVar7 * (float)auStack_a0._0_4_;
      fVar6 = fVar6 * fStack_98;
      fVar7 = fVar7 * (float)auStack_a0._4_4_;
      fVar5 = fVar5 * fStack_98;
      auVar12 = _lqc2(auVar15);
      auVar13 = _lqc2(auVar10);
      _vopmula(auVar12,auVar13);
      auVar12 = _vopmsub(auVar13,auVar12);
      auVar12 = _vsub(auVar12,auVar12);
      _auStack_70 = _sqc2(auVar12);
      uStack_54 = auStack_70._12_4_;
      fVar1 = auStack_70._0_4_;
      fStack_60 = *(float *)(iVar3 + 0x3c) * fVar1 +
                  *(float *)(iVar3 + 0x48) * (float)auStack_70._4_4_ +
                  *(float *)(iVar3 + 0x54) * fStack_68;
      fStack_5c = *(float *)(iVar3 + 0x40) * fVar1 +
                  *(float *)(iVar3 + 0x4c) * (float)auStack_70._4_4_ +
                  *(float *)(iVar3 + 0x58) * fStack_68;
      fStack_58 = *(float *)(iVar3 + 0x44) * fVar1 +
                  *(float *)(iVar3 + 0x50) * (float)auStack_70._4_4_ +
                  *(float *)(iVar3 + 0x5c) * fStack_68;
      auStack_a0._0_4_ = auVar15._0_4_;
      auStack_a0._4_4_ = auVar15._4_4_;
      fStack_98 = auVar15._8_4_;
      auVar12 = _lqc2(auVar10);
      auVar10 = _qmtc2((auVar14._0_4_ * -1.5) /
                       (*(float *)(param_1 + 0x78) + *(float *)(iVar3 + 0x38) +
                        fStack_e0 * (fVar5 - fVar7) + fStack_dc * (fVar4 - fVar6) +
                        (float)auStack_d0._8_4_ * (fVar8 - fVar9) +
                       fStack_e0 * (fStack_5c * fStack_98 - fStack_58 * (float)auStack_a0._4_4_) +
                       fStack_dc * (fStack_58 * (float)auStack_a0._0_4_ - fStack_60 * fStack_98) +
                       (float)auStack_d0._8_4_ *
                       (fStack_60 * (float)auStack_a0._4_4_ - fStack_5c * (float)auStack_a0._0_4_)))
      ;
      auVar10 = _vmulbc(auVar12,auVar10);
      auStack_90 = _sqc2(auVar10);
      _auStack_d0 = auVar11;
      _auStack_a0 = auVar15;
      auStack_80 = auStack_90;
      FUN_00136610(param_1 + 0x70,&fStack_b0,auStack_90);
      FUN_001110c0(0xbf800000,auStack_80,auStack_90);
      FUN_00136610(iVar3 + 0x30,auStack_a0,auStack_80);
      FUN_001261f8(param_2,0);
    }
  }
  return;
}

