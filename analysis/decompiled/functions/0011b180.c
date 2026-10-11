/* Ghidra pseudocode. PS2 address: 0011b180. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0011b880) */

void FUN_0011b180(undefined8 param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 (*pauVar23) [16];
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  fVar27 = DAT_002c1864;
  switch(*(undefined4 *)(param_2 + 0x210)) {
  default:
    bVar4 = false;
    fVar28 = 0.0;
    break;
  case 1:
  case 2:
  case 8:
  case 0xf:
  case 0x10:
    bVar4 = true;
    fVar28 = DAT_002c1858;
    break;
  case 3:
  case 4:
    bVar4 = true;
    fVar28 = DAT_002c1860;
    break;
  case 5:
    bVar4 = true;
    fVar28 = DAT_002c185c;
  }
  iVar19 = *(int *)(param_2 + 0x34c);
  if (((iVar19 != 2) && (iVar19 != 5)) && (iVar19 != 6)) {
    bVar4 = false;
  }
  if (*(int *)(param_2 + 0x260) - 2U < 2) {
    bVar4 = false;
  }
  pauVar23 = (undefined1 (*) [16])param_1;
  if (!bVar4) {
    iVar19 = *(int *)pauVar23[0x194];
    if (*(float *)(pauVar23[0x194] + 8) != 0.0) {
      iVar22 = *(int *)(pauVar23[0x194] + 4);
      fVar28 = 0.0;
      iVar21 = 0;
      iVar20 = iVar19;
      if (0 < iVar22) {
        do {
          iVar18 = iVar20 + -1;
          if (iVar20 + -1 < 0) {
            iVar18 = iVar20 + 99;
          }
          fVar29 = *(float *)pauVar23[iVar18 * 4 + 6];
          fVar25 = *(float *)(pauVar23[iVar18 * 4 + 6] + 8) * fVar28;
          fVar24 = *(float *)(pauVar23[iVar18 * 4 + 6] + 4);
          fVar28 = fVar28 + fVar27;
          *(float *)(pauVar23[iVar18 * 4 + 6] + 8) = fVar25;
          *(float *)pauVar23[iVar18 * 4 + 7] = fVar24 * fVar25;
          *(float *)(pauVar23[iVar18 * 4 + 6] + 0xc) = fVar29 * fVar25;
        } while ((fVar28 < 1.0) && (iVar21 = iVar21 + 1, iVar20 = iVar18, iVar21 < iVar22));
      }
    }
    *(undefined4 *)(pauVar23[0x194] + 8) = 0;
    *(undefined4 *)pauVar23[0x195] = 0;
    uVar26 = *(undefined4 *)(pauVar23[0x194] + 8);
    *(undefined4 *)(pauVar23[iVar19 * 4 + 6] + 8) = uVar26;
    *(undefined4 *)pauVar23[iVar19 * 4 + 7] = uVar26;
    *(undefined4 *)(pauVar23[iVar19 * 4 + 6] + 0xc) = uVar26;
    *(undefined4 *)(pauVar23[iVar19 * 4 + 6] + 4) = uVar26;
    *(undefined4 *)pauVar23[iVar19 * 4 + 6] = uVar26;
    return;
  }
  if (iVar19 == 2) {
    uStack_158 = *(undefined4 *)(param_2 + 0x82b8);
    uStack_154 = *(undefined4 *)(param_2 + 0x82bc);
    uStack_160 = (undefined4)*(undefined8 *)(param_2 + 0x82b0);
    uStack_15c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x82b0) >> 0x20);
    uStack_150 = *(undefined4 *)(param_2 + 0x82c0);
    uStack_14c = *(undefined4 *)(param_2 + 0x82c4);
    uStack_148 = *(undefined4 *)(param_2 + 0x82c8);
    uStack_144 = *(undefined4 *)(param_2 + 0x82cc);
    uStack_138 = *(undefined4 *)(param_2 + 0x82d8);
    uStack_134 = *(undefined4 *)(param_2 + 0x82dc);
    uStack_140 = (undefined4)*(undefined8 *)(param_2 + 0x82d0);
    uStack_13c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x82d0) >> 0x20);
    uStack_130 = *(undefined4 *)(param_2 + 0x82e0);
    uStack_12c = *(undefined4 *)(param_2 + 0x82e4);
    uStack_128 = *(undefined4 *)(param_2 + 0x82e8);
    uStack_124 = *(undefined4 *)(param_2 + 0x82ec);
  }
  else {
    uStack_154 = *(undefined4 *)(param_2 + 0x78ac);
    uStack_160 = *(undefined4 *)(param_2 + 0x78a0);
    uStack_15c = *(undefined4 *)(param_2 + 0x78a4);
    uStack_158 = *(undefined4 *)(param_2 + 0x78a8);
    uStack_144 = *(undefined4 *)(param_2 + 0x77ac);
    uStack_150 = *(undefined4 *)(param_2 + 0x77a0);
    uStack_14c = *(undefined4 *)(param_2 + 0x77a4);
    uStack_148 = *(undefined4 *)(param_2 + 0x77a8);
    uStack_140 = *(undefined4 *)(param_2 + 0x82b0);
    uStack_13c = *(undefined4 *)(param_2 + 0x82b4);
    uStack_138 = *(undefined4 *)(param_2 + 0x82b8);
    uStack_134 = *(undefined4 *)(param_2 + 0x82bc);
    uStack_130 = *(undefined4 *)(param_2 + 0x82e0);
    uStack_12c = *(undefined4 *)(param_2 + 0x82e4);
    uStack_128 = *(undefined4 *)(param_2 + 0x82e8);
    uStack_124 = *(undefined4 *)(param_2 + 0x82ec);
  }
  auVar32 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
  auVar34 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  _vopmula(auVar32,auVar34);
  auVar32 = _vopmsub(auVar34,auVar32);
  auVar32 = _vsub(auVar32,auVar32);
  auVar32 = _sqc2(auVar32);
  auVar32 = _lqc2(auVar32);
  auVar35 = _vaddbc(in_vf0,in_vf0);
  auVar34 = _vmul(auVar32,auVar32);
  _vaddabc(auVar34,auVar34);
  _vmaddabc(auVar35,auVar34);
  auVar34 = _vmaddbc(auVar35,auVar34);
  _vrsqrt(in_vf0,auVar34);
  uVar26 = _vwaitq();
  auVar32 = _vmulq(auVar32,uVar26);
  auVar32 = _sqc2(auVar32);
  auStack_100._8_4_ = auVar32._8_4_;
  auStack_100._12_4_ = auVar32._12_4_;
  uStack_120 = auVar32._0_4_;
  uStack_11c = auVar32._4_4_;
  uStack_118 = auStack_100._8_4_;
  uStack_114 = auStack_100._12_4_;
  auVar34._4_4_ = uStack_15c;
  auVar34._0_4_ = uStack_160;
  auVar34._8_4_ = uStack_158;
  auVar34._12_4_ = uStack_154;
  auVar34 = _lqc2(auVar34);
  auVar9._4_4_ = uStack_12c;
  auVar9._0_4_ = uStack_130;
  auVar9._8_4_ = uStack_128;
  auVar9._12_4_ = uStack_124;
  auVar35 = _lqc2(auVar9);
  auVar34 = _vsub(auVar34,auVar35);
  auVar34 = _sqc2(auVar34);
  auStack_100._8_4_ = auVar34._8_4_;
  auStack_100._12_4_ = auVar34._12_4_;
  uStack_110 = auVar34._0_4_;
  uStack_10c = auVar34._4_4_;
  uStack_108 = auStack_100._8_4_;
  uStack_104 = auStack_100._12_4_;
  auVar35._4_4_ = uStack_14c;
  auVar35._0_4_ = uStack_150;
  auVar35._8_4_ = uStack_148;
  auVar35._12_4_ = uStack_144;
  auVar35 = _lqc2(auVar35);
  auVar33._4_4_ = uStack_13c;
  auVar33._0_4_ = uStack_140;
  auVar33._8_4_ = uStack_138;
  auVar33._12_4_ = uStack_134;
  auVar33 = _lqc2(auVar33);
  auVar35 = _vsub(auVar35,auVar33);
  auStack_100 = _sqc2(auVar35);
  auVar34 = _lqc2(auVar34);
  auVar35 = _lqc2(auVar32);
  auVar33 = _vaddbc(in_vf0,in_vf0);
  auVar34 = _vmul(auVar34,auVar35);
  _vaddabc(auVar34,auVar34);
  _vmaddabc(auVar33,auVar34);
  auVar34 = _vmaddbc(auVar33,auVar34);
  auVar34 = _qmfc2(auVar34._0_4_);
  auVar35 = _lqc2(auStack_100);
  auVar32 = _lqc2(auVar32);
  auVar33 = _vaddbc(in_vf0,in_vf0);
  auVar32 = _vmul(auVar35,auVar32);
  _vaddabc(auVar32,auVar32);
  _vmaddabc(auVar33,auVar32);
  auVar32 = _vmaddbc(auVar33,auVar32);
  auVar32 = _qmfc2(auVar32._0_4_);
  auStack_f0 = auStack_100;
  fVar27 = (float)FUN_0011b0f0(param_1,*(undefined4 *)(param_2 + 0x8584),&uStack_120);
  FUN_001110c0(0xbf800000,auStack_f0,&uStack_120);
  fVar24 = (float)FUN_0011b0f0(param_1,*(undefined4 *)(param_2 + 0x8584),auStack_f0);
  fVar25 = *(float *)(pauVar23[0x194] + 8);
  if (fVar25 == 0.0) {
    if (fVar24 <= fVar27) {
      *(undefined4 *)(pauVar23[0x194] + 0xc) = 0xbf800000;
    }
    else {
      *(undefined4 *)(pauVar23[0x194] + 0xc) = 0x3f800000;
    }
  }
  else {
    fVar29 = DAT_002c1868;
    if (fVar24 > fVar27) {
      fVar29 = DAT_002c186c;
    }
    fVar29 = *(float *)(pauVar23[0x194] + 0xc) + fVar29;
    if (fVar29 < -1.0) {
      fVar29 = -1.0;
    }
    else if (1.0 < fVar29) {
      fVar29 = 1.0;
    }
    *(float *)(pauVar23[0x194] + 0xc) = fVar29;
  }
  fVar27 = *(float *)(param_2 + 0x1a4);
  fVar24 = *(float *)(pauVar23[0x194] + 0xc) * DAT_002c1870;
  fVar29 = -*(float *)(pauVar23[0x194] + 0xc) * DAT_002c1870;
  if (0.0 < fVar27) {
    fVar24 = fVar27 * 0.5 * fVar24 + fVar24;
  }
  else {
    fVar29 = fVar29 * (1.0 - fVar27 * 0.5);
  }
  auVar35 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x250));
  auVar33 = _lqc2(pauVar23[0x196]);
  auVar35 = _vsub(auVar35,auVar33);
  auStack_f0 = _sqc2(auVar35);
  auVar35 = _lqc2(auStack_f0);
  auVar33 = _vaddbc(in_vf0,in_vf0);
  auVar35 = _vmul(auVar35,auVar35);
  _vaddabc(auVar35,auVar35);
  _vmaddabc(auVar33,auVar35);
  auVar35 = _vmaddbc(auVar33,auVar35);
  _vsqrt(auVar35);
  _vwaitq();
  uVar16 = _cfc2(in_vc6);
  fVar30 = (float)uVar16;
  if (fVar30 != 0.0) {
    auVar35 = _qmtc2(fVar30);
    _vdiv(in_vf0,0,auVar35,0);
    auVar35 = _lqc2(auStack_f0);
    uVar26 = _vwaitq();
    auVar35 = _vmulq(auVar35,uVar26);
    auStack_f0 = _sqc2(auVar35);
  }
  fVar31 = ABS(auVar34._0_4_);
  if (ABS(auVar34._0_4_) < ABS(auVar32._0_4_)) {
    fVar31 = ABS(auVar32._0_4_);
  }
  if (*(float *)(param_2 + 0x18c) == 0.0) {
    fVar31 = fVar31 * (1.0 - ABS(fVar27) * DAT_002c1874);
  }
  if ((fVar30 <= DAT_002c1878) && (fVar25 != 0.0)) {
    if (*(float *)(param_2 + 0xe0) <= DAT_002c187c) goto LAB_0011b964;
    if (ABS(fVar31 - *(float *)pauVar23[0x198]) <= DAT_002c1880) {
      auVar32 = _lqc2(auStack_f0);
      auVar34 = _lqc2(pauVar23[0x197]);
      auVar35 = _vaddbc(in_vf0,in_vf0);
      auVar32 = _vmul(auVar32,auVar34);
      _vaddabc(auVar32,auVar32);
      _vmaddabc(auVar35,auVar32);
      auVar32 = _vmaddbc(auVar35,auVar32);
      auVar32 = _qmfc2(auVar32._0_4_);
      if (DAT_002c1884 <= auVar32._0_4_) goto LAB_0011b964;
    }
  }
  auVar32._4_4_ = uStack_11c;
  auVar32._0_4_ = uStack_120;
  auVar32._8_4_ = uStack_118;
  auVar32._12_4_ = uStack_114;
  auVar34 = _lqc2(auVar32);
  auVar32 = _qmtc2(fVar31 * 0.5);
  auVar32 = _vmulbc(auVar34,auVar32);
  auVar32 = _sqc2(auVar32);
  auVar35 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  auVar34 = _qmtc2(0x41200000);
  auVar34 = _vmulbc(auVar35,auVar34);
  auVar34 = _sqc2(auVar34);
  auVar35 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x250));
  auVar34 = _lqc2(auVar34);
  auVar34 = _vadd(auVar35,auVar34);
  auVar34 = _sqc2(auVar34);
  auVar1 = *(undefined1 (*) [12])(param_2 + 0x250);
  uVar26 = *(undefined4 *)(param_2 + 0x25c);
  *(int *)pauVar23[0x196] = auVar1._0_4_;
  *(int *)(pauVar23[0x196] + 4) = auVar1._4_4_;
  *(int *)(pauVar23[0x196] + 8) = auVar1._8_4_;
  *(undefined4 *)(pauVar23[0x196] + 0xc) = uVar26;
  *(int *)pauVar23[0x197] = auStack_f0._0_4_;
  *(int *)(pauVar23[0x197] + 4) = auStack_f0._4_4_;
  *(undefined4 *)(pauVar23[0x197] + 8) = auStack_f0._8_4_;
  *(undefined4 *)(pauVar23[0x197] + 0xc) = auStack_f0._12_4_;
  iVar19 = *(int *)pauVar23[0x194];
  *(float *)pauVar23[0x198] = fVar31;
  auVar35 = _lqc2(auVar34);
  auVar33 = _lqc2(auVar32);
  auVar35 = _vadd(auVar35,auVar33);
  auVar35 = _sqc2(auVar35);
  auStack_b0._12_4_ = auVar35._12_4_;
  auStack_c0._4_4_ = auVar35._4_4_;
  auStack_c0._8_4_ = auVar35._8_4_;
  *(int *)pauVar23[iVar19 * 4 + 4] = auVar35._0_4_;
  *(undefined4 *)(pauVar23[iVar19 * 4 + 4] + 4) = auStack_c0._4_4_;
  *(undefined4 *)(pauVar23[iVar19 * 4 + 4] + 8) = auStack_c0._8_4_;
  *(undefined4 *)(pauVar23[iVar19 * 4 + 4] + 0xc) = auStack_b0._12_4_;
  iVar19 = *(int *)pauVar23[0x194];
  auVar34 = _lqc2(auVar34);
  auVar32 = _lqc2(auVar32);
  auVar32 = _vsub(auVar34,auVar32);
  auVar32 = _sqc2(auVar32);
  auStack_b0._12_4_ = auVar32._12_4_;
  auStack_c0._8_4_ = auVar32._8_4_;
  *(int *)pauVar23[iVar19 * 4 + 5] = auVar32._0_4_;
  *(int *)(pauVar23[iVar19 * 4 + 5] + 4) = auVar32._4_4_;
  *(undefined4 *)(pauVar23[iVar19 * 4 + 5] + 8) = auStack_c0._8_4_;
  *(undefined4 *)(pauVar23[iVar19 * 4 + 5] + 0xc) = auStack_b0._12_4_;
  iVar19 = *(int *)pauVar23[0x194];
  uVar26 = *(undefined4 *)(param_2 + 0x210);
  *(float *)(pauVar23[iVar19 * 4 + 7] + 0xc) = fVar31 * fVar28;
  *(undefined4 *)(pauVar23[iVar19 * 4 + 7] + 4) = uVar26;
  fVar27 = *(float *)(pauVar23[0x194] + 8) + DAT_002c1888;
  *(uint *)(pauVar23[iVar19 * 4 + 7] + 8) = (uint)(*(float *)(pauVar23[0x194] + 8) == 0.0);
  *(float *)(pauVar23[0x194] + 8) = fVar27;
  *(int *)pauVar23[0x194] = (iVar19 + 1) % 100;
  if (1.0 < fVar27) {
    *(undefined4 *)(pauVar23[0x194] + 8) = 0x3f800000;
  }
  fVar27 = *(float *)(pauVar23[0x194] + 8);
  iVar19 = *(int *)pauVar23[0x194];
  iVar22 = *(int *)(pauVar23[0x194] + 4);
  *(float *)pauVar23[iVar19 * 4 + 7] = fVar29 * fVar27;
  *(float *)(pauVar23[iVar19 * 4 + 6] + 0xc) = fVar24 * fVar27;
  *(float *)(pauVar23[iVar19 * 4 + 6] + 8) = fVar27;
  *(float *)pauVar23[iVar19 * 4 + 6] = fVar24;
  *(float *)(pauVar23[iVar19 * 4 + 6] + 4) = fVar29;
  if (iVar22 < 100) {
    *(int *)(pauVar23[0x194] + 4) = iVar22 + 1;
  }
  fVar27 = DAT_002c188c;
  iVar22 = *(int *)(pauVar23[0x194] + 4) + -0x5a;
  if ((0 < iVar22) && (iVar19 = (iVar19 - *(int *)(pauVar23[0x194] + 4)) + iVar22, 0 < iVar22)) {
    do {
      iVar20 = iVar19;
      if (iVar19 < 0) {
        iVar20 = iVar19 + 100;
      }
      fVar25 = *(float *)(pauVar23[iVar20 * 4 + 6] + 8) - fVar27;
      *(float *)(pauVar23[iVar20 * 4 + 6] + 8) = fVar25;
      if (fVar25 < 0.0) {
        *(undefined4 *)(pauVar23[iVar20 * 4 + 6] + 8) = 0;
      }
      fVar30 = *(float *)(pauVar23[iVar20 * 4 + 6] + 8);
      iVar22 = iVar22 + -1;
      iVar19 = iVar20 + -1;
      fVar25 = *(float *)(pauVar23[iVar20 * 4 + 6] + 4);
      *(float *)(pauVar23[iVar20 * 4 + 6] + 0xc) = *(float *)pauVar23[iVar20 * 4 + 6] * fVar30;
      *(float *)pauVar23[iVar20 * 4 + 7] = fVar25 * fVar30;
    } while (iVar22 != 0);
  }
LAB_0011b964:
  auVar5._4_4_ = uStack_15c;
  auVar5._0_4_ = uStack_160;
  auVar5._8_4_ = uStack_158;
  auVar5._12_4_ = uStack_154;
  auVar32 = _lqc2(auVar5);
  auVar7._4_4_ = uStack_14c;
  auVar7._0_4_ = uStack_150;
  auVar7._8_4_ = uStack_148;
  auVar7._12_4_ = uStack_144;
  auVar34 = _lqc2(auVar7);
  auVar32 = _vsub(auVar32,auVar34);
  auVar32 = _sqc2(auVar32);
  auStack_d0._8_4_ = auVar32._8_4_;
  auStack_d0._12_4_ = auVar32._12_4_;
  uStack_110 = auVar32._0_4_;
  uStack_10c = auVar32._4_4_;
  uStack_108 = auStack_d0._8_4_;
  uStack_104 = auStack_d0._12_4_;
  auVar6._4_4_ = uStack_15c;
  auVar6._0_4_ = uStack_160;
  auVar6._8_4_ = uStack_158;
  auVar6._12_4_ = uStack_154;
  auVar34 = _lqc2(auVar6);
  auVar8._4_4_ = uStack_13c;
  auVar8._0_4_ = uStack_140;
  auVar8._8_4_ = uStack_138;
  auVar8._12_4_ = uStack_134;
  auVar35 = _lqc2(auVar8);
  auVar34 = _vsub(auVar34,auVar35);
  auStack_100 = _sqc2(auVar34);
  auStack_d0._8_4_ = auStack_100._8_4_;
  auStack_d0._12_4_ = auStack_100._12_4_;
  auVar10._4_4_ = uStack_11c;
  auVar10._0_4_ = uStack_120;
  auVar10._8_4_ = uStack_118;
  auVar10._12_4_ = uStack_114;
  auVar34 = _lqc2(auVar10);
  auVar32 = _lqc2(auVar32);
  auVar35 = _vaddbc(in_vf0,in_vf0);
  auVar32 = _vmul(auVar34,auVar32);
  _vaddabc(auVar32,auVar32);
  _vmaddabc(auVar35,auVar32);
  auVar32 = _vmaddbc(auVar35,auVar32);
  auVar32 = _qmfc2(auVar32._0_4_);
  auVar11._4_4_ = uStack_11c;
  auVar11._0_4_ = uStack_120;
  auVar11._8_4_ = uStack_118;
  auVar11._12_4_ = uStack_114;
  auVar34 = _lqc2(auVar11);
  auVar35 = _lqc2(auStack_100);
  auVar33 = _vaddbc(in_vf0,in_vf0);
  auVar34 = _vmul(auVar34,auVar35);
  _vaddabc(auVar34,auVar34);
  _vmaddabc(auVar33,auVar34);
  auVar34 = _vmaddbc(auVar33,auVar34);
  auVar34 = _qmfc2(auVar34._0_4_);
  if (ABS(auVar32._0_4_) < ABS(auVar34._0_4_)) {
    uStack_108 = auStack_d0._8_4_;
    uStack_104 = auStack_d0._12_4_;
    uStack_110 = auStack_100._0_4_;
    uStack_10c = auStack_100._4_4_;
  }
  auVar13._4_4_ = uStack_10c;
  auVar13._0_4_ = uStack_110;
  auVar13._8_4_ = uStack_108;
  auVar13._12_4_ = uStack_104;
  auVar32 = _lqc2(auVar13);
  auVar34 = _vaddbc(in_vf0,in_vf0);
  auVar32 = _vmul(auVar32,auVar32);
  _vaddabc(auVar32,auVar32);
  _vmaddabc(auVar34,auVar32);
  auVar32 = _vmaddbc(auVar34,auVar32);
  _vsqrt(auVar32);
  _vwaitq();
  uVar16 = _cfc2(in_vc6);
  fVar27 = (float)uVar16;
  auVar32 = _qmtc2(fVar27);
  _vdiv(in_vf0,0,auVar32,0);
  auVar14._4_4_ = uStack_10c;
  auVar14._0_4_ = uStack_110;
  auVar14._8_4_ = uStack_108;
  auVar14._12_4_ = uStack_104;
  auVar32 = _lqc2(auVar14);
  uVar26 = _vwaitq();
  auVar32 = _vmulq(auVar32,uVar26);
  auVar32 = _sqc2(auVar32);
  auVar34 = _lqc2(auVar32);
  auVar35 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  auVar33 = _vaddbc(in_vf0,in_vf0);
  auVar34 = _vmul(auVar34,auVar35);
  _vaddabc(auVar34,auVar34);
  _vmaddabc(auVar33,auVar34);
  auVar34 = _vmaddbc(auVar33,auVar34);
  auVar34 = _qmfc2(auVar34._0_4_);
  auVar35 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  auVar34 = _qmtc2(auVar34._0_4_);
  auVar34 = _vmulbc(auVar35,auVar34);
  auStack_b0 = _sqc2(auVar34);
  auVar32 = _lqc2(auVar32);
  auVar34 = _lqc2(auStack_b0);
  auVar32 = _vsub(auVar32,auVar34);
  auStack_c0 = _sqc2(auVar32);
  auVar32 = _lqc2(auStack_c0);
  auVar35 = _vaddbc(in_vf0,in_vf0);
  auVar34 = _vmul(auVar32,auVar32);
  _vaddabc(auVar34,auVar34);
  _vmaddabc(auVar35,auVar34);
  auVar34 = _vmaddbc(auVar35,auVar34);
  _vrsqrt(in_vf0,auVar34);
  uVar26 = _vwaitq();
  auVar32 = _vmulq(auVar32,uVar26);
  auStack_d0 = _sqc2(auVar32);
  auStack_a0._12_4_ = auStack_d0._12_4_;
  uStack_e0 = auStack_d0._0_4_;
  uStack_dc = auStack_d0._4_4_;
  uStack_d8 = auStack_d0._8_4_;
  uStack_d4 = auStack_a0._12_4_;
  auVar32 = _lqc2(auStack_d0);
  auVar12._4_4_ = uStack_11c;
  auVar12._0_4_ = uStack_120;
  auVar12._8_4_ = uStack_118;
  auVar12._12_4_ = uStack_114;
  auVar34 = _lqc2(auVar12);
  auVar35 = _vaddbc(in_vf0,in_vf0);
  auVar32 = _vmul(auVar32,auVar34);
  _vaddabc(auVar32,auVar32);
  _vmaddabc(auVar35,auVar32);
  auVar32 = _vmaddbc(auVar35,auVar32);
  auVar32 = _qmfc2(auVar32._0_4_);
  if (auVar32._0_4_ < 0.0) {
    auStack_a0 = auStack_d0;
    FUN_001110c0(0xbf800000,auStack_d0,&uStack_e0);
    uStack_e0 = auStack_d0._0_4_;
    uStack_dc = auStack_d0._4_4_;
    uStack_d8 = auStack_d0._8_4_;
    uStack_d4 = auStack_d0._12_4_;
  }
  auVar15._4_4_ = uStack_dc;
  auVar15._0_4_ = uStack_e0;
  auVar15._8_4_ = uStack_d8;
  auVar15._12_4_ = uStack_d4;
  auVar34 = _lqc2(auVar15);
  auVar32 = _qmtc2(fVar27 * 0.5);
  auVar32 = _vmulbc(auVar34,auVar32);
  auVar32 = _sqc2(auVar32);
  auVar35 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x220));
  auVar34 = _qmtc2(0x41200000);
  auVar34 = _vmulbc(auVar35,auVar34);
  auVar34 = _sqc2(auVar34);
  auVar35 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x250));
  auVar34 = _lqc2(auVar34);
  auVar34 = _vadd(auVar35,auVar34);
  auVar34 = _sqc2(auVar34);
  auVar35 = _lqc2(auVar34);
  auVar33 = _lqc2(auVar32);
  auVar35 = _vadd(auVar35,auVar33);
  auVar35 = _sqc2(auVar35);
  auStack_a0._12_4_ = auVar35._12_4_;
  auStack_b0._8_4_ = auVar35._8_4_;
  *(int *)*pauVar23 = auVar35._0_4_;
  *(int *)(*pauVar23 + 4) = auVar35._4_4_;
  *(undefined4 *)(*pauVar23 + 8) = auStack_b0._8_4_;
  *(undefined4 *)(*pauVar23 + 0xc) = auStack_a0._12_4_;
  auVar34 = _lqc2(auVar34);
  auVar32 = _lqc2(auVar32);
  auVar32 = _vsub(auVar34,auVar32);
  auVar32 = _sqc2(auVar32);
  auStack_a0._12_4_ = auVar32._12_4_;
  auStack_b0._8_4_ = auVar32._8_4_;
  *(int *)pauVar23[1] = auVar32._0_4_;
  *(int *)(pauVar23[1] + 4) = auVar32._4_4_;
  *(undefined4 *)(pauVar23[1] + 8) = auStack_b0._8_4_;
  *(undefined4 *)(pauVar23[1] + 0xc) = auStack_a0._12_4_;
  fVar25 = *(float *)(pauVar23[0x194] + 8);
  iVar19 = *(int *)(pauVar23[0x194] + 4);
  *(float *)(pauVar23[3] + 0xc) = fVar27 * fVar28;
  *(float *)pauVar23[3] = fVar29 * fVar25;
  *(float *)(pauVar23[2] + 0xc) = fVar24 * fVar25;
  if (1 < iVar19) {
    iVar19 = *(int *)pauVar23[0x194] + -1;
    if (iVar19 < 0) {
      iVar19 = *(int *)pauVar23[0x194] + 99;
    }
    pauVar17 = pauVar23 + iVar19 * 4 + 4;
    auVar32 = _lqc2(*pauVar23);
    auVar34 = _lqc2(*pauVar17);
    auVar32 = _vsub(auVar32,auVar34);
    auVar32 = _sqc2(auVar32);
    auVar32 = _lqc2(auVar32);
    auVar34 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
    auVar35 = _vaddbc(in_vf0,in_vf0);
    auVar32 = _vmul(auVar32,auVar34);
    _vaddabc(auVar32,auVar32);
    _vmaddabc(auVar35,auVar32);
    auVar32 = _vmaddbc(auVar35,auVar32);
    auVar32 = _qmfc2(auVar32._0_4_);
    if (auVar32._0_4_ < 0.0) {
      uVar26 = *(undefined4 *)(*pauVar17 + 4);
      uVar2 = *(undefined4 *)(*pauVar17 + 8);
      uVar3 = *(undefined4 *)(*pauVar17 + 0xc);
      *(undefined4 *)*pauVar23 = *(undefined4 *)*pauVar17;
      *(undefined4 *)(*pauVar23 + 4) = uVar26;
      *(undefined4 *)(*pauVar23 + 8) = uVar2;
      *(undefined4 *)(*pauVar23 + 0xc) = uVar3;
    }
    auVar32 = _lqc2(pauVar23[1]);
    auVar34 = _lqc2(pauVar17[1]);
    auVar32 = _vsub(auVar32,auVar34);
    auVar32 = _sqc2(auVar32);
    auVar32 = _lqc2(auVar32);
    auVar34 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
    auVar35 = _vaddbc(in_vf0,in_vf0);
    auVar32 = _vmul(auVar32,auVar34);
    _vaddabc(auVar32,auVar32);
    _vmaddabc(auVar35,auVar32);
    auVar32 = _vmaddbc(auVar35,auVar32);
    auVar32 = _qmfc2(auVar32._0_4_);
    if (auVar32._0_4_ < 0.0) {
      auVar1 = *(undefined1 (*) [12])pauVar17[1];
      uVar26 = *(undefined4 *)(pauVar17[1] + 0xc);
      *(int *)pauVar23[1] = auVar1._0_4_;
      *(int *)(pauVar23[1] + 4) = auVar1._4_4_;
      *(int *)(pauVar23[1] + 8) = auVar1._8_4_;
      *(undefined4 *)(pauVar23[1] + 0xc) = uVar26;
    }
  }
  *(undefined4 *)pauVar23[0x195] = 1;
  return;
}

