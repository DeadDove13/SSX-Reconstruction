/* Ghidra pseudocode. PS2 address: 00112510. Not validated source. */

undefined8 FUN_00112510(undefined8 param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_20 [16];
  
  auVar5 = auStack_20;
  puVar4 = (undefined4 *)param_1;
  auStack_20._0_8_ = auStack_20._4_8_ << 0x20;
  auStack_20._12_4_ = auVar5._12_4_;
  auStack_20._8_4_ = 0x3f800000;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auStack_20._8_8_;
  auStack_20 = auVar5 << 0x40;
  auStack_20._12_4_ = 0;
  auVar5 = _lqc2(*param_2);
  auVar6 = _lqc2(auStack_20);
  _vopmula(auVar5,auVar6);
  auVar5 = _vopmsub(auVar6,auVar5);
  auVar5 = _vsub(auVar5,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(auVar5);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar7,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _vsqrt(auVar6);
  _vwaitq();
  uVar3 = _cfc2(in_vc6);
  if (DAT_002c1424 < (float)uVar3) {
    auVar6 = _qmtc2((float)uVar3);
    _vdiv(in_vf0,0,auVar6,0);
    auVar5 = _lqc2(auVar5);
    uVar1 = _vwaitq();
    auVar5 = _vmulq(auVar5,uVar1);
    auVar5 = _sqc2(auVar5);
    auVar6 = _lqc2(*param_2);
    auVar5 = _lqc2(auVar5);
    _vopmula(auVar6,auVar5);
    auVar5 = _vopmsub(auVar5,auVar6);
    auVar5 = _vsub(auVar5,auVar5);
    auVar5 = _sqc2(auVar5);
    auStack_20._0_4_ = auVar5._0_4_;
    auStack_20._4_4_ = auVar5._4_4_;
    auStack_20._8_4_ = auVar5._8_4_;
    auStack_20._12_4_ = auVar5._12_4_;
    *puVar4 = auStack_20._0_4_;
    puVar4[1] = auStack_20._4_4_;
    puVar4[2] = auStack_20._8_4_;
    puVar4[3] = auStack_20._12_4_;
  }
  else {
    uVar3 = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 1);
    uVar2 = *(undefined4 *)((int)param_3 + 0xc);
    *puVar4 = (int)uVar3;
    puVar4[1] = (int)((ulong)uVar3 >> 0x20);
    puVar4[2] = uVar1;
    puVar4[3] = uVar2;
  }
  return param_1;
}

