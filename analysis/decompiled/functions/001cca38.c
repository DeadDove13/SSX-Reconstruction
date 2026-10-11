/* Ghidra pseudocode. PS2 address: 001cca38. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001ccf1c) */
/* WARNING: Removing unreachable block (ram,0x001ccf74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cca38(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  undefined *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_280 [8];
  float fStack_278;
  undefined4 uStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [8];
  float fStack_1a8;
  float fStack_1a4;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [8];
  float fStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [4];
  float afStack_17c [7];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  float fStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 *puStack_128;
  int iStack_124;
  float *pfStack_120;
  float *pfStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 *puStack_110;
  float *pfStack_10c;
  float *pfStack_108;
  float *pfStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  
  iVar26 = *(int *)(DAT_002859e4 + 0x24);
  iVar6 = (int)param_1;
  uStack_260 = *DAT_00296264;
  uStack_258 = DAT_00296264[1];
  puStack_128 = (undefined4 *)
                (iVar6 + *(int *)(iVar6 + 0x1468) * 0x700 + 0x3cd0 +
                *(int *)(iVar6 + 0x1474) * 0x380);
  uStack_250 = DAT_00296264[2];
  uStack_248 = DAT_00296264[3];
  uStack_240 = DAT_00296264[4];
  uStack_238 = DAT_00296264[5];
  uStack_230 = DAT_00296264[6];
  uStack_228 = DAT_00296264[7];
  fVar27 = *(float *)(iVar26 + 0x2c) * DAT_002c361c;
  FUN_00218128(*(float *)(iVar26 + 0x28) * DAT_002c361c,&fStack_140,&fStack_13c);
  FUN_00218128(fVar27,&uStack_138,&fStack_134);
  fStack_210 = (float)uStack_230;
  fStack_20c = uStack_230._4_4_;
  uStack_208 = (float)uStack_228;
  uStack_204 = uStack_228._4_4_;
  FUN_001110c0(0xbf800000,&fStack_220,&fStack_210);
  fVar20 = fStack_220 * (float)uStack_250;
  fVar22 = fStack_220 * (float)uStack_240;
  fVar27 = fStack_21c * uStack_240._4_4_;
  fVar18 = fStack_220 * (float)uStack_230;
  fStack_220 = fStack_220 * (float)uStack_260 + fStack_21c * uStack_260._4_4_ +
               fStack_218 * (float)uStack_258 + fStack_214 * uStack_258._4_4_;
  fStack_1f4 = fVar18 + fStack_21c * uStack_230._4_4_ + fStack_218 * (float)uStack_228 +
               fStack_214 * uStack_228._4_4_;
  fStack_21c = fVar20 + fStack_21c * uStack_250._4_4_ + fStack_218 * (float)uStack_248 +
               fStack_214 * uStack_248._4_4_;
  fStack_218 = fVar22 + fVar27 + fStack_218 * (float)uStack_238 + fStack_214 * uStack_238._4_4_;
  fStack_214 = 1.0;
  fVar27 = *(float *)(iVar26 + 0x30);
  if (*(float *)(iVar6 + 0x1ec) < fVar27) {
    fVar18 = *(float *)(iVar6 + 0x1ec) - 1.0;
    fVar20 = *(float *)(iVar26 + 0x14) * (fVar18 / fVar27);
  }
  else {
    fVar20 = *(float *)(iVar26 + 0x14);
    fVar18 = fVar27;
  }
  fStack_210 = fStack_13c * fStack_134;
  fStack_20c = fStack_140 * fStack_134;
  uStack_208 = uStack_138;
  uStack_204 = 0x3f800000;
  auStack_280._4_4_ = fStack_20c;
  auStack_280._0_4_ = fStack_210;
  fStack_278 = (float)uStack_138;
  uStack_274 = 0x3f800000;
  auVar32 = _lqc2(_auStack_280);
  auVar31 = _qmtc2(fVar18);
  auVar31 = _vmulbc(auVar32,auVar31);
  auVar31 = _sqc2(auVar31);
  auVar32 = _lqc2(auVar31);
  auVar31._4_4_ = fStack_21c;
  auVar31._0_4_ = fStack_220;
  auVar31._8_4_ = fStack_218;
  auVar31._12_4_ = 0x3f800000;
  auVar31 = _lqc2(auVar31);
  auVar31 = _vadd(auVar32,auVar31);
  auVar31 = _sqc2(auVar31);
  _auStack_280 = auVar31._0_12_;
  uStack_274 = 0x3f800000;
  if (DAT_00292770 == 0) {
    DAT_00292770 = 1;
    auVar31 = _lqc2(_DAT_002926d0);
    auVar32 = _lqc2(_DAT_002926e0);
    auVar33 = _lqc2(_DAT_002926f0);
    auVar34 = _lqc2(_DAT_00292700);
    auVar35 = _lqc2(_DAT_00292690);
    auVar36 = _lqc2(_DAT_002926a0);
    auVar37 = _lqc2(_DAT_002926b0);
    auVar38 = _lqc2(_DAT_002926c0);
    _vmulabc(auVar31,auVar35);
    _vmaddabc(auVar32,auVar35);
    _vmaddabc(auVar33,auVar35);
    auVar35 = _vmaddbc(auVar34,auVar35);
    _vmulabc(auVar31,auVar36);
    _vmaddabc(auVar32,auVar36);
    _vmaddabc(auVar33,auVar36);
    auVar36 = _vmaddbc(auVar34,auVar36);
    _vmulabc(auVar31,auVar37);
    _vmaddabc(auVar32,auVar37);
    _vmaddabc(auVar33,auVar37);
    auVar37 = _vmaddbc(auVar34,auVar37);
    _vmulabc(auVar31,auVar38);
    _vmaddabc(auVar32,auVar38);
    _vmaddabc(auVar33,auVar38);
    auVar31 = _vmaddbc(auVar34,auVar38);
    _auStack_1b0 = _sqc2(auVar35);
    auStack_1a0 = _sqc2(auVar36);
    _auStack_190 = _sqc2(auVar37);
    _auStack_180 = _sqc2(auVar31);
    auStack_1e0 = auStack_1a0._0_8_;
    fStack_1d0 = (float)auStack_190._0_4_;
    fStack_1cc = (float)auStack_190._4_4_;
    fStack_1c8 = fStack_188;
    uStack_1c4 = uStack_184;
    fStack_1c0 = (float)auStack_180;
    fStack_1bc = afStack_17c[0];
    fStack_1b8 = afStack_17c[1];
    uStack_1b4 = afStack_17c[2];
    DAT_00292730 = auStack_1b0;
    DAT_00292738 = auStack_1b0._8_8_;
    DAT_00292740 = auStack_1e0;
    uStack_1d8 = auStack_1a0._8_8_;
    DAT_00292748 = uStack_1d8;
    DAT_00292750 = auStack_190;
    DAT_00292758 = auStack_190._8_8_;
    DAT_00292760 = auStack_180._0_8_;
    DAT_00292768 = auStack_180._8_8_;
  }
  auVar32._8_8_ = DAT_00292738;
  auVar32._0_8_ = DAT_00292730;
  auVar31 = _lqc2(auVar32);
  auVar33._8_8_ = DAT_00292748;
  auVar33._0_8_ = DAT_00292740;
  auVar32 = _lqc2(auVar33);
  auVar34._8_8_ = DAT_00292758;
  auVar34._0_8_ = DAT_00292750;
  auVar33 = _lqc2(auVar34);
  auVar35._8_8_ = DAT_00292768;
  auVar35._0_8_ = DAT_00292760;
  auVar34 = _lqc2(auVar35);
  auVar35 = _lqc2(_auStack_280);
  _vmulabc(auVar31,auVar35);
  _vmaddabc(auVar32,auVar35);
  _vmaddabc(auVar33,auVar35);
  auVar31 = _vmaddbc(auVar34,auVar35);
  _auStack_1e0 = _sqc2(auVar31);
  uVar4 = 0;
  fStack_1e8 = (float)uStack_1d8;
  fStack_1e4 = 1.0 / uStack_1d8._4_4_;
  fStack_1f0 = auStack_1e0._0_4_ * fStack_1e4;
  fStack_1ec = auStack_1e0._4_4_ * fStack_1e4;
  if (fStack_1f0 < DAT_00292710) {
    uVar4 = 2;
  }
  if (DAT_00292720 < fStack_1f0) {
    uVar4 = uVar4 | 1;
  }
  if (fStack_1ec < DAT_00292714) {
    uVar4 = uVar4 | 8;
  }
  if (DAT_00292724 < fStack_1ec) {
    uVar4 = uVar4 | 4;
  }
  if (fStack_1e4 < 0.0) {
    uVar4 = uVar4 ^ 0x2f;
  }
  else {
    if (DAT_00292718 < (float)uStack_1d8) {
      uVar4 = uVar4 | 0x20;
    }
    if ((float)uStack_1d8 < DAT_00292728) {
      uVar4 = uVar4 | 0x10;
    }
  }
  if (uVar4 == 0) {
    *puStack_128 = 1;
    fStack_200 = fStack_220;
    fStack_1fc = fStack_21c;
    fStack_1f8 = fStack_218;
    FUN_001c5c20(&fStack_220,param_1,auStack_280);
    auVar31 = _auStack_1e0;
    fStack_270 = fStack_220;
    fStack_26c = fStack_21c;
    fStack_268 = fStack_218;
    uStack_264 = fStack_214;
    iVar24 = (int)(fStack_220 - (2048.0 - (float)(*(uint *)(iVar6 + 0x240) >> 1)));
    iVar25 = (int)(fStack_21c - (2048.0 - (float)(*(uint *)(iVar6 + 0x244) >> 1)));
    iVar26 = (int)fStack_218;
    if (iVar26 < 0) {
      iVar26 = 0;
    }
    else if (0xffffff < iVar26) {
      iVar26 = 0xffffff;
    }
    iVar6 = iVar6 + *(int *)(iVar6 + 0x1474) * 0x10 + *(int *)(iVar6 + 0x1468) * 0x20;
    iVar1 = *(int *)(iVar6 + 0x1478);
    iVar2 = *(int *)(iVar6 + 0x1480);
    iStack_124 = *(int *)(iVar6 + 0x1484);
    iVar6 = *(int *)(iVar6 + 0x147c);
    iVar7 = iVar1 + iVar2 + -1;
    iVar15 = iVar1;
    if ((iVar1 <= iVar24) && (iVar15 = iVar24, iVar7 < iVar24)) {
      iVar15 = iVar7;
    }
    iVar7 = iVar6 + iStack_124 + -1;
    iVar24 = iVar6;
    if ((iVar6 <= iVar25) && (iVar24 = iVar25, iVar7 < iVar25)) {
      iVar24 = iVar7;
    }
    iVar9 = iVar15 + -8;
    iVar25 = 8;
    iVar7 = 8;
    iVar8 = iVar24 + -8;
    if (iVar9 < iVar1) {
      iVar25 = iVar1 - iVar9;
      iVar9 = iVar9 + iVar25;
      iVar25 = 8 - iVar25;
    }
    else if ((int)(float)(iVar1 + iVar2) < iVar15 + 8) {
      iVar25 = iVar9 - (iVar1 + iVar2 + -0x10);
      iVar9 = iVar9 - iVar25;
      iVar25 = iVar25 + 8;
    }
    iVar3 = iVar6 - iVar8;
    if (iVar8 < iVar6) {
      iVar8 = iVar8 + iVar3;
      iVar7 = 8 - iVar3;
    }
    else if ((int)(float)(iVar6 + iStack_124) < iVar24 + 8) {
      iVar7 = iVar8 - (iVar6 + iStack_124 + -0x10);
      iVar8 = iVar8 - iVar7;
      iVar7 = iVar7 + 8;
    }
    iStack_118 = iVar2 + -1;
    fStack_21c = 0.0;
    fStack_220 = 1.0;
    fStack_218 = 0.0;
    fVar30 = (float)iVar1;
    fStack_214 = 0.0;
    iStack_114 = iStack_124 + -1;
    puStack_128[3] = iVar26;
    pfStack_108 = (float *)(puStack_128 + 10);
    puStack_128[4] = iVar9;
    fStack_200 = (float)uStack_260 * 1.0 + uStack_260._4_4_ * 0.0 + (float)uStack_258 * 0.0 +
                 uStack_258._4_4_ * 0.0;
    puStack_128[5] = iVar8;
    puStack_128[6] = iVar25;
    pfStack_104 = (float *)(puStack_128 + 0xb);
    fStack_1fc = (float)uStack_250 * 1.0 + uStack_250._4_4_ * 0.0 + (float)uStack_248 * 0.0 +
                 uStack_248._4_4_ * 0.0;
    puStack_128[7] = iVar7;
    puStack_110 = puStack_128 + 0x6e;
    pfStack_10c = (float *)(puStack_128 + 0x6f);
    fStack_1c0 = (float)auStack_280._0_4_;
    fStack_1bc = (float)auStack_280._4_4_;
    fStack_1b8 = fStack_278;
    fStack_20c = 1.0;
    fStack_210 = 0.0;
    uStack_208 = 0;
    uStack_204 = 0;
    puStack_128[1] = iVar15;
    puStack_128[2] = iVar24;
    fStack_1f8 = (float)uStack_240 * 1.0 + uStack_240._4_4_ * 0.0 + (float)uStack_238 * 0.0 +
                 uStack_238._4_4_ * 0.0;
    fStack_1f0 = (float)uStack_260 * 0.0 + uStack_260._4_4_ * 1.0 + (float)uStack_258 * 0.0 +
                 uStack_258._4_4_ * 0.0;
    fStack_1ec = (float)uStack_250 * 0.0 + uStack_250._4_4_ * 1.0 + (float)uStack_248 * 0.0 +
                 uStack_248._4_4_ * 0.0;
    fStack_1e8 = (float)uStack_240 * 0.0 + uStack_240._4_4_ * 1.0 + (float)uStack_238 * 0.0 +
                 uStack_238._4_4_ * 0.0;
    fStack_1d0 = fStack_1f0 * fVar20;
    fStack_1cc = fStack_1ec * fVar20;
    fStack_1c8 = fStack_1e8 * fVar20;
    auStack_1e0._4_4_ = fStack_1fc * fVar20;
    auStack_1e0._0_4_ = fStack_200 * fVar20;
    uStack_1d8._4_4_ = auVar31._12_4_;
    uStack_1d8._0_4_ = fStack_1f8 * fVar20;
    auStack_1a0._0_12_ = auStack_280._0_12_;
    auStack_1b0._4_4_ = fStack_1cc;
    auStack_1b0._0_4_ = fStack_1d0;
    fStack_1a8 = fStack_1c8;
    fStack_1a4 = (float)uStack_230 * 0.0 + uStack_230._4_4_ * 1.0 + (float)uStack_228 * 0.0 +
                 uStack_228._4_4_ * 0.0;
    auStack_1a0._12_4_ = 0x3f800000;
    FUN_001c5c20(auStack_1b0,param_1,auStack_1a0);
    auVar31 = _auStack_180;
    auStack_190._4_4_ = fStack_1bc + (float)auStack_1e0._4_4_;
    auStack_190._0_4_ = fStack_1c0 + (float)auStack_1e0._0_4_;
    afStack_17c[0] = fStack_1bc + (float)auStack_1e0._4_4_;
    auStack_180 = (undefined1  [4])(fStack_1c0 + (float)auStack_1e0._0_4_);
    fStack_188 = fStack_1b8 + (float)uStack_1d8;
    afStack_17c[2] = auVar31._12_4_;
    afStack_17c[1] = fStack_1b8 + (float)uStack_1d8;
    uStack_184 = 0x3f800000;
    FUN_001c5c20(auStack_1a0,param_1,auStack_190);
    pfVar16 = (float *)auStack_180;
    afStack_17c[3] = fStack_1c0 + fStack_1d0;
    afStack_17c[4] = fStack_1bc + fStack_1cc;
    afStack_17c[5] = fStack_1b8 + fStack_1c8;
    afStack_17c[0] = afStack_17c[4];
    auStack_180 = (undefined1  [4])afStack_17c[3];
    afStack_17c[1] = afStack_17c[5];
    afStack_17c[2] = 1.0;
    FUN_001c5c20(auStack_190,param_1,pfVar16);
    pfStack_120 = &fStack_130;
    pfStack_11c = &fStack_12c;
    auVar32 = _lqc2(_auStack_1b0);
    auVar31 = _qmtc2(0x41800000);
    auVar31 = _vmulbc(auVar32,auVar31);
    auVar31 = _sqc2(auVar31);
    auStack_160._12_4_ = auVar31._12_4_;
    afStack_17c[1] = auVar31._8_4_;
    puStack_128[0xd4] = auVar31._0_4_;
    puStack_128[0xd5] = auVar31._4_4_;
    puStack_128[0xd6] = afStack_17c[1];
    puStack_128[0xd7] = auStack_160._12_4_;
    auVar31 = _lqc2(auStack_1a0);
    auVar32 = _lqc2(_auStack_1b0);
    auVar31 = _vsub(auVar31,auVar32);
    auVar31 = _sqc2(auVar31);
    pfVar13 = (float *)(auStack_180 + 4);
    pfVar17 = (float *)auStack_160;
    auVar32 = _lqc2(auVar31);
    auVar31 = _qmtc2(0x41800000);
    auVar31 = _vmulbc(auVar32,auVar31);
    auStack_150 = _sqc2(auVar31);
    auVar32 = auStack_150;
    iVar26 = 3;
    afStack_17c[1] = auStack_150._8_4_;
    puStack_128[0xd8] = auStack_150._0_4_;
    puStack_128[0xd9] = auStack_150._4_4_;
    puStack_128[0xda] = afStack_17c[1];
    puStack_128[0xdb] = auStack_150._12_4_;
    auVar31 = _lqc2(_auStack_190);
    auVar33 = _lqc2(_auStack_1b0);
    auVar31 = _vsub(auVar31,auVar33);
    auVar31 = _sqc2(auVar31);
    fVar22 = ((float)(iVar15 - iVar1) + (float)(iVar15 - iVar1)) / (float)iVar2 - 1.0;
    auVar33 = _lqc2(auVar31);
    auVar31 = _qmtc2(0x41800000);
    auVar31 = _vmulbc(auVar33,auVar31);
    auStack_160 = _sqc2(auVar31);
    auVar31 = auStack_160;
    fVar20 = ((float)(iVar24 - iVar6) + (float)(iVar24 - iVar6)) / (float)iStack_124 - 1.0;
    afStack_17c[1] = auStack_160._8_4_;
    fVar18 = afStack_17c[1];
    puStack_128[0xdc] = auStack_160._0_4_;
    puStack_128[0xdd] = auStack_160._4_4_;
    puStack_128[0xde] = afStack_17c[1];
    puStack_128[0xdf] = auStack_160._12_4_;
    fVar27 = DAT_002c3620;
    do {
      iVar26 = iVar26 + -1;
    } while (iVar26 != -1);
    afStack_17c[5] = 1.0;
    iVar26 = 3;
    afStack_17c[6] = -1.0;
    afStack_17c[1] = -1.0;
    _auStack_180 = 0x3f8000003f800000;
    afStack_17c[2] = 1.0;
    afStack_17c[3] = -1.0;
    afStack_17c[4] = -1.0;
    uVar28 = auStack_160._12_4_;
    fVar29 = DAT_002c3624;
    pfVar11 = pfVar17;
    auStack_160 = auVar31;
    auStack_150 = auVar32;
    do {
      fStack_12c = *pfVar16 - fVar22;
      fStack_130 = *pfVar13 - fVar20;
      if (0.0 < fStack_12c) {
        puVar19 = (undefined *)FUN_00218510(fStack_130 / fStack_12c);
      }
      else if (fStack_12c < 0.0) {
        fVar23 = (float)FUN_00218510(fStack_130 / fStack_12c);
        puVar19 = (undefined *)(fVar23 + fVar27);
      }
      else {
        puVar19 = DAT_002c362c;
        if (fStack_130 <= 0.0) {
          puVar19 = PTR_DAT_002c3628;
        }
      }
      if ((float)puVar19 < 0.0) {
        puVar19 = (undefined *)((float)puVar19 + fVar29);
      }
      *pfVar11 = (float)puVar19;
      pfVar13 = pfVar13 + 2;
      pfVar11 = pfVar11 + 1;
      iVar26 = iVar26 + -1;
      pfVar16 = pfVar16 + 2;
    } while (-1 < iVar26);
    pfVar10 = (float *)&DAT_002b73c8;
    fVar27 = 1.0;
    puVar12 = &DAT_002b7460;
    lVar5 = 0;
    fVar29 = 0.0;
    iVar24 = 0;
    uStack_f8 = fVar18;
    uStack_f4 = uVar28;
    pfVar13 = pfStack_104;
    pfVar16 = pfStack_10c;
    puVar14 = puStack_110;
    pfVar11 = pfStack_108;
    iVar26 = 0;
    do {
      iVar25 = iVar26;
      if (lVar5 < 4) {
        fVar18 = *pfVar17;
        if (*pfVar10 <= fVar18) {
          fVar18 = *pfVar10;
          goto LAB_001cd7e0;
        }
        pfVar17 = pfVar17 + 1;
        lVar5 = (long)((int)lVar5 + 1);
        uVar28 = puVar12[-1];
        pfVar10 = pfVar10 + -1;
        puVar12 = puVar12 + -1;
        iVar24 = iVar24 + -1;
      }
      else {
        fVar18 = *pfVar10;
LAB_001cd7e0:
        uVar28 = *puVar12;
      }
      uStack_100 = (undefined4)lVar5;
      uStack_fc = (undefined4)((ulong)lVar5 >> 0x20);
      FUN_00218128(fVar18,pfStack_120,pfStack_11c);
      fVar23 = 10.0;
      lVar5 = CONCAT44(uStack_fc,uStack_100);
      fVar18 = fVar27;
      if ((0.0 < fStack_12c) || (fVar18 = -1.0, fStack_12c < 0.0)) {
        fVar23 = (fVar18 - fVar22) / fStack_12c;
      }
      fVar21 = 10.0;
      fVar18 = fVar27;
      if ((0.0 < fStack_130) || (fVar18 = -1.0, fStack_130 < 0.0)) {
        fVar21 = (fVar18 - fVar20) / fStack_130;
      }
      if (fVar23 < fVar21) {
        fVar18 = -1.0;
        fVar23 = fVar20 + fVar23 * fStack_130;
        if (fVar29 < fStack_12c) {
          fVar18 = 1.0;
        }
      }
      else {
        fVar23 = -1.0;
        fVar18 = fVar22 + fVar21 * fStack_12c;
        if (fVar29 < fStack_130) {
          fVar23 = 1.0;
        }
      }
      fVar21 = (fVar18 - fVar22) * (fVar18 - fVar22) + (fVar23 - fVar20) * (fVar23 - fVar20);
      if (3.0 < fVar21) {
        fVar21 = 3.0;
      }
      iVar24 = iVar24 + 1;
      iVar26 = iVar25 + 1;
      puVar12 = puVar12 + 1;
      pfVar10 = pfVar10 + 1;
      *pfVar11 = fVar30 + (fVar18 + fVar27) * 0.5 * (float)iStack_118;
      pfVar11 = pfVar11 + 2;
      *pfVar13 = (float)iVar6 + (fVar23 + fVar27) * 0.5 * (float)iStack_114;
      *puVar14 = uVar28;
      pfVar13 = pfVar13 + 2;
      *pfVar16 = (3.0 - fVar21) / 3.0;
      puVar14 = puVar14 + 2;
      pfVar16 = pfVar16 + 2;
    } while (iVar24 < 0x25);
    puStack_128[iVar26 * 2 + 10] = puStack_128[10];
    puStack_128[9] = iVar25 + 2;
    puStack_128[iVar26 * 2 + 0xb] = pfStack_108[1];
    puStack_110[iVar26 * 2] = puStack_128[0x6e];
    pfStack_10c[iVar26 * 2] = (float)puStack_128[0x6f];
  }
  else {
    *puStack_128 = 0;
  }
  return;
}

