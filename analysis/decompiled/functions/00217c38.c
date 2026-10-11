/* Ghidra pseudocode. PS2 address: 00217c38. Not validated source. */

void FUN_00217c38(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 auStack_2c [3];
  
  auVar4 = _lqc2(*param_2);
  auVar5 = _lqc2(*param_3);
  _vopmula(auVar4,auVar5);
  auVar4 = _vopmsub(auVar5,auVar4);
  auVar4 = _vsub(auVar4,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar5 = _lqc2(auVar4);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar5);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar6,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  _vsqrt(auVar5);
  _vwaitq();
  uVar1 = _cfc2(in_vc6);
  fVar3 = (float)uVar1;
  if (fVar3 != 0.0) {
    auVar5 = _qmtc2(fVar3);
    _vdiv(in_vf0,0,auVar5,0);
    auVar4 = _lqc2(auVar4);
    uVar8 = _vwaitq();
    auVar4 = _vmulq(auVar4,uVar8);
    auVar4 = _sqc2(auVar4);
    if (DAT_002c3a20 < fVar3) {
      fVar3 = DAT_002c3a20;
    }
    auVar5 = _lqc2(*param_2);
    auVar6 = _lqc2(*param_3);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _vmul(auVar5,auVar6);
    _vaddabc(auVar5,auVar5);
    _vmaddabc(auVar7,auVar5);
    auVar5 = _vmaddbc(auVar7,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    if (auVar5._0_4_ < 0.0) {
      fVar3 = (float)FUN_00218410(fVar3);
      fVar3 = DAT_002c3a24 - fVar3;
    }
    else {
      fVar3 = (float)FUN_00218410(fVar3);
    }
    FUN_00218128(fVar3 * 0.5,&fStack_30,auStack_2c);
    fStack_70 = auVar4._0_4_;
    fStack_6c = auVar4._4_4_;
    fStack_68 = auVar4._8_4_;
    fStack_4c = fStack_30 * fStack_70;
    fStack_48 = fStack_30 * fStack_6c;
    fStack_44 = fStack_30 * fStack_68;
    uStack_50 = auStack_2c[0];
    FUN_0012f0f8(&uStack_40,param_1,&uStack_50);
    puVar2 = (undefined4 *)param_1;
    puVar2[1] = uStack_3c;
    *puVar2 = uStack_40;
    puVar2[2] = uStack_38;
    puVar2[3] = uStack_34;
  }
  return;
}

