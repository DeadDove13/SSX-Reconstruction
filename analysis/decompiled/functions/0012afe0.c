/* Ghidra pseudocode. PS2 address: 0012afe0. Not validated source. */

void FUN_0012afe0(int param_1)

{
  undefined1 (*pauVar1) [16];
  undefined2 *puVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  int iVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar8 = *(int *)(param_1 + 0x28);
    fVar12 = 1.0;
    fStack_c0 = *(float *)(iVar8 + 0xd0);
    fStack_bc = *(float *)(iVar8 + 0xd4);
    fStack_b8 = *(float *)(iVar8 + 0xd8);
    uStack_b4 = 0x3f800000;
    fStack_b0 = *(float *)(iVar8 + 0xdc);
    fStack_ac = *(float *)(iVar8 + 0xe0);
    fStack_a8 = *(float *)(iVar8 + 0xe4);
    uStack_a4 = 0x3f800000;
    lVar3 = FUN_001be110(0x295e90,&fStack_c0,&fStack_b0);
    if (lVar3 != 1) {
      fVar15 = *(float *)(param_1 + 0x38) * DAT_002c1b80;
      if (*(int *)(param_1 + 0x40) == 0) {
        fVar14 = 16.0;
        pfVar10 = (float *)(param_1 + 0x260);
        fVar16 = DAT_002c1b84;
        do {
          fVar13 = fVar12 * 0.0625;
          fVar12 = fVar12 + 1.0;
          fVar11 = (float)FUN_00218240(fVar15 + fVar13 * fVar16);
          *pfVar10 = *(float *)(param_1 + 0x34) * fVar13 * fVar11;
          pfVar10 = pfVar10 + 4;
        } while (fVar12 < fVar14);
      }
      else {
        fVar14 = 16.0;
        pfVar10 = (float *)(param_1 + 0x340);
        fVar16 = DAT_002c1b88;
        do {
          fVar13 = fVar12 * 0.0625;
          fVar12 = fVar12 + 1.0;
          fVar11 = (float)FUN_00218240(fVar15 + fVar13 * fVar16);
          *pfVar10 = *(float *)(param_1 + 0x34) * fVar13 * fVar11;
          pfVar10 = pfVar10 + -4;
        } while (fVar12 < fVar14);
      }
      puVar2 = (undefined2 *)FUN_001c06d0(*(undefined4 *)(param_1 + 0x4c));
      iVar8 = 0xb;
      pauVar4 = (undefined1 (*) [16])(param_1 + 0x340);
      pauVar5 = (undefined1 (*) [16])(param_1 + 0x50);
      pauVar1 = (undefined1 (*) [16])(param_1 + 0x150);
      do {
        pauVar6 = pauVar1;
        pauVar7 = pauVar5;
        auVar17 = _lqc2(*pauVar6);
        auVar18 = _lqc2(*pauVar4);
        auVar17 = _vadd(auVar17,auVar18);
        auVar17 = _sqc2(auVar17);
        iVar8 = iVar8 + -1;
        auStack_a0._8_4_ = auVar17._8_4_;
        *puVar2 = (short)(int)auVar17._0_4_;
        puVar2[1] = (short)(int)auVar17._4_4_;
        puVar2[2] = (short)(int)(float)auStack_a0._8_4_;
        auVar17 = _lqc2(*pauVar7);
        auVar18 = _lqc2(*pauVar4);
        auVar17 = _vadd(auVar17,auVar18);
        auVar17 = _sqc2(auVar17);
        auStack_a0._8_4_ = auVar17._8_4_;
        pauVar4 = pauVar4 + -1;
        puVar2[3] = (short)(int)auVar17._0_4_;
        puVar2[4] = (short)(int)auVar17._4_4_;
        puVar2[5] = (short)(int)(float)auStack_a0._8_4_;
        puVar2 = puVar2 + 6;
        pauVar5 = pauVar7 + 1;
        pauVar1 = pauVar6 + 1;
      } while (-1 < iVar8);
      iVar8 = *(int *)(param_1 + 0x28);
      iVar9 = 4;
      pauVar5 = (undefined1 (*) [16])(param_1 + 0x290);
      do {
        auVar17 = _lqc2(*pauVar6);
        auVar18 = _lqc2(*pauVar5);
        auVar17 = _vadd(auVar17,auVar18);
        auVar17 = _sqc2(auVar17);
        iVar9 = iVar9 + -1;
        auStack_a0._8_4_ = auVar17._8_4_;
        pauVar6 = pauVar6 + 1;
        *puVar2 = (short)(int)auVar17._0_4_;
        puVar2[1] = (short)(int)auVar17._4_4_;
        puVar2[2] = (short)(int)(float)auStack_a0._8_4_;
        auVar17 = _lqc2(*pauVar7);
        auVar18 = _lqc2(*pauVar5);
        auVar17 = _vadd(auVar17,auVar18);
        _auStack_a0 = _sqc2(auVar17);
        fStack_c0 = auStack_a0._0_4_;
        fStack_bc = auStack_a0._4_4_;
        fStack_a8 = (float)auStack_a0._8_4_;
        uStack_a4 = uStack_94;
        pauVar7 = pauVar7 + 1;
        pauVar5 = pauVar5 + -1;
        puVar2[3] = (short)(int)fStack_c0;
        puVar2[4] = (short)(int)fStack_bc;
        puVar2[5] = (short)(int)(float)auStack_a0._8_4_;
        fStack_b8 = (float)auStack_a0._8_4_;
        puVar2 = puVar2 + 6;
      } while (-1 < iVar9);
      fStack_b0 = fStack_c0;
      fStack_ac = fStack_bc;
      FUN_001c06f0(*(undefined4 *)(param_1 + 0x4c),iVar8,iVar8 + 0x40);
    }
  }
  return;
}

