/* Ghidra pseudocode. PS2 address: 001c6e60. Not validated source. */

void FUN_001c6e60(undefined8 param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int aiStack_860 [500];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [12];
  float fStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  piVar5 = aiStack_860;
  iVar3 = (int)param_1;
  iVar4 = 0;
  pfVar2 = *(float **)(iVar3 + 0x1450);
  *(int *)(iVar3 + 0x1454) = param_2;
  if (*(int *)(iVar3 + 0x13c0) == 0) {
    *(undefined4 *)(iVar3 + 0x13c0) = 1;
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1320));
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1330));
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1340));
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1350));
    auVar13 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x12e0));
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x12f0));
    auVar15 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1300));
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1310));
    _vmulabc(auVar9,auVar13);
    _vmaddabc(auVar10,auVar13);
    _vmaddabc(auVar11,auVar13);
    auVar13 = _vmaddbc(auVar12,auVar13);
    _vmulabc(auVar9,auVar14);
    _vmaddabc(auVar10,auVar14);
    _vmaddabc(auVar11,auVar14);
    auVar14 = _vmaddbc(auVar12,auVar14);
    _vmulabc(auVar9,auVar15);
    _vmaddabc(auVar10,auVar15);
    _vmaddabc(auVar11,auVar15);
    auVar15 = _vmaddbc(auVar12,auVar15);
    _vmulabc(auVar9,auVar16);
    _vmaddabc(auVar10,auVar16);
    _vmaddabc(auVar11,auVar16);
    auVar9 = _vmaddbc(auVar12,auVar16);
    _auStack_50 = _sqc2(auVar13);
    _auStack_80 = _sqc2(auVar14);
    auStack_30 = _sqc2(auVar15);
    auStack_20 = _sqc2(auVar9);
    fStack_90 = auStack_50._0_4_;
    fStack_8c = auStack_50._4_4_;
    fStack_88 = (float)auStack_50._8_4_;
    fStack_84 = fStack_44;
    uStack_70 = auStack_30._0_4_;
    uStack_6c = auStack_30._4_4_;
    uStack_68 = auStack_30._8_4_;
    uStack_64 = auStack_30._12_4_;
    uStack_60 = auStack_20._0_4_;
    uStack_5c = auStack_20._4_4_;
    uStack_58 = auStack_20._8_4_;
    uStack_54 = auStack_20._12_4_;
    *(long *)(iVar3 + 0x1380) = auStack_50._0_8_;
    *(long *)(iVar3 + 5000) = auStack_50._8_8_;
    *(undefined1 (*) [8])(iVar3 + 0x1390) = auStack_80;
    *(undefined8 *)(iVar3 + 0x1398) = uStack_78;
    *(long *)(iVar3 + 0x13a0) = auStack_30._0_8_;
    *(long *)(iVar3 + 0x13a8) = auStack_30._8_8_;
    *(long *)(iVar3 + 0x13b0) = auStack_20._0_8_;
    *(long *)(iVar3 + 0x13b8) = auStack_20._8_8_;
    auStack_40 = _auStack_80;
  }
  while (param_2 = param_2 + -1, param_2 != -1) {
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1380));
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x1390));
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x13a0));
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x13b0));
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_3 + 8));
    _vmulabc(auVar9,auVar13);
    _vmaddabc(auVar10,auVar13);
    _vmaddabc(auVar11,auVar13);
    auVar9 = _vmaddbc(auVar12,auVar13);
    _auStack_80 = _sqc2(auVar9);
    *pfVar2 = auStack_80._0_4_;
    pfVar2[1] = auStack_80._4_4_;
    pfVar2[2] = (float)uStack_78;
    pfVar2[3] = uStack_78._4_4_;
    fVar1 = param_3[7];
    pfVar2[3] = 1.0 / pfVar2[3];
    if ((int)fVar1 < 0) {
      fVar6 = param_3[4];
    }
    else {
      fVar6 = param_3[4];
    }
    fStack_90 = (float)(uint)fVar1 * 0.0078125;
    if ((int)fVar6 < 0) {
      fVar1 = param_3[5];
    }
    else {
      fVar1 = param_3[5];
    }
    fStack_8c = (float)(uint)fVar6 * 0.0078125;
    if ((int)fVar1 < 0) {
      fVar6 = param_3[6];
    }
    else {
      fVar6 = param_3[6];
    }
    fStack_88 = (float)(uint)fVar1 * 0.0078125;
    fStack_84 = (float)(uint)fVar6 * 0.0078125;
    *(ulong *)(pfVar2 + 4) = CONCAT44(fStack_8c,fStack_90);
    *(ulong *)(pfVar2 + 6) = CONCAT44(fStack_84,fStack_88);
    fVar6 = pfVar2[3];
    fVar7 = *pfVar2 * fVar6;
    fVar8 = pfVar2[1] * fVar6;
    *pfVar2 = fVar7;
    pfVar2[1] = fVar8;
    pfVar2[8] = *param_3 * fVar6;
    pfVar2[9] = param_3[1] * fVar6;
    fVar1 = 0.0;
    if (fVar7 < *(float *)(iVar3 + 0x1360)) {
      fVar1 = 2.8026e-45;
    }
    if (*(float *)(iVar3 + 0x1370) < fVar7) {
      fVar1 = (float)((uint)fVar1 | 1);
    }
    if (fVar8 < *(float *)(iVar3 + 0x1364)) {
      fVar1 = (float)((uint)fVar1 | 8);
    }
    if (*(float *)(iVar3 + 0x1374) < fVar8) {
      fVar1 = (float)((uint)fVar1 | 4);
    }
    if (fVar6 < 0.0) {
      fVar1 = (float)((uint)fVar1 ^ 0x2f);
    }
    else {
      if (*(float *)(iVar3 + 0x1368) < pfVar2[2]) {
        fVar1 = (float)((uint)fVar1 | 0x20);
      }
      if (pfVar2[2] < *(float *)(iVar3 + 0x1378)) {
        fVar1 = (float)((uint)fVar1 | 0x10);
      }
    }
    pfVar2[0xb] = fVar1;
    param_3 = param_3 + 0xc;
    *piVar5 = iVar4;
    pfVar2 = pfVar2 + 0xc;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + 1;
  }
  FUN_001ca700(param_1,*(undefined4 *)(iVar3 + 0x1454),aiStack_860,1);
  return;
}

