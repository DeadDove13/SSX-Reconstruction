/* Ghidra pseudocode. PS2 address: 00115fc8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0011606c) */

void FUN_00115fc8(float param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar4 = *(int *)(param_3 + 0x210) * 0x60 + *(int *)(DAT_002859e4 + 0x1c);
  if (((*(int *)(param_3 + 0x260) != 2) && (DAT_002c15b8 <= *(float *)(iVar4 + 0x54))) &&
     (param_1 = param_1 * DAT_002c15bc, DAT_002c15c0 < param_1)) {
    if (DAT_002c15c4 < param_1) {
      param_1 = DAT_002c15c4;
    }
    iVar3 = (int)param_2;
    if (*(int *)(iVar3 + 0x18) < 5) {
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
    }
    fVar7 = DAT_002c15d8;
    fVar6 = DAT_002c15d4;
    iVar1 = (*(int *)(iVar3 + 0x1c) + 4) % 5;
    fVar5 = (param_1 * DAT_002c15c8 + DAT_002c15cc) * DAT_002c15d0;
    *(int *)(iVar3 + 0x1c) = iVar1;
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xd0));
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x220));
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar8,auVar9);
    _vaddabc(auVar8,auVar8);
    _vmaddabc(auVar10,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x220));
    auVar8 = _qmtc2(auVar8._0_4_);
    auVar8 = _vmulbc(auVar9,auVar8);
    auVar8 = _sqc2(auVar8);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xd0));
    auVar8 = _lqc2(auVar8);
    auVar8 = _vsub(auVar9,auVar8);
    auVar8 = _sqc2(auVar8);
    auVar9 = _lqc2(auVar8);
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x220));
    _vopmula(auVar9,auVar10);
    auVar9 = _vopmsub(auVar10,auVar9);
    auVar9 = _vsub(auVar9,auVar9);
    auVar9 = _sqc2(auVar9);
    iVar3 = iVar3 + iVar1 * 0x3c0 + 0x20;
    auVar9 = _lqc2(auVar9);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _vmul(auVar9,auVar9);
    _vaddabc(auVar10,auVar10);
    _vmaddabc(auVar11,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    _vrsqrt(in_vf0,auVar10);
    uVar12 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar12);
    auVar9 = _sqc2(auVar9);
    auStack_70._8_4_ = auVar9._8_4_;
    auStack_70._12_4_ = auVar9._12_4_;
    uStack_90 = auVar9._0_4_;
    uStack_8c = auVar9._4_4_;
    uStack_88 = auStack_70._8_4_;
    uStack_84 = auStack_70._12_4_;
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x220));
    auVar9 = _lqc2(auVar9);
    _vopmula(auVar10,auVar9);
    auVar9 = _vopmsub(auVar9,auVar10);
    auVar9 = _vsub(auVar9,auVar9);
    auStack_80 = _sqc2(auVar9);
    *(undefined4 *)(iVar3 + 0x3b8) = 0;
    *(float *)(iVar3 + 0x3bc) = fVar5;
    *(undefined4 *)(iVar3 + 0x3b4) = 0x19;
    uVar2 = *(undefined8 *)(*(int *)(param_3 + 0x8584) + 0x478);
    *(undefined8 *)(iVar3 + 0x3a4) = *(undefined8 *)(*(int *)(param_3 + 0x8584) + 0x470);
    *(undefined8 *)(iVar3 + 0x3ac) = uVar2;
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x220));
    auVar9 = _qmtc2(0x40400000);
    auVar9 = _vmulbc(auVar10,auVar9);
    auVar9 = _sqc2(auVar9);
    auStack_50._8_4_ = auVar9._8_4_;
    auStack_50._12_4_ = auVar9._12_4_;
    uStack_60 = auVar9._0_4_;
    uStack_5c = auVar9._4_4_;
    uStack_58 = auStack_50._8_4_;
    uStack_54 = auStack_50._12_4_;
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x250));
    auVar9 = _lqc2(auVar9);
    auVar9 = _vadd(auVar10,auVar9);
    auStack_50 = _sqc2(auVar9);
    auVar9 = _lqc2(auVar8);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _vmul(auVar9,auVar9);
    _vaddabc(auVar9,auVar9);
    _vmaddabc(auVar10,auVar9);
    auVar9 = _vmaddbc(auVar10,auVar9);
    _vsqrt(auVar9);
    _vwaitq();
    uVar2 = _cfc2(in_vc6);
    fVar6 = (float)uVar2 * fVar6;
    auStack_70._8_4_ = auStack_50._8_4_;
    *(int *)(iVar3 + 800) = auStack_50._0_4_;
    *(int *)(iVar3 + 0x324) = auStack_50._4_4_;
    *(undefined4 *)(iVar3 + 0x328) = auStack_70._8_4_;
    *(undefined4 *)(iVar3 + 0x32c) = auStack_50._12_4_;
    if (fVar7 < fVar6) {
      auVar10 = _lqc2(auVar8);
      auVar9 = _qmtc2(fVar7 / fVar6);
      auVar9 = _vmulbc(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      auStack_30._0_4_ = auVar9._0_4_;
      auStack_30._4_4_ = auVar9._4_4_;
      auStack_30._8_4_ = auVar9._8_4_;
      auStack_30._12_4_ = auVar9._12_4_;
      uStack_40 = auStack_30._0_4_;
      uStack_3c = auStack_30._4_4_;
      uStack_38 = auStack_30._8_4_;
      uStack_34 = auStack_30._12_4_;
      auVar11 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x220));
      auVar10 = _qmtc2(DAT_002c15dc);
      auVar10 = _vmulbc(auVar11,auVar10);
      auStack_30 = _sqc2(auVar10);
      auVar9 = _lqc2(auVar9);
      auVar10 = _lqc2(auStack_30);
      auVar9 = _vadd(auVar9,auVar10);
      auStack_70 = _sqc2(auVar9);
      auStack_20 = auStack_70;
    }
    else {
      auVar10 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x220));
      auVar9 = _qmtc2(fVar6 * DAT_002c15e0);
      auVar9 = _vmulbc(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      auStack_30._0_4_ = auVar9._0_4_;
      auStack_30._4_4_ = auVar9._4_4_;
      auStack_30._8_4_ = auVar9._8_4_;
      auStack_30._12_4_ = auVar9._12_4_;
      uStack_40 = auStack_30._0_4_;
      uStack_3c = auStack_30._4_4_;
      uStack_38 = auStack_30._8_4_;
      uStack_34 = auStack_30._12_4_;
      auVar10 = _lqc2(auVar8);
      auVar9 = _lqc2(auVar9);
      auVar9 = _vadd(auVar10,auVar9);
      auStack_70 = _sqc2(auVar9);
      auStack_30 = auStack_70;
    }
    *(int *)(iVar3 + 0x330) = auStack_70._0_4_;
    *(int *)(iVar3 + 0x334) = auStack_70._4_4_;
    *(undefined4 *)(iVar3 + 0x338) = auStack_70._8_4_;
    *(undefined4 *)(iVar3 + 0x33c) = auStack_70._12_4_;
    auVar8 = _lqc2(auVar8);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar8,auVar8);
    _vaddabc(auVar8,auVar8);
    _vmaddabc(auVar9,auVar8);
    auVar8 = _vmaddbc(auVar9,auVar8);
    _vsqrt(auVar8);
    _vwaitq();
    uVar2 = _cfc2(in_vc6);
    fVar7 = (float)uVar2 / *(float *)(param_3 + 0xe0);
    fVar6 = DAT_002c15e4;
    if ((DAT_002c15e4 <= fVar7) && (fVar6 = fVar7, DAT_002c15e8 < fVar7)) {
      fVar6 = DAT_002c15e8;
    }
    FUN_001154f0(param_1,fVar6,*(float *)(iVar4 + 0x54) * DAT_002c15ec,DAT_002c15f0,param_2,iVar3,
                 param_3 + 0x220,auStack_80,&uStack_90);
  }
  return;
}

