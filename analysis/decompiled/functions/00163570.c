/* Ghidra pseudocode. PS2 address: 00163570. Not validated source. */

undefined8 FUN_00163570(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 4);
  *(int *)(iVar1 + 0x118) = iVar1;
  if (*(int *)(iVar1 + 0x170) == 0) {
    iVar3 = *(int *)(iVar1 + 0x150) * 0x20 + (int)param_2;
    fStack_1b8 = *(float *)(iVar1 + 0x90) - *(float *)(iVar3 + 0x1c);
    fStack_1bc = *(float *)(iVar1 + 100) - *(float *)(iVar3 + 0x18);
    fStack_1c0 = *(float *)(iVar1 + 0x38) - *(float *)(iVar3 + 0x14);
    fVar7 = *(float *)(iVar1 + 0x14c);
    if (fVar7 < ABS(fStack_1c0)) {
      return 0;
    }
    if (fVar7 < ABS(fStack_1bc)) {
      return 0;
    }
    bVar2 = ABS(fStack_1b8) <= fVar7;
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x150) * 0x20 + (int)param_2;
    fStack_1b8 = *(float *)(iVar1 + 0x90) - *(float *)(iVar3 + 0x1c);
    fStack_1bc = *(float *)(iVar1 + 100) - *(float *)(iVar3 + 0x18);
    fStack_1c0 = *(float *)(iVar1 + 0x38) - *(float *)(iVar3 + 0x14);
    fVar7 = *(float *)(iVar1 + 0x14c);
    fVar15 = *(float *)(iVar1 + 0x174) * 0.5;
    if (fVar7 <= fVar15) {
      fVar7 = fVar15;
    }
    if (fVar7 < ABS(fStack_1c0)) {
      return 0;
    }
    if (fVar7 < ABS(fStack_1bc)) {
      return 0;
    }
    if (fVar7 < ABS(fStack_1b8)) {
      return 0;
    }
    fStack_1ac = 0.0;
    fStack_1b0 = 1.0;
    fStack_1a8 = 0.0;
    fStack_1a4 = 0.0;
    fStack_1a0 = 1.0;
    fStack_19c = 0.0;
    fStack_198 = 0.0;
    fStack_194 = 0.0;
    fStack_190 = 1.0;
    fStack_180 = 0.0;
    fStack_17c = 0.0;
    fStack_178 = 1.0;
    FUN_00218128(*(undefined4 *)(iVar1 + 0x178),&fStack_b0,&fStack_ac);
    fVar6 = 1.0 - fStack_ac;
    fVar7 = fVar6 * fStack_180;
    fVar8 = fVar6 * fStack_17c;
    fVar6 = fVar6 * fStack_178;
    fStack_140 = fStack_1b0;
    fStack_134 = fStack_1a4;
    fStack_13c = fStack_1ac;
    fStack_138 = fStack_1a8;
    fStack_130 = fStack_1a0;
    fStack_12c = fStack_19c;
    fStack_164 = fVar7 * fStack_17c + fStack_b0 * fStack_178;
    fStack_160 = fVar8 * fStack_17c + fStack_ac;
    fStack_128 = fStack_198;
    fStack_16c = fVar8 * fStack_180 - fStack_b0 * fStack_178;
    fStack_124 = fStack_194;
    fStack_170 = fVar7 * fStack_180 + fStack_ac;
    fStack_158 = fVar7 * fStack_178 - fStack_b0 * fStack_17c;
    fStack_154 = fVar8 * fStack_178 + fStack_b0 * fStack_180;
    fStack_168 = fVar6 * fStack_180 + fStack_b0 * fStack_17c;
    fStack_120 = fStack_190;
    fStack_15c = fVar6 * fStack_17c - fStack_b0 * fStack_180;
    fStack_150 = fVar6 * fStack_178 + fStack_ac;
    fVar10 = fStack_1b0 * fStack_164;
    fVar14 = fStack_19c * fStack_154;
    fVar13 = fStack_19c * fStack_16c;
    fVar11 = fStack_1a8 * fStack_158;
    fVar8 = fStack_1b0 * fStack_158;
    fVar12 = fStack_1a4 * fStack_154;
    fVar6 = fStack_1a0 * fStack_154;
    fVar9 = fStack_1a0 * fStack_16c;
    fVar7 = fStack_1ac * fStack_158;
    fStack_1b0 = fStack_1b0 * fStack_170 + fStack_1a4 * fStack_16c + fStack_198 * fStack_168;
    fStack_1a4 = fVar10 + fStack_1a4 * fStack_160 + fStack_198 * fStack_15c;
    fStack_1a0 = fStack_1ac * fStack_164 + fStack_1a0 * fStack_160 + fStack_194 * fStack_15c;
    fStack_19c = fStack_1a8 * fStack_164 + fStack_19c * fStack_160 + fStack_190 * fStack_15c;
    fStack_198 = fVar8 + fVar12 + fStack_198 * fStack_150;
    fStack_1ac = fStack_1ac * fStack_170 + fVar9 + fStack_194 * fStack_168;
    fStack_194 = fVar7 + fVar6 + fStack_194 * fStack_150;
    fStack_1a8 = fStack_1a8 * fStack_170 + fVar13 + fStack_190 * fStack_168;
    fStack_190 = fVar11 + fVar14 + fStack_190 * fStack_150;
    fStack_180 = 0.0;
    fStack_17c = 1.0;
    fStack_178 = 0.0;
    FUN_00218128(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x17c),&fStack_a8,&fStack_a4);
    fVar7 = 1.0 - fStack_a4;
    fVar8 = fVar7 * fStack_180;
    fVar6 = fVar7 * fStack_17c;
    fVar7 = fVar7 * fStack_178;
    fStack_110 = fVar8 * fStack_180 + fStack_a4;
    fStack_10c = fVar6 * fStack_180 - fStack_a8 * fStack_178;
    fStack_e0 = fStack_1b0;
    fStack_dc = fStack_1ac;
    fStack_d4 = fStack_1a4;
    fStack_d0 = fStack_1a0;
    fStack_104 = fVar8 * fStack_17c + fStack_a8 * fStack_178;
    fStack_d8 = fStack_1a8;
    fStack_100 = fVar6 * fStack_17c + fStack_a4;
    fStack_cc = fStack_19c;
    fStack_108 = fVar7 * fStack_180 + fStack_a8 * fStack_17c;
    fStack_c8 = fStack_198;
    fStack_c4 = fStack_194;
    fStack_c0 = fStack_190;
    fStack_fc = fVar7 * fStack_17c - fStack_a8 * fStack_180;
    fStack_f4 = fVar6 * fStack_178 + fStack_a8 * fStack_180;
    fVar9 = fStack_1b0 * fStack_110 + fStack_1a4 * fStack_10c + fStack_198 * fStack_108;
    fVar6 = fStack_1ac * fStack_104;
    fStack_f8 = fVar8 * fStack_178 - fStack_a8 * fStack_17c;
    fStack_f0 = fVar7 * fStack_178 + fStack_a4;
    fVar10 = fStack_1b0 * fStack_104 + fStack_1a4 * fStack_100 + fStack_198 * fStack_fc;
    fVar7 = fStack_1a8 * fStack_104;
    fVar8 = fStack_1ac * fStack_f8;
    fVar11 = fStack_1a0 * fStack_f4;
    fStack_1ac = fStack_1ac * fStack_110 + fStack_1a0 * fStack_10c + fStack_194 * fStack_108;
    fStack_1a0 = fVar6 + fStack_1a0 * fStack_100 + fStack_194 * fStack_fc;
    fVar6 = fStack_1a8 * fStack_f8;
    fVar12 = fStack_19c * fStack_f4;
    fStack_1a8 = fStack_1a8 * fStack_110 + fStack_19c * fStack_10c + fStack_190 * fStack_108;
    fStack_198 = fStack_1b0 * fStack_f8 + fStack_1a4 * fStack_f4 + fStack_198 * fStack_f0;
    fStack_194 = fVar8 + fVar11 + fStack_194 * fStack_f0;
    fStack_19c = fVar7 + fStack_19c * fStack_100 + fStack_190 * fStack_fc;
    fStack_190 = fVar6 + fVar12 + fStack_190 * fStack_f0;
    fStack_180 = fVar9 * fVar15 + fVar10 * 0.0 + fStack_198 * 0.0;
    fStack_17c = fStack_1ac * fVar15 + fStack_1a0 * 0.0 + fStack_194 * 0.0;
    fStack_178 = fStack_1a8 * fVar15 + fStack_19c * 0.0 + fStack_190 * 0.0;
    fStack_15c = (fStack_1c0 * fStack_180 + fStack_1bc * fStack_17c + fStack_1b8 * fStack_178) /
                 (fVar15 * fVar15);
    if (1.0 < ABS(fStack_15c)) {
      return 0;
    }
    fStack_158 = fStack_15c * fStack_178;
    fStack_160 = fStack_15c * fStack_180;
    fStack_15c = fStack_15c * fStack_17c;
    fStack_1b8 = fStack_1b8 - fStack_158;
    fStack_1c0 = fStack_1c0 - fStack_160;
    fStack_1bc = fStack_1bc - fStack_15c;
    fVar7 = *(float *)(*(int *)(iVar5 + 4) + 0x14c);
    if (fVar7 < ABS(fStack_1c0)) {
      return 0;
    }
    if (fVar7 < ABS(fStack_1bc)) {
      return 0;
    }
    bVar2 = ABS(fStack_1b8) <= fVar7;
    fStack_1b0 = fVar9;
    fStack_1a4 = fVar10;
    fStack_170 = fStack_1c0;
    fStack_16c = fStack_1bc;
    fStack_168 = fStack_1b8;
  }
  if ((bVar2) &&
     (fVar7 = (float)FUN_0011ee88(&fStack_1c0,&fStack_1c0),
     SQRT(fVar7) < *(float *)(*(int *)(iVar5 + 4) + 0x14c))) {
    uVar4 = FUN_00163468(param_1,param_2);
    return uVar4;
  }
  return 0;
}

