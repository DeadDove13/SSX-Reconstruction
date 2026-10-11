/* Ghidra pseudocode. PS2 address: 001dc800. Not validated source. */

void FUN_001dc800(int param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  auVar2 = _lqc2(*param_2);
  auVar1 = _qmtc2(0x40000000);
  auVar1 = _vmulbc(auVar2,auVar1);
  auVar1 = _sqc2(auVar1);
  auVar1 = _lqc2(auVar1);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  uStack_10 = auVar1._0_4_;
  uStack_c = auVar1._4_4_;
  uStack_8 = auVar1._8_4_;
  uStack_4 = auVar1._12_4_;
  *(undefined4 *)(param_1 + 0xa0) = uStack_10;
  *(undefined4 *)(param_1 + 0xa4) = uStack_c;
  *(undefined4 *)(param_1 + 0xa8) = uStack_8;
  *(undefined4 *)(param_1 + 0xac) = uStack_4;
  auVar1 = _lqc2(*param_3);
  auVar2 = _lqc2(*param_2);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  uStack_20 = auVar1._0_4_;
  uStack_1c = auVar1._4_4_;
  uStack_18 = auVar1._8_4_;
  uStack_14 = auVar1._12_4_;
  *(undefined4 *)(param_1 + 0xb0) = uStack_20;
  *(undefined4 *)(param_1 + 0xb4) = uStack_1c;
  *(undefined4 *)(param_1 + 0xb8) = uStack_18;
  *(undefined4 *)(param_1 + 0xbc) = uStack_14;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  return;
}

