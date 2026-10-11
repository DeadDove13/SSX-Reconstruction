/* Ghidra pseudocode. PS2 address: 001b9a78. Not validated source. */

void FUN_001b9a78(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar1 = (undefined4 *)(param_1 + 0x84);
  pfVar3 = (float *)(param_1 + 0x20);
  iVar4 = 0x18;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar6 = puVar1;
  do {
    puVar6[-0x19] = 0;
    iVar4 = iVar4 + -1;
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  } while (-1 < iVar4);
  iVar15 = 1;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar4 = 0;
  if (0 < DAT_0028acf8) {
    do {
      iVar8 = iVar4 * 0x3c;
      iVar4 = iVar4 + 1;
      iVar10 = 0;
      piVar5 = (int *)(DAT_0028acfc + iVar8);
      fVar19 = (float)piVar5[0xe];
      piVar11 = (int *)piVar5[1];
      if (0 < *piVar5) {
        puVar6 = puVar1 + iVar15;
        pfVar13 = pfVar3 + iVar15;
        do {
          if (*piVar11 == 0xc) {
            if (DAT_0027ba84 == 4) {
              iVar14 = 0;
              iVar8 = FUN_0019c4d0(0x28acf8);
              fVar17 = *(float *)(iVar8 + 0x38);
              puVar12 = puVar1 + iVar15;
              pfVar9 = pfVar3 + iVar15;
              do {
                fVar18 = (fVar19 - (float)piVar11[2]) + (float)iVar14 * fVar17;
                lVar2 = FUN_001b9f10(fVar18,param_1,0);
                iVar14 = iVar14 + 1;
                if (lVar2 == 0) {
                  *pfVar9 = fVar18;
                  pfVar13 = pfVar13 + 1;
                  *puVar12 = 0;
                  pfVar9 = pfVar9 + 1;
                  puVar12 = puVar12 + 1;
                  puVar6 = puVar6 + 1;
                  iVar15 = iVar15 + 1;
                }
              } while (iVar14 < 3);
            }
            else {
              fVar17 = (float)piVar11[2];
              lVar2 = FUN_001b9f10(fVar19 - fVar17,param_1,0);
              if (lVar2 == 0) {
                *pfVar13 = fVar19 - fVar17;
                iVar15 = iVar15 + 1;
                *puVar6 = 0;
                pfVar13 = pfVar13 + 1;
                puVar6 = puVar6 + 1;
              }
            }
          }
          else if (*piVar11 == 0xd) {
            if (DAT_0027ba84 == 4) {
              iVar14 = 1;
              iVar8 = FUN_0019c4d0(0x28acf8);
              fVar17 = *(float *)(iVar8 + 0x38);
              puVar12 = puVar1 + iVar15;
              pfVar9 = pfVar3 + iVar15;
              do {
                fVar18 = (fVar19 - (float)piVar11[2]) + (float)iVar14 * fVar17;
                lVar2 = FUN_001b9f10(fVar18,param_1,2);
                if (lVar2 == 0) {
                  *pfVar9 = fVar18;
                  pfVar13 = pfVar13 + 1;
                  *puVar12 = 2;
                  pfVar9 = pfVar9 + 1;
                  puVar12 = puVar12 + 1;
                  puVar6 = puVar6 + 1;
                  iVar15 = iVar15 + 1;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < 3);
            }
            else {
              fVar17 = (float)piVar11[2];
              lVar2 = FUN_001b9f10(fVar19 - fVar17,param_1,2);
              if (lVar2 == 0) {
                *pfVar13 = fVar19 - fVar17;
                *puVar6 = 2;
                pfVar13 = pfVar13 + 1;
                puVar6 = puVar6 + 1;
                iVar15 = iVar15 + 1;
              }
            }
          }
          iVar10 = iVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (iVar10 < *piVar5);
      }
    } while (iVar4 < DAT_0028acf8);
  }
  *(int *)(param_1 + 0x1c) = iVar15;
  iVar4 = 0;
  do {
    puVar6 = (undefined4 *)(param_1 + iVar4 * 0x124 + 0x104);
    iVar15 = *(int *)(iVar4 * 0x80 + DAT_002859e4 + 0xa4);
    iVar4 = iVar4 + 1;
    if (iVar15 != 0) {
      puVar6[0x1f] = 0;
      puVar6[0x20] = 0;
      puVar1 = &DAT_00291290;
      pfVar13 = (float *)(puVar6 + 0x30);
      puVar7 = puVar6 + 3;
      puVar12 = puVar6 + 4;
      iVar8 = 0xd;
      do {
        uVar16 = *puVar1;
        iVar8 = iVar8 + -1;
        *puVar12 = 0;
        puVar1 = puVar1 + 5;
        *puVar7 = uVar16;
        iVar10 = DAT_002859e4;
        puVar12 = puVar12 + 2;
        puVar7 = puVar7 + 2;
      } while (-1 < iVar8);
      puVar1 = puVar6 + 0x2a;
      puVar6[0x27] = 0;
      puVar6[0x28] = 0;
      *puVar6 = 0x3f800000;
      puVar6[0x21] = 0x3f800000;
      puVar6[0x23] = 0;
      puVar6[0x24] = 0;
      puVar6[0x25] = 0;
      puVar6[0x26] = 0;
      puVar6[0x22] = 0;
      puVar6[0x29] = 0;
      for (iVar8 = 0; iVar8 < *(int *)(*(int *)(iVar10 + 0x14) + 0x8c); iVar8 = iVar8 + 1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      iVar8 = 0x18;
      pfVar9 = pfVar3;
      do {
        iVar8 = iVar8 + -1;
        fVar17 = (float)FUN_0010af78(iVar15);
        fVar19 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        *pfVar13 = fVar19 - fVar17;
        pfVar13 = pfVar13 + 1;
      } while (-1 < iVar8);
    }
  } while (iVar4 < 4);
  return;
}

