/* Ghidra pseudocode. PS2 address: 001ed7e8. Not validated source. */

void FUN_001ed7e8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  float fVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [12];
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  fVar3 = DAT_002c38c4;
  lVar10 = 0;
  if (0 < *(short *)(*(int *)(param_1 + 0x18) + 0x2a)) {
    iVar6 = *(int *)(param_1 + 0x24);
    while( true ) {
      iVar9 = (int)lVar10;
      iVar6 = iVar9 * 0x20 + iVar6;
      puVar7 = (undefined8 *)(iVar9 * 0x40 + *(int *)(param_1 + 0x10));
      puVar5 = (undefined8 *)
               (*(short *)(iVar6 + 0x12) * 0x40 +
               *(int *)(*(int *)(param_2 + 0xc) +
                        *(int *)(*(short *)(iVar6 + 0x10) * 4 + *(int *)(param_2 + 0x10)) * 0x34 +
                       0x10));
      *puVar7 = *puVar5;
      puVar7[1] = puVar5[1];
      puVar7[2] = puVar5[2];
      puVar7[3] = puVar5[3];
      puVar7[4] = puVar5[4];
      puVar7[5] = puVar5[5];
      puVar7[6] = puVar5[6];
      puVar7[7] = puVar5[7];
      if (*(int *)(param_1 + 0xc) == 0) {
        pauVar8 = (undefined1 (*) [12])(iVar9 * 0x20 + *(int *)(param_1 + 0x24) + 0x14);
        iVar6 = iVar9 * 6 + *(int *)(param_1 + 8);
        sVar1 = *(short *)(iVar6 + 0xc);
        sVar2 = *(short *)(iVar6 + 10);
        FUN_00218128((float)(int)*(short *)(iVar6 + 8) * fVar3,&fStack_a0,&fStack_9c);
        FUN_00218128((float)(int)sVar2 * fVar3,&fStack_98,&fStack_94);
        FUN_00218128((float)(int)sVar1 * fVar3,&fStack_90,&fStack_8c);
        fVar16 = fStack_a0 * fStack_98;
        fVar15 = fStack_9c * fStack_98;
        fVar19 = fStack_9c * fStack_90;
        fVar11 = fStack_98;
        fVar12 = fStack_a0;
        fVar13 = fStack_9c;
        fVar14 = fStack_94;
        fVar17 = fStack_90;
        fVar18 = fStack_8c;
      }
      else {
        iVar6 = iVar9 * 6 + *(int *)(param_1 + 8);
        pauVar8 = (undefined1 (*) [12])(iVar9 * 0xc + *(int *)(param_1 + 8) + 0x8c);
        sVar1 = *(short *)(iVar6 + 0xc);
        sVar2 = *(short *)(iVar6 + 10);
        FUN_00218128((float)(int)*(short *)(iVar6 + 8) * fVar3,&fStack_88,&fStack_84);
        FUN_00218128((float)(int)sVar2 * fVar3,&fStack_80,&fStack_7c);
        FUN_00218128((float)(int)sVar1 * fVar3,&fStack_78,&fStack_74);
        fVar16 = fStack_88 * fStack_80;
        fVar15 = fStack_84 * fStack_80;
        fVar19 = fStack_84 * fStack_78;
        fVar11 = fStack_80;
        fVar12 = fStack_88;
        fVar13 = fStack_84;
        fVar14 = fStack_7c;
        fVar17 = fStack_78;
        fVar18 = fStack_74;
      }
      pauVar4 = (undefined1 (*) [16])(iVar9 * 0x40 + *(int *)(param_1 + 0x10));
      auVar20 = _lqc2(*pauVar4);
      auVar21 = _lqc2(pauVar4[1]);
      auVar22 = _lqc2(pauVar4[2]);
      auVar23 = _lqc2(pauVar4[3]);
      auVar24._4_4_ = -fVar14 * fVar17;
      auVar24._0_4_ = fVar14 * fVar18;
      auVar24._8_4_ = fVar11;
      auVar24._12_4_ = 0;
      auVar24 = _lqc2(auVar24);
      auVar25._4_4_ = fVar13 * fVar18 - fVar16 * fVar17;
      auVar25._0_4_ = fVar16 * fVar18 + fVar19;
      auVar25._8_4_ = -fVar12 * fVar14;
      auVar25._12_4_ = 0;
      auVar25 = _lqc2(auVar25);
      auVar26._4_4_ = fVar19 * fVar11 + fVar12 * fVar18;
      auVar26._0_4_ = fVar12 * fVar17 - fVar15 * fVar18;
      auVar26._8_4_ = fVar13 * fVar14;
      auVar26._12_4_ = 0;
      auVar26 = _lqc2(auVar26);
      auVar27._12_4_ = 0x3f800000;
      auVar27._0_12_ = *pauVar8;
      auVar27 = _lqc2(auVar27);
      _vmulabc(auVar20,auVar24);
      _vmaddabc(auVar21,auVar24);
      _vmaddabc(auVar22,auVar24);
      auVar24 = _vmaddbc(auVar23,auVar24);
      _vmulabc(auVar20,auVar25);
      _vmaddabc(auVar21,auVar25);
      _vmaddabc(auVar22,auVar25);
      auVar25 = _vmaddbc(auVar23,auVar25);
      _vmulabc(auVar20,auVar26);
      _vmaddabc(auVar21,auVar26);
      _vmaddabc(auVar22,auVar26);
      auVar26 = _vmaddbc(auVar23,auVar26);
      _vmulabc(auVar20,auVar27);
      _vmaddabc(auVar21,auVar27);
      _vmaddabc(auVar22,auVar27);
      auVar27 = _vmaddbc(auVar23,auVar27);
      auVar24 = _sqc2(auVar24);
      *pauVar4 = auVar24;
      auVar24 = _sqc2(auVar25);
      pauVar4[1] = auVar24;
      auVar24 = _sqc2(auVar26);
      pauVar4[2] = auVar24;
      auVar24 = _sqc2(auVar27);
      pauVar4[3] = auVar24;
      lVar10 = (long)(iVar9 + 1);
      if (*(short *)(*(int *)(param_1 + 0x18) + 0x2a) <= lVar10) break;
      iVar6 = *(int *)(param_1 + 0x24);
    }
  }
  return;
}

