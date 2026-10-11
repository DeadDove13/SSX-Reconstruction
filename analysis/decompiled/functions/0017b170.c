/* Ghidra pseudocode. PS2 address: 0017b170. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0017b2e0) */
/* WARNING: Removing unreachable block (ram,0x0017b710) */

void FUN_0017b170(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined8 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined1 auStack_170 [8];
  float fStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [8];
  float fStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [8];
  float fStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [8];
  float fStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [8];
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [3];
  
  uVar16 = DAT_002c28c8;
  puVar5 = DAT_00296264;
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x334) + 0xb3c) + *(char *)(param_1 + 0x298) * 4
                       + 0x364) + 0x6c4c) == 0) {
    return;
  }
  puVar1 = DAT_00296264 + 7;
  uVar9 = DAT_00296264[1];
  uVar10 = DAT_00296264[2];
  uVar11 = DAT_00296264[3];
  uVar12 = DAT_00296264[4];
  uVar13 = DAT_00296264[5];
  uVar14 = DAT_00296264[6];
  DAT_00296264[8] = *DAT_00296264;
  puVar5[0xf] = *puVar1;
  puVar5[9] = uVar9;
  puVar5[10] = uVar10;
  puVar5[0xb] = uVar11;
  puVar5[0xc] = uVar12;
  puVar5[0xd] = uVar13;
  puVar5[0xe] = uVar14;
  DAT_00296264 = DAT_00296264 + 8;
  DAT_00296260 = DAT_00296260 + 1;
  FUN_00131958(uVar16,0x41200000,DAT_002c28cc,0x295e90);
  if (*(int *)(*(int *)(param_1 + 0x334) + 0xb38) == 5) {
    puVar8 = &DAT_00283d60;
  }
  else {
    puVar8 = &DAT_00283cc0;
  }
  puVar6 = (undefined4 *)(puVar8 + *(int *)(param_1 + 0x29c) * 0x14);
  uStack_1d0 = *puVar6;
  uStack_1cc = puVar6[1];
  uStack_1c8 = puVar6[2];
  uStack_1c4 = 0x3f800000;
  FUN_001bd328(puVar6[4],puVar6[3],0,0x295e90,&uStack_1d0);
  if (*(int *)(param_1 + 0x2c0) == 0) {
    if (*(int *)(param_1 + 0x2e4) != 0) {
      *(float *)(param_1 + 0x2c4) =
           *(float *)(param_1 + 0x2ec) +
           ((float)(*(int *)(param_1 + 0x2e4) * ((DAT_002859d4 - *(int *)(param_1 + 0x2e8)) % 0x78)
                   * 2) * DAT_002c28d0) / 120.0;
    }
    bVar7 = false;
    if (*(float *)(param_1 + 0x300) == *(float *)(param_1 + 0x2b0)) {
      if (*(float *)(param_1 + 0x304) == *(float *)(param_1 + 0x2b4)) {
        if (*(float *)(param_1 + 0x308) == *(float *)(param_1 + 0x2b8)) {
          if (*(float *)(param_1 + 0x30c) != *(float *)(param_1 + 700)) goto LAB_0017b38c;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
      }
    }
    else {
LAB_0017b38c:
      bVar7 = true;
    }
    if (bVar7) {
      auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2b0));
      auVar21 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x300));
      auVar20 = _vsub(auVar20,auVar21);
      auStack_1a0 = _sqc2(auVar20);
      auVar20 = _qmtc2(0x41a00000);
      _vdiv(in_vf0,0,auVar20,0);
      auVar20 = _lqc2(auStack_1a0);
      uVar16 = _vwaitq();
      auVar20 = _vmulq(auVar20,uVar16);
      auStack_1b0 = _sqc2(auVar20);
      auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x300));
      auVar21 = _lqc2(auStack_1b0);
      auVar20 = _vadd(auVar20,auVar21);
      auStack_1c0 = _sqc2(auVar20);
      auStack_190._12_4_ = auStack_1c0._12_4_;
      *(int *)(param_1 + 0x300) = auStack_1c0._0_4_;
      *(int *)(param_1 + 0x304) = auStack_1c0._4_4_;
      *(undefined4 *)(param_1 + 0x308) = auStack_1c0._8_4_;
      *(undefined4 *)(param_1 + 0x30c) = auStack_190._12_4_;
      fVar19 = *(float *)(param_1 + 0x310);
      auStack_190 = auStack_1c0;
    }
    else {
      fVar19 = *(float *)(param_1 + 0x310);
    }
    if (fVar19 != *(float *)(param_1 + 0x2c4)) {
      fVar19 = (float)FUN_0015bec0();
      *(float *)(param_1 + 0x310) = *(float *)(param_1 + 0x310) + fVar19 / 10.0;
    }
  }
  fVar19 = 1.0;
  uVar16 = FUN_0015bec0(*(undefined4 *)(param_1 + 0x310),0);
  *(undefined4 *)(param_1 + 0x310) = uVar16;
  uStack_1d0 = *(undefined4 *)*(undefined1 (*) [16])(param_1 + 0x300);
  uStack_1cc = *(undefined4 *)(param_1 + 0x304);
  uStack_1c8 = *(undefined4 *)(param_1 + 0x308);
  uStack_1c4 = *(undefined4 *)(param_1 + 0x30c);
  auStack_190._0_12_ = ZEXT812(0);
  auStack_1c0 = ZEXT416((uint)fVar19);
  auStack_1b0 = ZEXT416((uint)fVar19) << 0x20;
  auStack_1a0 = ZEXT416((uint)fVar19) << 0x40;
  auStack_190._12_4_ = fVar19;
  auVar20 = _lqc2(auStack_1c0);
  auVar21 = _lqc2(auStack_1b0);
  auVar22 = _lqc2(auStack_1a0);
  auVar23 = _lqc2(auStack_190);
  auVar24 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x300));
  _vmulabc(auVar20,auVar24);
  _vmaddabc(auVar21,auVar24);
  _vmaddabc(auVar22,auVar24);
  auVar20 = _vmaddbc(auVar23,auVar24);
  auStack_190 = _sqc2(auVar20);
  fStack_180 = 0.0;
  fStack_17c = 0.0;
  fStack_174 = 0.0;
  fStack_178 = fVar19;
  FUN_00218128(&fStack_b0,&fStack_ac);
  fVar18 = fVar19 - fStack_ac;
  fVar15 = fVar18 * fStack_180;
  fVar17 = fVar18 * fStack_17c;
  fVar18 = fVar18 * fStack_178;
  auStack_170._4_4_ = fVar17 * fStack_180 - fStack_b0 * fStack_178;
  auStack_170._0_4_ = fVar15 * fStack_180 + fStack_ac;
  auStack_160._4_4_ = fVar17 * fStack_17c + fStack_ac;
  auStack_160._0_4_ = fVar15 * fStack_17c + fStack_b0 * fStack_178;
  auStack_150._4_4_ = fVar17 * fStack_178 + fStack_b0 * fStack_180;
  auStack_150._0_4_ = fVar15 * fStack_178 - fStack_b0 * fStack_17c;
  fStack_168 = fVar18 * fStack_180 + fStack_b0 * fStack_17c;
  fStack_158 = fVar18 * fStack_17c - fStack_b0 * fStack_180;
  auStack_140._0_12_ = ZEXT812(0);
  uStack_164 = 0;
  uStack_154 = 0;
  auStack_140._12_4_ = fVar19;
  fStack_148 = fVar18 * fStack_178 + fStack_ac;
  uStack_144 = 0;
  auVar20 = _lqc2(auStack_1c0);
  auVar21 = _lqc2(auStack_1b0);
  auVar22 = _lqc2(auStack_1a0);
  auVar23 = _lqc2(auStack_190);
  auVar24 = _lqc2(_auStack_170);
  auVar25 = _lqc2(_auStack_160);
  auVar26 = _lqc2(_auStack_150);
  auVar27 = _lqc2(auStack_140);
  _vmulabc(auVar20,auVar24);
  _vmaddabc(auVar21,auVar24);
  _vmaddabc(auVar22,auVar24);
  auVar24 = _vmaddbc(auVar23,auVar24);
  _vmulabc(auVar20,auVar25);
  _vmaddabc(auVar21,auVar25);
  _vmaddabc(auVar22,auVar25);
  auVar25 = _vmaddbc(auVar23,auVar25);
  _vmulabc(auVar20,auVar26);
  _vmaddabc(auVar21,auVar26);
  _vmaddabc(auVar22,auVar26);
  auVar26 = _vmaddbc(auVar23,auVar26);
  _vmulabc(auVar20,auVar27);
  _vmaddabc(auVar21,auVar27);
  _vmaddabc(auVar22,auVar27);
  auVar20 = _vmaddbc(auVar23,auVar27);
  auStack_1c0 = _sqc2(auVar24);
  auStack_1b0 = _sqc2(auVar25);
  auStack_1a0 = _sqc2(auVar26);
  auVar20 = _sqc2(auVar20);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x334) + 0xb3c) + *(char *)(param_1 + 0x298) * 4 +
                  0x364);
  fStack_17c = *(float *)(iVar2 + 0x473c);
  fStack_178 = fStack_17c * *(float *)(iVar2 + 0x4734);
  fStack_180 = fStack_17c * *(float *)(iVar2 + 0x472c);
  fStack_17c = fStack_17c * *(float *)(iVar2 + 0x4730);
  auVar4._8_4_ = fStack_168;
  auVar4._4_4_ = fStack_17c;
  auVar4._0_4_ = fStack_180;
  auStack_170 = auVar4._0_8_;
  fStack_168 = fStack_178;
  uStack_164 = 0;
  auVar21 = _lqc2(auStack_1c0);
  auVar22 = _lqc2(auStack_1b0);
  auVar23 = _lqc2(auStack_1a0);
  auVar24 = _lqc2(auVar20);
  auVar20._4_4_ = fStack_17c;
  auVar20._0_4_ = fStack_180;
  auVar20._8_4_ = fStack_178;
  auVar20._12_4_ = fVar19;
  auVar20 = _lqc2(auVar20);
  _vmulabc(auVar21,auVar20);
  _vmaddabc(auVar22,auVar20);
  _vmaddabc(auVar23,auVar20);
  auVar20 = _vmaddbc(auVar24,auVar20);
  auStack_190 = _sqc2(auVar20);
  fStack_174 = fVar19;
  FUN_001ef098(iVar2 + 0x6cc,auStack_1c0);
  if (*(int *)(param_1 + 0x2c0) != 0) goto LAB_0017b864;
  if (*(int *)(param_1 + 0x2f0) != 0) {
    *(float *)(param_1 + 0x2e0) =
         *(float *)(param_1 + 0x2fc) +
         ((float)(*(int *)(param_1 + 0x2f0) * ((DAT_002859d4 - *(int *)(param_1 + 0x2f8)) % 0x78) *
                 2) * DAT_002c28d4) / 120.0;
  }
  bVar7 = false;
  if (*(float *)(param_1 + 800) == *(float *)(param_1 + 0x2d0)) {
    if (*(float *)(param_1 + 0x324) == *(float *)(param_1 + 0x2d4)) {
      if (*(float *)(param_1 + 0x328) == *(float *)(param_1 + 0x2d8)) {
        if (*(float *)(param_1 + 0x32c) != *(float *)(param_1 + 0x2dc)) goto LAB_0017b7bc;
      }
      else {
        bVar7 = true;
      }
    }
    else {
      bVar7 = true;
    }
  }
  else {
LAB_0017b7bc:
    bVar7 = true;
  }
  if (bVar7) {
    auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x2d0));
    auVar21 = _lqc2(*(undefined1 (*) [16])(param_1 + 800));
    auVar20 = _vsub(auVar20,auVar21);
    _auStack_110 = _sqc2(auVar20);
    auVar20 = _qmtc2(0x41a00000);
    _vdiv(in_vf0,0,auVar20,0);
    auVar20 = _lqc2(_auStack_110);
    uVar16 = _vwaitq();
    auVar20 = _vmulq(auVar20,uVar16);
    auVar20 = _sqc2(auVar20);
    fStack_f8 = auVar20._8_4_;
    uStack_f4 = auVar20._12_4_;
    fStack_120 = auVar20._0_4_;
    fStack_11c = auVar20._4_4_;
    fStack_118 = fStack_f8;
    uStack_114 = uStack_f4;
    auVar21 = _lqc2(*(undefined1 (*) [16])(param_1 + 800));
    auVar20 = _lqc2(auVar20);
    auVar20 = _vadd(auVar21,auVar20);
    _auStack_100 = _sqc2(auVar20);
    fStack_130 = auStack_100._0_4_;
    fStack_12c = auStack_100._4_4_;
    fStack_128 = fStack_f8;
    uStack_124 = uStack_f4;
    *(float *)(param_1 + 800) = fStack_130;
    *(float *)(param_1 + 0x324) = fStack_12c;
    *(float *)(param_1 + 0x328) = fStack_f8;
    *(undefined4 *)(param_1 + 0x32c) = uStack_f4;
    fVar19 = *(float *)(param_1 + 0x330);
  }
  else {
    fVar19 = *(float *)(param_1 + 0x330);
  }
  if (fVar19 != *(float *)(param_1 + 0x2e0)) {
    fVar19 = (float)FUN_0015bec0();
    *(float *)(param_1 + 0x330) = *(float *)(param_1 + 0x330) + fVar19 / 10.0;
  }
LAB_0017b864:
  fVar19 = 1.0;
  uVar16 = FUN_0015bec0(*(undefined4 *)(param_1 + 0x330),0);
  *(undefined4 *)(param_1 + 0x330) = uVar16;
  auStack_140._0_12_ = ZEXT812(0);
  _auStack_170 = ZEXT416((uint)fVar19);
  _auStack_160 = ZEXT416((uint)fVar19) << 0x20;
  _auStack_150 = ZEXT416((uint)fVar19) << 0x40;
  auStack_140._12_4_ = fVar19;
  FUN_0017e980(iVar2 + 0x474c);
  fStack_11c = 0.0;
  iVar3 = *(int *)(param_1 + 0x29c) * 0xc;
  uStack_114 = 0;
  fStack_118 = *(float *)(&DAT_00283e04 + iVar3);
  fStack_120 = *(float *)(&DAT_00283e00 + iVar3);
  auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 800));
  auVar21._4_4_ = 0;
  auVar21._0_4_ = fStack_120;
  auVar21._8_4_ = fStack_118;
  auVar21._12_4_ = 0;
  auVar21 = _lqc2(auVar21);
  auVar20 = _vadd(auVar20,auVar21);
  _auStack_110 = _sqc2(auVar20);
  auVar20 = _lqc2(_auStack_170);
  auVar21 = _lqc2(_auStack_160);
  auVar22 = _lqc2(_auStack_150);
  auVar23 = _lqc2(auStack_140);
  auVar24 = _lqc2(_auStack_110);
  _vmulabc(auVar20,auVar24);
  _vmaddabc(auVar21,auVar24);
  _vmaddabc(auVar22,auVar24);
  auVar20 = _vmaddbc(auVar23,auVar24);
  auStack_140 = _sqc2(auVar20);
  fStack_130 = 0.0;
  fStack_128 = 0.0;
  uStack_124 = 0;
  fStack_12c = fVar19;
  FUN_00218128(DAT_002c28d8,&fStack_a8,&fStack_a4);
  fVar18 = fVar19 - fStack_a4;
  fVar15 = fVar18 * fStack_130;
  fVar17 = fVar18 * fStack_12c;
  fStack_f0 = fVar15 * fStack_130 + fStack_a4;
  fStack_e0 = fVar15 * fStack_12c + fStack_a8 * fStack_128;
  fVar18 = fVar18 * fStack_128;
  uStack_c0 = 0;
  fStack_d0 = fVar15 * fStack_128 - fStack_a8 * fStack_12c;
  fStack_ec = fVar17 * fStack_130 - fStack_a8 * fStack_128;
  fStack_dc = fVar17 * fStack_12c + fStack_a4;
  uStack_bc = 0;
  fStack_cc = fVar17 * fStack_128 + fStack_a8 * fStack_130;
  fStack_e8 = fVar18 * fStack_130 + fStack_a8 * fStack_12c;
  fStack_d8 = fVar18 * fStack_12c - fStack_a8 * fStack_130;
  uStack_b8 = 0;
  fStack_e4 = 0.0;
  uStack_d4 = 0;
  fStack_c8 = fVar18 * fStack_128 + fStack_a4;
  uStack_c4 = 0;
  auVar20 = _lqc2(_auStack_170);
  auVar21 = _lqc2(_auStack_160);
  auVar22 = _lqc2(_auStack_150);
  auVar24 = _lqc2(auStack_140);
  auVar23._4_4_ = fStack_ec;
  auVar23._0_4_ = fStack_f0;
  auVar23._8_4_ = fStack_e8;
  auVar23._12_4_ = 0;
  auVar23 = _lqc2(auVar23);
  auVar25._4_4_ = fStack_dc;
  auVar25._0_4_ = fStack_e0;
  auVar25._8_4_ = fStack_d8;
  auVar25._12_4_ = 0;
  auVar25 = _lqc2(auVar25);
  auVar26._4_4_ = fStack_cc;
  auVar26._0_4_ = fStack_d0;
  auVar26._8_4_ = fStack_c8;
  auVar26._12_4_ = 0;
  auVar26 = _lqc2(auVar26);
  auVar27._12_4_ = fVar19;
  auVar27._0_12_ = ZEXT812(0);
  auVar27 = _lqc2(auVar27);
  _vmulabc(auVar20,auVar23);
  _vmaddabc(auVar21,auVar23);
  _vmaddabc(auVar22,auVar23);
  auVar23 = _vmaddbc(auVar24,auVar23);
  _vmulabc(auVar20,auVar25);
  _vmaddabc(auVar21,auVar25);
  _vmaddabc(auVar22,auVar25);
  auVar25 = _vmaddbc(auVar24,auVar25);
  _vmulabc(auVar20,auVar26);
  _vmaddabc(auVar21,auVar26);
  _vmaddabc(auVar22,auVar26);
  auVar26 = _vmaddbc(auVar24,auVar26);
  _vmulabc(auVar20,auVar27);
  _vmaddabc(auVar21,auVar27);
  _vmaddabc(auVar22,auVar27);
  auVar20 = _vmaddbc(auVar24,auVar27);
  _auStack_170 = _sqc2(auVar23);
  _auStack_160 = _sqc2(auVar25);
  _auStack_150 = _sqc2(auVar26);
  auStack_140 = _sqc2(auVar20);
  fStack_12c = 0.0;
  fStack_128 = 0.0;
  uStack_124 = 0;
  fStack_130 = fVar19;
  fStack_b4 = fVar19;
  FUN_00218128(*(undefined4 *)(param_1 + 0x330),&fStack_a0,afStack_9c);
  fVar18 = fVar19 - afStack_9c[0];
  fVar15 = fVar18 * fStack_130;
  fVar17 = fVar18 * fStack_12c;
  fStack_120 = fVar15 * fStack_130 + afStack_9c[0];
  fVar18 = fVar18 * fStack_128;
  fStack_f0 = 0.0;
  fStack_11c = fVar17 * fStack_130 - fStack_a0 * fStack_128;
  auStack_110._4_4_ = fVar17 * fStack_12c + afStack_9c[0];
  auStack_110._0_4_ = fVar15 * fStack_12c + fStack_a0 * fStack_128;
  fStack_ec = 0.0;
  auStack_100._4_4_ = fVar17 * fStack_128 + fStack_a0 * fStack_130;
  auStack_100._0_4_ = fVar15 * fStack_128 - fStack_a0 * fStack_12c;
  fStack_118 = fVar18 * fStack_130 + fStack_a0 * fStack_12c;
  fStack_108 = fVar18 * fStack_12c - fStack_a0 * fStack_130;
  fStack_e8 = 0.0;
  uStack_114 = 0;
  uStack_104 = 0;
  fStack_f8 = fVar18 * fStack_128 + afStack_9c[0];
  uStack_f4 = 0;
  auVar20 = _lqc2(_auStack_170);
  auVar21 = _lqc2(_auStack_160);
  auVar23 = _lqc2(_auStack_150);
  auVar25 = _lqc2(auStack_140);
  auVar22._4_4_ = fStack_11c;
  auVar22._0_4_ = fStack_120;
  auVar22._8_4_ = fStack_118;
  auVar22._12_4_ = 0;
  auVar22 = _lqc2(auVar22);
  auVar26 = _lqc2(_auStack_110);
  auVar27 = _lqc2(_auStack_100);
  auVar24._12_4_ = fVar19;
  auVar24._0_12_ = ZEXT812(0);
  auVar24 = _lqc2(auVar24);
  _vmulabc(auVar20,auVar22);
  _vmaddabc(auVar21,auVar22);
  _vmaddabc(auVar23,auVar22);
  auVar22 = _vmaddbc(auVar25,auVar22);
  _vmulabc(auVar20,auVar26);
  _vmaddabc(auVar21,auVar26);
  _vmaddabc(auVar23,auVar26);
  auVar26 = _vmaddbc(auVar25,auVar26);
  _vmulabc(auVar20,auVar27);
  _vmaddabc(auVar21,auVar27);
  _vmaddabc(auVar23,auVar27);
  auVar27 = _vmaddbc(auVar25,auVar27);
  _vmulabc(auVar20,auVar24);
  _vmaddabc(auVar21,auVar24);
  _vmaddabc(auVar23,auVar24);
  auVar20 = _vmaddbc(auVar25,auVar24);
  _auStack_170 = _sqc2(auVar22);
  _auStack_160 = _sqc2(auVar26);
  _auStack_150 = _sqc2(auVar27);
  auStack_140 = _sqc2(auVar20);
  fStack_e4 = fVar19;
  FUN_001ef088(iVar2 + 0x6cc,auStack_170);
  FUN_001ef0b0(iVar2 + 0x6cc,2);
  FUN_00131838(0x295e90);
  iVar3 = *(int *)(*(int *)(param_1 + 0x334) + 4);
  (**(code **)(iVar3 + 0xac))
            (*(int *)(param_1 + 0x334) + (int)*(short *)(iVar3 + 0xa8),iVar2,
             *(undefined4 *)(param_1 + 0x2c0),0);
  iVar3 = *(int *)(*(int *)(param_1 + 0x334) + 4);
  (**(code **)(iVar3 + 0xb4))
            (*(int *)(param_1 + 0x334) + (int)*(short *)(iVar3 + 0xb0),iVar2,
             *(undefined4 *)(param_1 + 0x2c0));
  DAT_00296260 = DAT_00296260 + -1;
  DAT_00292690 = DAT_00296264[-8];
  DAT_00292698 = DAT_00296264[-7];
  DAT_002926a0 = DAT_00296264[-6];
  DAT_002926a8 = DAT_00296264[-5];
  DAT_002926b0 = DAT_00296264[-4];
  DAT_002926b8 = DAT_00296264[-3];
  DAT_002926c0 = DAT_00296264[-2];
  DAT_002926c8 = DAT_00296264[-1];
  DAT_00292770 = 0;
  DAT_00296264 = DAT_00296264 + -8;
  FUN_001cb238(0x2913b0,0,0);
  FUN_00131838(0x295e90);
  return;
}

