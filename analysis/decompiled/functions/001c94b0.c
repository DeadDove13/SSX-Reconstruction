/* Ghidra pseudocode. PS2 address: 001c94b0. Not validated source. */

undefined8 FUN_001c94b0(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  float *pfVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int aiStack_5c [11];
  
  piVar13 = &iStack_80;
  iVar10 = (int)param_1;
  iVar12 = *(int *)(iVar10 + 0x1450);
  uVar8 = *(uint *)(param_2 * 0x30 + iVar12 + 0x2c) | *(uint *)(param_3 * 0x30 + iVar12 + 0x2c) |
          *(uint *)(param_4 * 0x30 + iVar12 + 0x2c);
  iVar11 = 3;
  piVar6 = aiStack_5c;
  piVar14 = &iStack_80;
  if ((uVar8 & 0x20) != 0) {
    iVar11 = 0;
    iVar15 = 2;
    iVar3 = param_4;
    do {
      iVar1 = *piVar13;
      if ((*(uint *)(iVar3 * 0x30 + iVar12 + 0x2c) & 0x20) == 0) {
        *piVar6 = iVar3;
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 1;
      }
      pfVar7 = (float *)(iVar3 * 0x30 + iVar12);
      pfVar5 = (float *)(iVar1 * 0x30 + iVar12);
      if ((((uint)pfVar7[0xb] ^ (uint)pfVar5[0xb]) & 0x20) != 0) {
        *piVar6 = *(int *)(iVar10 + 0x1454);
        iVar3 = *(int *)(iVar10 + 0x1454);
        *(int *)(iVar10 + 0x1454) = iVar3 + 1;
        pfVar4 = (float *)(iVar3 * 0x30 + iVar12);
        fVar16 = pfVar5[1];
        fVar17 = pfVar7[1];
        fVar19 = (pfVar7[3] - *(float *)(iVar10 + 0x136c)) / (pfVar7[3] - pfVar5[3]);
        fVar20 = *pfVar7 - fVar19 * (*pfVar7 - *pfVar5);
        fVar18 = (fVar19 * pfVar5[3]) / *(float *)(iVar10 + 0x136c);
        *pfVar4 = fVar20;
        pfVar4[1] = pfVar7[1] - fVar19 * (fVar17 - fVar16);
        pfVar4[2] = *(float *)(iVar10 + 0x1368);
        pfVar4[3] = *(float *)(iVar10 + 0x136c);
        pfVar4[8] = pfVar7[8] + fVar19 * (pfVar5[8] - pfVar7[8]);
        pfVar4[9] = pfVar7[9] + fVar19 * (pfVar5[9] - pfVar7[9]);
        pfVar4[5] = pfVar7[5] + fVar18 * (pfVar5[5] - pfVar7[5]);
        pfVar4[6] = pfVar7[6] + fVar18 * (pfVar5[6] - pfVar7[6]);
        pfVar4[7] = pfVar7[7] + fVar18 * (pfVar5[7] - pfVar7[7]);
        pfVar4[4] = pfVar7[4] + fVar18 * (pfVar5[4] - pfVar7[4]);
        fVar16 = *(float *)(iVar10 + 0x1360);
        *(undefined4 *)(*piVar6 * 0x30 + iVar12 + 0x2c) = 0;
        if (fVar20 < fVar16) {
          iVar3 = *piVar6 * 0x30 + iVar12;
          *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) | 2;
        }
        if (*(float *)(iVar10 + 0x1370) < *pfVar4) {
          iVar3 = *piVar6 * 0x30 + iVar12;
          *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) | 1;
          fVar16 = pfVar4[1];
        }
        else {
          fVar16 = pfVar4[1];
        }
        if (fVar16 < *(float *)(iVar10 + 0x1364)) {
          iVar3 = *piVar6 * 0x30 + iVar12;
          *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) | 8;
          fVar17 = *(float *)(iVar10 + 0x1374);
        }
        else {
          fVar17 = *(float *)(iVar10 + 0x1374);
        }
        if (fVar17 < fVar16) {
          iVar3 = *piVar6 * 0x30 + iVar12;
          *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) | 4;
        }
        piVar6 = piVar6 + 1;
        iVar11 = iVar11 + 1;
      }
      iVar15 = iVar15 + -1;
      piVar13 = piVar13 + 1;
      iVar3 = iVar1;
    } while (-1 < iVar15);
    piVar6 = &iStack_80;
    piVar14 = aiStack_5c;
    if (iVar11 == 0) {
      return 1;
    }
  }
  piVar13 = piVar14;
  if ((uVar8 & 0x10) != 0) {
    iVar12 = 0;
    if (0 < iVar11) {
      iVar3 = *(int *)(iVar10 + 0x1450);
      iVar15 = piVar14[iVar11 + -1];
      piVar9 = piVar6;
      do {
        iVar1 = *piVar13;
        if ((*(uint *)(iVar15 * 0x30 + iVar3 + 0x2c) & 0x10) == 0) {
          *piVar9 = iVar15;
          iVar12 = iVar12 + 1;
          piVar9 = piVar9 + 1;
        }
        pfVar5 = (float *)(iVar15 * 0x30 + iVar3);
        pfVar7 = (float *)(iVar1 * 0x30 + iVar3);
        if ((((uint)pfVar5[0xb] ^ (uint)pfVar7[0xb]) & 0x10) != 0) {
          *piVar9 = *(int *)(iVar10 + 0x1454);
          iVar15 = *(int *)(iVar10 + 0x1454);
          *(int *)(iVar10 + 0x1454) = iVar15 + 1;
          pfVar4 = (float *)(iVar15 * 0x30 + iVar3);
          fVar16 = pfVar7[1];
          fVar17 = pfVar5[1];
          fVar19 = (pfVar5[3] - *(float *)(iVar10 + 0x137c)) / (pfVar5[3] - pfVar7[3]);
          fVar20 = *pfVar5 - fVar19 * (*pfVar5 - *pfVar7);
          fVar18 = (fVar19 * pfVar7[3]) / *(float *)(iVar10 + 0x137c);
          *pfVar4 = fVar20;
          pfVar4[1] = pfVar5[1] - fVar19 * (fVar17 - fVar16);
          pfVar4[2] = *(float *)(iVar10 + 0x1378);
          pfVar4[3] = *(float *)(iVar10 + 0x137c);
          pfVar4[8] = pfVar5[8] + fVar19 * (pfVar7[8] - pfVar5[8]);
          pfVar4[9] = pfVar5[9] + fVar19 * (pfVar7[9] - pfVar5[9]);
          pfVar4[5] = pfVar5[5] + fVar18 * (pfVar7[5] - pfVar5[5]);
          pfVar4[6] = pfVar5[6] + fVar18 * (pfVar7[6] - pfVar5[6]);
          pfVar4[7] = pfVar5[7] + fVar18 * (pfVar7[7] - pfVar5[7]);
          pfVar4[4] = pfVar5[4] + fVar18 * (pfVar7[4] - pfVar5[4]);
          fVar16 = *(float *)(iVar10 + 0x1360);
          *(undefined4 *)(*piVar9 * 0x30 + iVar3 + 0x2c) = 0;
          if (fVar20 < fVar16) {
            iVar15 = *piVar9 * 0x30 + iVar3;
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 2;
          }
          if (*(float *)(iVar10 + 0x1370) < *pfVar4) {
            iVar15 = *piVar9 * 0x30 + iVar3;
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 1;
            fVar16 = pfVar4[1];
          }
          else {
            fVar16 = pfVar4[1];
          }
          if (fVar16 < *(float *)(iVar10 + 0x1364)) {
            iVar15 = *piVar9 * 0x30 + iVar3;
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 8;
            fVar17 = *(float *)(iVar10 + 0x1374);
          }
          else {
            fVar17 = *(float *)(iVar10 + 0x1374);
          }
          if (fVar17 < fVar16) {
            iVar15 = *piVar9 * 0x30 + iVar3;
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 4;
          }
          piVar9 = piVar9 + 1;
          iVar12 = iVar12 + 1;
        }
        iVar11 = iVar11 + -1;
        piVar13 = piVar13 + 1;
        iVar15 = iVar1;
      } while (iVar11 != 0);
    }
    iVar11 = iVar12;
    piVar13 = piVar6;
    piVar6 = piVar14;
    if (iVar11 == 0) {
      return 1;
    }
  }
  piVar14 = piVar6;
  if ((uVar8 & 8) != 0) {
    iVar12 = 0;
    if (0 < iVar11) {
      iVar3 = *(int *)(iVar10 + 0x1450);
      iVar15 = piVar13[iVar11 + -1];
      piVar9 = piVar13;
      do {
        iVar1 = *piVar9;
        if ((*(uint *)(iVar15 * 0x30 + iVar3 + 0x2c) & 8) == 0) {
          *piVar14 = iVar15;
          iVar12 = iVar12 + 1;
          piVar14 = piVar14 + 1;
        }
        pfVar5 = (float *)(iVar15 * 0x30 + iVar3);
        pfVar7 = (float *)(iVar1 * 0x30 + iVar3);
        if ((((uint)pfVar5[0xb] ^ (uint)pfVar7[0xb]) & 8) != 0) {
          *piVar14 = *(int *)(iVar10 + 0x1454);
          iVar15 = *(int *)(iVar10 + 0x1454);
          *(int *)(iVar10 + 0x1454) = iVar15 + 1;
          pfVar4 = (float *)(iVar15 * 0x30 + iVar3);
          fVar20 = pfVar5[2];
          fVar19 = pfVar7[2];
          fVar18 = (pfVar5[1] - *(float *)(iVar10 + 0x1364)) / (pfVar5[1] - pfVar7[1]);
          fVar17 = pfVar5[3];
          fVar16 = pfVar7[3];
          fVar21 = *pfVar5 - fVar18 * (*pfVar5 - *pfVar7);
          *pfVar4 = fVar21;
          pfVar4[1] = *(float *)(iVar10 + 0x1364);
          pfVar4[2] = pfVar5[2] - fVar18 * (fVar20 - fVar19);
          pfVar4[3] = pfVar5[3] - fVar18 * (fVar17 - fVar16);
          pfVar4[8] = pfVar5[8] + fVar18 * (pfVar7[8] - pfVar5[8]);
          pfVar4[9] = pfVar5[9] + fVar18 * (pfVar7[9] - pfVar5[9]);
          pfVar4[5] = pfVar5[5] + fVar18 * (pfVar7[5] - pfVar5[5]);
          pfVar4[6] = pfVar5[6] + fVar18 * (pfVar7[6] - pfVar5[6]);
          pfVar4[7] = pfVar5[7] + fVar18 * (pfVar7[7] - pfVar5[7]);
          fVar16 = pfVar5[4];
          fVar17 = pfVar7[4];
          *(undefined4 *)(*piVar14 * 0x30 + iVar3 + 0x2c) = 0;
          pfVar4[4] = fVar16 + fVar18 * (fVar17 - fVar16);
          if (fVar21 < *(float *)(iVar10 + 0x1360)) {
            iVar15 = *piVar14 * 0x30 + iVar3;
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 2;
            fVar16 = *pfVar4;
          }
          else {
            fVar16 = *pfVar4;
          }
          if (*(float *)(iVar10 + 0x1370) < fVar16) {
            iVar15 = *piVar14 * 0x30 + iVar3;
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 1;
          }
          piVar14 = piVar14 + 1;
          iVar12 = iVar12 + 1;
        }
        iVar11 = iVar11 + -1;
        piVar9 = piVar9 + 1;
        iVar15 = iVar1;
      } while (iVar11 != 0);
    }
    iVar11 = iVar12;
    piVar14 = piVar13;
    piVar13 = piVar6;
    if (iVar11 == 0) {
      return 1;
    }
  }
  piVar6 = piVar13;
  if ((uVar8 & 4) != 0) {
    iVar12 = 0;
    if (0 < iVar11) {
      iVar3 = *(int *)(iVar10 + 0x1450);
      iVar15 = piVar13[iVar11 + -1];
      piVar9 = piVar14;
      do {
        iVar1 = *piVar6;
        if ((*(uint *)(iVar15 * 0x30 + iVar3 + 0x2c) & 4) == 0) {
          *piVar9 = iVar15;
          iVar12 = iVar12 + 1;
          piVar9 = piVar9 + 1;
        }
        pfVar5 = (float *)(iVar15 * 0x30 + iVar3);
        pfVar7 = (float *)(iVar1 * 0x30 + iVar3);
        if ((((uint)pfVar5[0xb] ^ (uint)pfVar7[0xb]) & 4) != 0) {
          *piVar9 = *(int *)(iVar10 + 0x1454);
          iVar15 = *(int *)(iVar10 + 0x1454);
          *(int *)(iVar10 + 0x1454) = iVar15 + 1;
          pfVar4 = (float *)(iVar15 * 0x30 + iVar3);
          fVar20 = pfVar5[2];
          fVar19 = pfVar7[2];
          fVar18 = (pfVar5[1] - *(float *)(iVar10 + 0x1374)) / (pfVar5[1] - pfVar7[1]);
          fVar17 = pfVar5[3];
          fVar16 = pfVar7[3];
          fVar21 = *pfVar5 - fVar18 * (*pfVar5 - *pfVar7);
          *pfVar4 = fVar21;
          pfVar4[1] = *(float *)(iVar10 + 0x1374);
          pfVar4[2] = pfVar5[2] - fVar18 * (fVar20 - fVar19);
          pfVar4[3] = pfVar5[3] - fVar18 * (fVar17 - fVar16);
          pfVar4[8] = pfVar5[8] + fVar18 * (pfVar7[8] - pfVar5[8]);
          pfVar4[9] = pfVar5[9] + fVar18 * (pfVar7[9] - pfVar5[9]);
          pfVar4[5] = pfVar5[5] + fVar18 * (pfVar7[5] - pfVar5[5]);
          pfVar4[6] = pfVar5[6] + fVar18 * (pfVar7[6] - pfVar5[6]);
          pfVar4[7] = pfVar5[7] + fVar18 * (pfVar7[7] - pfVar5[7]);
          fVar16 = pfVar5[4];
          fVar17 = pfVar7[4];
          *(undefined4 *)(*piVar9 * 0x30 + iVar3 + 0x2c) = 0;
          pfVar4[4] = fVar16 + fVar18 * (fVar17 - fVar16);
          if (fVar21 < *(float *)(iVar10 + 0x1360)) {
            iVar15 = *piVar9 * 0x30 + iVar3;
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 2;
            fVar16 = *pfVar4;
          }
          else {
            fVar16 = *pfVar4;
          }
          if (*(float *)(iVar10 + 0x1370) < fVar16) {
            iVar15 = *piVar9 * 0x30 + iVar3;
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 1;
          }
          piVar9 = piVar9 + 1;
          iVar12 = iVar12 + 1;
        }
        iVar11 = iVar11 + -1;
        piVar6 = piVar6 + 1;
        iVar15 = iVar1;
      } while (iVar11 != 0);
    }
    iVar11 = iVar12;
    piVar6 = piVar14;
    piVar14 = piVar13;
    if (iVar11 == 0) {
      return 1;
    }
  }
  piVar13 = piVar14;
  if ((uVar8 & 2) != 0) {
    iVar12 = 0;
    if (0 < iVar11) {
      iVar3 = *(int *)(iVar10 + 0x1450);
      iVar15 = piVar6[iVar11 + -1];
      piVar9 = piVar6;
      do {
        iVar1 = *piVar9;
        if ((*(uint *)(iVar15 * 0x30 + iVar3 + 0x2c) & 2) == 0) {
          *piVar13 = iVar15;
          iVar12 = iVar12 + 1;
          piVar13 = piVar13 + 1;
        }
        pfVar5 = (float *)(iVar15 * 0x30 + iVar3);
        pfVar7 = (float *)(iVar1 * 0x30 + iVar3);
        if ((((uint)pfVar5[0xb] ^ (uint)pfVar7[0xb]) & 2) != 0) {
          *piVar13 = *(int *)(iVar10 + 0x1454);
          iVar12 = iVar12 + 1;
          iVar15 = *(int *)(iVar10 + 0x1454);
          *(int *)(iVar10 + 0x1454) = iVar15 + 1;
          pfVar4 = (float *)(iVar15 * 0x30 + iVar3);
          fVar18 = pfVar5[1];
          fVar16 = pfVar7[1];
          fVar21 = pfVar5[2];
          fVar19 = pfVar5[3];
          fVar22 = (*pfVar5 - *(float *)(iVar10 + 0x1360)) / (*pfVar5 - *pfVar7);
          fVar17 = pfVar7[3];
          fVar20 = pfVar7[2];
          *pfVar4 = *(float *)(iVar10 + 0x1360);
          pfVar4[1] = pfVar5[1] - fVar22 * (fVar18 - fVar16);
          pfVar4[2] = pfVar5[2] - fVar22 * (fVar21 - fVar20);
          pfVar4[3] = pfVar5[3] - fVar22 * (fVar19 - fVar17);
          pfVar4[8] = pfVar5[8] + fVar22 * (pfVar7[8] - pfVar5[8]);
          pfVar4[9] = pfVar5[9] + fVar22 * (pfVar7[9] - pfVar5[9]);
          pfVar4[5] = pfVar5[5] + fVar22 * (pfVar7[5] - pfVar5[5]);
          pfVar4[6] = pfVar5[6] + fVar22 * (pfVar7[6] - pfVar5[6]);
          pfVar4[7] = pfVar5[7] + fVar22 * (pfVar7[7] - pfVar5[7]);
          fVar16 = pfVar5[4];
          fVar17 = pfVar7[4];
          iVar15 = *piVar13;
          piVar13 = piVar13 + 1;
          *(undefined4 *)(iVar15 * 0x30 + iVar3 + 0x2c) = 0;
          pfVar4[4] = fVar16 + fVar22 * (fVar17 - fVar16);
        }
        iVar11 = iVar11 + -1;
        piVar9 = piVar9 + 1;
        iVar15 = iVar1;
      } while (iVar11 != 0);
    }
    iVar11 = iVar12;
    piVar13 = piVar6;
    piVar6 = piVar14;
    if (iVar11 == 0) {
      return 1;
    }
  }
  piVar14 = piVar6;
  if ((uVar8 & 1) != 0) {
    iVar12 = 0;
    if (0 < iVar11) {
      iVar3 = *(int *)(iVar10 + 0x1450);
      iVar15 = piVar6[iVar11 + -1];
      piVar9 = piVar13;
      do {
        iVar1 = *piVar14;
        if (((*(uint *)(iVar15 * 0x30 + iVar3 + 0x2c) ^ 1) & 1) != 0) {
          *piVar9 = iVar15;
          iVar12 = iVar12 + 1;
          piVar9 = piVar9 + 1;
        }
        pfVar5 = (float *)(iVar15 * 0x30 + iVar3);
        pfVar7 = (float *)(iVar1 * 0x30 + iVar3);
        if ((((uint)pfVar5[0xb] ^ (uint)pfVar7[0xb]) & 1) != 0) {
          *piVar9 = *(int *)(iVar10 + 0x1454);
          iVar12 = iVar12 + 1;
          iVar15 = *(int *)(iVar10 + 0x1454);
          *(int *)(iVar10 + 0x1454) = iVar15 + 1;
          pfVar4 = (float *)(iVar15 * 0x30 + iVar3);
          fVar18 = pfVar5[1];
          fVar16 = pfVar7[1];
          fVar21 = pfVar5[2];
          fVar19 = pfVar5[3];
          fVar22 = (*pfVar5 - *(float *)(iVar10 + 0x1370)) / (*pfVar5 - *pfVar7);
          fVar17 = pfVar7[3];
          fVar20 = pfVar7[2];
          *pfVar4 = *(float *)(iVar10 + 0x1370);
          pfVar4[1] = pfVar5[1] - fVar22 * (fVar18 - fVar16);
          pfVar4[2] = pfVar5[2] - fVar22 * (fVar21 - fVar20);
          pfVar4[3] = pfVar5[3] - fVar22 * (fVar19 - fVar17);
          pfVar4[8] = pfVar5[8] + fVar22 * (pfVar7[8] - pfVar5[8]);
          pfVar4[9] = pfVar5[9] + fVar22 * (pfVar7[9] - pfVar5[9]);
          pfVar4[5] = pfVar5[5] + fVar22 * (pfVar7[5] - pfVar5[5]);
          pfVar4[6] = pfVar5[6] + fVar22 * (pfVar7[6] - pfVar5[6]);
          pfVar4[7] = pfVar5[7] + fVar22 * (pfVar7[7] - pfVar5[7]);
          fVar16 = pfVar5[4];
          fVar17 = pfVar7[4];
          iVar15 = *piVar9;
          piVar9 = piVar9 + 1;
          *(undefined4 *)(iVar15 * 0x30 + iVar3 + 0x2c) = 0;
          pfVar4[4] = fVar16 + fVar22 * (fVar17 - fVar16);
        }
        iVar11 = iVar11 + -1;
        piVar14 = piVar14 + 1;
        iVar15 = iVar1;
      } while (iVar11 != 0);
    }
    iVar11 = iVar12;
    piVar14 = piVar13;
    piVar13 = piVar6;
    if (iVar11 == 0) {
      return 1;
    }
  }
  uVar8 = 0;
  if (0 < iVar11) {
    do {
      iVar12 = (int)uVar8 >> 1;
      if ((uVar8 & 1) != 0) {
        iVar12 = iVar11 - (iVar12 + 1);
      }
      uVar8 = uVar8 + 1;
      *piVar13 = piVar14[(iVar11 + -1) - iVar12];
      piVar13 = piVar13 + 1;
    } while ((int)uVar8 < iVar11);
  }
  iStack_80 = param_2;
  iStack_7c = param_3;
  iStack_78 = param_4;
  uVar2 = FUN_001ca2f8(param_1);
  return uVar2;
}

