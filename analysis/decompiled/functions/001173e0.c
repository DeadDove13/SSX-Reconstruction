/* Ghidra pseudocode. PS2 address: 001173e0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00117440) */
/* WARNING: Removing unreachable block (ram,0x0011746c) */

void FUN_001173e0(undefined4 param_1,int param_2,undefined8 *param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  if (*(int *)(param_2 + 0x960) == 0x1e) {
    *(undefined4 *)(param_2 + 0x960) = 0x1d;
    *(int *)(param_2 + 0x964) = (*(int *)(param_2 + 0x964) + 1) % 0x1e;
  }
  iVar1 = *(int *)(param_2 + 0x960);
  *(int *)(param_2 + 0x960) = iVar1 + 1;
  fVar11 = DAT_002c169c;
  fVar15 = 1.0;
  puVar10 = (undefined4 *)(((*(int *)(param_2 + 0x964) + iVar1) % 0x1e) * 0x50 + param_2);
  uVar5 = FUN_002109b0();
  uVar6 = FUN_002109b0();
  puVar10[0x10] = 0;
  auVar16 = _lqc2(*param_6);
  auVar17 = _lqc2(*param_5);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vmul(auVar16,auVar17);
  _vaddabc(auVar16,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  auVar17 = _lqc2(*param_5);
  auVar16 = _qmtc2(auVar16._0_4_);
  auVar16 = _vmulbc(auVar17,auVar16);
  auVar16 = _sqc2(auVar16);
  auVar17 = _lqc2(*param_6);
  auVar16 = _lqc2(auVar16);
  auVar16 = _vsub(auVar17,auVar16);
  auVar16 = _sqc2(auVar16);
  uVar7 = FUN_002109b0();
  auVar17 = _lqc2(auVar16);
  auVar16 = _qmtc2(((float)(uVar7 & 0x7fffff | 0x3f800000) - fVar15) * fVar11 + fVar11);
  auVar16 = _vmulbc(auVar17,auVar16);
  auVar16 = _sqc2(auVar16);
  auVar17 = _lqc2(*param_4);
  auVar16 = _lqc2(auVar16);
  auVar16 = _vadd(auVar17,auVar16);
  auVar16 = _sqc2(auVar16);
  uStack_b8 = auVar16._8_4_;
  uStack_b4 = auVar16._12_4_;
  *puVar10 = auVar16._0_4_;
  puVar10[1] = auVar16._4_4_;
  puVar10[2] = uStack_b8;
  puVar10[3] = uStack_b4;
  uVar2 = *(undefined4 *)(*param_5 + 4);
  uVar3 = *(undefined4 *)(*param_5 + 8);
  uVar4 = *(undefined4 *)(*param_5 + 0xc);
  puVar10[4] = *(undefined4 *)*param_5;
  puVar10[5] = uVar2;
  puVar10[6] = uVar3;
  puVar10[7] = uVar4;
  puVar10[0xc] = (float)(uVar5 & 1);
  puVar10[0xd] = (float)(uVar6 & 1);
  fVar11 = 0.0;
  if ((uVar5 & 1) == 0) {
    fVar11 = fVar15;
  }
  fVar12 = 0.0;
  if ((uVar6 & 1) == 0) {
    fVar12 = fVar15;
  }
  puVar10[0xe] = fVar11;
  puVar10[0xf] = fVar12;
  uVar5 = FUN_002109b0();
  puVar10[0x12] = param_1;
  puVar10[0x11] = uVar5 & 3;
  pfVar8 = (float *)(puVar10 + 8);
  uVar9 = param_3[1];
  *(undefined8 *)(puVar10 + 8) = *param_3;
  *(undefined8 *)(puVar10 + 10) = uVar9;
  fVar12 = (float)puVar10[9];
  fVar14 = (float)puVar10[10];
  fVar13 = (float)puVar10[0xb];
  fVar11 = (fVar12 + fVar14 + fVar13) * DAT_002c16a0;
  puVar10[0xb] = fVar13 + (fVar11 - fVar13) * 0.5;
  puVar10[9] = fVar12 + (fVar11 - fVar12) * 0.5;
  puVar10[10] = fVar14 + (fVar11 - fVar14) * 0.5;
  puVar10[8] = 0;
  fVar13 = (float)puVar10[8];
  fVar12 = (float)puVar10[9];
  fVar11 = fVar13;
  if ((fVar13 <= fVar12) && (fVar11 = fVar15, fVar12 <= fVar15)) {
    fVar11 = fVar12;
  }
  fVar12 = (float)puVar10[10];
  puVar10[9] = fVar11;
  if (fVar12 < fVar13) {
    fVar12 = 0.0;
    fVar11 = (float)puVar10[0xb];
  }
  else {
    if (fVar15 < fVar12) {
      fVar12 = 1.0;
    }
    fVar11 = (float)puVar10[0xb];
  }
  puVar10[10] = fVar12;
  if (fVar11 < fVar13) {
    fVar11 = 0.0;
    fVar12 = *pfVar8;
  }
  else {
    if (fVar15 < fVar11) {
      fVar11 = 1.0;
    }
    fVar12 = *pfVar8;
  }
  puVar10[0xb] = fVar11;
  if (fVar12 < fVar13) {
    *pfVar8 = 0.0;
  }
  else if (fVar15 < fVar12) {
    *pfVar8 = 1.0;
  }
  else {
    *pfVar8 = fVar12;
  }
  *(float *)(param_2 + 0x968) = *(float *)(param_2 + 0x968) + 1.0;
  return;
}

