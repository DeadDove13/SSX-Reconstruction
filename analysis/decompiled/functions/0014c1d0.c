/* Ghidra pseudocode. PS2 address: 0014c1d0. Not validated source. */

void FUN_0014c1d0(int *param_1)

{
  int iVar1;
  float *pfVar2;
  short sVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_1a0 [8];
  float fStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [8];
  float fStack_188;
  undefined1 auStack_180 [8];
  float fStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  float *pfStack_f0;
  undefined4 uStack_ec;
  float *pfStack_e8;
  float fStack_e4;
  float fStack_e0;
  int iStack_dc;
  int iStack_d8;
  
  iStack_dc = *(int *)(*param_1 + 0x20c);
  uVar7 = *(uint *)(*(int *)(param_1[4] + 8) + 0xc) >> 0x13 & 0x1f;
  iStack_d8 = uVar7 * 6;
  *(char *)(*param_1 + 0x1c) = (char)uVar7;
  FUN_00147670(*(undefined4 *)(*param_1 + 0x1e8),param_1[4],&pfStack_f0,&uStack_ec,&pfStack_e8);
  iVar6 = *param_1;
  *(float *)(iVar6 + 0x1c4) = *pfStack_f0;
  *(float *)(iVar6 + 0x1c8) = pfStack_f0[1];
  *(float *)(iVar6 + 0x1cc) = pfStack_f0[2];
  if (pfStack_e8 != (float *)0x0) {
    FUN_0023bac0(iVar6 + 0xbc,pfStack_e8,uVar7 * 0xc);
    *(undefined4 *)(*param_1 + 0x2c) = 1;
  }
  iVar6 = 1;
  FUN_0023bac0(0x2c66a0,uStack_ec,iStack_d8);
  if (param_1[3] < 2) {
LAB_0014c4b0:
    if ((*(byte *)(*(int *)(param_1[4] + 8) + 0xf) & 0x1f) < 2) {
      fVar15 = *(float *)(*param_1 + 0x14) * DAT_002c2414 + 0.5;
      fVar8 = (float)(int)fVar15;
      if (fVar15 < fVar8) {
        fVar8 = fVar8 - 1.0;
      }
      DAT_002c66a4 = DAT_002c66a4 + ((ushort)(int)fVar8 & 0x3fff);
    }
    _auStack_1a0 = ZEXT812(0x3f800000);
    _auStack_180 = ZEXT412(0x3f800000) << 0x40;
    auStack_170._0_12_ = ZEXT812(0);
    uStack_194 = 0;
    _auStack_190 = ZEXT816(0x3f80000000000000);
    uStack_174 = 0;
    auStack_170._12_4_ = 0x3f800000;
    uVar13 = 0;
    FUN_00218128(*(undefined4 *)(*param_1 + 0x14),&fStack_e4,&fStack_e0);
    fVar12 = 1.0 - fStack_e0;
    fVar8 = fVar12 * 0.0;
    fVar15 = fVar12 * 0.0;
    fVar12 = fVar12 * 1.0;
    auVar16 = _lqc2(_auStack_1a0);
    auVar17 = _lqc2(_auStack_190);
    auVar18 = _lqc2(_auStack_180);
    auVar19 = _lqc2(auStack_170);
    auVar20._4_4_ = fVar15 * 0.0 - fStack_e4 * 1.0;
    auVar20._0_4_ = fVar8 * 0.0 + fStack_e0;
    auVar20._8_4_ = fVar12 * 0.0 + fStack_e4 * 0.0;
    auVar20._12_4_ = uVar13;
    auVar20 = _lqc2(auVar20);
    auVar21._4_4_ = fVar15 * 0.0 + fStack_e0;
    auVar21._0_4_ = fVar8 * 0.0 + fStack_e4 * 1.0;
    auVar21._8_4_ = fVar12 * 0.0 - fStack_e4 * 0.0;
    auVar21._12_4_ = uVar13;
    auVar21 = _lqc2(auVar21);
    auVar22._4_4_ = fVar15 * 1.0 + fStack_e4 * 0.0;
    auVar22._0_4_ = fVar8 * 1.0 - fStack_e4 * 0.0;
    auVar22._8_4_ = fVar12 * 1.0 + fStack_e0;
    auVar22._12_4_ = uVar13;
    auVar22 = _lqc2(auVar22);
    auVar23._4_4_ = uVar13;
    auVar23._0_4_ = uVar13;
    auVar23._8_4_ = uVar13;
    auVar23._12_4_ = 0x3f800000;
    auVar23 = _lqc2(auVar23);
    _vmulabc(auVar16,auVar20);
    _vmaddabc(auVar17,auVar20);
    _vmaddabc(auVar18,auVar20);
    auVar20 = _vmaddbc(auVar19,auVar20);
    _vmulabc(auVar16,auVar21);
    _vmaddabc(auVar17,auVar21);
    _vmaddabc(auVar18,auVar21);
    auVar21 = _vmaddbc(auVar19,auVar21);
    _vmulabc(auVar16,auVar22);
    _vmaddabc(auVar17,auVar22);
    _vmaddabc(auVar18,auVar22);
    auVar22 = _vmaddbc(auVar19,auVar22);
    _vmulabc(auVar16,auVar23);
    _vmaddabc(auVar17,auVar23);
    _vmaddabc(auVar18,auVar23);
    auVar23 = _vmaddbc(auVar19,auVar23);
    auVar20 = _sqc2(auVar20);
    auVar21 = _sqc2(auVar21);
    auVar22 = _sqc2(auVar22);
    _sqc2(auVar23);
    auStack_1a0._0_4_ = auVar20._0_4_;
    auStack_1a0._4_4_ = auVar20._4_4_;
    fStack_198 = auVar20._8_4_;
    auStack_190._0_4_ = auVar21._0_4_;
    auStack_190._4_4_ = auVar21._4_4_;
    fStack_188 = auVar21._8_4_;
    auStack_180._0_4_ = auVar22._0_4_;
    auStack_180._4_4_ = auVar22._4_4_;
    fStack_178 = auVar22._8_4_;
    iVar6 = *param_1;
    fVar15 = *(float *)(iVar6 + 0x1c4);
    fVar12 = *(float *)(iVar6 + 0x1c4);
    fVar8 = *(float *)(iVar6 + 0x1c8);
    *(float *)(iVar6 + 0x1c4) =
         (float)auStack_1a0._0_4_ * *(float *)(iVar6 + 0x1c4) +
         (float)auStack_190._0_4_ * *(float *)(iVar6 + 0x1c8) +
         (float)auStack_180._0_4_ * *(float *)(iVar6 + 0x1cc);
    *(float *)(iVar6 + 0x1c8) =
         (float)auStack_1a0._4_4_ * fVar15 + (float)auStack_190._4_4_ * *(float *)(iVar6 + 0x1c8) +
         (float)auStack_180._4_4_ * *(float *)(iVar6 + 0x1cc);
    *(float *)(iVar6 + 0x1cc) =
         fStack_198 * fVar12 + fStack_188 * fVar8 + fStack_178 * *(float *)(iVar6 + 0x1cc);
    if (iStack_dc == 1) {
      if ((*(byte *)(*(int *)(param_1[4] + 8) + 0xf) & 0x1f) < 2) {
        *(undefined2 *)(iVar6 + 0x38) = DAT_002c66a0;
        sVar3 = -DAT_002c66a2;
        *(float *)(iVar6 + 0x1c8) = -*(float *)(iVar6 + 0x1c8);
        *(short *)(iVar6 + 0x3a) = sVar3;
        *(short *)(iVar6 + 0x3c) = -0x2000 - DAT_002c66a4;
        if (uVar7 == 1) {
          return;
        }
        *(short *)(iVar6 + 0x3e) = -0x2000 - DAT_002c66a6;
        *(undefined2 *)(iVar6 + 0x40) = DAT_002c66a8;
        *(short *)(iVar6 + 0x42) = -0x2000 - DAT_002c66aa;
        *(short *)(iVar6 + 0x44) = -DAT_002c66ac;
        *(short *)(iVar6 + 0x46) = -DAT_002c66ae;
        *(undefined2 *)(iVar6 + 0x48) = DAT_002c66b0;
        *(short *)(iVar6 + 0x4a) = -DAT_002c66b2;
        *(short *)(iVar6 + 0x4c) = -DAT_002c66b4;
        *(undefined2 *)(iVar6 + 0x4e) = DAT_002c66b6;
        *(short *)(iVar6 + 0x50) = -DAT_002c66b8;
        *(short *)(iVar6 + 0x52) = -DAT_002c66ba;
        *(undefined2 *)(iVar6 + 0x54) = DAT_002c66bc;
        *(short *)(iVar6 + 0x56) = -0x2000 - DAT_002c66d6;
        *(short *)(iVar6 + 0x58) = -DAT_002c66d8;
        *(undefined2 *)(iVar6 + 0x5a) = DAT_002c66da;
        *(short *)(iVar6 + 0x5c) = 0x2000 - DAT_002c66dc;
        *(undefined2 *)(iVar6 + 0x5e) = DAT_002c66de;
        *(short *)(iVar6 + 0x60) = -DAT_002c66e0;
        *(short *)(iVar6 + 0x62) = -DAT_002c66e2;
        *(short *)(iVar6 + 100) = -DAT_002c66e4;
        *(undefined2 *)(iVar6 + 0x66) = DAT_002c66e6;
        *(short *)(iVar6 + 0x68) = -DAT_002c66e8;
        *(short *)(iVar6 + 0x6a) = -DAT_002c66ea;
        *(undefined2 *)(iVar6 + 0x6c) = DAT_002c66ec;
        *(short *)(iVar6 + 0x6e) = -0x2000 - DAT_002c66be;
        *(short *)(iVar6 + 0x70) = -DAT_002c66c0;
        *(undefined2 *)(iVar6 + 0x72) = DAT_002c66c2;
        *(short *)(iVar6 + 0x74) = 0x2000 - DAT_002c66c4;
        *(undefined2 *)(iVar6 + 0x76) = DAT_002c66c6;
        *(short *)(iVar6 + 0x78) = -DAT_002c66c8;
        *(short *)(iVar6 + 0x7a) = -DAT_002c66ca;
        *(short *)(iVar6 + 0x7c) = -DAT_002c66cc;
        *(undefined2 *)(iVar6 + 0x7e) = DAT_002c66ce;
        *(short *)(iVar6 + 0x80) = -DAT_002c66d0;
        *(short *)(iVar6 + 0x82) = -DAT_002c66d2;
        *(undefined2 *)(iVar6 + 0x84) = DAT_002c66d4;
        *(short *)(iVar6 + 0x86) = 0x2000 - DAT_002c6700;
        *(undefined2 *)(iVar6 + 0x88) = DAT_002c6702;
        *(short *)(iVar6 + 0x8a) = 0x2000 - DAT_002c6704;
        *(short *)(iVar6 + 0x8c) = -DAT_002c6706;
        *(short *)(iVar6 + 0x8e) = -DAT_002c6708;
        *(undefined2 *)(iVar6 + 0x90) = DAT_002c670a;
        *(short *)(iVar6 + 0x92) = -DAT_002c670c;
        *(short *)(iVar6 + 0x94) = -DAT_002c670e;
        *(undefined2 *)(iVar6 + 0x96) = DAT_002c6710;
        *(short *)(iVar6 + 0x98) = 0x2000 - DAT_002c66ee;
        *(undefined2 *)(iVar6 + 0x9a) = DAT_002c66f0;
        *(short *)(iVar6 + 0x9c) = 0x2000 - DAT_002c66f2;
        *(short *)(iVar6 + 0x9e) = -DAT_002c66f4;
        *(short *)(iVar6 + 0xa0) = -DAT_002c66f6;
        *(undefined2 *)(iVar6 + 0xa2) = DAT_002c66f8;
        *(short *)(iVar6 + 0xa4) = -DAT_002c66fa;
        *(short *)(iVar6 + 0xa6) = -DAT_002c66fc;
        *(undefined2 *)(iVar6 + 0xa8) = DAT_002c66fe;
        return;
      }
      iVar6 = *param_1;
    }
    else {
      iVar6 = *param_1;
    }
    FUN_0023bac0(iVar6 + 0x38,0x2c66a0,iStack_d8);
    return;
  }
  iVar1 = *param_1;
  fVar8 = *(float *)(*param_1 + 500);
  do {
    iVar1 = iVar1 + iVar6 * 4;
    fVar15 = *(float *)(iVar1 + 500);
    if (fVar15 == 0.0) {
      iVar1 = param_1[3];
      fVar12 = fVar8;
    }
    else {
      FUN_00147670(*(undefined4 *)(iVar1 + 0x1e8),param_1[iVar6 + 4],&pfStack_f0,&uStack_ec,
                   &pfStack_e8);
      fVar12 = fVar15 + fVar8;
      fVar8 = fVar8 * (1.0 / fVar12);
      fVar14 = fVar15 * (1.0 / fVar12);
      if (pfStack_e8 != (float *)0x0) {
        if (uVar7 != 0) {
          pfVar2 = (float *)(*param_1 + 0xbc);
          pfVar4 = pfStack_e8;
          uVar5 = uVar7;
          do {
            fVar10 = *pfVar4;
            uVar5 = uVar5 - 1;
            fVar9 = pfVar4[1];
            fVar11 = pfVar4[2];
            pfVar4 = pfVar4 + 3;
            *pfVar2 = fVar14 * fVar10 + fVar8 * *pfVar2;
            pfVar2[1] = fVar14 * fVar9 + fVar8 * pfVar2[1];
            pfVar2[2] = fVar14 * fVar11 + fVar8 * pfVar2[2];
            pfVar2 = pfVar2 + 3;
          } while (uVar5 != 0);
        }
        *(undefined4 *)(*param_1 + 0x2c) = 1;
      }
      FUN_001ea570(fVar14,0x2c66a0,uStack_ec,uVar7);
      iVar1 = *param_1;
      fVar9 = pfStack_f0[2];
      fVar10 = pfStack_f0[1];
      *(float *)(iVar1 + 0x1c4) = fVar14 * *pfStack_f0 + fVar8 * *(float *)(iVar1 + 0x1c4);
      *(float *)(iVar1 + 0x1c8) = fVar14 * fVar10 + fVar8 * *(float *)(iVar1 + 0x1c8);
      *(float *)(iVar1 + 0x1cc) = fVar14 * fVar9 + fVar8 * *(float *)(iVar1 + 0x1cc);
      if (fVar15 == 1.0) goto LAB_0014c4b0;
      iVar1 = param_1[3];
    }
    iVar6 = iVar6 + 1;
    if (iVar1 <= iVar6) goto LAB_0014c4b0;
    iVar1 = *param_1;
    fVar8 = fVar12;
  } while( true );
}

