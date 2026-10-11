/* Ghidra pseudocode. PS2 address: 00110cb0. Not validated source. */

void FUN_00110cb0(float param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  iVar3 = (int)param_2;
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
  auVar6 = _lqc2(*param_4);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  iVar2 = *(int *)(iVar3 + 0x34c);
  fVar4 = auVar5._0_4_ * DAT_002c1344;
  if ((iVar2 == 1) && (*(float *)(iVar3 + 0xe0) < DAT_002c1344)) {
    fVar1 = DAT_002c1348;
    if (DAT_002c1348 <= *(float *)(*param_4 + 8)) {
      fVar1 = *(float *)(*param_4 + 8);
    }
    *(float *)(iVar3 + 0x280) = *(float *)(iVar3 + 0x280) + (2.5 - auVar5._0_4_) * fVar1;
    iVar2 = *(int *)(iVar3 + 0x34c);
  }
  if (iVar2 != 5) {
    if (fVar4 + DAT_002c134c < param_1) {
      FUN_0010a088(param_2);
      uVar8 = FUN_00137a48(iVar3 + 0x8370,0);
      FUN_00107cb0(uVar8,param_2);
    }
    else if (fVar4 < param_1) {
      auVar5 = _lqc2(*param_4);
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
      auVar7 = _vaddbc(in_vf0,in_vf0);
      auVar5 = _vmul(auVar5,auVar6);
      _vaddabc(auVar5,auVar5);
      _vmaddabc(auVar7,auVar5);
      auVar5 = _vmaddbc(auVar7,auVar5);
      auVar5 = _qmfc2(auVar5._0_4_);
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
      auVar5 = _qmtc2(auVar5._0_4_);
      auVar5 = _vmulbc(auVar6,auVar5);
      auVar5 = _sqc2(auVar5);
      auStack_30._0_4_ = auVar5._0_4_;
      auStack_30._4_4_ = auVar5._4_4_;
      auStack_30._8_4_ = auVar5._8_4_;
      auStack_30._12_4_ = auVar5._12_4_;
      uStack_40 = auStack_30._0_4_;
      uStack_3c = auStack_30._4_4_;
      uStack_38 = auStack_30._8_4_;
      uStack_34 = auStack_30._12_4_;
      auVar6 = _lqc2(*param_4);
      auVar5 = _lqc2(auVar5);
      auVar5 = _vsub(auVar6,auVar5);
      auVar5 = _sqc2(auVar5);
      auStack_30._0_4_ = auVar5._0_4_;
      auStack_30._4_4_ = auVar5._4_4_;
      auStack_30._8_4_ = auVar5._8_4_;
      auStack_30._12_4_ = auVar5._12_4_;
      uStack_50 = auStack_30._0_4_;
      uStack_4c = auStack_30._4_4_;
      uStack_48 = auStack_30._8_4_;
      uStack_44 = auStack_30._12_4_;
      auVar5 = _lqc2(auVar5);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _vmul(auVar5,auVar5);
      _vaddabc(auVar6,auVar6);
      _vmaddabc(auVar7,auVar6);
      auVar6 = _vmaddbc(auVar7,auVar6);
      _vrsqrt(in_vf0,auVar6);
      uVar8 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar8);
      auStack_30 = _sqc2(auVar5);
      uStack_60 = auStack_30._0_4_;
      uStack_5c = auStack_30._4_4_;
      uStack_58 = auStack_30._8_4_;
      uStack_54 = auStack_30._12_4_;
      FUN_0010f278(param_2,&uStack_60,0);
    }
  }
  return;
}

