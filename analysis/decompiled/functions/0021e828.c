/* Ghidra pseudocode. PS2 address: 0021e828. Not validated source. */

float FUN_0021e828(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  
  iVar3 = (int)*(short *)(DAT_00299cc8 + 0x42) * (int)*(short *)(DAT_00299cc8 + 0x42);
  iVar11 = (int)param_2;
  fVar15 = (float)*(int *)(DAT_00299cc8 + 0x24);
  iVar16 = (int)(((*(float *)(iVar11 + 0x30) - *(float *)(DAT_00299cc8 + 0xc)) + fVar15) / fVar15);
  iVar17 = (int)(((*(float *)(iVar11 + 0x34) - *(float *)(DAT_00299cc8 + 0x10)) + fVar15) / fVar15);
  iVar9 = iVar16 + -2;
  if (0x7ffffffe < iVar16 + -2) {
    iVar9 = 0x7fffffff;
  }
  iVar7 = iVar17 + -2;
  if (iVar16 < 1) {
    iVar16 = 0;
  }
  if (iVar17 < 1) {
    iVar17 = 0;
  }
  iVar5 = *(int *)(DAT_00299cc8 + 0x28) + -1;
  iVar8 = 0x7fffffff;
  if (iVar7 < 0x7fffffff) {
    iVar8 = iVar7;
  }
  iVar7 = *(int *)(DAT_00299cc8 + 0x2c) + -1;
  if (iVar5 < iVar16) {
    iVar16 = iVar5;
  }
  iVar5 = 0;
  if (-1 < iVar9) {
    iVar5 = iVar9;
  }
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  if (iVar7 < iVar17) {
    iVar17 = iVar7;
  }
  do {
    if (iVar16 < iVar5) {
      return -1.0;
    }
    if (iVar8 <= iVar17) {
      piVar14 = (int *)param_1;
      iVar9 = *piVar14;
      iVar7 = iVar8;
      while( true ) {
        iVar9 = iVar7 * *(int *)(iVar9 + 0x28) + iVar5;
        lVar4 = FUN_0021f730(param_1,iVar9);
        if (lVar4 == 0) {
          piVar13 = *(int **)(iVar9 * 8 + piVar14[3]);
        }
        else {
          piVar13 = (int *)0x0;
        }
        if (piVar13 != (int *)0x0) {
          iVar9 = *piVar13;
          bVar2 = false;
          if (((((*(float *)(iVar9 + 0xc) < *(float *)(iVar11 + 0x10)) &&
                (*(float *)(iVar11 + 0x20) < *(float *)(iVar9 + 0x18))) &&
               (*(float *)(iVar9 + 0x10) < *(float *)(iVar11 + 0x14))) &&
              ((*(float *)(iVar11 + 0x24) < *(float *)(iVar9 + 0x1c) &&
               (*(float *)(iVar9 + 0x14) < *(float *)(iVar11 + 0x18))))) &&
             (*(float *)(iVar11 + 0x28) < *(float *)(iVar9 + 0x20))) {
            bVar2 = true;
          }
          if ((bVar2) && (iVar9 = 0, 0 < iVar3)) {
            do {
              psVar10 = (short *)(piVar13[1] + iVar9 * 0x30);
              bVar2 = false;
              if ((*psVar10 == 0) && (psVar10[2] == 0)) {
                bVar2 = *(int *)(psVar10 + 4) == 0;
              }
              if (!bVar2) {
                bVar2 = false;
                if ((((*(float *)(psVar10 + 0xc) < *(float *)(iVar11 + 0x10)) &&
                     (*(float *)(iVar11 + 0x20) < *(float *)(psVar10 + 0x12))) &&
                    (*(float *)(psVar10 + 0xe) < *(float *)(iVar11 + 0x14))) &&
                   (((*(float *)(iVar11 + 0x24) < *(float *)(psVar10 + 0x14) &&
                     (*(float *)(psVar10 + 0x10) < *(float *)(iVar11 + 0x18))) &&
                    (*(float *)(iVar11 + 0x28) < *(float *)(psVar10 + 0x16))))) {
                  bVar2 = true;
                }
                if (bVar2) {
                  if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
                    sVar1 = psVar10[2];
                  }
                  else {
                    sVar1 = psVar10[1];
                  }
                  lVar4 = 0;
                  if (0 < (long)sVar1) {
                    iVar6 = piVar13[2];
                    while( true ) {
                      iVar12 = (int)lVar4;
                      iVar6 = piVar13[3] +
                              (uint)*(ushort *)(iVar6 + iVar12 * 4 + psVar10[8] * 4 + 2) * 0x110;
                      if ((*(uint *)(iVar6 + 0xe8) & 0x20) == 0) {
                        lVar4 = (long)(iVar12 + 1);
                      }
                      else if (*(short *)(iVar6 + 0xfe) == -1) {
                        bVar2 = false;
                        if ((((*(float *)(iVar6 + 0xd0) < *(float *)(iVar11 + 0x10)) &&
                             (*(float *)(iVar11 + 0x20) < *(float *)(iVar6 + 0xdc))) &&
                            (*(float *)(iVar6 + 0xd4) < *(float *)(iVar11 + 0x14))) &&
                           (((*(float *)(iVar11 + 0x24) < *(float *)(iVar6 + 0xe0) &&
                             (*(float *)(iVar6 + 0xd8) < *(float *)(iVar11 + 0x18))) &&
                            (*(float *)(iVar11 + 0x28) < *(float *)(iVar6 + 0xe4))))) {
                          bVar2 = true;
                        }
                        if ((bVar2) &&
                           (fVar15 = (float)FUN_0021ed18(param_1,param_2,param_3), 0.0 <= fVar15)) {
                          return fVar15;
                        }
                        lVar4 = (long)(iVar12 + 1);
                      }
                      else {
                        lVar4 = (long)(iVar12 + 1);
                      }
                      if (sVar1 <= lVar4) break;
                      iVar6 = piVar13[2];
                    }
                  }
                }
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar3);
          }
        }
        iVar7 = iVar7 + 1;
        if (iVar17 < iVar7) break;
        iVar9 = *piVar14;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

