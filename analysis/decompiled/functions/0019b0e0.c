/* Ghidra pseudocode. PS2 address: 0019b0e0. Not validated source. */

void FUN_0019b0e0(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  short *psVar11;
  short *psVar12;
  undefined4 *puVar13;
  int iVar14;
  short *psVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  
  iVar9 = 0x7f;
  puVar5 = param_1 + 0x7f;
  param_1[0x507] = 0;
  do {
    *puVar5 = 0;
    iVar9 = iVar9 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar9);
  psVar11 = (short *)(param_1 + 0x80);
  FUN_0019a7f8(psVar11,param_1 + 0x280);
  if (*(short *)(param_1 + 0x80) != 0) {
    fVar17 = (float)param_1[0x503];
    iVar14 = 0;
    sVar1 = *psVar11;
    iVar9 = 0;
    psVar12 = psVar11;
    psVar15 = psVar11;
    puVar5 = param_1;
    do {
      bVar3 = sVar1 == 0;
      bVar4 = sVar1 != 0x5c;
      iVar7 = iVar14;
      iVar16 = iVar9;
      puVar13 = puVar5;
      if (sVar1 == 0x20) {
LAB_0019b1a4:
        sVar1 = *psVar11;
LAB_0019b1a8:
        piVar10 = (int *)((int)param_1 + iVar14 + 0x1200);
        *psVar11 = 0;
        iVar6 = FUN_001a0a88(param_1[0x506],param_1[0x500],psVar15,0);
        fVar18 = 0.0;
        *piVar10 = iVar6;
        if (iVar9 != 0) {
          fVar18 = (float)param_1[0x50b];
        }
        if ((float)iVar6 + fVar18 <= (float)(int)fVar17) {
          if (bVar4) {
            if (bVar3) {
              *(short **)((int)param_1 + iVar14) = psVar15;
              iVar7 = iVar14 + 4;
              iVar16 = iVar9 + 1;
              puVar13 = puVar5 + 1;
            }
            else {
              *psVar11 = sVar1;
              psVar12 = psVar11;
            }
            goto LAB_0019b308;
          }
          sVar2 = *psVar12;
        }
        else {
          sVar2 = *psVar12;
        }
        if (sVar2 == 0x20) {
          if (bVar4) {
            *psVar12 = 0;
            psVar12 = psVar12 + 1;
            puVar13 = puVar5 + 1;
            iVar7 = FUN_001a0a88(param_1[0x506],param_1[0x500],psVar15,0);
            iVar16 = iVar9 + 1;
            *(short **)((int)param_1 + iVar14) = psVar15;
            *piVar10 = iVar7;
            *psVar11 = sVar1;
            iVar7 = iVar14 + 4;
            psVar15 = psVar12;
            if ((bVar3) && (iVar16 < 0x80)) {
              uVar8 = FUN_001a0a88(param_1[0x506],param_1[0x500],psVar12,0);
              *puVar13 = psVar12;
              *(undefined4 *)((int)param_1 + iVar14 + 0x1204) = uVar8;
              iVar7 = iVar14 + 8;
              iVar16 = iVar9 + 2;
              puVar13 = puVar5 + 2;
            }
            goto LAB_0019b308;
          }
          *puVar5 = psVar15;
        }
        else {
          *puVar5 = psVar15;
        }
        iVar7 = iVar14 + 4;
        iVar16 = iVar9 + 1;
        psVar15 = psVar11 + 1;
        psVar12 = psVar11 + 1;
        puVar13 = puVar5 + 1;
      }
      else {
        if (bVar3) {
          sVar1 = *psVar11;
          goto LAB_0019b1a8;
        }
        if (!bVar4) goto LAB_0019b1a4;
      }
LAB_0019b308:
      iVar14 = iVar7;
      psVar11 = psVar11 + 1;
      if ((bVar3) || (0x7f < iVar16)) break;
      sVar1 = *psVar11;
      iVar9 = iVar16;
      puVar5 = puVar13;
    } while( true );
  }
  FUN_0019b358(param_1);
  return;
}

