/* Ghidra pseudocode. PS2 address: 0011c6f0. Not validated source. */

void FUN_0011c6f0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + 0x84),1);
  FUN_0011ed28(DAT_002c18b0,0x295e90,0,0);
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed08(0x295e90,2,0);
  FUN_0011ed48(0x295e90,3);
  fVar9 = (float)*DAT_00296264;
  fVar11 = (float)((ulong)*DAT_00296264 >> 0x20);
  fVar10 = *(float *)(DAT_00296264 + 4);
  fVar12 = *(float *)((int)DAT_00296264 + 0x24);
  fVar13 = *(float *)(DAT_00296264 + 5);
  fVar14 = *(float *)((int)DAT_00296264 + 0x2c);
  fVar15 = *(float *)param_1[2] * fVar10 + *(float *)(param_1[2] + 4) * fVar12 +
           *(float *)(param_1[2] + 8) * fVar13 + *(float *)(param_1[2] + 0xc) * fVar14;
  fVar16 = DAT_002c18b4;
  if ((0.0 < fVar15) && (fVar16 = DAT_002c18bc, fVar15 < DAT_002c18b8)) {
    fVar16 = (fVar15 / DAT_002c18b8) * DAT_002c18c4 + DAT_002c18c0;
  }
  auStack_80._4_4_ =
       *(float *)(DAT_00296264 + 2) + *(float *)((int)DAT_00296264 + 0x14) * 0.0 +
       *(float *)(DAT_00296264 + 3) * 0.0 + *(float *)((int)DAT_00296264 + 0x1c) * 0.0;
  auStack_80._0_4_ =
       fVar9 + fVar11 * 0.0 + *(float *)(DAT_00296264 + 1) * 0.0 +
       *(float *)((int)DAT_00296264 + 0xc) * 0.0;
  auVar7._8_4_ = fVar10 + fVar12 * 0.0 + fVar13 * 0.0 + fVar14 * 0.0;
  auVar7._0_8_ = auStack_80._0_8_;
  auVar7._12_4_ =
       *(float *)(DAT_00296264 + 6) + *(float *)((int)DAT_00296264 + 0x34) * 0.0 +
       *(float *)(DAT_00296264 + 7) * 0.0 + *(float *)((int)DAT_00296264 + 0x3c) * 0.0;
  auVar18 = _lqc2(auVar7);
  auVar17 = _qmtc2(fVar16);
  auVar17 = _vmulbc(auVar18,auVar17);
  auVar17 = _sqc2(auVar17);
  uStack_60 = CONCAT44(*(float *)(DAT_00296264 + 2) * 0.0 +
                       *(float *)((int)DAT_00296264 + 0x14) * 0.0 +
                       *(float *)(DAT_00296264 + 3) * 1.0 +
                       *(float *)((int)DAT_00296264 + 0x1c) * 0.0,
                       fVar9 * 0.0 + fVar11 * 0.0 + *(float *)(DAT_00296264 + 1) * 1.0 +
                       *(float *)((int)DAT_00296264 + 0xc) * 0.0);
  auVar8._8_4_ = fVar10 * 0.0 + fVar12 * 0.0 + fVar13 * 1.0 + fVar14 * 0.0;
  auVar8._0_8_ = uStack_60;
  auVar8._12_4_ =
       *(float *)(DAT_00296264 + 6) * 0.0 + *(float *)((int)DAT_00296264 + 0x34) * 0.0 +
       *(float *)(DAT_00296264 + 7) * 1.0 + *(float *)((int)DAT_00296264 + 0x3c) * 0.0;
  auVar19 = _lqc2(auVar8);
  auVar18 = _qmtc2(*(undefined4 *)(param_1[0x24] + 0xc));
  auVar18 = _vmulbc(auVar19,auVar18);
  auVar18 = _sqc2(auVar18);
  auStack_80._0_12_ = auVar18._0_12_;
  auStack_80._12_4_ = 0;
  auVar18 = _lqc2(*param_1);
  auVar1 = auVar17._0_12_;
  auVar17._12_4_ = 0;
  auVar17._0_12_ = auVar1;
  auVar17 = _lqc2(auVar17);
  auVar17 = _vsub(auVar18,auVar17);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(auStack_80._0_16_);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  uStack_50 = auVar17._0_4_;
  uStack_4c = auVar17._4_4_;
  uStack_48 = auVar17._8_4_;
  uStack_44 = auVar17._12_4_;
  *(undefined4 *)param_1[0xe] = uStack_50;
  *(undefined4 *)(param_1[0xe] + 4) = uStack_4c;
  *(undefined4 *)(param_1[0xe] + 8) = uStack_48;
  *(undefined4 *)(param_1[0xe] + 0xc) = uStack_44;
  auVar17 = _lqc2(*param_1);
  auVar18._12_4_ = 0;
  auVar18._0_12_ = auVar1;
  auVar18 = _lqc2(auVar18);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(auStack_80._0_16_);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  uStack_50 = auVar17._0_4_;
  uStack_4c = auVar17._4_4_;
  uStack_48 = auVar17._8_4_;
  uStack_44 = auVar17._12_4_;
  *(undefined4 *)param_1[0x11] = uStack_50;
  *(undefined4 *)(param_1[0x11] + 4) = uStack_4c;
  *(undefined4 *)(param_1[0x11] + 8) = uStack_48;
  *(undefined4 *)(param_1[0x11] + 0xc) = uStack_44;
  auVar17 = _lqc2(param_1[1]);
  auVar19._12_4_ = 0;
  auVar19._0_12_ = auVar1;
  auVar18 = _lqc2(auVar19);
  auVar17 = _vsub(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(auStack_80._0_16_);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  uStack_50 = auVar17._0_4_;
  uStack_4c = auVar17._4_4_;
  uStack_48 = auVar17._8_4_;
  uStack_44 = auVar17._12_4_;
  *(undefined4 *)param_1[0x14] = uStack_50;
  *(undefined4 *)(param_1[0x14] + 4) = uStack_4c;
  *(undefined4 *)(param_1[0x14] + 8) = uStack_48;
  *(undefined4 *)(param_1[0x14] + 0xc) = uStack_44;
  auVar17 = _lqc2(param_1[1]);
  auVar2._12_4_ = 0;
  auVar2._0_12_ = auVar1;
  auVar18 = _lqc2(auVar2);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(auStack_80._0_16_);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  uStack_50 = auVar17._0_4_;
  uStack_4c = auVar17._4_4_;
  uStack_48 = auVar17._8_4_;
  uStack_44 = auVar17._12_4_;
  *(undefined4 *)param_1[0x17] = uStack_50;
  *(undefined4 *)(param_1[0x17] + 4) = uStack_4c;
  *(undefined4 *)(param_1[0x17] + 8) = uStack_48;
  *(undefined4 *)(param_1[0x17] + 0xc) = uStack_44;
  auVar17 = _lqc2(param_1[2]);
  auVar3._12_4_ = 0;
  auVar3._0_12_ = auVar1;
  auVar18 = _lqc2(auVar3);
  auVar17 = _vsub(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(auStack_80._0_16_);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  uStack_50 = auVar17._0_4_;
  uStack_4c = auVar17._4_4_;
  uStack_48 = auVar17._8_4_;
  uStack_44 = auVar17._12_4_;
  *(undefined4 *)param_1[0x1a] = uStack_50;
  *(undefined4 *)(param_1[0x1a] + 4) = uStack_4c;
  *(undefined4 *)(param_1[0x1a] + 8) = uStack_48;
  *(undefined4 *)(param_1[0x1a] + 0xc) = uStack_44;
  auVar17 = _lqc2(param_1[2]);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auVar1;
  auVar18 = _lqc2(auVar4);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(auStack_80._0_16_);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  uStack_50 = auVar17._0_4_;
  uStack_4c = auVar17._4_4_;
  uStack_48 = auVar17._8_4_;
  uStack_44 = auVar17._12_4_;
  *(undefined4 *)param_1[0x1d] = uStack_50;
  *(undefined4 *)(param_1[0x1d] + 4) = uStack_4c;
  *(undefined4 *)(param_1[0x1d] + 8) = uStack_48;
  *(undefined4 *)(param_1[0x1d] + 0xc) = uStack_44;
  auVar17 = _lqc2(param_1[3]);
  auVar5._12_4_ = 0;
  auVar5._0_12_ = auVar1;
  auVar18 = _lqc2(auVar5);
  auVar17 = _vsub(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(auStack_80._0_16_);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  uStack_50 = auVar17._0_4_;
  uStack_4c = auVar17._4_4_;
  uStack_48 = auVar17._8_4_;
  uStack_44 = auVar17._12_4_;
  *(undefined4 *)param_1[0x20] = uStack_50;
  *(undefined4 *)(param_1[0x20] + 4) = uStack_4c;
  *(undefined4 *)(param_1[0x20] + 8) = uStack_48;
  *(undefined4 *)(param_1[0x20] + 0xc) = uStack_44;
  auVar17 = _lqc2(param_1[3]);
  auVar6._12_4_ = 0;
  auVar6._0_12_ = auVar1;
  auVar18 = _lqc2(auVar6);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(auStack_80._0_16_);
  auVar17 = _vadd(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  uStack_50 = auVar17._0_4_;
  uStack_4c = auVar17._4_4_;
  uStack_48 = auVar17._8_4_;
  uStack_44 = auVar17._12_4_;
  *(undefined4 *)param_1[0x23] = uStack_50;
  *(undefined4 *)(param_1[0x23] + 4) = uStack_4c;
  *(undefined4 *)(param_1[0x23] + 8) = uStack_48;
  *(undefined4 *)(param_1[0x23] + 0xc) = uStack_44;
  FUN_0011ed68(0x295e90,8,param_1 + 0xc,0);
  FUN_0011ed48(0x295e90,3);
  FUN_0011ed28(DAT_002c18c8,0x295e90,0,2);
  FUN_0011ed38(0x295e90,0);
  FUN_0011ed08(0x295e90,0,0);
  return;
}

