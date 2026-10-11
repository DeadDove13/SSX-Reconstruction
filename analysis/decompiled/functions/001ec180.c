/* Ghidra pseudocode. PS2 address: 001ec180. Not validated source. */

void FUN_001ec180(undefined8 param_1,short param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float afStack_8c [3];
  
  fVar3 = DAT_002c3898;
  lVar11 = 0;
  iVar9 = (int)param_1;
  if (0 < *(short *)(*(int *)(iVar9 + 0x18) + 0x2a)) {
    iVar4 = *(int *)(iVar9 + 0x24);
    while( true ) {
      iVar10 = (int)lVar11;
      if (*(short *)(iVar10 * 0x20 + iVar4 + 0x12) == param_2) {
        iVar8 = iVar10 * 0x40;
        puVar6 = (undefined8 *)(iVar8 + *(int *)(iVar9 + 0x10));
        *puVar6 = *param_3;
        puVar6[1] = param_3[1];
        puVar6[2] = param_3[2];
        puVar6[3] = param_3[3];
        puVar6[4] = param_3[4];
        puVar6[5] = param_3[5];
        puVar6[6] = param_3[6];
        puVar6[7] = param_3[7];
        iVar4 = *(int *)(iVar9 + 0x24);
        iVar7 = iVar10 * 6 + *(int *)(iVar9 + 8);
        sVar1 = *(short *)(iVar7 + 0xc);
        sVar2 = *(short *)(iVar7 + 10);
        FUN_00218128((float)(int)*(short *)(iVar7 + 8) * fVar3,&fStack_a0,&fStack_9c);
        FUN_00218128((float)(int)sVar2 * fVar3,&fStack_98,&fStack_94);
        FUN_00218128((float)(int)sVar1 * fVar3,&fStack_90,afStack_8c);
        pauVar5 = (undefined1 (*) [16])(iVar8 + *(int *)(iVar9 + 0x10));
        auVar12 = _lqc2(*pauVar5);
        auVar13 = _lqc2(pauVar5[1]);
        auVar14 = _lqc2(pauVar5[2]);
        auVar15 = _lqc2(pauVar5[3]);
        auVar16._4_4_ = -fStack_94 * fStack_90;
        auVar16._0_4_ = fStack_94 * afStack_8c[0];
        auVar16._8_4_ = fStack_98;
        auVar16._12_4_ = 0;
        auVar16 = _lqc2(auVar16);
        auVar17._4_4_ = fStack_9c * afStack_8c[0] - fStack_a0 * fStack_98 * fStack_90;
        auVar17._0_4_ = fStack_a0 * fStack_98 * afStack_8c[0] + fStack_9c * fStack_90;
        auVar17._8_4_ = -fStack_a0 * fStack_94;
        auVar17._12_4_ = 0;
        auVar17 = _lqc2(auVar17);
        auVar18._4_4_ = fStack_9c * fStack_90 * fStack_98 + fStack_a0 * afStack_8c[0];
        auVar18._0_4_ = fStack_a0 * fStack_90 - fStack_9c * fStack_98 * afStack_8c[0];
        auVar18._8_4_ = fStack_9c * fStack_94;
        auVar18._12_4_ = 0;
        auVar18 = _lqc2(auVar18);
        auVar19._12_4_ = 0x3f800000;
        auVar19._0_12_ = *(undefined1 (*) [12])(iVar10 * 0x20 + iVar4 + 0x14);
        auVar19 = _lqc2(auVar19);
        _vmulabc(auVar12,auVar16);
        _vmaddabc(auVar13,auVar16);
        _vmaddabc(auVar14,auVar16);
        auVar16 = _vmaddbc(auVar15,auVar16);
        _vmulabc(auVar12,auVar17);
        _vmaddabc(auVar13,auVar17);
        _vmaddabc(auVar14,auVar17);
        auVar17 = _vmaddbc(auVar15,auVar17);
        _vmulabc(auVar12,auVar18);
        _vmaddabc(auVar13,auVar18);
        _vmaddabc(auVar14,auVar18);
        auVar18 = _vmaddbc(auVar15,auVar18);
        _vmulabc(auVar12,auVar19);
        _vmaddabc(auVar13,auVar19);
        _vmaddabc(auVar14,auVar19);
        auVar19 = _vmaddbc(auVar15,auVar19);
        auVar16 = _sqc2(auVar16);
        *pauVar5 = auVar16;
        auVar16 = _sqc2(auVar17);
        pauVar5[1] = auVar16;
        auVar16 = _sqc2(auVar18);
        pauVar5[2] = auVar16;
        auVar16 = _sqc2(auVar19);
        pauVar5[3] = auVar16;
        FUN_001ec180(param_1,lVar11,*(int *)(iVar9 + 0x10) + iVar8);
        iVar4 = *(int *)(iVar9 + 0x18);
      }
      else {
        iVar4 = *(int *)(iVar9 + 0x18);
      }
      lVar11 = (long)(iVar10 + 1);
      if (*(short *)(iVar4 + 0x2a) <= lVar11) break;
      iVar4 = *(int *)(iVar9 + 0x24);
    }
  }
  return;
}

