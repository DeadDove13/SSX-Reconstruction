/* Ghidra pseudocode. PS2 address: 001f8d30. Not validated source. */

bool FUN_001f8d30(undefined8 param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  auVar4 = _lqc2(*(undefined1 (*) [16])(DAT_002859e4 + 0xb0));
  auVar5 = _lqc2(*param_2);
  auVar4 = _vsub(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  fStack_20 = auVar4._0_4_;
  fVar1 = fStack_20;
  fStack_1c = auVar4._4_4_;
  fVar2 = fStack_1c;
  fStack_18 = auVar4._8_4_;
  fVar3 = fStack_18;
  auVar4 = _lqc2(*(undefined1 (*) [16])(DAT_002859e4 + 0x130));
  auVar5 = _lqc2(*param_2);
  auVar4 = _vsub(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  fStack_20 = auVar4._0_4_;
  fStack_1c = auVar4._4_4_;
  fStack_18 = auVar4._8_4_;
  return fStack_20 * fStack_20 + fStack_1c * fStack_1c + fStack_18 * fStack_18 <=
         fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
}

