/* Ghidra pseudocode. PS2 address: 00161ed8. Not validated source. */

long FUN_00161ed8(float param_1,undefined8 param_2,undefined1 (*param_3) [12])

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined1 (*pauVar8) [12];
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  undefined4 uStack_2a4;
  undefined1 auStack_2a0 [16];
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  float fStack_278;
  undefined4 uStack_274;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [8];
  float fStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [16];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  
  bVar1 = false;
  DAT_002c47f0 = DAT_002c47f0 + 1;
  uStack_260 = 0;
  lVar9 = 0;
  pauVar8 = (undefined1 (*) [12])param_2;
  fStack_2b0 = *(float *)*pauVar8;
  fStack_2ac = *(float *)(*pauVar8 + 4);
  fStack_2a8 = *(float *)(*pauVar8 + 8);
  uStack_2a4 = 0x3f800000;
  uStack_25c = 0;
  uStack_258 = 0;
  if (*(float *)*param_3 == 0.0) {
    if (*(float *)(*param_3 + 4) == 0.0) {
      if (*(float *)(*param_3 + 8) != 0.0) goto LAB_00161f9c;
    }
    else {
      bVar1 = true;
    }
  }
  else {
LAB_00161f9c:
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  uStack_1b0 = *(undefined4 *)*param_3;
  uStack_1ac = *(undefined4 *)(*param_3 + 4);
  uStack_1a8 = *(undefined4 *)(*param_3 + 8);
  uStack_1a4 = 0x3f800000;
  auStack_190._12_4_ = 0x3f800000;
  auStack_190._0_12_ = *param_3;
  uStack_178 = 0x43160000;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_174 = 0;
  auVar13 = _lqc2(auStack_190);
  auVar14._12_4_ = 0;
  auVar14._0_12_ = ZEXT412(0x43160000) << 0x40;
  auVar14 = _lqc2(auVar14);
  auVar14 = _vadd(auVar13,auVar14);
  _auStack_1a0 = _sqc2(auVar14);
  auStack_170 = _auStack_1a0;
  FUN_00220610(0,&uStack_250,&uStack_1b0,auStack_1a0,2);
  fVar10 = (float)FUN_0021e000(0x299cc8,&uStack_250,auStack_2a0,0);
  if (0.0 < fVar10) {
    if (fStack_278 <= 0.0) {
      uStack_1b0 = *(undefined4 *)*param_3;
      goto LAB_001620d0;
    }
    auVar15._8_4_ = fStack_278;
    auVar15._0_8_ = uStack_280;
    auVar15._12_4_ = uStack_274;
    auVar13 = _lqc2(auVar15);
    auVar14 = _qmtc2(0x41a00000);
    auVar14 = _vmulbc(auVar13,auVar14);
    _auStack_1a0 = _sqc2(auVar14);
    auVar13._4_4_ = uStack_28c;
    auVar13._0_4_ = uStack_290;
    auVar13._8_4_ = uStack_288;
    auVar13._12_4_ = uStack_284;
    auVar14 = _lqc2(auVar13);
    auVar13 = _lqc2(_auStack_1a0);
    auVar14 = _vadd(auVar14,auVar13);
    auStack_190 = _sqc2(auVar14);
    *(undefined4 *)*param_3 = auStack_190._0_4_;
    *(undefined4 *)(*param_3 + 4) = auStack_190._4_4_;
    *(undefined4 *)(*param_3 + 8) = auStack_190._8_4_;
  }
  uStack_1b0 = *(undefined4 *)*param_3;
LAB_001620d0:
  uStack_1ac = *(undefined4 *)(*param_3 + 4);
  uStack_1a8 = *(undefined4 *)(*param_3 + 8);
  uVar12 = 0;
  uStack_1a4 = 0x3f800000;
  FUN_00220610(0,&uStack_160,&uStack_1b0,&fStack_2b0,2);
  uStack_250 = uStack_160;
  uStack_24c = uStack_15c;
  uStack_240 = uStack_150;
  uStack_23c = uStack_14c;
  uStack_238 = uStack_148;
  uStack_234 = uStack_144;
  uStack_230 = uStack_140;
  uStack_22c = uStack_13c;
  uStack_228 = uStack_138;
  uStack_224 = uStack_134;
  uStack_220 = uStack_130;
  uStack_21c = uStack_12c;
  uStack_218 = uStack_128;
  uStack_214 = uStack_124;
  uStack_200 = uStack_110;
  uStack_1fc = uStack_10c;
  uStack_1f8 = uStack_108;
  uStack_1f4 = uStack_104;
  uStack_1e8 = uStack_f8;
  uStack_1e4 = uStack_f4;
  uStack_1e0 = uStack_f0;
  uStack_1dc = uStack_ec;
  uStack_1d8 = uStack_e8;
  uStack_1d4 = uStack_e4;
  uStack_1d0 = (undefined4)uStack_e0;
  uStack_1cc = (undefined4)((ulong)uStack_e0 >> 0x20);
  uStack_1c8 = uStack_d8;
  uStack_1c4 = uStack_d4;
  uStack_1c0 = uStack_d0;
  lVar7 = FUN_0021f668(0x299cc8,&uStack_250,auStack_2a0);
  if (lVar7 != 0) {
    auVar2._4_4_ = fStack_2ac;
    auVar2._0_4_ = fStack_2b0;
    auVar2._8_4_ = fStack_2a8;
    auVar2._12_4_ = uStack_2a4;
    auVar14 = _lqc2(auVar2);
    auVar3._4_4_ = uStack_28c;
    auVar3._0_4_ = uStack_290;
    auVar3._8_4_ = uStack_288;
    auVar3._12_4_ = uStack_284;
    auVar13 = _lqc2(auVar3);
    auVar14 = _vsub(auVar14,auVar13);
    auVar14 = _sqc2(auVar14);
    auStack_1a0._0_4_ = auVar14._0_4_;
    auStack_1a0._4_4_ = auVar14._4_4_;
    fStack_198 = auVar14._8_4_;
    uStack_194 = auVar14._12_4_;
    uStack_1b0 = auStack_1a0._0_4_;
    uStack_1ac = auStack_1a0._4_4_;
    uStack_1a8 = fStack_198;
    uStack_1a4 = uStack_194;
    auVar14 = _lqc2(auVar14);
    auVar4._8_4_ = fStack_278;
    auVar4._0_8_ = uStack_280;
    auVar4._12_4_ = uStack_274;
    auVar13 = _lqc2(auVar4);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _vmul(auVar14,auVar13);
    _vaddabc(auVar14,auVar14);
    _vmaddabc(auVar15,auVar14);
    auVar14 = _vmaddbc(auVar15,auVar14);
    auVar14 = _qmfc2(auVar14._0_4_);
    auVar5._8_4_ = fStack_278;
    auVar5._0_8_ = uStack_280;
    auVar5._12_4_ = uStack_274;
    auVar13 = _lqc2(auVar5);
    auVar14 = _qmtc2(auVar14._0_4_);
    auVar14 = _vmulbc(auVar13,auVar14);
    auStack_190 = _sqc2(auVar14);
    auStack_1a0._4_4_ = auStack_190._4_4_;
    fStack_198 = auStack_190._8_4_;
    auStack_1a0._0_4_ = auStack_190._0_4_;
    fStack_2ac = *(float *)(*pauVar8 + 4) - (float)auStack_1a0._4_4_;
    fStack_2a8 = *(float *)(*pauVar8 + 8) - fStack_198;
    fStack_2b0 = *(float *)*pauVar8 - (float)auStack_1a0._0_4_;
    *(float *)(*pauVar8 + 4) = fStack_2ac;
    *(float *)(*pauVar8 + 8) = fStack_2a8;
    *(float *)*pauVar8 = fStack_2b0;
    auStack_1a0._4_4_ = fStack_2ac;
    auStack_1a0._0_4_ = fStack_2b0;
    fStack_198 = fStack_2a8;
    uStack_194 = 0x3f800000;
    uStack_100 = *(undefined4 *)*param_3;
    uStack_2a4 = 0x3f800000;
    uStack_fc = *(undefined4 *)(*param_3 + 4);
    uStack_f8 = *(undefined4 *)(*param_3 + 8);
    uStack_f4 = 0x3f800000;
    FUN_00220610(uVar12,auStack_1a0,&uStack_100,&fStack_2b0,2);
    uStack_250 = auStack_1a0._0_4_;
    uStack_24c = auStack_1a0._4_4_;
    uStack_240 = auStack_190._0_4_;
    uStack_23c = auStack_190._4_4_;
    uStack_238 = auStack_190._8_4_;
    uStack_234 = auStack_190._12_4_;
    uStack_230 = uStack_180;
    uStack_22c = uStack_17c;
    uStack_228 = uStack_178;
    uStack_224 = uStack_174;
    uStack_220 = auStack_170._0_4_;
    uStack_21c = auStack_170._4_4_;
    uStack_218 = auStack_170._8_4_;
    uStack_214 = auStack_170._12_4_;
    uStack_200 = uStack_150;
    uStack_1fc = uStack_14c;
    uStack_1f8 = uStack_148;
    uStack_1f4 = uStack_144;
    uStack_1e8 = uStack_138;
    uStack_1e4 = uStack_134;
    uStack_1e0 = uStack_130;
    uStack_1dc = uStack_12c;
    uStack_1d8 = uStack_128;
    uStack_1d4 = uStack_124;
    uStack_1d0 = (undefined4)uStack_120;
    uStack_1cc = (undefined4)((ulong)uStack_120 >> 0x20);
    uStack_1c8 = uStack_118;
    uStack_1c4 = uStack_114;
    uStack_1c0 = uStack_110;
    lVar9 = FUN_0021f668(0x299cc8,&uStack_250,auStack_2a0);
    if (lVar9 != 0) {
      *(undefined4 *)*pauVar8 = uStack_290;
      *(undefined4 *)(*pauVar8 + 4) = uStack_28c;
      *(undefined4 *)(*pauVar8 + 8) = uStack_288;
    }
    uVar12 = 0x42200000;
    if (500.0 < param_1) {
      uVar12 = 0x42700000;
    }
    auVar6._8_4_ = fStack_278;
    auVar6._0_8_ = uStack_280;
    auVar6._12_4_ = uStack_274;
    auVar13 = _lqc2(auVar6);
    auVar14 = _qmtc2(uVar12);
    auVar14 = _vmulbc(auVar13,auVar14);
    auStack_190 = _sqc2(auVar14);
    auStack_1a0._0_4_ = auStack_190._0_4_;
    auStack_1a0._4_4_ = auStack_190._4_4_;
    fStack_198 = auStack_190._8_4_;
    fVar11 = *(float *)(*pauVar8 + 4);
    fVar10 = *(float *)(*pauVar8 + 8);
    *(float *)*pauVar8 = *(float *)*pauVar8 + (float)auStack_1a0._0_4_;
    *(float *)(*pauVar8 + 4) = fVar11 + (float)auStack_1a0._4_4_;
    *(float *)(*pauVar8 + 8) = fVar10 + fStack_198;
    lVar9 = 1;
    _auStack_1a0 = *pauVar8;
    uStack_194 = 0x3f800000;
    auVar14 = _auStack_1a0;
    fStack_2b0 = (float)auStack_1a0._0_4_;
    fStack_2ac = (float)auStack_1a0._4_4_;
    fStack_2a8 = fStack_198;
    uStack_2a4 = 0x3f800000;
    _auStack_1a0 = auVar14;
  }
  if (lVar9 == 0) {
    if (500.0 < param_1) {
      uStack_1a8 = *(undefined4 *)(*param_3 + 8);
      uStack_1b0 = *(undefined4 *)*param_3;
      uStack_1ac = *(undefined4 *)(*param_3 + 4);
      FUN_00161b68(0x42700000,param_2,&uStack_1b0);
    }
    else {
      uStack_1a8 = *(undefined4 *)(*param_3 + 8);
      uStack_1b0 = *(undefined4 *)*param_3;
      uStack_1ac = *(undefined4 *)(*param_3 + 4);
      FUN_00161b68(0x42200000,param_2,&uStack_1b0);
    }
  }
  return lVar9;
}

