/* Ghidra pseudocode. PS2 address: 002457c8. Not validated source. */

void FUN_002457c8(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar5 = _lqc2(param_2[3]);
  auVar6 = _vmove(auVar5);
  auVar5 = _vsub(auVar5,auVar5);
  auVar8 = _vmove(auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  auVar1 = _pextlw(SUB168(param_2[1],0),SUB168(*param_2,0));
  auVar2 = _pextuw(param_2[1],*param_2);
  auVar3 = _pextlw(auVar5._0_8_,SUB168(param_2[2],0));
  auVar4 = _pextuw(auVar5,param_2[2]);
  auVar5 = _pcpyld(auVar3,auVar1);
  auVar1 = _pcpyud(auVar1,auVar3);
  auVar2 = _pcpyld(auVar4,auVar2);
  auVar3 = _qmtc2(auVar5._0_4_);
  auVar4 = _qmtc2(auVar1._0_4_);
  auVar7 = _qmtc2(auVar2._0_4_);
  _vmulabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar3 = _vmaddbc(auVar7,auVar6);
  auVar3 = _vsub(auVar8,auVar3);
  *param_1 = auVar5._0_4_;
  param_1[1] = auVar5._4_4_;
  param_1[2] = auVar5._8_4_;
  param_1[3] = auVar5._12_4_;
  param_1[4] = auVar1._0_4_;
  param_1[5] = auVar1._4_4_;
  param_1[6] = auVar1._8_4_;
  param_1[7] = auVar1._12_4_;
  param_1[8] = auVar2._0_4_;
  param_1[9] = auVar2._4_4_;
  param_1[10] = auVar2._8_4_;
  param_1[0xb] = auVar2._12_4_;
  auVar5 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar5;
  return;
}

