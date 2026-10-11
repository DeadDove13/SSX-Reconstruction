/* Ghidra pseudocode. PS2 address: 001398f0. Not validated source. */

void FUN_001398f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  
  if (*(float *)(param_1 + 8) <= 0.25) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x170) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x6cf4);
    uVar8 = FUN_001486c8(iVar1 + 0x20);
    *(undefined4 *)(iVar1 + 8) = uVar8;
    iVar1 = *(int *)(param_1 + 0xc);
  }
  fVar3 = *(float *)(iVar1 + 0xe0);
  *(undefined4 *)(iVar1 + 0x170) = 7;
  *(undefined4 *)(*(int *)(iVar1 + 0x6cf4) + 0x14) = 0x1ffe;
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
  auVar4 = _qmtc2(1.0 / fVar3);
  auVar4 = _vmulbc(auVar5,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar5 = _lqc2(auVar4);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x130));
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x130));
  auVar5 = _qmtc2(auVar5._0_4_);
  auVar5 = _vmulbc(auVar6,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2(auVar5);
  auVar4 = _vsub(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  auVar4 = _lqc2(auVar4);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar4,auVar4);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar6,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  _vrsqrt(in_vf0,auVar5);
  uVar8 = _vwaitq();
  auVar4 = _vmulq(auVar4,uVar8);
  auVar4 = _sqc2(auVar4);
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x110));
  auVar6 = _lqc2(auVar4);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (DAT_002c1d50 < ABS(auVar5._0_4_)) {
    uVar8 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar2 = 0x3f;
  }
  else {
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x120));
    auVar4 = _lqc2(auVar4);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar5,auVar4);
    _vaddabc(auVar4,auVar4);
    _vmaddabc(auVar6,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    fVar3 = auVar4._0_4_;
    if (*(int *)(iVar1 + 0x144) != 0) {
      fVar3 = -fVar3;
    }
    if (fVar3 <= 0.0) {
      FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),0x41,0,5);
      iVar1 = *(int *)(param_1 + 0xc);
      goto LAB_00139ad8;
    }
    uVar8 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar2 = 0x40;
  }
  FUN_0014cd18(uVar8,uVar2,0,5);
  iVar1 = *(int *)(param_1 + 0xc);
LAB_00139ad8:
  *(undefined4 *)(*(int *)(iVar1 + 0x6cf4) + 0x14) = 0xffffffff;
  return;
}

