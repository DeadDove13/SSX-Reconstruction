/* Ghidra pseudocode. PS2 address: 00110ea8. Not validated source. */

void FUN_00110ea8(int param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  pauVar1 = (undefined1 (*) [16])param_2;
  if (*(int *)(param_1 + 0x34c) == 2) {
    auVar2 = _lqc2(*pauVar1);
    auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x220));
    auVar4 = _vaddbc(in_vf0,in_vf0);
    auVar2 = _vmul(auVar2,auVar3);
    _vaddabc(auVar2,auVar2);
    _vmaddabc(auVar4,auVar2);
    auVar2 = _vmaddbc(auVar4,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    if (auVar2._0_4_ < 0.0) {
      auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x220));
      auVar2 = _qmtc2(auVar2._0_4_);
      auVar2 = _vmulbc(auVar3,auVar2);
      auVar2 = _sqc2(auVar2);
      auVar3 = _lqc2(*pauVar1);
      auVar2 = _lqc2(auVar2);
      auVar2 = _vadd(auVar3,auVar2);
      _sqc2(auVar2);
    }
  }
  FUN_0020b220(param_1 + 0x3a0,param_2);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x610));
  auVar3 = _lqc2(*pauVar1);
  auVar2 = _vadd(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x610) = auVar2;
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x620));
  auVar3 = _lqc2(*pauVar1);
  auVar2 = _vadd(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x620) = auVar2;
  FUN_001324e0(*(undefined4 *)(DAT_002859e4 + 0x28),param_1 + 0x630);
  return;
}

