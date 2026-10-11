/* Ghidra pseudocode. PS2 address: 00220778. Not validated source. */

void FUN_00220778(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar1 = _vmaddbc(auVar4,auVar5);
  auVar1 = _sqc2(auVar1);
  uStack_10 = auVar1._0_4_;
  uStack_c = auVar1._4_4_;
  uStack_8 = auVar1._8_4_;
  uStack_4 = auVar1._12_4_;
  *(undefined4 *)(param_1 + 0x50) = uStack_10;
  *(undefined4 *)(param_1 + 0x54) = uStack_c;
  *(undefined4 *)(param_1 + 0x58) = uStack_8;
  *(undefined4 *)(param_1 + 0x5c) = uStack_4;
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar1 = _vmaddbc(auVar4,auVar5);
  auVar1 = _sqc2(auVar1);
  uStack_10 = auVar1._0_4_;
  uStack_c = auVar1._4_4_;
  uStack_8 = auVar1._8_4_;
  uStack_4 = auVar1._12_4_;
  *(undefined4 *)(param_1 + 0x60) = uStack_10;
  *(undefined4 *)(param_1 + 100) = uStack_c;
  *(undefined4 *)(param_1 + 0x68) = uStack_8;
  *(undefined4 *)(param_1 + 0x6c) = uStack_4;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

