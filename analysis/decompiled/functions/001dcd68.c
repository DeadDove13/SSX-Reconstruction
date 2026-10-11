/* Ghidra pseudocode. PS2 address: 001dcd68. Not validated source. */

float FUN_001dcd68(float param_1,int param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
                  undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  auVar4 = _lqc2(*param_5);
  auVar5 = _lqc2(*param_6);
  auVar4 = _vadd(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  auVar5 = _lqc2(auVar4);
  auVar4 = _qmtc2(0x3fc00000);
  auVar4 = _vmulbc(auVar5,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar5 = _lqc2(*param_3);
  auVar4 = _lqc2(auVar4);
  auVar4 = _vsub(auVar5,auVar4);
  auVar4 = _sqc2(auVar4);
  uStack_10 = auVar4._0_4_;
  uStack_c = auVar4._4_4_;
  uStack_8 = auVar4._8_4_;
  uStack_4 = auVar4._12_4_;
  *(undefined4 *)(param_2 + 0xe0) = uStack_10;
  *(undefined4 *)(param_2 + 0xe4) = uStack_c;
  *(undefined4 *)(param_2 + 0xe8) = uStack_8;
  *(undefined4 *)(param_2 + 0xec) = uStack_4;
  auVar4 = _lqc2(*param_4);
  auVar5 = _lqc2(*param_3);
  auVar4 = _vsub(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  auVar5 = _qmtc2(param_1 * *(float *)(param_2 + 0x3c));
  _vdiv(in_vf0,0,auVar5,0);
  auVar4 = _lqc2(auVar4);
  uVar6 = _vwaitq();
  auVar4 = _vmulq(auVar4,uVar6);
  auVar4 = _sqc2(auVar4);
  uStack_20 = auVar4._0_4_;
  uStack_1c = auVar4._4_4_;
  uStack_18 = auVar4._8_4_;
  uStack_14 = auVar4._12_4_;
  *(undefined4 *)(param_2 + 0x110) = uStack_20;
  *(undefined4 *)(param_2 + 0x114) = uStack_1c;
  *(undefined4 *)(param_2 + 0x118) = uStack_18;
  *(undefined4 *)(param_2 + 0x11c) = uStack_14;
  uVar6 = *(undefined4 *)(*param_5 + 4);
  uVar2 = *(undefined4 *)(*param_5 + 8);
  uVar3 = *(undefined4 *)(*param_5 + 0xc);
  *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)*param_5;
  *(undefined4 *)(param_2 + 0xf4) = uVar6;
  *(undefined4 *)(param_2 + 0xf8) = uVar2;
  *(undefined4 *)(param_2 + 0xfc) = uVar3;
  uVar1 = *(undefined8 *)*param_6;
  uVar6 = *(undefined4 *)(*param_6 + 8);
  uVar2 = *(undefined4 *)(*param_6 + 0xc);
  *(int *)(param_2 + 0x100) = (int)uVar1;
  *(int *)(param_2 + 0x104) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_2 + 0x108) = uVar6;
  *(undefined4 *)(param_2 + 0x10c) = uVar2;
  return *(float *)(param_2 + 0x3c);
}

