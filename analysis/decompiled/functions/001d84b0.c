/* Ghidra pseudocode. PS2 address: 001d84b0. Not validated source. */

void FUN_001d84b0(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar5 = _vmaddbc(auVar4,auVar5);
  _vmulabc(auVar1,auVar6);
  _vmaddabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  auVar6 = _vmaddbc(auVar4,auVar6);
  _vmulabc(auVar1,auVar7);
  _vmaddabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  auVar7 = _vmaddbc(auVar4,auVar7);
  _vmulabc(auVar1,auVar8);
  _vmaddabc(auVar2,auVar8);
  _vmaddabc(auVar3,auVar8);
  auVar4 = _vmaddbc(auVar4,auVar8);
  auVar1 = _sqc2(auVar5);
  auVar2 = _sqc2(auVar6);
  auVar3 = _sqc2(auVar7);
  auVar4 = _sqc2(auVar4);
  *(long *)(param_1 + 0x30) = auVar1._0_8_;
  *(long *)(param_1 + 0x68) = auVar4._8_8_;
  *(long *)(param_1 + 0x38) = auVar1._8_8_;
  *(long *)(param_1 + 0x40) = auVar2._0_8_;
  *(long *)(param_1 + 0x48) = auVar2._8_8_;
  *(long *)(param_1 + 0x50) = auVar3._0_8_;
  *(long *)(param_1 + 0x58) = auVar3._8_8_;
  *(long *)(param_1 + 0x60) = auVar4._0_8_;
  return;
}

