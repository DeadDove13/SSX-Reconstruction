/* Ghidra pseudocode. PS2 address: 002458e8. Not validated source. */

void FUN_002458e8(undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _qmtc2(param_1);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

