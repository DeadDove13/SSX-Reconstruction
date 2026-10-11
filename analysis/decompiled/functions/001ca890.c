/* Ghidra pseudocode. PS2 address: 001ca890. Not validated source. */

uint FUN_001ca890(int param_1,undefined1 (*param_2) [16],float *param_3,int *param_4,int *param_5,
                 float *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_54;
  
  if (*(int *)(param_1 + 0x13c0) == 0) {
    *(undefined4 *)(param_1 + 0x13c0) = 1;
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1320));
    auVar15 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1330));
    auVar16 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1340));
    auVar17 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1350));
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x12e0));
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x12f0));
    auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1300));
    auVar21 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1310));
    _vmulabc(auVar14,auVar18);
    _vmaddabc(auVar15,auVar18);
    _vmaddabc(auVar16,auVar18);
    auVar18 = _vmaddbc(auVar17,auVar18);
    _vmulabc(auVar14,auVar19);
    _vmaddabc(auVar15,auVar19);
    _vmaddabc(auVar16,auVar19);
    auVar19 = _vmaddbc(auVar17,auVar19);
    _vmulabc(auVar14,auVar20);
    _vmaddabc(auVar15,auVar20);
    _vmaddabc(auVar16,auVar20);
    auVar20 = _vmaddbc(auVar17,auVar20);
    _vmulabc(auVar14,auVar21);
    _vmaddabc(auVar15,auVar21);
    _vmaddabc(auVar16,auVar21);
    auVar17 = _vmaddbc(auVar17,auVar21);
    auVar14 = _sqc2(auVar18);
    auVar15 = _sqc2(auVar19);
    auVar16 = _sqc2(auVar20);
    auVar17 = _sqc2(auVar17);
    auStack_90 = auVar15._0_8_;
    uStack_70 = auVar17._0_8_;
    uStack_88 = auVar15._8_8_;
    uStack_68 = auVar17._8_8_;
    *(long *)(param_1 + 0x1380) = auVar14._0_8_;
    *(long *)(param_1 + 5000) = auVar14._8_8_;
    *(undefined1 (*) [8])(param_1 + 0x1390) = auStack_90;
    *(undefined8 *)(param_1 + 0x1398) = uStack_88;
    *(long *)(param_1 + 0x13a0) = auVar16._0_8_;
    *(long *)(param_1 + 0x13a8) = auVar16._8_8_;
    *(undefined8 *)(param_1 + 0x13b0) = uStack_70;
    *(undefined8 *)(param_1 + 0x13b8) = uStack_68;
  }
  auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1380));
  auVar15 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1390));
  auVar16 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x13a0));
  auVar17 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x13b0));
  auVar18 = _lqc2(*param_2);
  _vmulabc(auVar14,auVar18);
  _vmaddabc(auVar15,auVar18);
  _vmaddabc(auVar16,auVar18);
  auVar14 = _vmaddbc(auVar17,auVar18);
  auVar14 = _sqc2(auVar14);
  uVar9 = 0;
  auStack_90._0_4_ = auVar14._0_4_;
  auStack_90._4_4_ = auVar14._4_4_;
  uStack_88._0_4_ = auVar14._8_4_;
  uVar4 = (undefined4)uStack_88;
  uStack_88._4_4_ = auVar14._12_4_;
  fVar10 = 1.0 / uStack_88._4_4_;
  fVar12 = (float)auStack_90._0_4_ * fVar10;
  fVar11 = (float)auStack_90._4_4_ * fVar10;
  auStack_90._4_4_ = *(float *)(param_1 + 0x1334) * param_3[1] * fVar10;
  auStack_90._0_4_ = *(float *)(param_1 + 0x1320) * *param_3 * fVar10;
  uStack_88 = 0;
  auVar14._4_4_ = fVar11;
  auVar14._0_4_ = fVar12;
  auVar14._8_4_ = uVar4;
  auVar14._12_4_ = fVar10;
  auVar14 = _lqc2(auVar14);
  auVar15 = _lqc2(_auStack_90);
  auVar14 = _vsub(auVar14,auVar15);
  auVar14 = _sqc2(auVar14);
  uStack_70._0_4_ = auVar14._0_4_;
  fVar5 = (float)uStack_70;
  uStack_70._4_4_ = auVar14._4_4_;
  fVar6 = uStack_70._4_4_;
  uStack_68._0_4_ = auVar14._8_4_;
  fVar7 = (float)uStack_68;
  uStack_68._4_4_ = auVar14._12_4_;
  auVar15._4_4_ = fVar11;
  auVar15._0_4_ = fVar12;
  auVar15._8_4_ = uVar4;
  auVar15._12_4_ = fVar10;
  auVar14 = _lqc2(auVar15);
  auVar15 = _lqc2(_auStack_90);
  auVar14 = _vadd(auVar14,auVar15);
  auVar14 = _sqc2(auVar14);
  fStack_54 = auVar14._12_4_;
  if ((float)uStack_70 < *(float *)(param_1 + 0x1360)) {
    uVar9 = 2;
  }
  if (*(float *)(param_1 + 0x1370) < (float)uStack_70) {
    uVar9 = uVar9 | 1;
  }
  if (uStack_70._4_4_ < *(float *)(param_1 + 0x1364)) {
    uVar9 = uVar9 | 8;
  }
  if (*(float *)(param_1 + 0x1374) < uStack_70._4_4_) {
    uVar9 = uVar9 | 4;
  }
  if (uStack_68._4_4_ < 0.0) {
    uVar9 = uVar9 ^ 0x2f;
  }
  else {
    if (*(float *)(param_1 + 0x1368) < (float)uStack_68) {
      uVar9 = uVar9 | 0x20;
    }
    if ((float)uStack_68 < *(float *)(param_1 + 0x1378)) {
      uVar9 = uVar9 | 0x10;
    }
  }
  uStack_70._0_4_ = auVar14._0_4_;
  uVar8 = 0;
  if ((float)uStack_70 < *(float *)(param_1 + 0x1360)) {
    uVar8 = 2;
  }
  if (*(float *)(param_1 + 0x1370) < (float)uStack_70) {
    uVar8 = uVar8 | 1;
  }
  uStack_70._4_4_ = auVar14._4_4_;
  if (uStack_70._4_4_ < *(float *)(param_1 + 0x1364)) {
    uVar8 = uVar8 | 8;
  }
  if (*(float *)(param_1 + 0x1374) < uStack_70._4_4_) {
    uVar8 = uVar8 | 4;
  }
  uStack_68._0_4_ = auVar14._8_4_;
  if (fStack_54 < 0.0) {
    uVar8 = uVar8 ^ 0x2f;
  }
  else {
    if (*(float *)(param_1 + 0x1368) < (float)uStack_68) {
      uVar8 = uVar8 | 0x20;
    }
    if ((float)uStack_68 < *(float *)(param_1 + 0x1378)) {
      uVar8 = uVar8 | 0x10;
    }
  }
  uVar9 = uVar9 & uVar8;
  if (uVar9 == 0) {
    fVar10 = param_6[3];
    fVar12 = param_6[2];
    fVar13 = *param_6;
    fVar11 = param_6[1];
    puVar1 = *(undefined8 **)(param_1 + 0x1458);
    puVar1[3] = 0x5000000400000000;
    *puVar1 = 0x10000005;
    puVar1[5] = 0x525120;
    puVar1[6] = 0x56;
    puVar1[4] = 0x6400000000008001;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = param_4[1];
    iVar3 = *param_4;
    puVar1[8] = (long)(int)(fVar11 * 128.0) | 0x3f80000000000000U |
                (long)(int)(fVar10 * 128.0) << 0x10 | (long)(int)(fVar12 * 128.0) << 8 |
                (long)(int)(fVar13 * 128.0) << 0x18;
    puVar1[7] = (long)iVar3 | (long)iVar2 << 0x20;
    puVar1[9] = (long)(int)fVar5 | (long)(int)fVar6 << 0x10 |
                (long)(int)(fVar7 * uStack_68._4_4_) << 0x20;
    puVar1[10] = (long)*param_5 | (long)param_5[1] << 0x20;
    puVar1[0xb] = (long)(int)(float)uStack_70 | (long)(int)uStack_70._4_4_ << 0x10 |
                  (long)(int)((float)uStack_68 * fStack_54) << 0x20;
    *(undefined8 **)(param_1 + 0x1458) = puVar1 + 0xe;
    FUN_001d39e8(*(undefined4 *)(param_1 + 8),puVar1,puVar1 + 0xc,0);
    uVar9 = *(int *)(param_1 + 0x1458) - *(int *)(param_1 + 0x145c) >> 3;
  }
  return uVar9;
}

