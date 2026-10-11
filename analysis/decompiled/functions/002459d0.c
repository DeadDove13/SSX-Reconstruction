/* Ghidra pseudocode. PS2 address: 002459d0. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002459d0(void)

{
  long in_a3;
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_vf6 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  auVar2 = _lqc2(_DAT_002a5140);
  auVar3 = _vmr32(in_vf6);
  auVar1 = _vaddbc(in_vf0,auVar3);
  auVar3 = _vmul(auVar3,auVar3);
  auVar1 = _vmulbc(auVar1,in_vf0);
  auVar4 = _vmulbc(auVar2,auVar3);
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar4);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar4);
  auVar3 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar3);
  auVar1 = _vaddbc(auVar1,auVar3);
  auVar1 = _vaddbc(auVar2,auVar1);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vsubbc(in_vf0,auVar1);
  _vsqrt(auVar1);
  uVar5 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar5);
  if (in_a3 == 0) {
    _vaddbc(auVar2,auVar1);
  }
  else {
    _vsubbc(auVar2,auVar1);
  }
  return;
}

