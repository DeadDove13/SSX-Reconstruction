/* Ghidra pseudocode. PS2 address: 0013e898. Not validated source. */

void FUN_0013e898(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_510 [16];
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [8];
  float fStack_498;
  float fStack_494;
  undefined1 auStack_490 [160];
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  float fStack_3c0;
  undefined1 auStack_f0 [8];
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  iVar11 = (int)param_1;
  iVar9 = *(int *)(iVar11 + 0x20);
  FUN_001148c8(*(float *)(iVar9 + 0xa4) * DAT_002c203c,iVar9,iVar9 + 0xc0,iVar9 + 0xd0);
  iVar9 = *(int *)(iVar11 + 0x20);
  auVar16 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xd0));
  auVar17 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar16);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar17,auVar16);
  auVar16 = _vmaddbc(auVar17,auVar16);
  _vsqrt(auVar16);
  _vwaitq();
  uVar7 = _cfc2(in_vc6);
  *(int *)(iVar9 + 0xe0) = (int)uVar7;
  FUN_0010e5e8(iVar9 + 0x8300);
  iVar9 = *(int *)(iVar11 + 0x20);
  iVar1 = *(int *)(iVar9 + 0x8340);
  if (iVar1 != -1) {
    if (*(int *)(iVar9 + 0x210) == iVar1) {
      if (-1 < *(int *)(iVar9 + 0x21c)) {
        *(undefined4 *)(iVar9 + 0x21c) = 0;
      }
    }
    else {
      *(int *)(iVar9 + 0x210) = iVar1;
      *(undefined4 *)(iVar9 + 0x21c) = 0x80000001;
    }
  }
  iVar9 = *(int *)(iVar11 + 0x20);
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x130));
  auVar16 = _qmtc2(0xc2c80000);
  auVar16 = _vmulbc(auVar17,auVar16);
  auVar16 = _sqc2(auVar16);
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xc0));
  auVar16 = _lqc2(auVar16);
  auVar16 = _vadd(auVar17,auVar16);
  auVar16 = _sqc2(auVar16);
  auStack_4b0._0_4_ = auVar16._0_4_;
  auStack_4b0._4_4_ = auVar16._4_4_;
  auStack_4b0._8_4_ = auVar16._8_4_;
  auStack_4b0._12_4_ = auVar16._12_4_;
  uStack_4d0 = auStack_4b0._0_4_;
  uStack_4cc = auStack_4b0._4_4_;
  uStack_4c8 = auStack_4b0._8_4_;
  uStack_4c4 = auStack_4b0._12_4_;
  auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x130));
  auVar16 = _qmtc2(0x43480000);
  auVar16 = _vmulbc(auVar17,auVar16);
  auStack_4b0 = _sqc2(auVar16);
  auVar16 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xc0));
  auVar17 = _lqc2(auStack_4b0);
  auVar16 = _vadd(auVar16,auVar17);
  _auStack_4a0 = _sqc2(auVar16);
  uStack_4c0 = auStack_4a0._0_4_;
  uStack_4bc = auStack_4a0._4_4_;
  uStack_4b8 = fStack_498;
  uStack_4b4 = fStack_494;
  fVar15 = 0.0;
  FUN_00220610(0x3f000000,auStack_490,&uStack_4d0,&uStack_4c0,1);
  fVar14 = 0.0;
  fVar12 = (float)FUN_0021e000(0x299cc8,auStack_490,auStack_510,*(int *)(iVar11 + 0x20) + 0x354);
  bVar10 = true;
  if (0.0 <= fVar12) {
    iVar9 = *(int *)(iVar11 + 0x20);
    *(undefined4 *)(iVar9 + 0x220) = uStack_4f0;
    *(undefined4 *)(iVar9 + 0x224) = uStack_4ec;
    *(undefined4 *)(iVar9 + 0x228) = uStack_4e8;
    *(undefined4 *)(iVar9 + 0x22c) = uStack_4e4;
    auVar16 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0x220));
    auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xd0));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    fVar15 = auVar16._0_4_;
    if ((fVar15 < fVar14) && (lVar8 = FUN_001125e8(), lVar8 != 0)) {
      iVar9 = *(int *)(iVar11 + 0x20);
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x220));
      auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xd0));
      auVar18 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vmul(auVar16,auVar17);
      _vaddabc(auVar16,auVar16);
      _vmaddabc(auVar18,auVar16);
      auVar16 = _vmaddbc(auVar18,auVar16);
      auVar16 = _qmfc2(auVar16._0_4_);
      fVar15 = auVar16._0_4_;
      if ((*(float *)(iVar9 + 0x14c) <
           *(float *)(*(int *)(iVar9 + 0x210) * 0x60 + *(int *)(DAT_002859e4 + 0x1c) + 0x14) * 0.5)
         && (bVar10 = false, *(float *)(iVar9 + 0x14c) < fVar14)) {
        auVar4 = *(undefined1 (*) [12])(iVar9 + 0x250);
        *(int *)(iVar9 + 0xc0) = auVar4._0_4_;
        *(int *)(iVar9 + 0xc4) = auVar4._4_4_;
        *(int *)(iVar9 + 200) = auVar4._8_4_;
        *(undefined4 *)(iVar9 + 0xcc) = *(undefined4 *)(iVar9 + 0x25c);
        *(float *)(*(int *)(iVar11 + 0x20) + 0x14c) = fVar14;
      }
    }
  }
  if (!bVar10) {
    FUN_0010e618(*(int *)(iVar11 + 0x20) + 0x8300);
    FUN_001398a0(fVar15,*(int *)(*(int *)(iVar11 + 0x20) + 0x8584) + 0x6f0);
    iVar9 = **(int **)(iVar11 + 0x20);
    (**(code **)(iVar9 + 0x6c))
              (fVar15 * DAT_002c2058,(int)*(int **)(iVar11 + 0x20) + (int)*(short *)(iVar9 + 0x68));
    lVar8 = FUN_00114f78(*(int *)(iVar11 + 0x20),*(int *)(iVar11 + 0x20) + 0x220,&fStack_78,
                         &fStack_74);
    fVar12 = DAT_002c205c;
    if (lVar8 != 0) {
      iVar9 = *(int *)(iVar11 + 0x20);
      *(float *)(iVar9 + 0x6c8) = -fVar15;
      bVar10 = *(int *)(iVar9 + 0x144) != *(int *)(*(int *)(iVar9 + 0x394) + 0x28);
      if (fVar12 < ABS(fStack_78)) {
        bVar10 = !bVar10;
      }
      FUN_0013f270(fStack_78,fStack_74,fVar15,param_1);
      fVar12 = ABS(fStack_74);
      fStack_74 = DAT_002c2060;
      if ((DAT_002c2060 <= fVar12) && (fStack_74 = DAT_002c2064, fVar12 <= DAT_002c2064)) {
        fStack_74 = fVar12;
      }
      if (DAT_002c2068 < fStack_74) {
        auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xd0));
        auVar16 = _qmtc2(fStack_74 * DAT_002c206c + DAT_002c2070);
        auVar16 = _vmulbc(auVar17,auVar16);
        auVar16 = _sqc2(auVar16);
        *(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xd0) = auVar16;
      }
      fVar12 = ABS(fStack_78);
      fStack_78 = DAT_002c2074;
      if ((DAT_002c2074 <= fVar12) && (fStack_78 = DAT_002c2078, fVar12 <= DAT_002c2078)) {
        fStack_78 = fVar12;
      }
      if (DAT_002c207c < fStack_78) {
        auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xd0));
        auVar16 = _qmtc2(fStack_78 * DAT_002c2080 + DAT_002c2084);
        auVar16 = _vmulbc(auVar17,auVar16);
        auVar16 = _sqc2(auVar16);
        *(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xd0) = auVar16;
      }
      iVar9 = *(int *)(iVar11 + 0x20);
      auVar16 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xd0));
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vmul(auVar16,auVar16);
      _vaddabc(auVar16,auVar16);
      _vmaddabc(auVar17,auVar16);
      auVar16 = _vmaddbc(auVar17,auVar16);
      _vsqrt(auVar16);
      _vwaitq();
      uVar7 = _cfc2(in_vc6);
      bVar3 = *(float *)(iVar9 + 0x228) < DAT_002c2088;
      *(int *)(iVar9 + 0xe0) = (int)uVar7;
      uVar13 = FUN_001377d0(iVar9 + 0x8370,0,bVar10,bVar3);
      FUN_00107cb0(uVar13,*(undefined4 *)(iVar11 + 0x20));
      FUN_0011eb78(fVar15,*(undefined4 *)(*(int *)(iVar11 + 0x20) + 0x8584));
      return;
    }
    uStack_3f0 = uStack_500;
    uStack_3ec = uStack_4fc;
    uStack_3e8 = uStack_4f8;
    uStack_3e4 = uStack_4f4;
    piVar2 = *(int **)(iVar11 + 0x20);
    auVar16 = _lqc2(*(undefined1 (*) [16])(piVar2 + 0x34));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar17 = _vmul(auVar16,auVar16);
    _vaddabc(auVar17,auVar17);
    _vmaddabc(auVar18,auVar17);
    auVar17 = _vmaddbc(auVar18,auVar17);
    _vrsqrt(in_vf0,auVar17);
    uVar13 = _vwaitq();
    auVar16 = _vmulq(auVar16,uVar13);
    auStack_4b0 = _sqc2(auVar16);
    fStack_494 = auStack_4b0._12_4_;
    uStack_3e0 = auStack_4b0._0_4_;
    uStack_3dc = auStack_4b0._4_4_;
    uStack_3d8 = auStack_4b0._8_4_;
    uStack_3d4 = fStack_494;
    uStack_3d0 = uStack_4f0;
    uStack_3cc = uStack_4ec;
    uStack_3c8 = uStack_4e8;
    uStack_3c4 = uStack_4e4;
    _auStack_4a0 = auStack_4b0;
    fStack_3c0 = fVar15;
    (**(code **)(*piVar2 + 100))
              ((int)piVar2 + (int)*(short *)(*piVar2 + 0x60),&uStack_500,piVar2 + 0x34,&uStack_4f0);
    FUN_0010a088(*(undefined4 *)(iVar11 + 0x20),&uStack_3f0);
    uVar13 = FUN_00137a48(*(int *)(iVar11 + 0x20) + 0x8370,0);
    FUN_00107cb0(uVar13,*(undefined4 *)(iVar11 + 0x20));
    return;
  }
  fVar12 = 0.0;
  FUN_00110148(*(undefined4 *)(iVar11 + 0x20));
  FUN_0010f4d8(*(undefined4 *)(iVar11 + 0x20));
  iVar9 = *(int *)(iVar11 + 0x20);
  *(undefined4 *)(iVar9 + 0x3c4) = 0xcf;
  FUN_0021b888(&uStack_3f0,iVar9 + 0x3a0,0);
  fVar15 = (float)FUN_0021e000(0x299cc8,&uStack_3f0,auStack_510,0);
  if (fVar12 < fVar15) {
    auVar16._4_4_ = uStack_4ec;
    auVar16._0_4_ = uStack_4f0;
    auVar16._8_4_ = uStack_4e8;
    auVar16._12_4_ = uStack_4e4;
    auVar17 = _lqc2(auVar16);
    auVar16 = _qmtc2(DAT_002c2040);
    auVar16 = _vmulbc(auVar17,auVar16);
    _auStack_4a0 = _sqc2(auVar16);
    auVar17 = _lqc2(_auStack_4a0);
    auVar16 = _qmtc2(fVar15);
    auVar16 = _vmulbc(auVar17,auVar16);
    auStack_4b0 = _sqc2(auVar16);
    _auStack_f0 = auStack_4b0;
    FUN_00110ea8(*(undefined4 *)(iVar11 + 0x20),auStack_4b0);
    auVar16 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xc0));
    auVar17 = _lqc2(auStack_4b0);
    auVar16 = _vadd(auVar16,auVar17);
    auVar16 = _sqc2(auVar16);
    *(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xc0) = auVar16;
    iVar9 = *(int *)(iVar11 + 0x20);
    auVar17._4_4_ = uStack_4ec;
    auVar17._0_4_ = uStack_4f0;
    auVar17._8_4_ = uStack_4e8;
    auVar17._12_4_ = uStack_4e4;
    auVar16 = _lqc2(auVar17);
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xd0));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    fVar15 = auVar16._0_4_;
    if (fVar12 <= fVar15) goto LAB_0013ef70;
    piVar2 = *(int **)(iVar11 + 0x20);
    fVar12 = DAT_002c2048;
    if (fVar15 * DAT_002c2044 <= 1.0) {
      fVar12 = fVar15 * DAT_002c2044 * DAT_002c204c + DAT_002c2050;
    }
    auVar18._4_4_ = uStack_4ec;
    auVar18._0_4_ = uStack_4f0;
    auVar18._8_4_ = uStack_4e8;
    auVar18._12_4_ = uStack_4e4;
    auVar16 = _lqc2(auVar18);
    auVar17 = _lqc2(*(undefined1 (*) [16])(piVar2 + 0x4c));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmul(auVar16,auVar17);
    _vaddabc(auVar16,auVar16);
    _vmaddabc(auVar18,auVar16);
    auVar16 = _vmaddbc(auVar18,auVar16);
    auVar16 = _qmfc2(auVar16._0_4_);
    if (fVar12 < auVar16._0_4_) {
      auVar16 = _lqc2(*(undefined1 (*) [16])(piVar2 + 0x4c));
      auVar5._4_4_ = uStack_4ec;
      auVar5._0_4_ = uStack_4f0;
      auVar5._8_4_ = uStack_4e8;
      auVar5._12_4_ = uStack_4e4;
      auVar17 = _lqc2(auVar5);
      _vopmula(auVar16,auVar17);
      auVar16 = _vopmsub(auVar17,auVar16);
      auVar16 = _vsub(auVar16,auVar16);
      _auStack_4a0 = _sqc2(auVar16);
      auVar16 = _lqc2(_auStack_4a0);
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vmul(auVar16,auVar16);
      _vaddabc(auVar16,auVar16);
      _vmaddabc(auVar17,auVar16);
      auVar16 = _vmaddbc(auVar17,auVar16);
      _vsqrt(auVar16);
      _vwaitq();
      uVar7 = _cfc2(in_vc6);
      auVar16 = _qmtc2((int)uVar7);
      _vdiv(in_vf0,0,auVar16,0);
      auVar16 = _lqc2(_auStack_4a0);
      uVar13 = _vwaitq();
      auVar16 = _vmulq(auVar16,uVar13);
      _auStack_f0 = _sqc2(auVar16);
      fVar12 = (float)FUN_00218410((int)uVar7);
      if (DAT_002c2054 < fVar12) {
        fVar12 = DAT_002c2054;
      }
      FUN_00218128(fVar12 * 0.5,&fStack_80,&fStack_7c);
      auStack_4a0._4_4_ = fStack_80 * (float)auStack_f0._0_4_;
      fStack_498 = fStack_80 * (float)auStack_f0._4_4_;
      fStack_494 = fStack_80 * fStack_e8;
      iVar9 = *(int *)(iVar11 + 0x20);
      auStack_4a0._0_4_ = fStack_7c;
      fStack_e0 = ((fStack_7c * *(float *)(iVar9 + 0xf4) -
                   (float)auStack_4a0._4_4_ * *(float *)(iVar9 + 0xf8)) -
                  fStack_498 * *(float *)(iVar9 + 0xfc)) - fStack_494 * *(float *)(iVar9 + 0x100);
      fStack_dc = (fStack_7c * *(float *)(iVar9 + 0xf8) +
                   (float)auStack_4a0._4_4_ * *(float *)(iVar9 + 0xf4) +
                  fStack_498 * *(float *)(iVar9 + 0x100)) - fStack_494 * *(float *)(iVar9 + 0xfc);
      auStack_d0._4_4_ = fStack_dc;
      auStack_d0._0_4_ = fStack_e0;
      fStack_d8 = (fStack_7c * *(float *)(iVar9 + 0xfc) + fStack_498 * *(float *)(iVar9 + 0xf4) +
                  fStack_494 * *(float *)(iVar9 + 0xf8)) -
                  (float)auStack_4a0._4_4_ * *(float *)(iVar9 + 0x100);
      fStack_c8 = fStack_d8;
      fStack_d4 = (fStack_7c * *(float *)(iVar9 + 0x100) + fStack_494 * *(float *)(iVar9 + 0xf4) +
                  (float)auStack_4a0._4_4_ * *(float *)(iVar9 + 0xfc)) -
                  fStack_498 * *(float *)(iVar9 + 0xf8);
      fStack_c4 = fStack_d4;
      *(float *)(iVar9 + 0xf8) = fStack_dc;
      *(float *)(iVar9 + 0xfc) = fStack_d8;
      *(float *)(iVar9 + 0x100) = fStack_d4;
      *(float *)(iVar9 + 0xf4) = fStack_e0;
      FUN_00112bd8(iVar9);
      auVar6._4_4_ = uStack_4ec;
      auVar6._0_4_ = uStack_4f0;
      auVar6._8_4_ = uStack_4e8;
      auVar6._12_4_ = uStack_4e4;
      auVar17 = _lqc2(auVar6);
      auVar16 = _qmtc2(fVar15);
      auVar16 = _vmulbc(auVar17,auVar16);
      _auStack_d0 = _sqc2(auVar16);
      fStack_e0 = (float)auStack_d0._0_4_;
      fStack_dc = (float)auStack_d0._4_4_;
      fStack_d8 = fStack_c8;
      fStack_d4 = fStack_c4;
      auVar16 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xd0));
      auVar17 = _lqc2(_auStack_d0);
      auVar16 = _vsub(auVar16,auVar17);
      auVar16 = _sqc2(auVar16);
      *(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xd0) = auVar16;
      auVar16 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar11 + 0x20) + 0xd0));
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vmul(auVar16,auVar16);
      _vaddabc(auVar16,auVar16);
      _vmaddabc(auVar17,auVar16);
      auVar16 = _vmaddbc(auVar17,auVar16);
      _vsqrt(auVar16);
      _vwaitq();
      uVar7 = _cfc2(in_vc6);
      *(int *)(*(int *)(iVar11 + 0x20) + 0xe0) = (int)uVar7;
    }
    else {
      uStack_c0 = uStack_500;
      uStack_bc = uStack_4fc;
      uStack_b8 = uStack_4f8;
      uStack_b4 = uStack_4f4;
      auVar16 = _lqc2(*(undefined1 (*) [16])(piVar2 + 0x34));
      auVar18 = _vaddbc(in_vf0,in_vf0);
      auVar17 = _vmul(auVar16,auVar16);
      _vaddabc(auVar17,auVar17);
      _vmaddabc(auVar18,auVar17);
      auVar17 = _vmaddbc(auVar18,auVar17);
      _vrsqrt(in_vf0,auVar17);
      uVar13 = _vwaitq();
      auVar16 = _vmulq(auVar16,uVar13);
      _auStack_4a0 = _sqc2(auVar16);
      uStack_e4 = auStack_4a0._12_4_;
      uStack_b0 = auStack_4a0._0_4_;
      uStack_ac = auStack_4a0._4_4_;
      uStack_a8 = fStack_498;
      uStack_a4 = uStack_e4;
      _auStack_f0 = _auStack_4a0;
      fStack_90 = fVar15;
      (**(code **)(*piVar2 + 100))
                ((int)piVar2 + (int)*(short *)(*piVar2 + 0x60),&uStack_500,piVar2 + 0x34,&uStack_4f0
                );
      FUN_0010a088(*(undefined4 *)(iVar11 + 0x20),&uStack_c0);
      uVar13 = FUN_00137a48(*(int *)(iVar11 + 0x20) + 0x8370,0);
      FUN_00107cb0(uVar13,*(undefined4 *)(iVar11 + 0x20));
    }
  }
  iVar9 = *(int *)(iVar11 + 0x20);
LAB_0013ef70:
  *(undefined4 *)(iVar9 + 0x3c4) = 0xffffffff;
  FUN_0021bd40(&uStack_3f0,2);
  return;
}

