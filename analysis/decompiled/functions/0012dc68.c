/* Ghidra pseudocode. PS2 address: 0012dc68. Not validated source. */

void FUN_0012dc68(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 auStack_9c [3];
  
  iVar2 = *(int *)(param_1 + 0x34) + -1;
  *(int *)(param_1 + 0x34) = iVar2;
  if (iVar2 < 1) {
    FUN_001223f0();
  }
  else {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x778) != 0) {
      fVar12 = 0.0;
      pfVar4 = (float *)(param_1 + 0x38);
      pfVar6 = (float *)(param_1 + 0xc0);
      pfVar5 = (float *)(param_1 + 0x80);
      do {
        FUN_00218128(*pfVar6 * 0.5,&fStack_a0,auStack_9c);
        fStack_bc = fStack_a0 * *pfVar5;
        fStack_b8 = fStack_a0 * pfVar5[1];
        fStack_b4 = fStack_a0 * pfVar5[2];
        uStack_c0 = auStack_9c[0];
        FUN_0012f0f8(&fStack_b0,pfVar4,&uStack_c0);
        pfVar5[-0x11] = fStack_ac;
        pfVar5[-0x10] = fStack_a8;
        pfVar5[-0xf] = fStack_a4;
        pfVar5[-0x12] = fStack_b0;
        fVar11 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar8 = pfVar4[3];
        fVar9 = *pfVar4;
        fVar7 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
        if (fVar7 == fVar12) {
          *pfVar4 = 1.0;
        }
        else {
          fVar7 = 1.0 / fVar7;
          pfVar4[3] = fVar8 * fVar7;
          *pfVar4 = fVar9 * fVar7;
          pfVar4[1] = fVar11 * fVar7;
          pfVar4[2] = fVar10 * fVar7;
        }
        fVar7 = DAT_002c1ba4;
        iVar2 = iVar2 + 1;
        pfVar4 = pfVar4 + 4;
        pfVar6 = pfVar6 + 1;
        pfVar5 = pfVar5 + 4;
      } while (iVar2 < 4);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x28) + 0xcc) * 8 + DAT_00299ce0);
      iVar2 = 0;
      if (0 < *piVar1) {
        pauVar3 = (undefined1 (*) [16])(param_1 + 0x4f0);
        do {
          auVar13 = _lqc2(pauVar3[-0x40]);
          auVar14 = _lqc2(*pauVar3);
          auVar13 = _vadd(auVar13,auVar14);
          auVar13 = _sqc2(auVar13);
          pauVar3[-0x40] = auVar13;
          iVar2 = iVar2 + 1;
          auVar13 = _lqc2(*pauVar3);
          auVar14 = _lqc2(ZEXT416((uint)(*(float *)(param_1 + 0x774) * fVar7)) << 0x40);
          auVar13 = _vadd(auVar13,auVar14);
          auVar13 = _sqc2(auVar13);
          *pauVar3 = auVar13;
          pauVar3 = pauVar3 + 1;
        } while (iVar2 < *piVar1);
      }
    }
  }
  return;
}

