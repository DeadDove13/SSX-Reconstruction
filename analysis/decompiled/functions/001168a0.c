/* Ghidra pseudocode. PS2 address: 001168a0. Not validated source. */

undefined8 FUN_001168a0(float param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = (undefined4 *)param_2;
  pauVar1 = (undefined1 (*) [16])(param_5 * 0x10 + param_4);
  fVar3 = *(float *)(param_4 + 0x3b8) * 1.25;
  auVar5 = _lqc2(pauVar1[0x19]);
  auVar4 = _qmtc2(param_1);
  auVar4 = _vmulbc(auVar5,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar6 = _lqc2(ZEXT416(DAT_002c1654) << 0x40);
  auVar5 = _qmtc2(param_1);
  auVar5 = _vmulbc(auVar6,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(auVar5);
  auVar5 = _qmtc2(param_1 * DAT_002c1658 + DAT_002c165c);
  auVar5 = _vmulbc(auVar6,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_4 + 800));
  auVar7 = _lqc2(*pauVar1);
  auVar6 = _vadd(auVar6,auVar7);
  auVar6 = _sqc2(auVar6);
  fVar3 = fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * DAT_002c163c + DAT_002c1640) +
                                             DAT_002c1644) + DAT_002c1648) + DAT_002c164c) +
                  DAT_002c1650) + 1.0;
  fVar3 = fVar3 * fVar3;
  auVar7 = _lqc2(auVar4);
  auVar4 = _qmtc2(1.0 - 1.0 / (fVar3 * fVar3));
  auVar4 = _vmulbc(auVar7,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar6 = _lqc2(auVar6);
  auVar4 = _lqc2(auVar4);
  auVar4 = _vadd(auVar6,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar6 = _lqc2(auVar5);
  auVar5 = _qmtc2(*(float *)(param_4 + 0x3b8));
  auVar5 = _vmulbc(auVar6,auVar5);
  auVar5 = _sqc2(auVar5);
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2(auVar5);
  auVar4 = _vadd(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  uStack_10 = auVar4._0_4_;
  uStack_c = auVar4._4_4_;
  uStack_8 = auVar4._8_4_;
  uStack_4 = auVar4._12_4_;
  *puVar2 = uStack_10;
  puVar2[1] = uStack_c;
  puVar2[2] = uStack_8;
  puVar2[3] = uStack_4;
  return param_2;
}

