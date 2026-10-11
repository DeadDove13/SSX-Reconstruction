/* Ghidra pseudocode. PS2 address: 00125b30. Not validated source. */

void FUN_00125b30(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auStack_4d0 [16];
  undefined1 auStack_4c0 [16];
  undefined1 aauStack_4b0 [2] [16];
  undefined1 auStack_490 [432];
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [8];
  float fStack_278;
  undefined4 uStack_274;
  undefined1 auStack_270 [432];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  iVar2 = (int)param_1;
  FUN_00224130(auStack_490,iVar2 + 0x150,1);
  fVar3 = (float)FUN_0021e000(0x299cc8,auStack_490,auStack_4d0,0);
  if (0.0 < fVar3) {
    if (fVar3 < 2.0) {
      fVar3 = 2.0;
    }
    auVar7 = _lqc2(aauStack_4b0[0]);
    auVar6 = _qmtc2(fVar3);
    auVar6 = _vmulbc(auVar7,auVar6);
    auStack_2d0 = _sqc2(auVar6);
    uStack_2e0 = auStack_2d0._0_4_;
    uStack_2dc = auStack_2d0._4_4_;
    uStack_2d8 = auStack_2d0._8_4_;
    uStack_2d4 = auStack_2d0._12_4_;
    FUN_00125ac0(param_1,&uStack_2e0);
    auVar7 = _auStack_280;
    uVar9 = DAT_002c1b0c;
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
    auVar6 = _qmtc2(DAT_002c1b0c);
    auVar6 = _vmulbc(auVar8,auVar6);
    auVar6 = _sqc2(auVar6);
    auStack_2c0._12_4_ = auVar6._12_4_;
    auStack_2d0._8_4_ = auVar6._8_4_;
    *(int *)(iVar2 + 0x90) = auVar6._0_4_;
    *(int *)(iVar2 + 0x94) = auVar6._4_4_;
    *(undefined4 *)(iVar2 + 0x98) = auStack_2d0._8_4_;
    *(undefined4 *)(iVar2 + 0x9c) = auStack_2c0._12_4_;
    fVar3 = *(float *)*(undefined1 (*) [12])(iVar2 + 0x90);
    fVar5 = *(float *)(iVar2 + 0x94);
    fVar4 = *(float *)(iVar2 + 0x98);
    auStack_290._0_12_ = *(undefined1 (*) [12])(iVar2 + 0x90);
    auStack_280._0_4_ =
         *(float *)(iVar2 + 0x3c) * fVar3 + *(float *)(iVar2 + 0x48) * fVar5 +
         *(float *)(iVar2 + 0x54) * fVar4;
    auStack_280._4_4_ =
         *(float *)(iVar2 + 0x40) * fVar3 + *(float *)(iVar2 + 0x4c) * fVar5 +
         *(float *)(iVar2 + 0x58) * fVar4;
    fStack_278 = *(float *)(iVar2 + 0x44) * fVar3 + *(float *)(iVar2 + 0x50) * fVar5 +
                 *(float *)(iVar2 + 0x5c) * fVar4;
    uStack_274 = auVar7._12_4_;
    *(undefined4 *)(iVar2 + 0xb0) = auStack_280._0_4_;
    *(undefined4 *)(iVar2 + 0xb4) = auStack_280._4_4_;
    *(float *)(iVar2 + 0xb8) = fStack_278;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar6 = _qmtc2(uVar9);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    auStack_2c0._12_4_ = auVar6._12_4_;
    auVar7 = _qmtc2(*(undefined4 *)(iVar2 + 0x38));
    _vdiv(in_vf0,0,auVar7,0);
    auVar7 = _lqc2(auVar6);
    uVar9 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar9);
    auVar7 = _sqc2(auVar7);
    auStack_2b0._12_4_ = auVar7._12_4_;
    auStack_2c0._8_4_ = auVar7._8_4_;
    *(int *)(iVar2 + 0x80) = auVar7._0_4_;
    *(int *)(iVar2 + 0x84) = auVar7._4_4_;
    *(undefined4 *)(iVar2 + 0x88) = auStack_2c0._8_4_;
    *(undefined4 *)(iVar2 + 0x8c) = auStack_2b0._12_4_;
    auStack_2d0._4_4_ = auVar6._4_4_;
    auStack_2d0._8_4_ = auVar6._8_4_;
    *(int *)(iVar2 + 0xa0) = auVar6._0_4_;
    *(undefined4 *)(iVar2 + 0xa4) = auStack_2d0._4_4_;
    *(undefined4 *)(iVar2 + 0xa8) = auStack_2d0._8_4_;
    *(undefined4 *)(iVar2 + 0xac) = auStack_2c0._12_4_;
    auVar6 = _lqc2(auStack_4c0);
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x60));
    auVar6 = _vsub(auVar6,auVar7);
    auStack_2b0 = _sqc2(auVar6);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xb0));
    auVar7 = _lqc2(auStack_2b0);
    _vopmula(auVar6,auVar7);
    auVar6 = _vopmsub(auVar7,auVar6);
    auVar6 = _vsub(auVar6,auVar6);
    auStack_2c0 = _sqc2(auVar6);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar7 = _lqc2(auStack_2c0);
    auVar6 = _vadd(auVar6,auVar7);
    auStack_2d0 = _sqc2(auVar6);
    auVar6 = _lqc2(auStack_2d0);
    auVar7 = _lqc2(aauStack_4b0[0]);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar6,auVar7);
    _vaddabc(auVar6,auVar6);
    _vmaddabc(auVar8,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    auStack_2a0 = auStack_2d0;
    if (auVar6._0_4_ < 0.0) {
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
      auVar7 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      _vmaddabc(auVar7,auVar6);
      auVar6 = _vmaddbc(auVar7,auVar6);
      _vsqrt(auVar6);
      _vwaitq();
      uVar1 = _cfc2(in_vc6);
      uVar9 = *(undefined4 *)(iVar2 + 0xd8);
      if ((float)uVar1 < *(float *)(iVar2 + 0xe0)) {
        uVar9 = 0;
      }
      FUN_00136138(uVar9,*(undefined4 *)(iVar2 + 0xdc),iVar2 + 0x30,auStack_4c0,aauStack_4b0);
      *(float *)(iVar2 + 0xe8) = *(float *)(iVar2 + 0xe8) + DAT_002c1b10;
      if (5.0 < *(float *)(iVar2 + 0xe4)) {
        *(undefined4 *)(iVar2 + 0xe4) = 0x41200000;
      }
    }
  }
  FUN_00224130(auStack_270,iVar2 + 0x150,1);
  fVar3 = (float)FUN_0021e828(0x299cc8,auStack_270,&uStack_2e0);
  if (0.0 < fVar3) {
    if (fVar3 < 2.0) {
      fVar3 = 2.0;
    }
    auVar7 = _lqc2(auStack_2c0);
    auVar6 = _qmtc2(fVar3);
    auVar6 = _vmulbc(auVar7,auVar6);
    auStack_2a0 = _sqc2(auVar6);
    auStack_290 = auStack_2a0;
    FUN_00125ac0(param_1,auStack_2a0);
    uVar9 = DAT_002c1b14;
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
    auVar6 = _qmtc2(DAT_002c1b14);
    auVar6 = _vmulbc(auVar7,auVar6);
    auVar6 = _sqc2(auVar6);
    uStack_274 = auVar6._12_4_;
    auStack_290._8_4_ = auVar6._8_4_;
    *(int *)(iVar2 + 0x90) = auVar6._0_4_;
    *(int *)(iVar2 + 0x94) = auVar6._4_4_;
    *(undefined4 *)(iVar2 + 0x98) = auStack_290._8_4_;
    *(undefined4 *)(iVar2 + 0x9c) = uStack_274;
    fVar3 = *(float *)(iVar2 + 0x90);
    fVar5 = *(float *)(iVar2 + 0x94);
    fVar4 = *(float *)(iVar2 + 0x98);
    fStack_90 = *(float *)(iVar2 + 0x3c) * fVar3 + *(float *)(iVar2 + 0x48) * fVar5 +
                *(float *)(iVar2 + 0x54) * fVar4;
    fStack_8c = *(float *)(iVar2 + 0x40) * fVar3 + *(float *)(iVar2 + 0x4c) * fVar5 +
                *(float *)(iVar2 + 0x58) * fVar4;
    fStack_88 = *(float *)(iVar2 + 0x44) * fVar3 + *(float *)(iVar2 + 0x50) * fVar5 +
                *(float *)(iVar2 + 0x5c) * fVar4;
    *(float *)(iVar2 + 0xb0) = fStack_90;
    *(float *)(iVar2 + 0xb4) = fStack_8c;
    *(float *)(iVar2 + 0xb8) = fStack_88;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar6 = _qmtc2(uVar9);
    auVar6 = _vmulbc(auVar7,auVar6);
    _auStack_280 = _sqc2(auVar6);
    auVar6 = _qmtc2(*(undefined4 *)(iVar2 + 0x38));
    _vdiv(in_vf0,0,auVar6,0);
    auVar6 = _lqc2(_auStack_280);
    uVar9 = _vwaitq();
    auVar6 = _vmulq(auVar6,uVar9);
    auVar6 = _sqc2(auVar6);
    auStack_b0._0_4_ = auVar6._0_4_;
    auStack_b0._4_4_ = auVar6._4_4_;
    auStack_b0._8_4_ = auVar6._8_4_;
    auStack_b0._12_4_ = auVar6._12_4_;
    *(undefined4 *)(iVar2 + 0x80) = auStack_b0._0_4_;
    *(undefined4 *)(iVar2 + 0x84) = auStack_b0._4_4_;
    *(undefined4 *)(iVar2 + 0x88) = auStack_b0._8_4_;
    *(undefined4 *)(iVar2 + 0x8c) = auStack_b0._12_4_;
    auStack_290._4_4_ = auStack_280._4_4_;
    auStack_290._8_4_ = auStack_280._8_4_;
    *(int *)(iVar2 + 0xa0) = auStack_280._0_4_;
    *(undefined4 *)(iVar2 + 0xa4) = auStack_290._4_4_;
    *(undefined4 *)(iVar2 + 0xa8) = auStack_290._8_4_;
    *(undefined4 *)(iVar2 + 0xac) = uStack_274;
    auVar6 = _lqc2(auStack_2d0);
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x60));
    auVar6 = _vsub(auVar6,auVar7);
    auStack_b0 = _sqc2(auVar6);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xb0));
    auVar7 = _lqc2(auStack_b0);
    _vopmula(auVar6,auVar7);
    auVar6 = _vopmsub(auVar7,auVar6);
    auVar6 = _vsub(auVar6,auVar6);
    auVar6 = _sqc2(auVar6);
    auStack_a0._8_4_ = auVar6._8_4_;
    auStack_a0._12_4_ = auVar6._12_4_;
    uStack_c0 = auVar6._0_4_;
    uStack_bc = auVar6._4_4_;
    uStack_b8 = auStack_a0._8_4_;
    uStack_b4 = auStack_a0._12_4_;
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar6 = _lqc2(auVar6);
    auVar6 = _vadd(auVar7,auVar6);
    auStack_290 = _sqc2(auVar6);
    auVar6 = _lqc2(auStack_290);
    auVar7 = _lqc2(auStack_2c0);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar6,auVar7);
    _vaddabc(auVar6,auVar6);
    _vmaddabc(auVar8,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    auStack_a0 = auStack_290;
    if (auVar6._0_4_ < 0.0) {
      FUN_00136138(*(undefined4 *)(iVar2 + 0xd8),*(undefined4 *)(iVar2 + 0xdc),iVar2 + 0x30,
                   auStack_2d0,auStack_2c0);
      *(float *)(iVar2 + 0xe8) = *(float *)(iVar2 + 0xe8) + DAT_002c1b18;
    }
  }
  FUN_00224560(auStack_270,2);
  FUN_00224560(auStack_490,2);
  return;
}

