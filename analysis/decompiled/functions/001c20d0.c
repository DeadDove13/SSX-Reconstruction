/* Ghidra pseudocode. PS2 address: 001c20d0. Not validated source. */

void FUN_001c20d0(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x4a0));
  auVar1 = _qmtc2(DAT_002c35a4);
  auVar1 = _vmulbc(auVar2,auVar1);
  auVar1 = _sqc2(auVar1);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x490));
  auVar1 = _lqc2(auVar1);
  auVar1 = _vadd(auVar2,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x490) = auVar1;
  FUN_001c2030();
  return;
}

