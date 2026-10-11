/* Ghidra pseudocode. PS2 address: 00224478. Not validated source. */

long FUN_00224478(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 aauStack_60 [2] [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar1 = FUN_0020ec90(*(undefined4 *)(param_1 + 0x50),param_2,param_3,aauStack_60,param_4);
  if (lVar1 != 0) {
    auVar3 = _lqc2(aauStack_60[0]);
    auVar4 = _vaddbc(in_vf0,in_vf0);
    auVar3 = _vmul(auVar3,auVar3);
    _vaddabc(auVar3,auVar3);
    _vmaddabc(auVar4,auVar3);
    auVar3 = _vmaddbc(auVar4,auVar3);
    _vsqrt(auVar3);
    _vwaitq();
    uVar2 = _cfc2(in_vc6);
    auVar3 = _qmtc2((int)uVar2);
    _vdiv(in_vf0,0,auVar3,0);
    auVar3 = _lqc2(aauStack_60[0]);
    uVar5 = _vwaitq();
    auVar3 = _vmulq(auVar3,uVar5);
    auVar3 = _sqc2(auVar3);
    *param_6 = (int)uVar2;
    uStack_38 = auVar3._8_4_;
    uStack_34 = auVar3._12_4_;
    *param_5 = auVar3._0_4_;
    param_5[1] = auVar3._4_4_;
    param_5[2] = uStack_38;
    param_5[3] = uStack_34;
  }
  return lVar1;
}

