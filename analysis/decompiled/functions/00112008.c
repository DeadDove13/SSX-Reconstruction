/* Ghidra pseudocode. PS2 address: 00112008. Not validated source. */

void FUN_00112008(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined4 uStack_c8;
  undefined4 uStack_64;
  
  iVar2 = (int)param_2;
  fVar4 = *(float *)(iVar2 + 0x158) - *(float *)(iVar2 + 0x198);
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  fVar8 = DAT_002c140c;
  if (*(float *)(iVar2 + 0xe0) < DAT_002c1400) {
    fVar8 = *(float *)(iVar2 + 0xe0) * DAT_002c1404 + DAT_002c1408;
  }
  fVar8 = fVar4 * fVar4 * ((float)*(byte *)(*(int *)(iVar2 + 0x394) + 0x17) * DAT_002c13f4 *
                           DAT_002c13f8 + DAT_002c13fc) * fVar8;
  if (fVar8 < param_1) {
    fVar8 = param_1;
  }
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x34c) == 3) {
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x130));
    auVar9 = _qmtc2(fVar8);
    auVar9 = _vmulbc(auVar10,auVar9);
    auVar9 = _sqc2(auVar9);
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
    auVar9 = _lqc2(auVar9);
    auVar9 = _vadd(auVar10,auVar9);
    auVar9 = _sqc2(auVar9);
    *(undefined1 (*) [16])(iVar2 + 0xd0) = auVar9;
  }
  else {
    fVar4 = (float)FUN_00218328(DAT_002c1410);
    fVar5 = (float)FUN_00218328(DAT_002c1414);
    fVar4 = (*(float *)(iVar2 + 0x228) - fVar4) * (1.0 / (fVar5 - fVar4));
    if (((*(float *)(iVar2 + 0x298) < 0.0) || (fVar4 < 0.0)) || (*(float *)(iVar2 + 0xd8) < 0.0)) {
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x290));
      auVar9 = _qmtc2(DAT_002c1418);
      auVar9 = _vmulbc(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
      auVar9 = _lqc2(auVar9);
      auVar9 = _vadd(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      auVar9 = _lqc2(auVar9);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmul(auVar9,auVar9);
      _vaddabc(auVar10,auVar10);
      _vmaddabc(auVar11,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      _vrsqrt(in_vf0,auVar10);
      uVar7 = _vwaitq();
      auVar9 = _vmulq(auVar9,uVar7);
      auVar9 = _sqc2(auVar9);
      auVar10 = _lqc2(auVar9);
      auVar9 = _qmtc2(fVar8);
      auVar9 = _vmulbc(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
      auVar9 = _lqc2(auVar9);
      auVar9 = _vadd(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      *(undefined1 (*) [16])(iVar2 + 0xd0) = auVar9;
    }
    else {
      auStack_f0._4_4_ = *(undefined4 *)(iVar2 + 0x224);
      auStack_f0._0_4_ = *(undefined4 *)(iVar2 + 0x220);
      uStack_e8 = 0;
      auVar9 = _lqc2(_auStack_f0);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmul(auVar9,auVar9);
      _vaddabc(auVar10,auVar10);
      _vmaddabc(auVar11,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      _vrsqrt(in_vf0,auVar10);
      uVar7 = _vwaitq();
      auVar9 = _vmulq(auVar9,uVar7);
      auVar9 = _sqc2(auVar9);
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x290));
      auVar11 = _lqc2(auVar9);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmul(auVar10,auVar11);
      _vaddabc(auVar10,auVar10);
      _vmaddabc(auVar12,auVar10);
      auVar10 = _vmaddbc(auVar12,auVar10);
      auVar10 = _qmfc2(auVar10._0_4_);
      auVar11 = _lqc2(auVar9);
      auVar9 = _qmtc2(auVar10._0_4_);
      auVar9 = _vmulbc(auVar11,auVar9);
      auVar9 = _sqc2(auVar9);
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x290));
      auVar9 = _lqc2(auVar9);
      auVar9 = _vsub(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      auVar9 = _lqc2(auVar9);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmul(auVar9,auVar9);
      _vaddabc(auVar10,auVar10);
      _vmaddabc(auVar11,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      _vrsqrt(in_vf0,auVar10);
      uVar7 = _vwaitq();
      auVar9 = _vmulq(auVar9,uVar7);
      auVar9 = _sqc2(auVar9);
      fVar5 = (float)FUN_00218240(0);
      fVar6 = (float)FUN_00218240(DAT_002c141c);
      uStack_e8._0_4_ = auVar9._8_4_;
      fVar4 = fVar4 * ((float)uStack_e8 - fVar5) * (1.0 / (fVar6 - fVar5));
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (DAT_002c1420 < fVar4) {
        fVar4 = DAT_002c1420;
      }
      uVar3 = 1;
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x220));
      auVar10 = _qmtc2(1.0 - fVar4);
      auVar10 = _vmulbc(auVar11,auVar10);
      auVar10 = _sqc2(auVar10);
      auVar12 = _lqc2(auVar9);
      auVar11 = _qmtc2(fVar4);
      auVar11 = _vmulbc(auVar12,auVar11);
      auVar11 = _sqc2(auVar11);
      auVar10 = _lqc2(auVar10);
      auVar11 = _lqc2(auVar11);
      auVar10 = _vadd(auVar10,auVar11);
      auVar10 = _sqc2(auVar10);
      auVar10 = _lqc2(auVar10);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vmul(auVar10,auVar10);
      _vaddabc(auVar11,auVar11);
      _vmaddabc(auVar12,auVar11);
      auVar11 = _vmaddbc(auVar12,auVar11);
      _vrsqrt(in_vf0,auVar11);
      uVar7 = _vwaitq();
      auVar10 = _vmulq(auVar10,uVar7);
      auVar10 = _sqc2(auVar10);
      auVar12 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
      auVar11 = _qmtc2(1.0 - fVar4);
      auVar11 = _vmulbc(auVar12,auVar11);
      auVar11 = _sqc2(auVar11);
      auVar12 = _lqc2(auVar9);
      auVar9 = _qmtc2(fVar4 * *(float *)(iVar2 + 0xe0));
      auVar9 = _vmulbc(auVar12,auVar9);
      auVar9 = _sqc2(auVar9);
      auVar11 = _lqc2(auVar11);
      auVar9 = _lqc2(auVar9);
      auVar9 = _vadd(auVar11,auVar9);
      auVar9 = _sqc2(auVar9);
      auVar11 = _lqc2(auVar9);
      auVar9 = _qmtc2(0x3f000000);
      auVar9 = _vmulbc(auVar11,auVar9);
      auVar9 = _sqc2(auVar9);
      auVar11 = _lqc2(auVar10);
      auVar10 = _qmtc2(fVar8);
      auVar10 = _vmulbc(auVar11,auVar10);
      auVar10 = _sqc2(auVar10);
      auVar9 = _lqc2(auVar9);
      auVar10 = _lqc2(auVar10);
      auVar9 = _vadd(auVar9,auVar10);
      auVar9 = _sqc2(auVar9);
      uStack_64 = auVar9._12_4_;
      uStack_c8 = auVar9._8_4_;
      *(int *)(iVar2 + 0xd0) = auVar9._0_4_;
      *(int *)(iVar2 + 0xd4) = auVar9._4_4_;
      *(undefined4 *)(iVar2 + 0xd8) = uStack_c8;
      *(undefined4 *)(iVar2 + 0xdc) = uStack_64;
    }
  }
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vmul(auVar9,auVar9);
  _vaddabc(auVar9,auVar9);
  _vmaddabc(auVar10,auVar9);
  auVar9 = _vmaddbc(auVar10,auVar9);
  _vsqrt(auVar9);
  _vwaitq();
  uVar1 = _cfc2(in_vc6);
  *(int *)(iVar2 + 0xe0) = (int)uVar1;
  uVar7 = FUN_001375a0(iVar2 + 0x8370,
                       *(int *)(iVar2 + 0x144) != *(int *)(*(int *)(iVar2 + 0x394) + 0x28),
                       *(undefined4 *)(iVar2 + 0x16c),uVar3,0);
  FUN_00107cb0(uVar7,param_2);
  return;
}

