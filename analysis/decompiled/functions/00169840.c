/* Ghidra pseudocode. PS2 address: 00169840. Not validated source. */

void FUN_00169840(int *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  lVar7 = FUN_0023a448(0x2c48d0,0x10,0x10);
  if (lVar7 != 0) {
    FUN_0023bbd0(lVar7,0,0x10);
  }
  puVar8 = (undefined4 *)lVar7;
  puVar8[2] = 0;
  puVar8[1] = 0;
  param_1[4] = (int)puVar8;
  lVar7 = FUN_0023a448(0x2c48d8,0x290,0x10);
  if (lVar7 != 0) {
    FUN_0023bbd0(lVar7,0,0x290);
  }
  uVar5 = FUN_00168a98(lVar7);
  piVar1 = (int *)param_1[4];
  *puVar8 = uVar5;
  piVar1[2] = 0;
  iVar6 = param_1[4];
  *(undefined8 **)(*piVar1 + 0x4c) = param_2;
  *(undefined4 *)(iVar6 + 4) = 0;
  iVar6 = *(int *)param_1[4];
  *(undefined8 *)(iVar6 + 0x50) = *param_2;
  *(undefined8 *)(iVar6 + 0x58) = param_2[1];
  *(undefined8 *)(iVar6 + 0x60) = param_2[2];
  *(undefined8 *)(iVar6 + 0x68) = param_2[3];
  *(undefined8 *)(iVar6 + 0x70) = param_2[4];
  *(undefined8 *)(iVar6 + 0x78) = param_2[5];
  *(undefined8 *)(iVar6 + 0x80) = param_2[6];
  *(undefined8 *)(iVar6 + 0x88) = param_2[7];
  piVar1 = (int *)param_1[4];
  *(undefined4 *)(*piVar1 + 0x48) = param_3;
  FUN_001697c0(piVar1,(uint)param_2 & 0xf);
  iVar3 = DAT_00299ce0;
  iVar6 = *(int *)param_1[4];
  puVar2 = *(undefined8 **)(iVar6 + 0x4c);
  *(int **)(iVar6 + 0x114) = param_1;
  iVar3 = *(int *)(*(int *)((int)puVar2 + 0xcc) * 8 + iVar3);
  if (*(float *)(iVar3 + 0xc) == 0.0) {
    *(undefined8 *)(iVar6 + 0x50) = *puVar2;
    *(undefined8 *)(iVar6 + 0x58) = puVar2[1];
    *(undefined8 *)(iVar6 + 0x60) = puVar2[2];
    *(undefined8 *)(iVar6 + 0x68) = puVar2[3];
    *(undefined8 *)(iVar6 + 0x70) = puVar2[4];
    *(undefined8 *)(iVar6 + 0x78) = puVar2[5];
    *(undefined8 *)(iVar6 + 0x80) = puVar2[6];
    *(undefined8 *)(iVar6 + 0x88) = puVar2[7];
    iVar6 = *param_1;
  }
  else {
    FUN_001d7da0(*(undefined4 *)(iVar6 + 0x144),auStack_150,
                 *(undefined4 *)(*(int *)(iVar3 + 0x24) + 0x1c));
    iVar6 = *(int *)param_1[4];
    pauVar4 = *(undefined1 (**) [16])(iVar6 + 0x4c);
    auVar9 = _lqc2(*pauVar4);
    auVar10 = _lqc2(pauVar4[1]);
    auVar11 = _lqc2(pauVar4[2]);
    auVar12 = _lqc2(pauVar4[3]);
    auVar13 = _lqc2(auStack_120);
    auVar14 = _lqc2(auStack_110);
    auVar15 = _lqc2(auStack_100);
    auVar16 = _lqc2(auStack_f0);
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
    auStack_a0 = _sqc2(auVar13);
    auStack_90 = _sqc2(auVar14);
    auStack_80 = _sqc2(auVar15);
    auStack_70 = _sqc2(auVar9);
    uStack_e0 = auStack_a0._0_4_;
    uStack_dc = auStack_a0._4_4_;
    uStack_d8 = auStack_a0._8_4_;
    uStack_d4 = auStack_a0._12_4_;
    uStack_d0 = auStack_90._0_4_;
    uStack_cc = auStack_90._4_4_;
    uStack_c8 = auStack_90._8_4_;
    uStack_c4 = auStack_90._12_4_;
    uStack_c0 = auStack_80._0_4_;
    uStack_bc = auStack_80._4_4_;
    uStack_b8 = auStack_80._8_4_;
    uStack_b4 = auStack_80._12_4_;
    uStack_b0 = auStack_70._0_4_;
    uStack_ac = auStack_70._4_4_;
    uStack_a8 = auStack_70._8_4_;
    uStack_a4 = auStack_70._12_4_;
    *(long *)(iVar6 + 0x50) = auStack_a0._0_8_;
    *(long *)(iVar6 + 0x58) = auStack_a0._8_8_;
    *(long *)(iVar6 + 0x60) = auStack_90._0_8_;
    *(long *)(iVar6 + 0x68) = auStack_90._8_8_;
    *(long *)(iVar6 + 0x70) = auStack_80._0_8_;
    *(long *)(iVar6 + 0x78) = auStack_80._8_8_;
    *(long *)(iVar6 + 0x80) = auStack_70._0_8_;
    *(long *)(iVar6 + 0x88) = auStack_70._8_8_;
    FUN_0016a558(auStack_150,2);
    iVar6 = *param_1;
  }
  if (iVar6 == 0) {
    iVar6 = param_1[4];
    if (param_1[1] == 0) {
      param_1[1] = iVar6;
      *param_1 = iVar6;
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar6 + 4) = 0;
      goto LAB_00169b2c;
    }
  }
  else {
    iVar6 = param_1[4];
  }
  *(int *)(param_1[1] + 8) = iVar6;
  *(undefined4 *)(param_1[4] + 8) = 0;
  *(int *)(param_1[4] + 4) = param_1[1];
  param_1[1] = param_1[4];
LAB_00169b2c:
  param_1[2] = 0;
  return;
}

