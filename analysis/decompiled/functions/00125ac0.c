/* Ghidra pseudocode. PS2 address: 00125ac0. Not validated source. */

void FUN_00125ac0(int param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  FUN_0012f0d0(param_1 + 0x30);
  FUN_0020e810(param_1 + 0x150,param_2);
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2a0));
  auVar2 = _lqc2(*(undefined1 (*) [16])param_2);
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x2a0) = auVar1;
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2b0));
  auVar2 = _lqc2(*(undefined1 (*) [16])param_2);
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x2b0) = auVar1;
  FUN_001324e0(*(undefined4 *)(DAT_002859e4 + 0x28),param_1 + 0x2c0);
  return;
}

