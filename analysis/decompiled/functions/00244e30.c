/* Ghidra pseudocode. PS2 address: 00244e30. Not validated source. */

undefined8 FUN_00244e30(uint param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_vi1;
  undefined4 uVar3;
  undefined4 in_vf1w;
  undefined1 auVar4 [16];
  
  uVar2 = _cfc2(in_vi1);
  auVar1 = _qmfc2(in_vf1w);
  auVar4 = _qmtc2((int)*param_2);
  uVar3 = _ctc2(param_1 & 0xffff);
  _vsqi(auVar4,uVar3);
  _ctc2((int)uVar2);
  _qmtc2(auVar1._0_4_);
  return *param_2;
}

