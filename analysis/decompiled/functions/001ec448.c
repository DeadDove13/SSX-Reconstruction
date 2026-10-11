/* Ghidra pseudocode. PS2 address: 001ec448. Not validated source. */

undefined8 FUN_001ec448(undefined8 param_1,int param_2,int param_3,int param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [12];
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pauVar2 = (undefined1 (*) [12])(param_3 * 0x10 + *(int *)(param_2 + 0x28));
  pauVar1 = (undefined1 (*) [16])(*(int *)pauVar2[1] * 0x40 + param_4);
  auVar4 = _lqc2(*pauVar1);
  auVar5 = _lqc2(pauVar1[1]);
  auVar6 = _lqc2(pauVar1[2]);
  auVar7 = _lqc2(pauVar1[3]);
  auVar8._12_4_ = 0x3f800000;
  auVar8._0_12_ = *pauVar2;
  auVar8 = _lqc2(auVar8);
  _vmulabc(auVar4,auVar8);
  _vmaddabc(auVar5,auVar8);
  _vmaddabc(auVar6,auVar8);
  auVar8 = _vmaddbc(auVar7,auVar8);
  auVar8 = _sqc2(auVar8);
  uStack_10 = auVar8._0_4_;
  uStack_c = auVar8._4_4_;
  uStack_8 = auVar8._8_4_;
  uStack_4 = auVar8._12_4_;
  puVar3 = (undefined4 *)param_1;
  *puVar3 = uStack_10;
  puVar3[1] = uStack_c;
  puVar3[2] = uStack_8;
  puVar3[3] = uStack_4;
  return param_1;
}

