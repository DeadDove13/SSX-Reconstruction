/* Ghidra pseudocode. PS2 address: 0020e810. Not validated source. */

void FUN_0020e810(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  FUN_0020dcf8(*(int *)(param_1 + 0xa0) != 0);
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  auVar2 = _lqc2(*param_2);
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar1;
  return;
}

