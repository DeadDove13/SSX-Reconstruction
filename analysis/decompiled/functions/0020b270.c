/* Ghidra pseudocode. PS2 address: 0020b270. Not validated source. */

void FUN_0020b270(int param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = 0;
  auVar3 = _lqc2(*param_2);
  auVar4 = _lqc2(param_2[1]);
  auVar5 = _lqc2(param_2[2]);
  auVar6 = _lqc2(param_2[3]);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  _vmulabc(auVar3,auVar7);
  _vmaddabc(auVar4,auVar7);
  _vmaddabc(auVar5,auVar7);
  auVar3 = _vmaddbc(auVar6,auVar7);
  auVar3 = _sqc2(auVar3);
  uStack_10 = auVar3._0_4_;
  uStack_c = auVar3._4_4_;
  uStack_8 = auVar3._8_4_;
  uStack_4 = auVar3._12_4_;
  *(undefined4 *)(param_1 + 0x10) = uStack_10;
  *(undefined4 *)(param_1 + 0x14) = uStack_c;
  *(undefined4 *)(param_1 + 0x18) = uStack_8;
  *(undefined4 *)(param_1 + 0x1c) = uStack_4;
  if (0 < *(int *)(param_1 + 0x28)) {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x30);
    do {
      auVar3 = _lqc2(*param_2);
      auVar4 = _lqc2(param_2[1]);
      auVar5 = _lqc2(param_2[2]);
      auVar6 = _lqc2(param_2[3]);
      auVar7 = _lqc2(*pauVar1);
      _vmulabc(auVar3,auVar7);
      _vmaddabc(auVar4,auVar7);
      _vmaddabc(auVar5,auVar7);
      auVar3 = _vmaddbc(auVar6,auVar7);
      auVar3 = _sqc2(auVar3);
      iVar2 = iVar2 + 1;
      uStack_10 = auVar3._0_4_;
      uStack_c = auVar3._4_4_;
      uStack_8 = auVar3._8_4_;
      uStack_4 = auVar3._12_4_;
      *(undefined4 *)*pauVar1 = uStack_10;
      *(undefined4 *)(*pauVar1 + 4) = uStack_c;
      *(undefined4 *)(*pauVar1 + 8) = uStack_8;
      *(undefined4 *)(*pauVar1 + 0xc) = uStack_4;
      pauVar1 = pauVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  return;
}

