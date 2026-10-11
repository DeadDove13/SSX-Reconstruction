/* Ghidra pseudocode. PS2 address: 00136610. Not validated source. */

void FUN_00136610(int param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
  auVar5 = _lqc2(*param_3);
  auVar4 = _vadd(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar4;
  auVar4 = _lqc2(*param_2);
  auVar5 = _lqc2(*param_3);
  _vopmula(auVar4,auVar5);
  auVar4 = _vopmsub(auVar5,auVar4);
  auVar4 = _vsub(auVar4,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
  auVar4 = _lqc2(auVar4);
  auVar4 = _vadd(auVar5,auVar4);
  auVar4 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar4;
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
  auVar4 = _qmtc2(*(undefined4 *)(param_1 + 8));
  auVar4 = _vmulbc(auVar5,auVar4);
  auVar4 = _sqc2(auVar4);
  uStack_30 = auVar4._0_4_;
  uStack_2c = auVar4._4_4_;
  uStack_28 = auVar4._8_4_;
  uStack_24 = auVar4._12_4_;
  *(undefined4 *)(param_1 + 0x70) = uStack_30;
  *(undefined4 *)(param_1 + 0x74) = uStack_2c;
  *(undefined4 *)(param_1 + 0x78) = uStack_28;
  *(undefined4 *)(param_1 + 0x7c) = uStack_24;
  fVar1 = *(float *)(param_1 + 0x60);
  fVar3 = *(float *)(param_1 + 100);
  fVar2 = *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x80) =
       *(float *)(param_1 + 0xc) * fVar1 + *(float *)(param_1 + 0x18) * fVar3 +
       *(float *)(param_1 + 0x24) * fVar2;
  *(float *)(param_1 + 0x84) =
       *(float *)(param_1 + 0x10) * fVar1 + *(float *)(param_1 + 0x1c) * fVar3 +
       *(float *)(param_1 + 0x28) * fVar2;
  *(float *)(param_1 + 0x88) =
       *(float *)(param_1 + 0x14) * fVar1 + *(float *)(param_1 + 0x20) * fVar3 +
       *(float *)(param_1 + 0x2c) * fVar2;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}

