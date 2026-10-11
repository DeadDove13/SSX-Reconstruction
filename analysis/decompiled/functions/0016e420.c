/* Ghidra pseudocode. PS2 address: 0016e420. Not validated source. */

void FUN_0016e420(undefined4 param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_50;
  float afStack_4c [3];
  
  iVar1 = FUN_0016dd88();
  FUN_00218128(param_1,&fStack_50,afStack_4c);
  fVar6 = param_4[2];
  fVar2 = 1.0 - afStack_4c[0];
  fVar3 = *param_4;
  fVar7 = param_4[1];
  fVar5 = fVar2 * fVar6;
  fVar4 = fVar2 * fVar3;
  fVar2 = fVar2 * fVar7;
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
  auVar12._4_4_ = fVar2 * fVar3 - fStack_50 * fVar6;
  auVar12._0_4_ = fVar4 * fVar3 + afStack_4c[0];
  auVar12._8_4_ = fVar5 * fVar3 + fStack_50 * fVar7;
  auVar12._12_4_ = 0;
  auVar12 = _lqc2(auVar12);
  auVar13._4_4_ = fVar2 * fVar7 + afStack_4c[0];
  auVar13._0_4_ = fVar4 * fVar7 + fStack_50 * fVar6;
  auVar13._8_4_ = fVar5 * fVar7 - fStack_50 * fVar3;
  auVar13._12_4_ = 0;
  auVar13 = _lqc2(auVar13);
  auVar14._4_4_ = fVar2 * fVar6 + fStack_50 * fVar3;
  auVar14._0_4_ = fVar4 * fVar6 - fStack_50 * fVar7;
  auVar14._8_4_ = fVar5 * fVar6 + afStack_4c[0];
  auVar14._12_4_ = 0;
  auVar14 = _lqc2(auVar14);
  auVar15._12_4_ = 0x3f800000;
  auVar15._0_12_ = ZEXT812(0);
  auVar15 = _lqc2(auVar15);
  _vmulabc(auVar8,auVar12);
  _vmaddabc(auVar9,auVar12);
  _vmaddabc(auVar10,auVar12);
  auVar12 = _vmaddbc(auVar11,auVar12);
  _vmulabc(auVar8,auVar13);
  _vmaddabc(auVar9,auVar13);
  _vmaddabc(auVar10,auVar13);
  auVar13 = _vmaddbc(auVar11,auVar13);
  _vmulabc(auVar8,auVar14);
  _vmaddabc(auVar9,auVar14);
  _vmaddabc(auVar10,auVar14);
  auVar14 = _vmaddbc(auVar11,auVar14);
  _vmulabc(auVar8,auVar15);
  _vmaddabc(auVar9,auVar15);
  _vmaddabc(auVar10,auVar15);
  auVar15 = _vmaddbc(auVar11,auVar15);
  auVar12 = _sqc2(auVar12);
  *(undefined1 (*) [16])(iVar1 + 0x50) = auVar12;
  auVar12 = _sqc2(auVar13);
  *(undefined1 (*) [16])(iVar1 + 0x60) = auVar12;
  auVar12 = _sqc2(auVar14);
  *(undefined1 (*) [16])(iVar1 + 0x70) = auVar12;
  auVar12 = _sqc2(auVar15);
  *(undefined1 (*) [16])(iVar1 + 0x80) = auVar12;
  return;
}

