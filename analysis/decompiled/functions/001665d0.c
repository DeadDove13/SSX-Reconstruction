/* Ghidra pseudocode. PS2 address: 001665d0. Not validated source. */

void FUN_001665d0(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float fStack_174;
  undefined1 auStack_170 [128];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  
  iVar18 = (int)param_1;
  iVar19 = DAT_002859d4 - *(int *)(iVar18 + 8);
  *(int *)(iVar18 + 8) = DAT_002859d4;
  if (0 < iVar19) {
    *(float *)(iVar18 + 0xc) =
         *(float *)(iVar18 + 0xc) * DAT_002c2770 + (60.0 / (float)iVar19) * DAT_002c2774;
  }
  if (2 < iVar19) {
    iVar19 = 2;
  }
  if (*(int *)(iVar18 + 0x484) == 0) {
    return;
  }
  fVar23 = 1.0;
  FUN_001319b0(0,0,(float)DAT_002915f0,(float)DAT_002915f4,0x295e90);
  uVar26 = DAT_002c2778;
  FUN_00131958(*(undefined4 *)(iVar18 + 0x36c),fVar23,DAT_002c2778,0x295e90);
  FUN_00166510(&uStack_240,**(int **)(iVar18 + 0x4a8) + 0x50);
  iVar2 = **(int **)(iVar18 + 0x4a8);
  fStack_210 = *(float *)(iVar2 + 0x80);
  fStack_20c = *(float *)(iVar2 + 0x84);
  fStack_208 = *(float *)(iVar2 + 0x88);
  fStack_204 = *(float *)(iVar2 + 0x8c);
  uStack_200 = *(undefined4 *)(iVar2 + 0x80);
  uStack_1f4 = *(undefined4 *)(iVar2 + 0x8c);
  uStack_1fc = *(undefined4 *)(iVar2 + 0x84);
  uStack_1f8 = *(undefined4 *)(iVar2 + 0x88);
  fStack_228 = -30.0;
  *(undefined4 *)(iVar18 + 0x374) = 0xc2480000;
  fStack_230 = -50.0;
  fStack_22c = 0.0;
  *(undefined4 *)(iVar18 + 0x378) = 0;
  *(undefined4 *)(iVar18 + 0x37c) = 0xc1f00000;
  fVar25 = *(float *)(iVar18 + 900);
  fVar24 = -*(float *)(iVar18 + 0x380);
  auStack_1c0._0_12_ = ZEXT812(0);
  auStack_1f0 = ZEXT416((uint)fVar23);
  auStack_1c0._12_4_ = fVar23;
  auStack_1e0 = ZEXT416((uint)fVar23) << 0x40;
  auStack_1d0 = ZEXT416((uint)fVar23) << 0x20;
  fStack_220 = 0.0;
  fStack_218 = 0.0;
  fStack_214 = 0.0;
  fStack_21c = fVar23;
  FUN_00218128(-*(float *)(iVar18 + 0x388),&fStack_f0,&fStack_ec);
  fVar22 = fVar23 - fStack_ec;
  fVar20 = fVar22 * fStack_220;
  fVar21 = fVar22 * fStack_21c;
  fStack_1b0 = fVar20 * fStack_220 + fStack_ec;
  fStack_1a0 = fVar20 * fStack_21c + fStack_f0 * fStack_218;
  fVar22 = fVar22 * fStack_218;
  uStack_180 = 0;
  fStack_190 = fVar20 * fStack_218 - fStack_f0 * fStack_21c;
  fStack_1ac = fVar21 * fStack_220 - fStack_f0 * fStack_218;
  fStack_19c = fVar21 * fStack_21c + fStack_ec;
  uStack_17c = 0;
  fStack_18c = fVar21 * fStack_218 + fStack_f0 * fStack_220;
  fStack_1a8 = fVar22 * fStack_220 + fStack_f0 * fStack_21c;
  fStack_198 = fVar22 * fStack_21c - fStack_f0 * fStack_220;
  uStack_178 = 0;
  fStack_1a4 = 0.0;
  uStack_194 = 0;
  fStack_188 = fVar22 * fStack_218 + fStack_ec;
  fStack_184 = 0.0;
  auVar27 = _lqc2(auStack_1f0);
  auVar28 = _lqc2(auStack_1e0);
  auVar29 = _lqc2(auStack_1d0);
  auVar30 = _lqc2(auStack_1c0);
  auVar31._4_4_ = fStack_1ac;
  auVar31._0_4_ = fStack_1b0;
  auVar31._8_4_ = fStack_1a8;
  auVar31._12_4_ = 0;
  auVar31 = _lqc2(auVar31);
  auVar32._4_4_ = fStack_19c;
  auVar32._0_4_ = fStack_1a0;
  auVar32._8_4_ = fStack_198;
  auVar32._12_4_ = 0;
  auVar32 = _lqc2(auVar32);
  auVar34._4_4_ = fStack_18c;
  auVar34._0_4_ = fStack_190;
  auVar34._8_4_ = fStack_188;
  auVar34._12_4_ = 0;
  auVar33 = _lqc2(auVar34);
  auVar6._12_4_ = fVar23;
  auVar6._0_12_ = ZEXT812(0);
  auVar34 = _lqc2(auVar6);
  _vmulabc(auVar27,auVar31);
  _vmaddabc(auVar28,auVar31);
  _vmaddabc(auVar29,auVar31);
  auVar31 = _vmaddbc(auVar30,auVar31);
  _vmulabc(auVar27,auVar32);
  _vmaddabc(auVar28,auVar32);
  _vmaddabc(auVar29,auVar32);
  auVar32 = _vmaddbc(auVar30,auVar32);
  _vmulabc(auVar27,auVar33);
  _vmaddabc(auVar28,auVar33);
  _vmaddabc(auVar29,auVar33);
  auVar33 = _vmaddbc(auVar30,auVar33);
  _vmulabc(auVar27,auVar34);
  _vmaddabc(auVar28,auVar34);
  _vmaddabc(auVar29,auVar34);
  auVar27 = _vmaddbc(auVar30,auVar34);
  auStack_1f0 = _sqc2(auVar31);
  auStack_1e0 = _sqc2(auVar32);
  auStack_1d0 = _sqc2(auVar33);
  auStack_1c0 = _sqc2(auVar27);
  fStack_21c = 0.0;
  fStack_218 = 0.0;
  fStack_214 = 0.0;
  fStack_220 = fVar23;
  fStack_174 = fVar23;
  FUN_00218128(-fVar25,&fStack_e8,&fStack_e4);
  fVar22 = fVar23 - fStack_e4;
  fVar20 = fVar22 * fStack_220;
  fVar21 = fVar22 * fStack_21c;
  fStack_1b0 = fVar20 * fStack_220 + fStack_e4;
  fStack_1a0 = fVar20 * fStack_21c + fStack_e8 * fStack_218;
  fVar22 = fVar22 * fStack_218;
  uStack_180 = 0;
  fStack_190 = fVar20 * fStack_218 - fStack_e8 * fStack_21c;
  fStack_1ac = fVar21 * fStack_220 - fStack_e8 * fStack_218;
  fStack_19c = fVar21 * fStack_21c + fStack_e4;
  uStack_17c = 0;
  fStack_18c = fVar21 * fStack_218 + fStack_e8 * fStack_220;
  fStack_1a8 = fVar22 * fStack_220 + fStack_e8 * fStack_21c;
  fStack_198 = fVar22 * fStack_21c - fStack_e8 * fStack_220;
  uStack_178 = 0;
  fStack_1a4 = 0.0;
  uStack_194 = 0;
  fStack_188 = fVar22 * fStack_218 + fStack_e4;
  fStack_184 = 0.0;
  auVar27 = _lqc2(auStack_1f0);
  auVar31 = _lqc2(auStack_1e0);
  auVar29 = _lqc2(auStack_1d0);
  auVar32 = _lqc2(auStack_1c0);
  auVar28._4_4_ = fStack_1ac;
  auVar28._0_4_ = fStack_1b0;
  auVar28._8_4_ = fStack_1a8;
  auVar28._12_4_ = 0;
  auVar28 = _lqc2(auVar28);
  auVar30._4_4_ = fStack_19c;
  auVar30._0_4_ = fStack_1a0;
  auVar30._8_4_ = fStack_198;
  auVar30._12_4_ = 0;
  auVar30 = _lqc2(auVar30);
  auVar4._4_4_ = fStack_18c;
  auVar4._0_4_ = fStack_190;
  auVar4._8_4_ = fStack_188;
  auVar4._12_4_ = 0;
  auVar33 = _lqc2(auVar4);
  auVar7._12_4_ = fVar23;
  auVar7._0_12_ = ZEXT812(0);
  auVar34 = _lqc2(auVar7);
  _vmulabc(auVar27,auVar28);
  _vmaddabc(auVar31,auVar28);
  _vmaddabc(auVar29,auVar28);
  auVar28 = _vmaddbc(auVar32,auVar28);
  _vmulabc(auVar27,auVar30);
  _vmaddabc(auVar31,auVar30);
  _vmaddabc(auVar29,auVar30);
  auVar30 = _vmaddbc(auVar32,auVar30);
  _vmulabc(auVar27,auVar33);
  _vmaddabc(auVar31,auVar33);
  _vmaddabc(auVar29,auVar33);
  auVar33 = _vmaddbc(auVar32,auVar33);
  _vmulabc(auVar27,auVar34);
  _vmaddabc(auVar31,auVar34);
  _vmaddabc(auVar29,auVar34);
  auVar27 = _vmaddbc(auVar32,auVar34);
  auStack_1f0 = _sqc2(auVar28);
  auStack_1e0 = _sqc2(auVar30);
  auStack_1d0 = _sqc2(auVar33);
  auStack_1c0 = _sqc2(auVar27);
  fStack_220 = 0.0;
  fStack_21c = 0.0;
  fStack_214 = 0.0;
  fStack_218 = fVar23;
  fStack_174 = fVar23;
  FUN_00218128(fVar24 - DAT_002c277c,&fStack_e0,&fStack_dc);
  puVar1 = (undefined8 *)DAT_00296264;
  fVar22 = fVar23 - fStack_dc;
  fVar20 = fVar22 * fStack_220;
  fVar21 = fVar22 * fStack_21c;
  fStack_1b0 = fVar20 * fStack_220 + fStack_dc;
  fStack_1a0 = fVar20 * fStack_21c + fStack_e0 * fStack_218;
  fVar22 = fVar22 * fStack_218;
  uStack_180 = 0;
  fStack_190 = fVar20 * fStack_218 - fStack_e0 * fStack_21c;
  fStack_1ac = fVar21 * fStack_220 - fStack_e0 * fStack_218;
  fStack_19c = fVar21 * fStack_21c + fStack_dc;
  uStack_17c = 0;
  fStack_18c = fVar21 * fStack_218 + fStack_e0 * fStack_220;
  fStack_1a8 = fVar22 * fStack_220 + fStack_e0 * fStack_21c;
  fStack_198 = fVar22 * fStack_21c - fStack_e0 * fStack_220;
  uStack_178 = 0;
  fStack_1a4 = 0.0;
  uStack_194 = 0;
  fStack_188 = fVar22 * fStack_218 + fStack_dc;
  fStack_184 = 0.0;
  auVar27 = _lqc2(auStack_1f0);
  auVar31 = _lqc2(auStack_1e0);
  auVar28 = _lqc2(auStack_1d0);
  auVar32 = _lqc2(auStack_1c0);
  auVar29._4_4_ = fStack_1ac;
  auVar29._0_4_ = fStack_1b0;
  auVar29._8_4_ = fStack_1a8;
  auVar29._12_4_ = 0;
  auVar29 = _lqc2(auVar29);
  auVar33._4_4_ = fStack_19c;
  auVar33._0_4_ = fStack_1a0;
  auVar33._8_4_ = fStack_198;
  auVar33._12_4_ = 0;
  auVar30 = _lqc2(auVar33);
  auVar5._4_4_ = fStack_18c;
  auVar5._0_4_ = fStack_190;
  auVar5._8_4_ = fStack_188;
  auVar5._12_4_ = 0;
  auVar33 = _lqc2(auVar5);
  auVar8._12_4_ = fVar23;
  auVar8._0_12_ = ZEXT812(0);
  auVar34 = _lqc2(auVar8);
  _vmulabc(auVar27,auVar29);
  _vmaddabc(auVar31,auVar29);
  _vmaddabc(auVar28,auVar29);
  auVar29 = _vmaddbc(auVar32,auVar29);
  _vmulabc(auVar27,auVar30);
  _vmaddabc(auVar31,auVar30);
  _vmaddabc(auVar28,auVar30);
  auVar30 = _vmaddbc(auVar32,auVar30);
  _vmulabc(auVar27,auVar33);
  _vmaddabc(auVar31,auVar33);
  _vmaddabc(auVar28,auVar33);
  auVar33 = _vmaddbc(auVar32,auVar33);
  _vmulabc(auVar27,auVar34);
  _vmaddabc(auVar31,auVar34);
  _vmaddabc(auVar28,auVar34);
  auVar27 = _vmaddbc(auVar32,auVar34);
  auStack_1f0 = _sqc2(auVar29);
  auStack_1e0 = _sqc2(auVar30);
  auStack_1d0 = _sqc2(auVar33);
  auVar27 = _sqc2(auVar27);
  fStack_220 = -fStack_230;
  fStack_21c = -fStack_22c;
  fStack_218 = -fStack_228;
  auVar31 = _lqc2(auStack_1f0);
  auVar28 = _lqc2(auStack_1e0);
  auVar29 = _lqc2(auStack_1d0);
  auVar32 = _lqc2(auVar27);
  auVar27._4_4_ = fStack_21c;
  auVar27._0_4_ = fStack_220;
  auVar27._8_4_ = fStack_218;
  auVar27._12_4_ = fVar23;
  auVar27 = _lqc2(auVar27);
  _vmulabc(auVar31,auVar27);
  _vmaddabc(auVar28,auVar27);
  _vmaddabc(auVar29,auVar27);
  auVar27 = _vmaddbc(auVar32,auVar27);
  auStack_1c0 = _sqc2(auVar27);
  *(undefined8 *)DAT_00296264 = auStack_1f0._0_8_;
  uVar11 = DAT_002c2780;
  puVar1[1] = auStack_1f0._8_8_;
  puVar1[2] = auStack_1e0._0_8_;
  puVar1[3] = auStack_1e0._8_8_;
  puVar1[4] = auStack_1d0._0_8_;
  puVar1[5] = auStack_1d0._8_8_;
  puVar1[6] = auStack_1c0._0_8_;
  puVar1[7] = auStack_1c0._8_8_;
  DAT_00292690 = *(undefined8 *)DAT_00296264;
  DAT_00292698 = *(undefined8 *)((int)DAT_00296264 + 8);
  DAT_002926a0 = *(undefined8 *)((int)DAT_00296264 + 0x10);
  DAT_002926a8 = *(undefined8 *)((int)DAT_00296264 + 0x18);
  DAT_002926b0 = *(undefined8 *)((int)DAT_00296264 + 0x20);
  DAT_002926b8 = *(undefined8 *)((int)DAT_00296264 + 0x28);
  DAT_002926c0 = *(undefined8 *)((int)DAT_00296264 + 0x30);
  DAT_002926c8 = *(undefined8 *)((int)DAT_00296264 + 0x38);
  iVar2 = **(int **)(iVar18 + 0x4a8);
  DAT_00292770 = 0;
  *(undefined4 *)(iVar2 + 0xfc) = uStack_240;
  *(undefined4 *)(iVar2 + 0x100) = uStack_23c;
  *(undefined4 *)(iVar2 + 0x104) = uStack_238;
  fStack_214 = fVar23;
  fStack_210 = fStack_220;
  fStack_20c = fStack_21c;
  fStack_208 = fStack_218;
  fStack_174 = fVar23;
  FUN_0011ecf8(0x295e90,0);
  fStack_220 = fStack_230;
  fStack_21c = fStack_22c;
  fStack_218 = fStack_228;
  fStack_214 = fVar23;
  FUN_00222e98(0x299cc8,&fStack_220,5);
  fStack_220 = *(float *)(iVar18 + 0x374);
  fStack_21c = *(float *)(iVar18 + 0x378);
  fStack_218 = *(float *)(iVar18 + 0x37c);
  fStack_214 = fVar23;
  FUN_00223058(DAT_002c2784,0x299cc8,&fStack_220);
  FUN_00131838(0x295e90);
  fStack_20c = 0.0;
  fStack_208 = 0.0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  fStack_1ac = 0.0;
  fStack_1a8 = 0.0;
  fStack_1a0 = 0.0;
  fStack_19c = 0.0;
  fStack_198 = 0.0;
  uStack_194 = 0;
  fStack_18c = 0.0;
  fStack_188 = 0.0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  fStack_174 = 0.0;
  fStack_220 = fVar23;
  fStack_21c = fVar23;
  fStack_218 = fVar23;
  fStack_214 = fVar23;
  fStack_210 = fVar23;
  fStack_204 = fVar23;
  fStack_1b0 = fVar23;
  fStack_1a4 = fVar23;
  fStack_190 = fVar23;
  fStack_184 = fVar23;
  FUN_001bd888(auStack_170,&fStack_220,&fStack_210,&uStack_200,&fStack_1b0,&fStack_1a0,&fStack_190,
               &uStack_180);
  uStack_d8 = DAT_002913bc;
  FUN_0011ed08(0x295e90,2,0);
  DAT_0028ad40 = 0x40000000;
  FUN_0011ed18(0x295e90,8);
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed28(uVar11,0x295e90,2,0);
  FUN_00169e50(iVar18 + 0x4c8,auStack_170);
  iVar2 = *(int *)(*(int *)(iVar18 + 0x488) + 4);
  (**(code **)(iVar2 + 0x3c))(*(int *)(iVar18 + 0x488) + (int)*(short *)(iVar2 + 0x38));
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed28(uVar11,0x295e90,2,0);
  FUN_0011ed18(0x295e90,0xc);
  iVar2 = *(int *)(*(int *)(iVar18 + 0x488) + 4);
  (**(code **)(iVar2 + 0x44))
            (*(int *)(iVar18 + 0x488) + (int)*(short *)(iVar2 + 0x40),iVar18 + 0x434);
  FUN_0016d9a8(*(undefined4 *)(iVar18 + 0x488));
  iVar2 = DAT_00295f50 * 0x30;
  *(undefined8 *)(&DAT_00295ec0 + iVar2) = *(undefined8 *)(&DAT_00295e90 + iVar2);
  *(undefined8 *)(&DAT_00295ec8 + iVar2) = *(undefined8 *)(&DAT_00295e98 + iVar2);
  *(undefined8 *)(&DAT_00295ed0 + iVar2) = *(undefined8 *)(&DAT_00295ea0 + iVar2);
  *(undefined8 *)(&DAT_00295ed8 + iVar2) = *(undefined8 *)(&DAT_00295ea8 + iVar2);
  *(undefined8 *)(&DAT_00295ee0 + iVar2) = *(undefined8 *)(&DAT_00295eb0 + iVar2);
  *(undefined8 *)(&DAT_00295ee8 + iVar2) = *(undefined8 *)(&DAT_00295eb8 + iVar2);
  puVar9 = (undefined8 *)DAT_00296264;
  DAT_00295f50 = DAT_00295f50 + 1;
  puVar1 = (undefined8 *)((int)DAT_00296264 + 0x38);
  uVar12 = *(undefined8 *)((int)DAT_00296264 + 8);
  uVar13 = *(undefined8 *)((int)DAT_00296264 + 0x10);
  uVar14 = *(undefined8 *)((int)DAT_00296264 + 0x18);
  uVar15 = *(undefined8 *)((int)DAT_00296264 + 0x20);
  uVar16 = *(undefined8 *)((int)DAT_00296264 + 0x28);
  uVar17 = *(undefined8 *)((int)DAT_00296264 + 0x30);
  *(undefined8 *)((int)DAT_00296264 + 0x40) = *(undefined8 *)DAT_00296264;
  puVar9[0xf] = *puVar1;
  puVar9[9] = uVar12;
  puVar9[10] = uVar13;
  puVar9[0xb] = uVar14;
  puVar9[0xc] = uVar15;
  puVar9[0xd] = uVar16;
  puVar9[0xe] = uVar17;
  fVar20 = (float)DAT_002915f0;
  fVar21 = (float)DAT_002915f4;
  DAT_00296264 = (float *)((int)DAT_00296264 + 0x40);
  DAT_00296260 = DAT_00296260 + 1;
  FUN_001319b0(0,0,fVar20,fVar21,0x295e90);
  iVar2 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295e90 + iVar2) = 1;
  *(float *)(&DAT_00295eb0 + iVar2) = -fVar20 * 0.5;
  *(float *)(&DAT_00295eb4 + iVar2) = -fVar21 * 0.5;
  *(float *)(&DAT_00295eb8 + iVar2) = fVar20;
  *(float *)(&DAT_00295ebc + iVar2) = fVar21;
  *(float *)(&DAT_00295ea4 + iVar2) = fVar23;
  *(undefined4 *)(&DAT_00295ea8 + iVar2) = uVar26;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar2),*(undefined4 *)(&DAT_00295e98 + iVar2),
               *(undefined4 *)(&DAT_00295e9c + iVar2),*(undefined4 *)(&DAT_00295ea0 + iVar2),fVar23,
               uVar26,-fVar20 * 0.5,-fVar21 * 0.5,0x2913b0);
  pfVar10 = DAT_00296264;
  *DAT_00296264 = fVar23;
  pfVar10[1] = 0.0;
  pfVar10[4] = 0.0;
  DAT_00292690 = *(undefined8 *)pfVar10;
  pfVar10[8] = 0.0;
  pfVar10[0xc] = 0.0;
  pfVar10[5] = fVar23;
  pfVar10[9] = 0.0;
  pfVar10[0xd] = 0.0;
  pfVar10[2] = 0.0;
  pfVar10[6] = 0.0;
  pfVar10[10] = fVar23;
  pfVar10[0xe] = 0.0;
  pfVar10[3] = 0.0;
  pfVar10[7] = 0.0;
  pfVar10[0xb] = 0.0;
  pfVar10[0xf] = fVar23;
  DAT_00292698 = *(undefined8 *)(pfVar10 + 2);
  DAT_002926a0 = *(undefined8 *)(pfVar10 + 4);
  DAT_002926a8 = *(undefined8 *)(pfVar10 + 6);
  DAT_002926b0 = *(undefined8 *)(pfVar10 + 8);
  DAT_002926b8 = *(undefined8 *)(pfVar10 + 10);
  DAT_002926c0 = *(undefined8 *)(pfVar10 + 0xc);
  DAT_002926c8 = *(undefined8 *)(pfVar10 + 0xe);
  DAT_00292770 = 0;
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed28(uVar11,0x295e90,2,0);
  iVar2 = *(int *)(iVar18 + 0x4ec);
  if (iVar2 == 1) {
    fVar20 = *(float *)(iVar18 + 0x4f0) - ((float)iVar19 / 60.0) * 8.0;
    *(float *)(iVar18 + 0x4f0) = fVar20;
    if (fVar20 < 0.0) {
      FUN_0018ac08(0x2b0070);
      *(undefined4 *)(iVar18 + 0x4ec) = 3;
      FUN_001678e0(param_1);
      *(int *)(iVar18 + 8) = DAT_002859d4;
    }
    fVar20 = *(float *)(iVar18 + 0x4f0);
    if (fVar20 < 0.0) {
      fVar20 = 0.0;
    }
    else if (fVar23 < fVar20) {
      fVar20 = fVar23;
    }
    *(float *)(iVar18 + 0x4f0) = fVar20;
    if (*(int *)(iVar18 + 0x4f4) == 0) {
      fVar20 = 1.0 - fVar20;
      if (0.0 <= fVar20) {
        bVar3 = 1.0 < fVar20;
        goto LAB_00167418;
      }
      fVar23 = 0.0;
      goto LAB_00167428;
    }
  }
  else {
    if (iVar2 < 2) {
      if (iVar2 != 0) goto LAB_0016757c;
    }
    else {
      if (iVar2 == 2) {
        fStack_208 = 0.0;
        fStack_220 = 0.0;
        fStack_21c = 0.0;
        fStack_218 = 0.0;
        fStack_210 = 0.0;
        fStack_20c = 0.0;
        iVar19 = FUN_00258848(0);
        fVar20 = *(float *)(iVar18 + 0x4f0);
        DAT_00292684 = iVar19 << 0x10;
        if (fVar20 < 0.0) {
          fVar23 = 0.0;
        }
        else if (fVar20 <= fVar23) {
          fVar23 = fVar20;
        }
        *(float *)(iVar18 + 0x4f0) = fVar23;
        FUN_00258848(0x43000000);
        fStack_220 = *(float *)(iVar18 + 0x4f0);
        DAT_002915e8 = 0x80;
        fStack_184 = 1.0;
        fStack_174 = 0.0;
        fStack_21c = 1.0;
        fStack_218 = 1.0;
        fStack_214 = 1.0;
        fStack_210 = 1.0;
        fStack_20c = 0.0;
        fStack_208 = 0.0;
        fStack_204 = 1.0;
        uStack_200 = 0;
        uStack_1fc = 0;
        uStack_1f8 = 0;
        uStack_1f4 = 0;
        fStack_1b0 = 1.0;
        fStack_1ac = 0.0;
        fStack_1a8 = 0.0;
        fStack_1a4 = 1.0;
        fStack_1a0 = 0.0;
        fStack_19c = 0.0;
        fStack_198 = 0.0;
        uStack_194 = 0;
        fStack_190 = 1.0;
        fStack_18c = 0.0;
        fStack_188 = 0.0;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_178 = 0;
        FUN_001bd888(auStack_170,&fStack_220,&fStack_210,&uStack_200,&fStack_1b0,&fStack_1a0,
                     &fStack_190,&uStack_180);
        *(undefined4 *)(iVar18 + 0x4f4) = 0;
        goto LAB_0016757c;
      }
      if (iVar2 != 3) goto LAB_0016757c;
      *(undefined4 *)(iVar18 + 0x4f0) = 0;
      *(undefined4 *)(iVar18 + 0x4ec) = 0;
    }
    if (iVar19 < 5) {
      *(float *)(iVar18 + 0x4f0) =
           *(float *)(iVar18 + 0x4f0) + (float)iVar19 / 60.0 + (float)iVar19 / 60.0;
    }
    else {
      *(float *)(iVar18 + 0x4f0) = *(float *)(iVar18 + 0x4f0) + 0.5;
    }
    if (1.0 < *(float *)(iVar18 + 0x4f0)) {
      *(undefined4 *)(iVar18 + 0x4f0) = 0x3f800000;
      *(undefined4 *)(iVar18 + 0x4ec) = 2;
    }
    fVar23 = *(float *)(iVar18 + 0x4f0);
    if (fVar23 < 0.0) {
      fVar23 = 0.0;
    }
    else if (1.0 < fVar23) {
      fVar23 = 1.0;
    }
    *(float *)(iVar18 + 0x4f0) = fVar23;
    if (*(int *)(iVar18 + 0x4f4) == 0) {
      fVar21 = 1.0;
      fVar20 = (float)FUN_001624f8(0x3f800000,0,0,0xbf800000);
      fVar23 = 0.0;
      if (0.0 <= fVar20) {
        bVar3 = fVar21 < fVar20;
LAB_00167418:
        fVar23 = fVar20;
        if (bVar3) {
          fVar23 = 1.0;
        }
      }
LAB_00167428:
      DAT_002915e8 = FUN_00258848((1.0 - fVar23) * 128.0);
      goto LAB_0016757c;
    }
  }
  FUN_0011ed18(0x295e90,0x13,0x290000);
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  DAT_0028ad30 = 1.0 - *(float *)(iVar18 + 0x4f0);
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_0019f6d8(0xc3800000,0xc3600000,0x44000000,0x43e00000,0x28ad30);
LAB_0016757c:
  FUN_00131848(0x295e90);
  DAT_00296260 = DAT_00296260 + -1;
  DAT_00292690 = *(undefined8 *)(DAT_00296264 + -0x10);
  DAT_00292698 = *(undefined8 *)(DAT_00296264 + -0xe);
  DAT_002926a0 = *(undefined8 *)(DAT_00296264 + -0xc);
  DAT_002926a8 = *(undefined8 *)(DAT_00296264 + -10);
  DAT_002926b0 = *(undefined8 *)(DAT_00296264 + -8);
  DAT_002926b8 = *(undefined8 *)(DAT_00296264 + -6);
  DAT_002926c0 = *(undefined8 *)(DAT_00296264 + -4);
  DAT_002926c8 = *(undefined8 *)(DAT_00296264 + -2);
  DAT_00292770 = 0;
  DAT_00296264 = DAT_00296264 + -0x10;
  FUN_0011ed08(0x295e90,uStack_d8,0);
  FUN_001689a8(0x295e90);
  return;
}

