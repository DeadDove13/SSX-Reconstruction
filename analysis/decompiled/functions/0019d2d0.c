/* Ghidra pseudocode. PS2 address: 0019d2d0. Not validated source. */

void FUN_0019d2d0(int param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 100);
  auVar2 = _lqc2(*pauVar1);
  auVar3 = _lqc2(pauVar1[1]);
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  uStack_20 = auVar2._0_4_;
  uStack_1c = auVar2._4_4_;
  uStack_18 = auVar2._8_4_;
  uStack_14 = auVar2._12_4_;
  *(undefined4 *)pauVar1[2] = uStack_20;
  *(undefined4 *)(pauVar1[2] + 4) = uStack_1c;
  *(undefined4 *)(pauVar1[2] + 8) = uStack_18;
  *(undefined4 *)(pauVar1[2] + 0xc) = uStack_14;
  pauVar1 = *(undefined1 (**) [16])(param_1 + 100);
  auVar2 = _lqc2(*pauVar1);
  auVar3 = _lqc2(pauVar1[1]);
  auVar2 = _vadd(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  uStack_20 = auVar2._0_4_;
  uStack_1c = auVar2._4_4_;
  uStack_18 = auVar2._8_4_;
  uStack_14 = auVar2._12_4_;
  *(undefined4 *)pauVar1[3] = uStack_20;
  *(undefined4 *)(pauVar1[3] + 4) = uStack_1c;
  *(undefined4 *)(pauVar1[3] + 8) = uStack_18;
  *(undefined4 *)(pauVar1[3] + 0xc) = uStack_14;
  FUN_001324e0(*(undefined4 *)(DAT_002859e4 + 0x28),*(int *)(param_1 + 100) + 0x40);
  return;
}

