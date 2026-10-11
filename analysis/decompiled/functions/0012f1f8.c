/* Ghidra pseudocode. PS2 address: 0012f1f8. Not validated source. */

undefined4 FUN_0012f1f8(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined4 *)(*param_2 + 0xc);
  auVar2 = _lqc2(*param_1);
  auVar3 = _lqc2(*param_2);
  auVar2 = _vadd(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *param_1 = auVar2;
  return uVar1;
}

