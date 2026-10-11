/* Ghidra pseudocode. PS2 address: 00119e38. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0011a9e4) */
/* WARNING: Removing unreachable block (ram,0x0011a328) */
/* WARNING: Removing unreachable block (ram,0x00119eb8) */
/* WARNING: Removing unreachable block (ram,0x0011a354) */
/* WARNING: Removing unreachable block (ram,0x0011aa10) */

void FUN_00119e38(int *param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [8];
  int iVar17;
  uint uVar18;
  float *pfVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined1 in_vf0 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  float fStack_168;
  float fStack_164;
  undefined1 auStack_160 [8];
  float fStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  int iStack_110;
  
  iVar23 = 0;
  if (0 < *param_1) {
    iVar17 = param_1[1];
    while( true ) {
      iVar17 = iVar17 + iVar23;
      iVar23 = iVar23 + 1;
      FUN_001dce40(DAT_002c17c8,param_1 + (iVar17 % 0x28) * 0x54 + 0x10);
      if (*param_1 <= iVar23) break;
      iVar17 = param_1[1];
    }
  }
  fVar27 = DAT_002c17e0;
  fVar29 = DAT_002c17d8;
  fVar26 = DAT_002c17d4;
  uVar32 = DAT_002c17d0;
  uVar37 = DAT_002c17cc;
  pauVar1 = (undefined1 (*) [16])(param_2 + 0x75b0);
  iStack_110 = 5;
  iVar23 = 0;
  fVar30 = 400.0;
  auVar10 = *(undefined1 (*) [16])(param_2 + 0x75c0);
  fVar34 = 400.0;
  uVar31 = 0x42480000;
  pauVar2 = (undefined1 (*) [16])(param_2 + 0x75d0);
  auVar12 = *pauVar2;
  auVar9 = *pauVar2;
  auVar7 = *pauVar2;
  auVar4 = *pauVar2;
  auVar42 = *pauVar2;
  auVar41 = *pauVar2;
  auVar39 = *pauVar2;
  fVar36 = 2.0;
  auVar13 = *pauVar1;
  auVar11 = *pauVar1;
  auVar8 = *pauVar1;
  auVar6 = *pauVar1;
  auVar5 = *pauVar1;
  auStack_1a0._0_12_ = ZEXT812(0);
  auStack_1a0._12_4_ = 0;
  auVar38 = auStack_1a0;
  fVar35 = 4.0;
  fVar33 = 0.25;
  auStack_1a0._0_4_ = 0.0;
  if (*(int *)(param_2 + 0x34c) == 2) {
    if (*(int *)(param_2 + 0x260) != 2) {
      fVar29 = *(float *)(param_2 + 0xe0);
      auVar38 = *(undefined1 (*) [16])(param_2 + 0xd0);
      fVar33 = fVar29 * DAT_002c17dc;
      fVar26 = *(float *)(param_2 + 0x1a4);
      if (*(int *)(param_2 + 0x144) != 0) {
        fVar26 = -fVar26;
      }
      param_1[2] = 0;
      auVar40 = _lqc2(auVar39);
      auVar39 = _qmtc2(fVar26 * fVar27 * fVar29);
      auVar39 = _vmulbc(auVar40,auVar39);
      auVar39 = _sqc2(auVar39);
      auVar38 = _lqc2(auVar38);
      auVar39 = _lqc2(auVar39);
      auVar39 = _vadd(auVar38,auVar39);
      auStack_1a0 = _sqc2(auVar39);
      auVar39 = _lqc2(auStack_1a0);
      auVar41 = _lqc2(auVar41);
      auVar38 = _vaddbc(in_vf0,in_vf0);
      auVar39 = _vmul(auVar39,auVar41);
      _vaddabc(auVar39,auVar39);
      _vmaddabc(auVar38,auVar39);
      auVar39 = _vmaddbc(auVar38,auVar39);
      auVar39 = _qmfc2(auVar39._0_4_);
      fVar29 = auVar39._0_4_;
      if (ABS(fVar29) < 450.0) {
        fVar30 = 300.0;
      }
      else {
        fVar30 = ABS(fVar29) - 150.0;
        if (fVar29 < 0.0) {
          auVar41 = _lqc2(auVar42);
          auVar39 = _qmtc2((fVar29 + 450.0) * 0.5);
          auVar39 = _vmulbc(auVar41,auVar39);
          auVar39 = _sqc2(auVar39);
          auVar41 = _lqc2(auStack_1a0);
          auVar39 = _lqc2(auVar39);
          auVar39 = _vsub(auVar41,auVar39);
          auStack_1a0 = _sqc2(auVar39);
        }
        else {
          auVar41 = _lqc2(auVar4);
          auVar39 = _qmtc2((450.0 - fVar29) * 0.5);
          auVar39 = _vmulbc(auVar41,auVar39);
          auVar39 = _sqc2(auVar39);
          auVar41 = _lqc2(auStack_1a0);
          auVar39 = _lqc2(auVar39);
          auVar39 = _vadd(auVar41,auVar39);
          auStack_1a0 = _sqc2(auVar39);
        }
      }
      auVar39 = _lqc2(auStack_1a0);
      auVar41 = _lqc2(auVar5);
      auVar42 = _vaddbc(in_vf0,in_vf0);
      auVar39 = _vmul(auVar39,auVar41);
      _vaddabc(auVar39,auVar39);
      _vmaddabc(auVar42,auVar39);
      auVar39 = _vmaddbc(auVar42,auVar39);
      auVar39 = _qmfc2(auVar39._0_4_);
      fVar34 = auVar39._0_4_;
      auVar41 = _lqc2(auVar6);
      auVar39 = _qmtc2(fVar34 * 0.5);
      auVar39 = _vmulbc(auVar41,auVar39);
      auStack_190 = _sqc2(auVar39);
      uVar31 = 0;
      auVar39 = _lqc2(auStack_1a0);
      auVar41 = _lqc2(auStack_190);
      auVar39 = _vsub(auVar39,auVar41);
      auStack_1a0 = _sqc2(auVar39);
      iVar17 = *(int *)(param_2 + 0x210) * 0x60 + *(int *)(DAT_002859e4 + 0x1c);
      iStack_110 = *(int *)(iVar17 + 0x50);
      fVar35 = *(float *)(iVar17 + 0x34) * DAT_002c17e8;
      fVar27 = (fVar26 * fVar26 * 149.0 * fVar33 + fVar33) * *(float *)(iVar17 + 0x30);
      uVar37 = *(undefined4 *)(iVar17 + 0x38);
      fVar36 = *(float *)(iVar17 + 0x34) * DAT_002c17e4;
      uVar32 = *(undefined4 *)(iVar17 + 0x3c);
      iVar23 = *(int *)(iVar17 + 0x40);
      fVar33 = *(float *)(iVar17 + 0x4c);
      fVar26 = *(float *)(iVar17 + 0x44);
      fVar29 = *(float *)(iVar17 + 0x48);
      _auStack_180 = auStack_190;
      goto LAB_0011a2c0;
    }
    iVar17 = *(int *)(param_2 + 0x34c);
  }
  else {
    iVar17 = *(int *)(param_2 + 0x34c);
  }
  if (iVar17 == 1) {
    if (param_1[2] == 0) {
      param_1[3] = 0x428c0000;
    }
    else if (10.0 < (float)param_1[3]) {
      param_1[3] = (int)((float)param_1[3] * DAT_002c17ec);
    }
    fVar30 = *(float *)(param_2 + 0xe0) / DAT_002c17f0;
    param_1[2] = 1;
    fVar27 = (float)param_1[3];
    if (fVar30 <= 1.0) {
      fVar27 = fVar27 * fVar30;
    }
  }
  else {
    if (iVar17 != 3) {
      param_1[2] = 0;
      fVar27 = (float)auStack_1a0._0_4_;
      auStack_1a0 = auVar38;
      goto LAB_0011a2c0;
    }
    iVar23 = *(int *)(param_2 + 0x210);
    fVar27 = 30.0;
    param_1[2] = 0;
    if (iVar23 == 0xd) {
      fVar27 = 0.0;
    }
  }
  iVar23 = 0xd;
  fVar30 = 400.0;
  uVar31 = 0x42480000;
  fVar33 = 0.25;
  fVar34 = 400.0;
  fVar35 = 4.0;
  fVar36 = 2.0;
  auStack_1a0 = *(undefined1 (*) [16])(param_2 + 0xd0);
LAB_0011a2c0:
  uVar18 = FUN_002109b0();
  iVar17 = (int)(fVar27 * DAT_002c17f4 + ((float)(uVar18 & 0x7fffff | 0x3f800000) - 1.0) + 0.0);
  if (iVar17 != 0) {
    if (*param_1 == 0x28) {
      *param_1 = 0x27;
      param_1[1] = (param_1[1] + 1) % 0x28;
      iVar22 = *param_1;
    }
    else {
      iVar22 = *param_1;
    }
    iVar3 = *(int *)(param_2 + 0x34c);
    *param_1 = iVar22 + 1;
    iVar22 = (param_1[1] + iVar22) % 0x28;
    if (iVar3 == 2) {
      auStack_190 = *(undefined1 (*) [16])(param_2 + 0x250);
    }
    else {
      auStack_190 = *(undefined1 (*) [16])(param_2 + 0x75e0);
    }
    uVar20 = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x470);
    uVar21 = *(undefined8 *)(*(int *)(param_2 + 0x8584) + 0x478);
    auStack_180._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
    uStack_178._0_4_ = (float)uVar21;
    uStack_178._4_4_ = (float)((ulong)uVar21 >> 0x20);
    fVar28 = ((float)auStack_180._4_4_ + (float)uStack_178 + uStack_178._4_4_) * DAT_002c17f8;
    fVar27 = (float)auStack_180._4_4_ + fVar26 * (fVar28 - (float)auStack_180._4_4_) + fVar29;
    fVar25 = uStack_178._4_4_ + fVar26 * (fVar28 - uStack_178._4_4_) + fVar29;
    fVar29 = (float)uStack_178 + fVar26 * (fVar28 - (float)uStack_178) + fVar29;
    auStack_180._0_4_ = (undefined4)uVar20;
    if (fVar27 < 0.0) {
      fVar27 = 0.0;
    }
    else if (1.0 < fVar27) {
      fVar27 = 1.0;
    }
    auStack_180._4_4_ = fVar27;
    if (fVar29 < 0.0) {
      fVar29 = 0.0;
    }
    else if (1.0 < fVar29) {
      fVar29 = 1.0;
    }
    uStack_178._0_4_ = fVar29;
    if (fVar25 < 0.0) {
      fVar25 = 0.0;
    }
    else if (1.0 < fVar25) {
      fVar25 = 1.0;
    }
    uStack_178._4_4_ = fVar25;
    if ((float)auStack_180._0_4_ < 0.0) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = (float)auStack_180._0_4_;
      if (1.0 < (float)auStack_180._0_4_) {
        fVar26 = 1.0;
      }
    }
    auStack_180._0_4_ = fVar26;
    piVar24 = param_1 + iVar22 * 0x54 + 0x10;
    auStack_160._4_4_ = fVar29 * 128.0;
    auStack_160._0_4_ = fVar27 * 128.0;
    fStack_158 = fVar25 * 128.0;
    auStack_170._4_4_ = fVar29 * 128.0;
    auStack_170._0_4_ = fVar27 * 128.0;
    fStack_168 = fVar25 * 128.0;
    fStack_164 = fVar33 * 128.0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0xc2c80000;
    uStack_144 = 0;
    FUN_001dc530(DAT_002c17fc,DAT_002c1800,0x40a00000,piVar24,iVar17,1,&uStack_150);
    FUN_001dc608(piVar24);
    FUN_001dc770(fVar36,fVar35,piVar24);
    FUN_001dc788(uVar37,uVar32,piVar24);
    auVar41 = _lqc2(auVar7);
    auVar39 = _qmtc2(0x41700000);
    auVar39 = _vmulbc(auVar41,auVar39);
    auVar39 = _sqc2(auVar39);
    auStack_130._8_4_ = auVar39._8_4_;
    auStack_130._12_4_ = auVar39._12_4_;
    uStack_150 = auVar39._0_4_;
    uStack_14c = auVar39._4_4_;
    uStack_148 = auStack_130._8_4_;
    uStack_144 = auStack_130._12_4_;
    auVar41 = _lqc2(auVar8);
    auVar39 = _qmtc2(0x42b40000);
    auVar39 = _vmulbc(auVar41,auVar39);
    auStack_130 = _sqc2(auVar39);
    uStack_140 = auStack_130._0_4_;
    uStack_13c = auStack_130._4_4_;
    uStack_138 = auStack_130._8_4_;
    uStack_134 = auStack_130._12_4_;
    FUN_001dc890(piVar24,auStack_190,&uStack_150,&uStack_140);
    auVar41 = _lqc2(auVar9);
    auVar39 = _qmtc2(fVar30);
    auVar39 = _vmulbc(auVar41,auVar39);
    auVar39 = _sqc2(auVar39);
    auStack_120._8_4_ = auVar39._8_4_;
    auStack_120._12_4_ = auVar39._12_4_;
    uStack_150 = auVar39._0_4_;
    uStack_14c = auVar39._4_4_;
    uStack_148 = auStack_120._8_4_;
    uStack_144 = auStack_120._12_4_;
    auVar41 = _lqc2(auVar10);
    auVar39 = _qmtc2(uVar31);
    auVar39 = _vmulbc(auVar41,auVar39);
    auVar39 = _sqc2(auVar39);
    auStack_120._8_4_ = auVar39._8_4_;
    auStack_120._12_4_ = auVar39._12_4_;
    uStack_140 = auVar39._0_4_;
    uStack_13c = auVar39._4_4_;
    uStack_138 = auStack_120._8_4_;
    uStack_134 = auStack_120._12_4_;
    auVar41 = _lqc2(auVar11);
    auVar39 = _qmtc2(fVar34);
    auVar39 = _vmulbc(auVar41,auVar39);
    auStack_130 = _sqc2(auVar39);
    auStack_120 = auStack_130;
    FUN_001dcc00(piVar24,auStack_1a0,&uStack_150,&uStack_140,auStack_130);
    FUN_001dc9a8(piVar24);
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    FUN_001dcd68(uVar32,piVar24,auStack_170,auStack_160,&uStack_150,&uStack_140);
    FUN_001dce30(0,piVar24);
    iVar17 = *(int *)(DAT_002859e4 + 0x7c);
    param_1[iVar22 * 0x54 + 0x61] = iStack_110;
    param_1[iVar22 * 0x54 + 0x60] = *(int *)(iVar17 + iVar23 * 4);
  }
  if (*(int *)(param_2 + 0xb4) == 0) {
    iVar23 = *(int *)(param_2 + 0x8584);
    *(undefined4 *)(iVar23 + 0x14) = 0;
    *(undefined4 *)(iVar23 + 0xc) = 0;
    *(undefined4 *)(iVar23 + 0x10) = 0;
    iVar23 = *(int *)(param_2 + 0x34c);
  }
  else {
    iVar23 = *(int *)(param_2 + 0x8584);
    if (*(float *)(iVar23 + 0xc) <= 0.0) {
      *(undefined4 *)(iVar23 + 0x10) = 0;
      *(undefined4 *)(iVar23 + 0x14) = 0x3f800000;
    }
    else if (1.0 <= *(float *)(iVar23 + 0xc)) {
      *(undefined4 *)(iVar23 + 0x10) = 0;
      *(undefined4 *)(iVar23 + 0x14) = 0;
    }
    iVar23 = *(int *)(param_2 + 0x8584);
    fVar26 = *(float *)(iVar23 + 0x14);
    fVar29 = *(float *)(iVar23 + 0x10) * DAT_002c1804;
    fVar27 = *(float *)(iVar23 + 0xc);
    if (fVar26 + fVar29 < fVar27) {
      fVar26 = fVar27 - fVar29;
    }
    else if (fVar27 < fVar26 - fVar29) {
      fVar26 = fVar27 + fVar29;
    }
    *(float *)(iVar23 + 0xc) = fVar26;
    uVar18 = *(uint *)(*(int *)(param_2 + 0x8584) + 0xc);
    auStack_190._0_8_ = (ulong)uVar18 << 0x20;
    auVar14._4_4_ = uVar18;
    auVar14._0_4_ = uVar18;
    auVar14._8_4_ = uVar18;
    auStack_190._8_8_ = auVar14._4_8_;
    *(undefined8 *)(param_1 + 9) = auStack_190._0_8_;
    *(undefined8 *)(param_1 + 0xb) = auStack_190._8_8_;
    iVar23 = *(int *)(param_2 + 0x34c);
  }
  if ((iVar23 == 2) || (iVar23 == 3)) {
    if (*(int *)(param_2 + 0x210) == 0xd) {
      auVar41 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
      auVar39 = _qmtc2(DAT_002c1808);
      auVar39 = _vmulbc(auVar41,auVar39);
      _auStack_180 = _sqc2(auVar39);
      auVar39 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x250));
      auVar41 = _lqc2(_auStack_180);
      auVar39 = _vadd(auVar39,auVar41);
      auStack_190 = _sqc2(auVar39);
      if (iVar23 == 3) {
        auVar41 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
        auVar39 = _qmtc2(DAT_002c1808);
        auVar39 = _vmulbc(auVar41,auVar39);
        _auStack_180 = _sqc2(auVar39);
        auVar39 = _lqc2(auStack_190);
        auVar41 = _lqc2(_auStack_180);
        auVar39 = _vadd(auVar39,auVar41);
        auStack_190 = _sqc2(auVar39);
        iVar23 = param_1[8];
        _auStack_170 = _auStack_180;
      }
      else {
        iVar23 = param_1[8];
        _auStack_170 = auStack_190;
      }
      if (iVar23 == 0) {
        param_1[4] = auStack_190._0_4_;
        param_1[5] = auStack_190._4_4_;
        param_1[6] = auStack_190._8_4_;
        param_1[7] = auStack_190._12_4_;
      }
      param_1[8] = 1;
      uVar18 = FUN_002109b0();
      uVar37 = DAT_002c1820;
      fVar29 = DAT_002c181c;
      fVar26 = DAT_002c180c;
      fVar27 = 50.0;
      uVar32 = 0x3e800000;
      fVar30 = 2.0;
      if (((float)(uVar18 & 0x7fffff | 0x3f800000) - 1.0) + 0.0 < DAT_002c180c) {
        auStack_180 = (undefined1  [8])((ulong)DAT_002c1810 << 0x20);
        auVar16 = auStack_180;
        auVar15._4_4_ = DAT_002c1814;
        auVar15._0_4_ = DAT_002c1810;
        auVar15._8_4_ = DAT_002c1818;
        auVar39._12_4_ = 0;
        auVar39._0_12_ = auVar15;
        _auStack_180 = auVar39 << 0x20;
        auVar39 = _auStack_180;
        fVar30 = 3.0;
        uStack_178 = auVar15._4_8_;
        *(undefined1 (*) [8])(param_1 + 9) = auVar16;
        *(undefined8 *)(param_1 + 0xb) = uStack_178;
        fVar27 = fVar29;
        uVar32 = uVar37;
        _auStack_180 = auVar39;
      }
      uVar18 = FUN_002109b0();
      iVar23 = (int)(fVar27 * fVar26 + ((float)(uVar18 & 0x7fffff | 0x3f800000) - 1.0) + 0.0);
      if (iVar23 != 0) {
        if (*param_1 == 0x28) {
          *param_1 = 0x27;
          param_1[1] = (param_1[1] + 1) % 0x28;
          iVar17 = *param_1;
        }
        else {
          iVar17 = *param_1;
        }
        fVar29 = DAT_002c1824;
        fVar26 = *(float *)(param_2 + 0xe0);
        iVar22 = (param_1[1] + iVar17) % 0x28;
        *param_1 = iVar17 + 1;
        if (fVar29 <= fVar26) {
          fVar26 = fVar29;
        }
        fVar30 = fVar30 * fVar26;
        fVar26 = DAT_002c182c;
        if (fVar30 * DAT_002c1828 < DAT_002c182c) {
          fVar26 = fVar30 * DAT_002c1828;
        }
        _auStack_180 = ZEXT412(0xc4fa0000) << 0x40;
        piVar24 = param_1 + iVar22 * 0x54 + 0x10;
        uStack_178._4_4_ = 0.0;
        FUN_001dc530(DAT_002c1830,DAT_002c1834,0x41400000,piVar24,iVar23,7);
        FUN_001dc608(piVar24);
        FUN_001dc770(0x3f400000,0x3fa00000,piVar24);
        FUN_001dc788(DAT_002c1838,uVar32,piVar24);
        if (*(int *)(param_2 + 0x34c) == 3) {
          FUN_001dc800(piVar24,auStack_190,param_1 + 4);
        }
        else {
          auVar41 = _lqc2(auVar12);
          auVar39 = _qmtc2(0x41700000);
          auVar39 = _vmulbc(auVar41,auVar39);
          _auStack_180 = _sqc2(auVar39);
          auVar41 = _lqc2(auVar13);
          auVar39 = _qmtc2(0x42b40000);
          auVar39 = _vmulbc(auVar41,auVar39);
          _auStack_170 = _sqc2(auVar39);
          _auStack_160 = _auStack_170;
          FUN_001dc890(piVar24,auStack_190,auStack_180,auStack_170);
        }
        auVar41 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x130));
        auVar39 = _qmtc2(fVar30 * DAT_002c183c);
        auVar39 = _vmulbc(auVar41,auVar39);
        _auStack_170 = _sqc2(auVar39);
        auVar41 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x110));
        auVar39 = _qmtc2(fVar30 * DAT_002c1840);
        auVar39 = _vmulbc(auVar41,auVar39);
        _auStack_160 = _sqc2(auVar39);
        piVar24 = param_1 + iVar22 * 0x54 + 0x10;
        auVar39 = _lqc2(_auStack_170);
        auVar41 = _lqc2(_auStack_160);
        auVar39 = _vadd(auVar39,auVar41);
        _auStack_180 = _sqc2(auVar39);
        auVar41 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x120));
        auVar39 = _qmtc2(fVar26);
        auVar39 = _vmulbc(auVar41,auVar39);
        auVar39 = _sqc2(auVar39);
        auStack_120._8_4_ = auVar39._8_4_;
        auStack_120._12_4_ = auVar39._12_4_;
        uStack_150 = auVar39._0_4_;
        uStack_14c = auVar39._4_4_;
        uStack_148 = auStack_120._8_4_;
        uStack_144 = auStack_120._12_4_;
        auVar41 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x110));
        auVar39 = _qmtc2(fVar30 * DAT_002c1844);
        auVar39 = _vmulbc(auVar41,auVar39);
        auVar39 = _sqc2(auVar39);
        auStack_120._8_4_ = auVar39._8_4_;
        auStack_120._12_4_ = auVar39._12_4_;
        uStack_140 = auVar39._0_4_;
        uStack_13c = auVar39._4_4_;
        uStack_138 = auStack_120._8_4_;
        uStack_134 = auStack_120._12_4_;
        auVar41 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x130));
        auVar39 = _qmtc2(fVar30 * DAT_002c1844);
        auVar39 = _vmulbc(auVar41,auVar39);
        auStack_130 = _sqc2(auVar39);
        auStack_120 = auStack_130;
        FUN_001dcc00(piVar24,auStack_180,&uStack_150,&uStack_140,auStack_130);
        FUN_001dc9a8(piVar24);
        auVar39 = _auStack_170;
        auStack_170._0_4_ = 0x43480000;
        auVar41 = _auStack_170;
        _auStack_180 = ZEXT812(0x42b4000043480000);
        uStack_178._4_4_ = 80.0;
        fStack_164 = auVar39._12_4_;
        auStack_170 = auVar41._0_8_;
        fStack_168 = 90.0;
        auStack_170 = (undefined1  [8])0x42b4000043480000;
        fStack_164 = 0.0;
        _auStack_160 = ZEXT816(0x4248000000000000);
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = 0x42480000;
        uStack_144 = 0;
        FUN_001dcd68(uVar32,piVar24,auStack_180,auStack_170,auStack_160,&uStack_150);
        FUN_001dce30(DAT_002c1848,piVar24);
        iVar23 = **(int **)(DAT_002859e4 + 0x7c);
        param_1[iVar22 * 0x54 + 0x61] = 5;
        param_1[iVar22 * 0x54 + 0x60] = iVar23;
      }
      param_1[4] = auStack_190._0_4_;
      param_1[5] = auStack_190._4_4_;
      param_1[6] = auStack_190._8_4_;
      param_1[7] = auStack_190._12_4_;
    }
    else {
      param_1[8] = 0;
    }
  }
  else {
    param_1[8] = 0;
  }
  fVar26 = DAT_002c184c;
  pfVar19 = (float *)(param_1 + 9);
  param_1[9] = (int)((float)param_1[9] + 0.0);
  fVar29 = (float)param_1[10] + fVar26;
  param_1[10] = (int)fVar29;
  param_1[0xb] = (int)((float)param_1[0xb] + fVar26);
  param_1[0xc] = (int)((float)param_1[0xc] + fVar26);
  if (fVar29 < 0.0) {
    fVar29 = 0.0;
  }
  else if (1.0 < fVar29) {
    fVar29 = 1.0;
  }
  fVar26 = (float)param_1[0xb];
  param_1[10] = (int)fVar29;
  if (fVar26 < 0.0) {
    fVar26 = 0.0;
    fVar29 = (float)param_1[0xc];
  }
  else {
    fVar29 = (float)param_1[0xc];
    if (1.0 < fVar26) {
      fVar26 = 1.0;
    }
  }
  param_1[0xb] = (int)fVar26;
  if (fVar29 < 0.0) {
    fVar29 = 0.0;
    fVar26 = *pfVar19;
  }
  else {
    if (1.0 < fVar29) {
      fVar29 = 1.0;
    }
    fVar26 = *pfVar19;
  }
  param_1[0xc] = (int)fVar29;
  if (fVar26 < 0.0) {
    fVar26 = 0.0;
  }
  else if (1.0 < fVar26) {
    fVar26 = 1.0;
  }
  *pfVar19 = fVar26;
  return;
}

