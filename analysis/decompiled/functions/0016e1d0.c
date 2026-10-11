/* Ghidra pseudocode. PS2 address: 0016e1d0. Not validated source. */

void FUN_0016e1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar1 = FUN_0016dd88();
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
  auVar6 = _lqc2(ZEXT816(0x3f800000));
  auVar7 = _lqc2(ZEXT816(0x3f80000000000000));
  auVar8._12_4_ = 0;
  auVar8._0_12_ = ZEXT412(0x3f800000) << 0x40;
  auVar8 = _lqc2(auVar8);
  auVar9._4_4_ = param_2;
  auVar9._0_4_ = param_3;
  auVar9._8_4_ = param_1;
  auVar9._12_4_ = 0x3f800000;
  auVar9 = _lqc2(auVar9);
  _vmulabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar6 = _vmaddbc(auVar5,auVar6);
  _vmulabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  _vmaddabc(auVar4,auVar7);
  auVar7 = _vmaddbc(auVar5,auVar7);
  _vmulabc(auVar2,auVar8);
  _vmaddabc(auVar3,auVar8);
  _vmaddabc(auVar4,auVar8);
  auVar10 = _vmaddbc(auVar5,auVar8);
  _vmulabc(auVar2,auVar9);
  _vmaddabc(auVar3,auVar9);
  _vmaddabc(auVar4,auVar9);
  auVar9 = _vmaddbc(auVar5,auVar9);
  auVar8 = _sqc2(auVar6);
  *(undefined1 (*) [16])(iVar1 + 0x50) = auVar8;
  auVar8 = _sqc2(auVar7);
  *(undefined1 (*) [16])(iVar1 + 0x60) = auVar8;
  auVar8 = _sqc2(auVar10);
  *(undefined1 (*) [16])(iVar1 + 0x70) = auVar8;
  auVar8 = _sqc2(auVar9);
  *(undefined1 (*) [16])(iVar1 + 0x80) = auVar8;
  return;
}

