/* Ghidra pseudocode. PS2 address: 00245700. Not validated source. */

void FUN_00245700(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  _vopmula(auVar1,auVar2);
  auVar1 = _vopmsub(auVar2,auVar1);
  auVar1 = _vsub(auVar1,auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

