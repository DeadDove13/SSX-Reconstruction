/* Ghidra pseudocode. PS2 address: 00218710. Not validated source. */

void FUN_00218710(float param_1,undefined1 (*param_2) [16],undefined4 *param_3,
                 undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_4;
  
  param_1 = param_1 - *(float *)(param_2[7] + 8);
  fVar1 = ((*(float *)param_2[4] * param_1 + *(float *)(param_2[4] + 4)) * param_1 +
          *(float *)(param_2[4] + 8)) * param_1 + *(float *)(param_2[4] + 0xc);
  fVar2 = fVar1 * fVar1;
  auVar3 = _lqc2(*param_2);
  auVar4 = _lqc2(param_2[1]);
  auVar5 = _lqc2(param_2[2]);
  auVar6 = _lqc2(param_2[3]);
  auVar7._4_4_ = fVar2;
  auVar7._0_4_ = fVar2 * fVar1;
  auVar7._8_4_ = fVar1;
  auVar7._12_4_ = 0x3f800000;
  auVar7 = _lqc2(auVar7);
  _vmulabc(auVar3,auVar7);
  _vmaddabc(auVar4,auVar7);
  _vmaddabc(auVar5,auVar7);
  auVar7 = _vmaddbc(auVar6,auVar7);
  auVar7 = _sqc2(auVar7);
  uStack_20 = auVar7._0_4_;
  uStack_1c = auVar7._4_4_;
  uStack_18 = auVar7._8_4_;
  uStack_14 = auVar7._12_4_;
  *param_3 = uStack_20;
  param_3[1] = uStack_1c;
  param_3[2] = uStack_18;
  param_3[3] = uStack_14;
  auVar7 = _lqc2(*param_2);
  auVar4 = _lqc2(param_2[1]);
  auVar5 = _lqc2(param_2[2]);
  auVar6 = _lqc2(param_2[3]);
  auVar3._4_4_ = fVar1 + fVar1;
  auVar3._0_4_ = fVar2 * 3.0;
  auVar3._8_4_ = 0x3f800000;
  auVar3._12_4_ = 0;
  auVar3 = _lqc2(auVar3);
  _vmulabc(auVar7,auVar3);
  _vmaddabc(auVar4,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar7 = _vmaddbc(auVar6,auVar3);
  auVar7 = _sqc2(auVar7);
  uStack_4 = auVar7._12_4_;
  uStack_20 = auVar7._0_4_;
  uStack_1c = auVar7._4_4_;
  uStack_18 = auVar7._8_4_;
  *(undefined4 *)*param_4 = uStack_20;
  *(undefined4 *)(*param_4 + 4) = uStack_1c;
  *(undefined4 *)(*param_4 + 8) = uStack_18;
  *(undefined4 *)(*param_4 + 0xc) = uStack_4;
  auVar7 = _lqc2(*param_4);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar7,auVar7);
  _vaddabc(auVar3,auVar3);
  _vmaddabc(auVar4,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  _vrsqrt(in_vf0,auVar3);
  uVar8 = _vwaitq();
  auVar7 = _vmulq(auVar7,uVar8);
  auVar7 = _sqc2(auVar7);
  uStack_4 = auVar7._12_4_;
  uStack_20 = auVar7._0_4_;
  uStack_1c = auVar7._4_4_;
  uStack_18 = auVar7._8_4_;
  *(undefined4 *)*param_4 = uStack_20;
  *(undefined4 *)(*param_4 + 4) = uStack_1c;
  *(undefined4 *)(*param_4 + 8) = uStack_18;
  *(undefined4 *)(*param_4 + 0xc) = uStack_4;
  return;
}

