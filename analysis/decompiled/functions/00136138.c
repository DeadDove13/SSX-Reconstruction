/* Ghidra pseudocode. PS2 address: 00136138. Not validated source. */

void FUN_00136138(float param_1,float param_2,undefined8 param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16])

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [8];
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [8];
  float fStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  
  auVar4 = _lqc2(*param_4);
  iVar3 = (int)param_3;
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x30));
  auVar4 = _vsub(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  auStack_110._0_4_ = auVar4._0_4_;
  auStack_110._4_4_ = auVar4._4_4_;
  fStack_108 = auVar4._8_4_;
  uStack_104 = auVar4._12_4_;
  fStack_120 = (float)auStack_110._0_4_;
  fStack_11c = (float)auStack_110._4_4_;
  fStack_118 = fStack_108;
  uStack_114 = uStack_104;
  auVar5 = _lqc2(*param_4);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x30));
  auVar5 = _vsub(auVar5,auVar6);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
  auVar5 = _lqc2(auVar5);
  _vopmula(auVar6,auVar5);
  auVar5 = _vopmsub(auVar5,auVar6);
  auVar5 = _vsub(auVar5,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
  auVar5 = _lqc2(auVar5);
  auVar5 = _vadd(auVar6,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(auVar5);
  auVar7 = _lqc2(*param_5);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar6,auVar7);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar8,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar1 = auVar6._0_4_;
  if (param_2 != 0.0) {
    auVar7 = _lqc2(*param_5);
    auVar6 = _qmtc2(fVar1);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    auVar7 = _lqc2(auVar5);
    auVar6 = _lqc2(auVar6);
    auVar6 = _vsub(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    auStack_e0._0_4_ = auVar6._0_4_;
    auStack_e0._4_4_ = auVar6._4_4_;
    fStack_d8 = auVar6._8_4_;
    uStack_d4 = auVar6._12_4_;
    uStack_100 = auStack_e0._0_4_;
    uStack_fc = auStack_e0._4_4_;
    uStack_f8 = fStack_d8;
    uStack_f4 = uStack_d4;
    auVar7 = _lqc2(auVar6);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _vmul(auVar7,auVar7);
    _vaddabc(auVar7,auVar7);
    _vmaddabc(auVar8,auVar7);
    auVar7 = _vmaddbc(auVar8,auVar7);
    _vsqrt(auVar7);
    _vwaitq();
    uVar2 = _cfc2(in_vc6);
    auVar7 = _qmtc2((float)uVar2);
    _vdiv(in_vf0,0,auVar7,0);
    auVar6 = _lqc2(auVar6);
    uVar9 = _vwaitq();
    auVar6 = _vmulq(auVar6,uVar9);
    _auStack_f0 = _sqc2(auVar6);
    auVar4 = _lqc2(auVar4);
    auVar6 = _lqc2(_auStack_f0);
    _vopmula(auVar4,auVar6);
    auVar4 = _vopmsub(auVar6,auVar4);
    auVar4 = _vsub(auVar4,auVar4);
    auVar4 = _sqc2(auVar4);
    fStack_a8 = auVar4._8_4_;
    uStack_a4 = auVar4._12_4_;
    fStack_c0 = auVar4._0_4_;
    fStack_bc = auVar4._4_4_;
    fStack_b8 = fStack_a8;
    uStack_b4 = uStack_a4;
    fStack_b0 = *(float *)(iVar3 + 0xc) * fStack_c0 + *(float *)(iVar3 + 0x18) * fStack_bc +
                *(float *)(iVar3 + 0x24) * fStack_a8;
    fStack_ac = *(float *)(iVar3 + 0x10) * fStack_c0 + *(float *)(iVar3 + 0x1c) * fStack_bc +
                *(float *)(iVar3 + 0x28) * fStack_a8;
    fStack_a8 = *(float *)(iVar3 + 0x14) * fStack_c0 + *(float *)(iVar3 + 0x20) * fStack_bc +
                *(float *)(iVar3 + 0x2c) * fStack_a8;
    auVar6 = _lqc2(_auStack_f0);
    auVar4 = _qmtc2((-param_2 * (float)uVar2) /
                    (*(float *)(iVar3 + 8) +
                    (float)auStack_f0._0_4_ *
                    (fStack_ac * fStack_108 - fStack_a8 * (float)auStack_110._4_4_) +
                    (float)auStack_f0._4_4_ *
                    (fStack_a8 * (float)auStack_110._0_4_ - fStack_b0 * fStack_108) +
                    fStack_e8 *
                    (fStack_b0 * (float)auStack_110._4_4_ - fStack_ac * (float)auStack_110._0_4_)));
    auVar4 = _vmulbc(auVar6,auVar4);
    _auStack_e0 = _sqc2(auVar4);
    _auStack_110 = auVar5;
    _auStack_d0 = _auStack_e0;
    FUN_00136610(param_3,&fStack_120,auStack_e0);
    auVar4 = _lqc2(*param_4);
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x30));
    auVar4 = _vsub(auVar4,auVar5);
    auVar4 = _sqc2(auVar4);
    auStack_80._0_4_ = auVar4._0_4_;
    auStack_80._4_4_ = auVar4._4_4_;
    auStack_80._8_4_ = auVar4._8_4_;
    auStack_80._12_4_ = auVar4._12_4_;
    uStack_90 = auStack_80._0_4_;
    uStack_8c = auStack_80._4_4_;
    uStack_88 = auStack_80._8_4_;
    uStack_84 = auStack_80._12_4_;
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
    auVar4 = _lqc2(auVar4);
    _vopmula(auVar5,auVar4);
    auVar4 = _vopmsub(auVar4,auVar5);
    auVar4 = _vsub(auVar4,auVar4);
    auVar4 = _sqc2(auVar4);
    auStack_80._0_4_ = auVar4._0_4_;
    auStack_80._4_4_ = auVar4._4_4_;
    auStack_80._8_4_ = auVar4._8_4_;
    auStack_80._12_4_ = auVar4._12_4_;
    uStack_a0 = auStack_80._0_4_;
    uStack_9c = auStack_80._4_4_;
    uStack_98 = auStack_80._8_4_;
    uStack_94 = auStack_80._12_4_;
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
    auVar4 = _lqc2(auVar4);
    auVar4 = _vadd(auVar5,auVar4);
    auStack_80 = _sqc2(auVar4);
    auVar4 = _lqc2(auStack_80);
    auVar5 = _lqc2(*param_5);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar5);
    _vaddabc(auVar4,auVar4);
    _vmaddabc(auVar6,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    fVar1 = auVar4._0_4_;
    auVar5 = auStack_80;
    if (0.0 < fVar1) {
      return;
    }
  }
  _auStack_110 = auVar5;
  auVar4._4_4_ = fStack_11c;
  auVar4._0_4_ = fStack_120;
  auVar4._8_4_ = fStack_118;
  auVar4._12_4_ = uStack_114;
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2(*param_5);
  _vopmula(auVar4,auVar5);
  auVar4 = _vopmsub(auVar5,auVar4);
  auVar4 = _vsub(auVar4,auVar4);
  _auStack_e0 = _sqc2(auVar4);
  uStack_c4 = auStack_e0._12_4_;
  auStack_d0._0_4_ =
       *(float *)(iVar3 + 0xc) * (float)auStack_e0._0_4_ +
       *(float *)(iVar3 + 0x18) * (float)auStack_e0._4_4_ + *(float *)(iVar3 + 0x24) * fStack_d8;
  auStack_d0._4_4_ =
       *(float *)(iVar3 + 0x10) * (float)auStack_e0._0_4_ +
       *(float *)(iVar3 + 0x1c) * (float)auStack_e0._4_4_ + *(float *)(iVar3 + 0x28) * fStack_d8;
  fStack_c8 = *(float *)(iVar3 + 0x14) * (float)auStack_e0._0_4_ +
              *(float *)(iVar3 + 0x20) * (float)auStack_e0._4_4_ +
              *(float *)(iVar3 + 0x2c) * fStack_d8;
  auVar5 = _lqc2(*param_5);
  auVar4 = _qmtc2((-(param_1 + 1.0) * fVar1) /
                  (*(float *)(iVar3 + 8) +
                  *(float *)*param_5 *
                  ((float)auStack_d0._4_4_ * fStack_118 - fStack_c8 * fStack_11c) +
                  *(float *)(*param_5 + 4) *
                  (fStack_c8 * fStack_120 - (float)auStack_d0._0_4_ * fStack_118) +
                  *(float *)(*param_5 + 8) *
                  ((float)auStack_d0._0_4_ * fStack_11c - (float)auStack_d0._4_4_ * fStack_120)));
  auVar4 = _vmulbc(auVar5,auVar4);
  _auStack_f0 = _sqc2(auVar4);
  uStack_100 = auStack_f0._0_4_;
  uStack_fc = auStack_f0._4_4_;
  uStack_f8 = fStack_e8;
  uStack_f4 = uStack_e4;
  FUN_00136610(param_3,&fStack_120,&uStack_100);
  return;
}

