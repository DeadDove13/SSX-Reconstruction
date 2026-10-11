/* Ghidra pseudocode. PS2 address: 0021ba08. Not validated source. */

long FUN_0021ba08(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *in_t2_lo;
  undefined4 *in_t3_lo;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 auStack_60 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(int *)(param_1 + 0x2f0) == 0) {
    lVar1 = FUN_0020b9b8(*(undefined4 *)(param_1 + 0x50));
  }
  else {
    lVar1 = FUN_0020c260(*(undefined4 *)(param_1 + 0x50));
  }
  if (lVar1 != 0) {
    auVar3 = _lqc2(auStack_60);
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
    auVar3 = _lqc2(auStack_60);
    uVar5 = _vwaitq();
    auVar3 = _vmulq(auVar3,uVar5);
    auVar3 = _sqc2(auVar3);
    *in_t3_lo = (int)uVar2;
    uStack_38 = auVar3._8_4_;
    uStack_34 = auVar3._12_4_;
    *in_t2_lo = auVar3._0_4_;
    in_t2_lo[1] = auVar3._4_4_;
    in_t2_lo[2] = uStack_38;
    in_t2_lo[3] = uStack_34;
  }
  return lVar1;
}

