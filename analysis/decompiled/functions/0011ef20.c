/* Ghidra pseudocode. PS2 address: 0011ef20. Not validated source. */

float FUN_0011ef20(int *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  iVar1 = *param_1;
  auVar3 = _lqc2(*param_2);
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x120));
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar3 = _vmaddbc(auVar5,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x120));
  auVar3 = _qmtc2(auVar3._0_4_);
  auVar3 = _vmulbc(auVar4,auVar3);
  auVar3 = _sqc2(auVar3);
  auVar4 = _lqc2(*param_2);
  auVar3 = _lqc2(auVar3);
  auVar3 = _vsub(auVar4,auVar3);
  auVar3 = _sqc2(auVar3);
  auVar3 = _lqc2(auVar3);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vmul(auVar3,auVar3);
  _vaddabc(auVar4,auVar4);
  _vmaddabc(auVar5,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  _vrsqrt(in_vf0,auVar4);
  uVar6 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar6);
  auVar3 = _sqc2(auVar3);
  auVar3 = _lqc2(auVar3);
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x110));
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar3 = _vmaddbc(auVar5,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar2 = auVar3._0_4_;
  if ((float)param_1[0x227] != 1.0) {
    fVar2 = fVar2 * ((float)param_1[0x227] / DAT_002c194c);
  }
  return fVar2;
}

