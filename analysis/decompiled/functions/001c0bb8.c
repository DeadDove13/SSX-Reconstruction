/* Ghidra pseudocode. PS2 address: 001c0bb8. Not validated source. */

void FUN_001c0bb8(float *param_1,float *param_2,undefined8 param_3,float *param_4,int param_5,
                 int param_6)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [16];
  int iVar14;
  int *piVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  
  fVar19 = (float)FUN_0011ee88();
  if (SQRT(fVar19) == 0.0) {
    pfVar12 = (float *)param_3;
    fStack_1a8 = pfVar12[2];
    fStack_1b0 = *pfVar12;
    fStack_1ac = pfVar12[1];
  }
  else {
    FUN_0011ee58(&fStack_1b0,param_3);
  }
  *param_1 = fStack_1b0;
  param_1[1] = fStack_1ac;
  param_1[2] = fStack_1a8;
  fVar19 = (float)FUN_0011ee88();
  if (SQRT(fVar19) == 0.0) {
    fStack_1a8 = param_4[2];
    fStack_1b0 = *param_4;
    fStack_1ac = param_4[1];
  }
  else {
    FUN_0011ee58(&fStack_1b0);
  }
  pfVar12 = param_1 + 6;
  param_1[6] = fStack_1b0;
  param_1[7] = fStack_1ac;
  bVar1 = false;
  fStack_19c = fStack_1ac * 0.0;
  param_1[8] = fStack_1a8;
  fStack_198 = fStack_1a8 * 0.0;
  fVar22 = param_2[2];
  fStack_1a0 = param_1[6] * 0.0;
  fVar19 = param_2[1];
  param_1[3] = *param_2 - fStack_1a0;
  param_1[4] = fVar19 - fStack_19c;
  param_1[5] = fVar22 - fStack_198;
  param_1[9] = -param_1[6] * param_1[3] + -param_1[7] * param_1[4] + -param_1[8] * param_1[5];
  if (((*param_1 == param_1[6]) && (param_1[1] == param_1[7])) && (param_1[2] == param_1[8])) {
    bVar1 = true;
  }
  fVar19 = *param_1;
  pfVar16 = param_1;
  if (!bVar1) {
    bVar1 = false;
    fStack_1b0 = -param_1[6];
    fStack_1ac = -param_1[7];
    fStack_1a8 = -param_1[8];
    if (((fVar19 == fStack_1b0) && (param_1[1] == fStack_1ac)) && (param_1[2] == fStack_1a8)) {
      bVar1 = true;
    }
    if (!bVar1) {
      fStack_17c = param_1[2] * param_1[6] - fVar19 * param_1[8];
      fStack_178 = fVar19 * param_1[7] - param_1[1] * param_1[6];
      fStack_180 = param_1[1] * param_1[8] - param_1[2] * param_1[7];
      fVar19 = (float)FUN_0011ee88(&fStack_180,&fStack_180);
      if (SQRT(fVar19) == 0.0) {
        fStack_190 = fStack_180;
        fStack_18c = fStack_17c;
        fStack_188 = fStack_178;
      }
      else {
        FUN_0011ee58(&fStack_190,&fStack_180);
      }
      pfVar16[0xd] = fStack_190;
      pfVar16[0xe] = fStack_18c;
      pfVar16[0xf] = fStack_188;
      fStack_170 = pfVar12[1] * fStack_188 - pfVar12[2] * fStack_18c;
      fStack_168 = pfVar16[6] * fStack_18c - pfVar12[1] * pfVar16[0xd];
      fStack_16c = pfVar12[2] * pfVar16[0xd] - pfVar16[6] * fStack_188;
      fVar19 = (float)FUN_0011ee88(&fStack_170,&fStack_170);
      if (SQRT(fVar19) == 0.0) {
        fStack_18c = fStack_16c;
        fStack_188 = fStack_168;
      }
      else {
        FUN_0011ee58(&fStack_190,&fStack_170);
        fStack_170 = fStack_190;
      }
      pfVar16[10] = fStack_170;
      pfVar16[0xb] = fStack_18c;
      pfVar16[0xc] = fStack_188;
      goto LAB_001c0f80;
    }
  }
  *param_1 = fVar19 + DAT_002c3580;
LAB_001c0f80:
  pauVar13 = (undefined1 (*) [16])(pfVar16 + 0x14);
  piVar15 = &DAT_002b6ea0;
  pfVar16[0x15] = pfVar16[0xe];
  pfVar16[0x16] = pfVar16[0xf];
  pfVar16[0x19] = pfVar16[0xb];
  pfVar16[0x1d] = pfVar16[7];
  iVar14 = 5;
  pfVar16[0x14] = pfVar16[0xd];
  pfVar16[0x23] = 1.0;
  pfVar16[0x18] = pfVar16[10];
  pfVar16[0x1a] = pfVar16[0xc];
  pfVar16[0x1c] = pfVar16[6];
  pfVar16[0x1e] = pfVar16[8];
  pfVar16[0x17] = 0.0;
  pfVar16[0x1b] = 0.0;
  pfVar16[0x1f] = 0.0;
  pfVar16[0x20] = 0.0;
  pfVar16[0x21] = 0.0;
  pfVar16[0x22] = 0.0;
  fVar22 = DAT_002c52dc;
  fVar19 = DAT_002c52d8;
  fVar17 = pfVar16[3];
  fVar20 = param_1[4];
  fVar23 = param_1[5];
  pfVar16[0x17] =
       -(fVar17 * pfVar16[0xd] + fVar20 * pfVar16[0x15] + fVar23 * pfVar16[0x16] +
        pfVar16[0x17] * 1.0);
  pfVar16[0x1b] =
       -(fVar17 * pfVar16[0x18] + fVar20 * pfVar16[0x19] + fVar23 * pfVar16[0x1a] +
        pfVar16[0x1b] * 1.0);
  pfVar16[0x1f] =
       -(fVar17 * pfVar16[0x1c] + fVar20 * pfVar16[0x1d] + fVar23 * pfVar16[0x1e] +
        pfVar16[0x1f] * 1.0);
  uVar10 = DAT_002c3588;
  uVar9 = DAT_002c3584;
  fVar17 = fVar19;
  fVar20 = fVar22;
  fVar23 = fVar22;
  fVar28 = fVar19;
  do {
    iVar11 = *piVar15 * 0x40 + param_5;
    fVar26 = *(float *)(iVar11 + 0x3c);
    fVar25 = *(float *)(iVar11 + 0x30);
    fVar24 = *(float *)(iVar11 + 0x34);
    fVar27 = *(float *)(iVar11 + 0x38);
    fVar18 = fVar25 * pfVar16[0x14] + fVar24 * pfVar16[0x15] + fVar27 * pfVar16[0x16] +
             fVar26 * pfVar16[0x17];
    fVar21 = fVar25 * pfVar16[0x18] + fVar24 * pfVar16[0x19] + fVar27 * pfVar16[0x1a] +
             fVar26 * pfVar16[0x1b];
    fVar24 = fVar25 * pfVar16[0x1c] + fVar24 * pfVar16[0x1d] + fVar27 * pfVar16[0x1e] +
             fVar26 * pfVar16[0x1f];
    if (fVar18 < fVar19) {
      fVar19 = fVar18;
    }
    if (fVar23 < fVar18) {
      fVar23 = fVar18;
    }
    if (fVar21 < fVar17) {
      fVar17 = fVar21;
    }
    if (fVar22 < fVar21) {
      fVar22 = fVar21;
    }
    if (fVar24 < fVar28) {
      fVar28 = fVar24;
    }
    if (fVar20 < fVar24) {
      fVar20 = fVar24;
    }
    iVar14 = iVar14 + -1;
    piVar15 = piVar15 + 1;
  } while (-1 < iVar14);
  piVar15 = &DAT_002b6eb8;
  iVar14 = 3;
  do {
    pfVar12 = (float *)(*piVar15 * 0x10 + param_6);
    fVar21 = *pfVar12;
    fVar24 = fVar21 * pfVar16[0x14] + pfVar12[1] * pfVar16[0x15] + pfVar12[2] * pfVar16[0x16] +
             pfVar12[3] * pfVar16[0x17];
    fVar18 = fVar21 * pfVar16[0x18] + pfVar12[1] * pfVar16[0x19] + pfVar12[2] * pfVar16[0x1a] +
             pfVar12[3] * pfVar16[0x1b];
    fVar21 = fVar21 * pfVar16[0x1c] + pfVar12[1] * pfVar16[0x1d] + pfVar12[2] * pfVar16[0x1e] +
             pfVar12[3] * pfVar16[0x1f];
    if (fVar24 < fVar19) {
      fVar19 = fVar24;
    }
    if (fVar23 < fVar24) {
      fVar23 = fVar24;
    }
    if (fVar18 < fVar17) {
      fVar17 = fVar18;
    }
    if (fVar22 < fVar18) {
      fVar22 = fVar18;
    }
    if (fVar21 < fVar28) {
      fVar28 = fVar21;
    }
    if (fVar20 < fVar21) {
      fVar20 = fVar21;
    }
    iVar14 = iVar14 + -1;
    piVar15 = piVar15 + 1;
  } while (-1 < iVar14);
  fVar22 = fVar22 + 20.0;
  fVar19 = fVar19 - 20.0;
  fVar23 = fVar23 + 20.0;
  fVar17 = fVar17 - 20.0;
  pfVar16[0x12] = fVar22;
  pfVar16[0x11] = fVar23;
  pfVar16[0x10] = fVar19;
  pfVar16[0x13] = fVar17;
  auVar29 = _lqc2(*pauVar13);
  auVar30 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x18));
  auVar31 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x1c));
  auVar32 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x20));
  auVar33._4_8_ = 0;
  auVar33._0_4_ = 2.0 / (fVar23 - fVar19);
  auVar33._12_4_ = -(fVar23 + fVar19) / (fVar23 - fVar19);
  auVar33 = _lqc2(auVar33);
  auVar5._4_8_ = 0;
  auVar5._0_4_ = 2.0 / (fVar22 - fVar17);
  auVar34._12_4_ = -(fVar22 + fVar17) / (fVar22 - fVar17);
  auVar34._0_12_ = auVar5 << 0x20;
  auVar34 = _lqc2(auVar34);
  auVar8._4_4_ = uVar10;
  auVar8._0_4_ = uVar9;
  auVar8._8_8_ = 0;
  auVar35 = _lqc2(auVar8 << 0x40);
  auVar2._12_4_ = 0x3f800000;
  auVar2._0_12_ = ZEXT812(0);
  auVar36 = _lqc2(auVar2);
  _vmulabc(auVar29,auVar33);
  _vmaddabc(auVar30,auVar33);
  _vmaddabc(auVar31,auVar33);
  auVar33 = _vmaddbc(auVar32,auVar33);
  _vmulabc(auVar29,auVar34);
  _vmaddabc(auVar30,auVar34);
  _vmaddabc(auVar31,auVar34);
  auVar34 = _vmaddbc(auVar32,auVar34);
  _vmulabc(auVar29,auVar35);
  _vmaddabc(auVar30,auVar35);
  _vmaddabc(auVar31,auVar35);
  auVar35 = _vmaddbc(auVar32,auVar35);
  _vmulabc(auVar29,auVar36);
  _vmaddabc(auVar30,auVar36);
  _vmaddabc(auVar31,auVar36);
  auVar31 = _vmaddbc(auVar32,auVar36);
  auVar33 = _sqc2(auVar33);
  auVar29 = _sqc2(auVar34);
  auVar30 = _sqc2(auVar35);
  auVar34 = _sqc2(auVar31);
  fVar19 = pfVar16[0x12] - pfVar16[0x13];
  fVar22 = pfVar16[0x11] - pfVar16[0x10];
  *(long *)(pfVar16 + 0x24) = auVar33._0_8_;
  *(long *)(pfVar16 + 0x26) = auVar33._8_8_;
  *(long *)(pfVar16 + 0x28) = auVar29._0_8_;
  *(long *)(pfVar16 + 0x2a) = auVar29._8_8_;
  *(long *)(pfVar16 + 0x2c) = auVar30._0_8_;
  *(long *)(pfVar16 + 0x2e) = auVar30._8_8_;
  *(long *)(pfVar16 + 0x30) = auVar34._0_8_;
  *(long *)(pfVar16 + 0x32) = auVar34._8_8_;
  auVar33 = _lqc2(*pauVar13);
  auVar30 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x18));
  auVar34 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x1c));
  auVar32 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x20));
  auVar29._4_8_ = 0;
  auVar29._0_4_ = 1.0 / fVar22;
  auVar29._12_4_ = -pfVar16[0x10] / fVar22;
  auVar29 = _lqc2(auVar29);
  auVar6._4_8_ = 0;
  auVar6._0_4_ = -1.0 / fVar19;
  auVar31._12_4_ = pfVar16[0x13] / fVar19 + 1.0;
  auVar31._0_12_ = auVar6 << 0x20;
  auVar31 = _lqc2(auVar31);
  auVar35._12_4_ = 0x3f800000;
  auVar35._0_12_ = ZEXT812(0);
  auVar35 = _lqc2(auVar35);
  auVar3._12_4_ = 0x3f800000;
  auVar3._0_12_ = ZEXT812(0);
  auVar36 = _lqc2(auVar3);
  _vmulabc(auVar33,auVar29);
  _vmaddabc(auVar30,auVar29);
  _vmaddabc(auVar34,auVar29);
  auVar29 = _vmaddbc(auVar32,auVar29);
  _vmulabc(auVar33,auVar31);
  _vmaddabc(auVar30,auVar31);
  _vmaddabc(auVar34,auVar31);
  auVar31 = _vmaddbc(auVar32,auVar31);
  _vmulabc(auVar33,auVar35);
  _vmaddabc(auVar30,auVar35);
  _vmaddabc(auVar34,auVar35);
  auVar35 = _vmaddbc(auVar32,auVar35);
  _vmulabc(auVar33,auVar36);
  _vmaddabc(auVar30,auVar36);
  _vmaddabc(auVar34,auVar36);
  auVar34 = _vmaddbc(auVar32,auVar36);
  auVar33 = _sqc2(auVar29);
  auVar29 = _sqc2(auVar31);
  auVar30 = _sqc2(auVar35);
  auVar34 = _sqc2(auVar34);
  fVar19 = pfVar16[0x11] - pfVar16[0x10];
  fVar22 = pfVar16[0x12] - pfVar16[0x13];
  *(long *)(pfVar16 + 0x34) = auVar33._0_8_;
  *(long *)(pfVar16 + 0x36) = auVar33._8_8_;
  *(long *)(pfVar16 + 0x38) = auVar29._0_8_;
  *(long *)(pfVar16 + 0x3a) = auVar29._8_8_;
  *(long *)(pfVar16 + 0x3c) = auVar30._0_8_;
  *(long *)(pfVar16 + 0x3e) = auVar30._8_8_;
  *(long *)(pfVar16 + 0x40) = auVar34._0_8_;
  *(long *)(pfVar16 + 0x42) = auVar34._8_8_;
  auVar33 = _lqc2(*pauVar13);
  auVar29 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x18));
  auVar34 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x1c));
  auVar31 = _lqc2(*(undefined1 (*) [16])(pfVar16 + 0x20));
  auVar30._4_8_ = 0;
  auVar30._0_4_ = 2.0 / fVar19;
  auVar30._12_4_ = -(pfVar16[0x11] + pfVar16[0x10]) / fVar19;
  auVar30 = _lqc2(auVar30);
  auVar7._4_8_ = 0;
  auVar7._0_4_ = -2.0 / fVar22;
  auVar32._12_4_ = (pfVar16[0x12] + pfVar16[0x13]) / fVar22;
  auVar32._0_12_ = auVar7 << 0x20;
  auVar32 = _lqc2(auVar32);
  auVar36._12_4_ = 0x3f800000;
  auVar36._0_12_ = ZEXT812(0);
  auVar35 = _lqc2(auVar36);
  auVar4._12_4_ = 0x3f800000;
  auVar4._0_12_ = ZEXT812(0);
  auVar36 = _lqc2(auVar4);
  _vmulabc(auVar33,auVar30);
  _vmaddabc(auVar29,auVar30);
  _vmaddabc(auVar34,auVar30);
  auVar30 = _vmaddbc(auVar31,auVar30);
  _vmulabc(auVar33,auVar32);
  _vmaddabc(auVar29,auVar32);
  _vmaddabc(auVar34,auVar32);
  auVar32 = _vmaddbc(auVar31,auVar32);
  _vmulabc(auVar33,auVar35);
  _vmaddabc(auVar29,auVar35);
  _vmaddabc(auVar34,auVar35);
  auVar35 = _vmaddbc(auVar31,auVar35);
  _vmulabc(auVar33,auVar36);
  _vmaddabc(auVar29,auVar36);
  _vmaddabc(auVar34,auVar36);
  auVar34 = _vmaddbc(auVar31,auVar36);
  auVar33 = _sqc2(auVar30);
  auVar29 = _sqc2(auVar32);
  auVar30 = _sqc2(auVar35);
  auVar34 = _sqc2(auVar34);
  *(long *)(pfVar16 + 0x44) = auVar33._0_8_;
  *(long *)(pfVar16 + 0x46) = auVar33._8_8_;
  *(long *)(pfVar16 + 0x48) = auVar29._0_8_;
  *(long *)(pfVar16 + 0x4a) = auVar29._8_8_;
  *(long *)(pfVar16 + 0x4c) = auVar30._0_8_;
  *(long *)(pfVar16 + 0x4e) = auVar30._8_8_;
  *(long *)(pfVar16 + 0x50) = auVar34._0_8_;
  *(long *)(pfVar16 + 0x52) = auVar34._8_8_;
  pfVar16[0x54] = (float)(int)pfVar16[0x5d] * 0.5;
  pfVar16[0x55] = (float)(int)pfVar16[0x5e] * 0.5;
  pfVar16[0x59] = 2048.0;
  pfVar16[0x5b] = 0.0;
  pfVar16[0x56] = 0.0;
  pfVar16[0x57] = 0.0;
  pfVar16[0x58] = 2048.0;
  pfVar16[0x5a] = 0.0;
  auVar33 = *(undefined1 (*) [16])(pfVar16 + 0x24);
  auVar34 = _pextlw(*(undefined8 *)*(undefined1 (*) [16])(pfVar16 + 0x28),auVar33._0_8_);
  auVar30 = _pextuw(*(undefined1 (*) [16])(pfVar16 + 0x28),auVar33);
  auVar29 = _pextlw(SUB128(*(undefined1 (*) [12])*(undefined1 (*) [16])(pfVar16 + 0x30),0),
                    SUB128(*(undefined1 (*) [12])*(undefined1 (*) [16])(pfVar16 + 0x2c),0));
  auVar33 = _pextuw(*(undefined1 (*) [16])(pfVar16 + 0x30),*(undefined1 (*) [16])(pfVar16 + 0x2c));
  auVar31 = _pcpyld(auVar29,auVar34);
  auVar34 = _pcpyud(auVar34,auVar29);
  auVar29 = _pcpyld(auVar33,auVar30);
  auVar33 = _pcpyud(auVar30,auVar33);
  *(int *)*(undefined1 (*) [16])(pfVar16 + 0x24) = auVar31._0_4_;
  pfVar16[0x25] = auVar31._4_4_;
  pfVar16[0x26] = auVar31._8_4_;
  pfVar16[0x27] = auVar31._12_4_;
  pfVar16[0x28] = auVar34._0_4_;
  pfVar16[0x29] = auVar34._4_4_;
  pfVar16[0x2a] = auVar34._8_4_;
  pfVar16[0x2b] = auVar34._12_4_;
  pfVar16[0x2c] = auVar29._0_4_;
  pfVar16[0x2d] = auVar29._4_4_;
  pfVar16[0x2e] = auVar29._8_4_;
  pfVar16[0x2f] = auVar29._12_4_;
  pfVar16[0x30] = auVar33._0_4_;
  pfVar16[0x31] = auVar33._4_4_;
  pfVar16[0x32] = auVar33._8_4_;
  pfVar16[0x33] = auVar33._12_4_;
  auVar33 = *(undefined1 (*) [16])(pfVar16 + 0x34);
  auVar34 = _pextlw(*(undefined8 *)*(undefined1 (*) [16])(pfVar16 + 0x38),auVar33._0_8_);
  auVar30 = _pextuw(*(undefined1 (*) [16])(pfVar16 + 0x38),auVar33);
  auVar33 = _pextlw(*(undefined8 *)*(undefined1 (*) [16])(pfVar16 + 0x40),
                    *(undefined8 *)*(undefined1 (*) [16])(pfVar16 + 0x3c));
  auVar29 = _pextuw(*(undefined1 (*) [16])(pfVar16 + 0x40),*(undefined1 (*) [16])(pfVar16 + 0x3c));
  auVar32 = _pcpyld(auVar33,auVar34);
  auVar31 = _pcpyud(auVar34,auVar33);
  auVar34 = _pcpyld(auVar29,auVar30);
  auVar33 = _pcpyud(auVar30,auVar29);
  *(int *)*(undefined1 (*) [16])(pfVar16 + 0x34) = auVar32._0_4_;
  pfVar16[0x35] = auVar32._4_4_;
  pfVar16[0x36] = auVar32._8_4_;
  pfVar16[0x37] = auVar32._12_4_;
  pfVar16[0x38] = auVar31._0_4_;
  pfVar16[0x39] = auVar31._4_4_;
  pfVar16[0x3a] = auVar31._8_4_;
  pfVar16[0x3b] = auVar31._12_4_;
  pfVar16[0x3c] = auVar34._0_4_;
  pfVar16[0x3d] = auVar34._4_4_;
  pfVar16[0x3e] = auVar34._8_4_;
  pfVar16[0x3f] = auVar34._12_4_;
  pfVar16[0x40] = auVar33._0_4_;
  pfVar16[0x41] = auVar33._4_4_;
  pfVar16[0x42] = auVar33._8_4_;
  pfVar16[0x43] = auVar33._12_4_;
  auVar33 = *(undefined1 (*) [16])(pfVar16 + 0x44);
  auVar34 = _pextlw(*(undefined8 *)*(undefined1 (*) [16])(pfVar16 + 0x48),auVar33._0_8_);
  auVar30 = _pextuw(*(undefined1 (*) [16])(pfVar16 + 0x48),auVar33);
  auVar29 = _pextlw(*(undefined8 *)*(undefined1 (*) [16])(pfVar16 + 0x50),
                    *(undefined8 *)*(undefined1 (*) [16])(pfVar16 + 0x4c));
  auVar33 = _pextuw(*(undefined1 (*) [16])(pfVar16 + 0x50),*(undefined1 (*) [16])(pfVar16 + 0x4c));
  auVar31 = _pcpyld(auVar29,auVar34);
  auVar34 = _pcpyud(auVar34,auVar29);
  auVar29 = _pcpyld(auVar33,auVar30);
  auVar33 = _pcpyud(auVar30,auVar33);
  *(int *)*(undefined1 (*) [16])(pfVar16 + 0x44) = auVar31._0_4_;
  pfVar16[0x45] = auVar31._4_4_;
  pfVar16[0x46] = auVar31._8_4_;
  pfVar16[0x47] = auVar31._12_4_;
  pfVar16[0x48] = auVar34._0_4_;
  pfVar16[0x49] = auVar34._4_4_;
  pfVar16[0x4a] = auVar34._8_4_;
  pfVar16[0x4b] = auVar34._12_4_;
  pfVar16[0x4c] = auVar29._0_4_;
  pfVar16[0x4d] = auVar29._4_4_;
  pfVar16[0x4e] = auVar29._8_4_;
  pfVar16[0x4f] = auVar29._12_4_;
  pfVar16[0x50] = auVar33._0_4_;
  pfVar16[0x51] = auVar33._4_4_;
  pfVar16[0x52] = auVar33._8_4_;
  pfVar16[0x53] = auVar33._12_4_;
  return;
}

