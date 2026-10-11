/* Ghidra pseudocode. PS2 address: 00223e60. Not validated source. */

undefined8
FUN_00223e60(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 (*param_5) [16],undefined8 param_6,undefined4 *param_7,float *param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  uStack_d0 = *(undefined4 *)*param_5;
  uStack_cc = *(undefined4 *)(*param_5 + 4);
  uStack_c8 = *(undefined4 *)(*param_5 + 8);
  uStack_c4 = *(undefined4 *)(*param_5 + 0xc);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
  auVar7 = _lqc2(*(undefined1 (*) [16])param_2);
  auVar6 = _vsub(auVar6,auVar7);
  auStack_b0 = _sqc2(auVar6);
  uStack_c0 = auStack_b0._0_4_;
  uStack_bc = auStack_b0._4_4_;
  uStack_b8 = auStack_b0._8_4_;
  uStack_b4 = auStack_b0._12_4_;
  auVar6 = _lqc2(*param_5);
  auVar7 = _lqc2(auStack_b0);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar6,auVar7);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar8,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar5 = auVar6._0_4_;
  uVar3 = 0;
  if (ABS(fVar5) <= *(float *)(param_1 + 0x60)) {
    if (fVar5 < 0.0) {
      fVar5 = -fVar5;
      FUN_001110c0(0xbf800000,&uStack_c0,&uStack_d0);
      uStack_d0 = uStack_c0;
      uStack_cc = uStack_bc;
      uStack_c8 = uStack_b8;
      uStack_c4 = uStack_b4;
    }
    uVar1 = DAT_002c3f74;
    auVar6._4_4_ = uStack_cc;
    auVar6._0_4_ = uStack_d0;
    auVar6._8_4_ = uStack_c8;
    auVar6._12_4_ = uStack_c4;
    auVar7 = _lqc2(auVar6);
    auVar6 = _qmtc2(fVar5);
    auVar6 = _vmulbc(auVar7,auVar6);
    auStack_b0 = _sqc2(auVar6);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
    auVar7 = _lqc2(auStack_b0);
    auVar6 = _vsub(auVar6,auVar7);
    auStack_a0 = _sqc2(auVar6);
    uStack_c0 = auStack_a0._0_4_;
    uStack_bc = auStack_a0._4_4_;
    uStack_b8 = auStack_a0._8_4_;
    uStack_b4 = auStack_a0._12_4_;
    puVar4 = (undefined4 *)param_6;
    *puVar4 = auStack_a0._0_4_;
    puVar4[1] = auStack_a0._4_4_;
    puVar4[2] = auStack_a0._8_4_;
    puVar4[3] = auStack_a0._12_4_;
    lVar2 = FUN_002100f0(uVar1,param_2,param_3,param_4,param_6);
    uVar3 = 0;
    if (lVar2 != 0) {
      *param_7 = uStack_d0;
      param_7[1] = uStack_cc;
      param_7[2] = uStack_c8;
      param_7[3] = uStack_c4;
      uVar3 = 1;
      *param_8 = *(float *)(param_1 + 0x60) - fVar5;
    }
  }
  return uVar3;
}

