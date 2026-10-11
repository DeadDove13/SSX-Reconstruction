/* Ghidra pseudocode. PS2 address: 00135d40. Not validated source. */

void FUN_00135d40(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fVar2 = DAT_002c1c78;
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
  auVar6 = _qmtc2(*(undefined4 *)(param_1 + 8));
  auVar6 = _vmulbc(auVar7,auVar6);
  auVar6 = _sqc2(auVar6);
  uStack_30 = auVar6._0_4_;
  uStack_2c = auVar6._4_4_;
  uStack_28 = auVar6._8_4_;
  uStack_24 = auVar6._12_4_;
  *(undefined4 *)(param_1 + 0x70) = uStack_30;
  *(undefined4 *)(param_1 + 0x74) = uStack_2c;
  *(undefined4 *)(param_1 + 0x78) = uStack_28;
  *(undefined4 *)(param_1 + 0x7c) = uStack_24;
  fVar3 = *(float *)(param_1 + 0x60);
  fVar5 = *(float *)(param_1 + 100);
  fVar4 = *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x80) =
       *(float *)(param_1 + 0xc) * fVar3 + *(float *)(param_1 + 0x18) * fVar5 +
       *(float *)(param_1 + 0x24) * fVar4;
  *(float *)(param_1 + 0x84) =
       *(float *)(param_1 + 0x10) * fVar3 + *(float *)(param_1 + 0x1c) * fVar5 +
       *(float *)(param_1 + 0x28) * fVar4;
  *(float *)(param_1 + 0x88) =
       *(float *)(param_1 + 0x14) * fVar3 + *(float *)(param_1 + 0x20) * fVar5 +
       *(float *)(param_1 + 0x2c) * fVar4;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  _vmaddabc(auVar7,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _vsqrt(auVar6);
  _vwaitq();
  uVar1 = _cfc2(in_vc6);
  if (fVar2 < (float)uVar1) {
    fVar2 = fVar2 / (float)uVar1;
    auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
    auVar6 = _qmtc2(fVar2);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    *(undefined1 (*) [16])(param_1 + 0x80) = auVar6;
    auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
    auVar6 = _qmtc2(fVar2);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar6;
  }
  return;
}

