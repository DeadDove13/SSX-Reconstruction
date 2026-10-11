/* Ghidra pseudocode. PS2 address: 0020e788. Not validated source. */

void FUN_0020e788(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_0020dcf8(*(int *)(param_1 + 0xa0) != 0);
  auVar1._12_4_ = 0x3f800000;
  auVar1._0_12_ = *(undefined1 (*) [12])(*(int *)(param_1 + 0xa0) + 0x14);
  auVar1 = _lqc2(auVar1);
  auVar2 = _lqc2(*param_2);
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  uStack_40 = auVar1._0_4_;
  uStack_3c = auVar1._4_4_;
  uStack_38 = auVar1._8_4_;
  uStack_34 = auVar1._12_4_;
  *(undefined4 *)(param_1 + 0x90) = uStack_40;
  *(undefined4 *)(param_1 + 0x94) = uStack_3c;
  *(undefined4 *)(param_1 + 0x98) = uStack_38;
  *(undefined4 *)(param_1 + 0x9c) = uStack_34;
  return;
}

