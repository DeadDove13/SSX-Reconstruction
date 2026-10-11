/* Ghidra pseudocode. PS2 address: 00202b28. Not validated source. */

int FUN_00202b28(int param_1)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x290));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xd0));
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _vmul(auVar2,auVar3);
  _vaddabc(auVar2,auVar2);
  _vmaddabc(auVar4,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  iVar1 = (int)auVar2._0_4_;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

