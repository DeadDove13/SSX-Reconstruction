/* Ghidra pseudocode. PS2 address: 0016aa08. Not validated source. */

undefined4 FUN_0016aa08(int param_1,undefined4 *param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  auVar2 = _qmtc2(0x40000000);
  _vdiv(in_vf0,0,auVar2,0);
  auVar1 = _lqc2(auVar1);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  uStack_10 = auVar1._0_4_;
  uStack_c = auVar1._4_4_;
  uStack_8 = auVar1._8_4_;
  uStack_4 = auVar1._12_4_;
  *param_2 = uStack_10;
  param_2[1] = uStack_c;
  param_2[2] = uStack_8;
  param_2[3] = uStack_4;
  return 0x40000000;
}

