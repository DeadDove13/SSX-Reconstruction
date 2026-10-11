/* Ghidra pseudocode. PS2 address: 00220818. Not validated source. */

undefined8
FUN_00220818(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 (*param_5) [16],undefined4 *param_6,undefined4 *param_7,float *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
  auVar8 = _lqc2(*param_5);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vmul(auVar7,auVar8);
  _vaddabc(auVar7,auVar7);
  _vmaddabc(auVar9,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  if (DAT_002c3f4c <= ABS(auVar7._0_4_)) {
    auVar8 = _lqc2(*(undefined1 (*) [16])param_2);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
    auVar8 = _vsub(auVar8,auVar9);
    auVar8 = _sqc2(auVar8);
    auVar8 = _lqc2(auVar8);
    auVar9 = _lqc2(*param_5);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar8,auVar9);
    _vaddabc(auVar8,auVar8);
    _vmaddabc(auVar10,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    fVar6 = auVar8._0_4_ / auVar7._0_4_;
    *param_8 = fVar6;
    uVar4 = DAT_002c3f50;
    if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
      auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
      auVar7 = _qmtc2(fVar6);
      auVar7 = _vmulbc(auVar8,auVar7);
      auVar7 = _sqc2(auVar7);
      auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
      auVar7 = _lqc2(auVar7);
      auVar7 = _vadd(auVar8,auVar7);
      auVar7 = _sqc2(auVar7);
      uStack_18 = auVar7._8_4_;
      uStack_14 = auVar7._12_4_;
      *param_6 = auVar7._0_4_;
      param_6[1] = auVar7._4_4_;
      param_6[2] = uStack_18;
      param_6[3] = uStack_14;
      uVar1 = *(undefined4 *)(*param_5 + 4);
      uVar2 = *(undefined4 *)(*param_5 + 8);
      uVar3 = *(undefined4 *)(*param_5 + 0xc);
      *param_7 = *(undefined4 *)*param_5;
      param_7[1] = uVar1;
      param_7[2] = uVar2;
      param_7[3] = uVar3;
      uVar5 = FUN_002100f0(uVar4,param_2,param_3,param_4);
      return uVar5;
    }
  }
  return 0;
}

