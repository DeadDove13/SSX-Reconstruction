/* Ghidra pseudocode. PS2 address: 00245748. Not validated source. */

void FUN_00245748(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _vmul(auVar1,auVar1);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  _vsqrt(auVar2);
  uVar3 = _vwaitq();
  auVar2 = _vaddq(in_vf0,uVar3);
  _vdiv(in_vf0,0,auVar2,0);
  _vsub(in_vf0,in_vf0);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

