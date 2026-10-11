/* Ghidra pseudocode. PS2 address: 00245a48. Not validated source. */

void FUN_00245a48(float param_1)

{
  long extraout_a0;
  long lVar1;
  long extraout_a1;
  long lVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 extraout_vf4 [16];
  undefined1 auVar4 [16];
  undefined1 extraout_vf5 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 0.0) {
    param_1 = param_1 + 1.5707964;
  }
  else {
    param_1 = 1.5707964 - param_1;
  }
  _qmtc2(param_1);
  FUN_002459d0();
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar7 = _vmove(in_vf0);
  auVar8 = _vsub(auVar7,auVar7);
  auVar6 = _vmr32(auVar8);
  auVar7 = _vsub(extraout_vf4,extraout_vf4);
  _vaddbc(extraout_vf5,auVar7);
  auVar5 = _vaddbc(extraout_vf5,auVar7);
  _vsubbc(extraout_vf5,auVar7);
  auVar7 = _vaddbc(extraout_vf5,auVar7);
  iVar3 = 4;
  lVar1 = extraout_a0;
  lVar2 = extraout_a1;
  do {
    auVar4 = _lqc2(*(undefined1 (*) [16])lVar2);
    _vmulabc(auVar5,auVar4);
    _vmaddabc(auVar7,auVar4);
    _vmaddabc(auVar6,auVar4);
    auVar4 = _vmaddbc(auVar8,auVar4);
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])lVar1 = auVar4;
    iVar3 = iVar3 + -1;
    lVar2 = (long)(int)((undefined1 (*) [16])lVar2 + 1);
    lVar1 = (long)(int)((undefined1 (*) [16])lVar1 + 1);
  } while (iVar3 != 0);
  return;
}

