/* Ghidra pseudocode. PS2 address: 0010ee48. Not validated source. */

undefined8
FUN_0010ee48(float param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
            undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  piVar4 = (int *)param_2;
  fVar6 = ((float)piVar4[0x50] - (float)param_4[1]) * DAT_002c12b0 + 0.5;
  fVar9 = (float)(int)fVar6;
  if (fVar6 < fVar9) {
    fVar9 = fVar9 - 1.0;
  }
  fVar6 = ABS(param_1);
  if (param_1 < 0.0) {
    fVar7 = -500.0;
    bVar1 = -500.0 < param_1;
  }
  else {
    fVar7 = 500.0;
    bVar1 = param_1 < 500.0;
  }
  if (bVar1) {
    fVar7 = param_1;
  }
  pauVar5 = (undefined1 (*) [16])param_5;
  auVar11 = _lqc2(*pauVar5);
  auVar12 = _lqc2(*(undefined1 (*) [16])(piVar4 + 0x88));
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar11,auVar12);
  _vaddabc(auVar11,auVar11);
  _vmaddabc(auVar13,auVar11);
  auVar11 = _vmaddbc(auVar13,auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  fVar10 = auVar11._0_4_ * fVar7;
  if (1000.0 < fVar6) {
    iVar2 = piVar4[0xd3];
    if (((iVar2 == 2) &&
        (ABS(((float)piVar4[0x50] - (float)param_4[1]) - fVar9 * DAT_002c12b4) < DAT_002c12b8)) &&
       (0.0 < fVar10)) {
      piVar4[0x56] = 0x3f800000;
      FUN_00112008(param_2);
      FUN_0010b340(param_2,1);
      FUN_0010b330(param_2,0xd);
      return 0;
    }
  }
  else {
    iVar2 = piVar4[0xd3];
  }
  if (iVar2 == 1) {
    auVar12 = _lqc2(*pauVar5);
    auVar11 = _qmtc2(fVar7);
    auVar11 = _vmulbc(auVar12,auVar11);
    auStack_c0 = _sqc2(auVar11);
    uStack_d0 = auStack_c0._0_4_;
    uStack_cc = auStack_c0._4_4_;
    uStack_c8 = auStack_c0._8_4_;
    uStack_c4 = auStack_c0._12_4_;
  }
  else {
    auVar11 = _lqc2(*pauVar5);
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar4 + 0x88));
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _vmul(auVar11,auVar12);
    _vaddabc(auVar11,auVar11);
    _vmaddabc(auVar13,auVar11);
    auVar11 = _vmaddbc(auVar13,auVar11);
    auVar11 = _qmfc2(auVar11._0_4_);
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar4 + 0x88));
    auVar11 = _qmtc2(auVar11._0_4_);
    auVar11 = _vmulbc(auVar12,auVar11);
    auVar11 = _sqc2(auVar11);
    auStack_90._8_4_ = auVar11._8_4_;
    auStack_90._12_4_ = auVar11._12_4_;
    fStack_a0 = auVar11._0_4_;
    uStack_9c = auVar11._4_4_;
    uStack_98 = auStack_90._8_4_;
    uStack_94 = auStack_90._12_4_;
    auVar12 = _lqc2(*pauVar5);
    auVar11 = _lqc2(auVar11);
    auVar11 = _vsub(auVar12,auVar11);
    auVar11 = _sqc2(auVar11);
    auStack_90._8_4_ = auVar11._8_4_;
    auStack_90._12_4_ = auVar11._12_4_;
    uStack_b0 = auVar11._0_4_;
    uStack_ac = auVar11._4_4_;
    uStack_a8 = auStack_90._8_4_;
    uStack_a4 = auStack_90._12_4_;
    auVar11 = _lqc2(auVar11);
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _vmul(auVar11,auVar11);
    _vaddabc(auVar12,auVar12);
    _vmaddabc(auVar13,auVar12);
    auVar12 = _vmaddbc(auVar13,auVar12);
    _vrsqrt(in_vf0,auVar12);
    uVar8 = _vwaitq();
    auVar11 = _vmulq(auVar11,uVar8);
    auStack_c0 = _sqc2(auVar11);
    auVar12 = _lqc2(auStack_c0);
    auVar11 = _qmtc2(fVar7);
    auVar11 = _vmulbc(auVar12,auVar11);
    auStack_90 = _sqc2(auVar11);
    uStack_d0 = auStack_90._0_4_;
    uStack_cc = auStack_90._4_4_;
    uStack_c8 = auStack_90._8_4_;
    uStack_c4 = auStack_90._12_4_;
  }
  auVar12 = _lqc2(*(undefined1 (*) [16])(piVar4 + 0x34));
  auVar11._4_4_ = uStack_cc;
  auVar11._0_4_ = uStack_d0;
  auVar11._8_4_ = uStack_c8;
  auVar11._12_4_ = uStack_c4;
  auVar11 = _lqc2(auVar11);
  auVar11 = _vadd(auVar12,auVar11);
  auVar11 = _sqc2(auVar11);
  *(undefined1 (*) [16])(piVar4 + 0x34) = auVar11;
  fVar9 = DAT_002c12bc;
  auVar11 = _lqc2(*(undefined1 (*) [16])(piVar4 + 0x34));
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar11,auVar11);
  _vaddabc(auVar11,auVar11);
  _vmaddabc(auVar12,auVar11);
  auVar11 = _vmaddbc(auVar12,auVar11);
  _vsqrt(auVar11);
  _vwaitq();
  uVar3 = _cfc2(in_vc6);
  piVar4[0x38] = (int)uVar3;
  (**(code **)(*piVar4 + 0x6c))(fVar7 * fVar9,(int)piVar4 + (int)*(short *)(*piVar4 + 0x68));
  uVar3 = 0;
  if (1 < piVar4[0xd3] - 5U) {
    if ((piVar4[0xd3] == 1) && (0.0 < fVar10)) {
      fVar6 = 0.0;
    }
    fVar9 = DAT_002c12c0;
    if (DAT_0027ba88 == 0) {
      fVar9 = DAT_002c12c4;
    }
    if (fVar6 <= fVar9) {
      if (piVar4[0xd3] != 3) {
        if (DAT_002c12c8 < fVar6) {
          FUN_0010f278(param_2,param_5,0);
          FUN_001f2550(fVar7 * DAT_002c12cc,DAT_002c56e8,param_2);
        }
        return 0;
      }
      uVar8 = *param_4;
    }
    else {
      uVar8 = *param_4;
    }
    auVar12 = _lqc2(*pauVar5);
    auVar11 = _qmtc2(uVar8);
    auVar11 = _vmulbc(auVar12,auVar11);
    auVar11 = _sqc2(auVar11);
    auVar12 = _lqc2(*(undefined1 (*) [16])(piVar4 + 0x30));
    auVar11 = _lqc2(auVar11);
    auVar11 = _vadd(auVar12,auVar11);
    auStack_70 = _sqc2(auVar11);
    uStack_d0 = auStack_70._0_4_;
    auStack_90._4_4_ = auStack_70._4_4_;
    auStack_90._8_4_ = auStack_70._8_4_;
    uStack_cc = auStack_90._4_4_;
    uStack_c8 = auStack_90._8_4_;
    uStack_c4 = auStack_70._12_4_;
    auVar11 = _lqc2(*(undefined1 (*) [16])(piVar4 + 0x34));
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _vmul(auVar11,auVar11);
    _vaddabc(auVar12,auVar12);
    _vmaddabc(auVar13,auVar12);
    auVar12 = _vmaddbc(auVar13,auVar12);
    _vrsqrt(in_vf0,auVar12);
    uVar8 = _vwaitq();
    auVar11 = _vmulq(auVar11,uVar8);
    auStack_c0 = _sqc2(auVar11);
    uStack_b0 = *(undefined4 *)*pauVar5;
    uStack_ac = *(undefined4 *)(*pauVar5 + 4);
    uStack_a8 = *(undefined4 *)(*pauVar5 + 8);
    uStack_a4 = *(undefined4 *)(*pauVar5 + 0xc);
    fStack_a0 = fVar7;
    auStack_90 = auStack_c0;
    auStack_80 = auStack_c0;
    FUN_0010a088(param_2,&uStack_d0);
    uVar3 = 1;
  }
  return uVar3;
}

