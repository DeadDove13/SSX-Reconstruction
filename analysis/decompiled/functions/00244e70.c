/* Ghidra pseudocode. PS2 address: 00244e70. Not validated source. */

undefined8 FUN_00244e70(undefined8 param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_vi1;
  undefined4 uVar3;
  undefined4 in_vf1w;
  undefined1 auVar4 [16];
  
  uVar2 = _cfc2(in_vi1);
  auVar1 = _qmfc2(in_vf1w);
  uVar3 = _ctc2(param_2 & 0xffff);
  auVar4 = _vlqi(uVar3);
  auVar4 = _qmfc2(auVar4._0_4_);
  _ctc2((int)uVar2);
  _qmtc2(auVar1._0_4_);
  *(undefined8 *)param_1 = auVar4._0_8_;
  ((undefined8 *)param_1)[1] = auVar4._8_8_;
  return param_1;
}

