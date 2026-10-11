/* Ghidra pseudocode. PS2 address: 00228d18. Not validated source. */

short FUN_00228d18(int param_1,undefined1 param_2,uint *param_3,long param_4,long param_5)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined2 *puVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  short *psVar22;
  
  iVar21 = 0;
  iVar20 = 0;
  bVar3 = 0 < param_1;
  if (bVar3) {
    do {
      puVar17 = &DAT_0029a930 + iVar20;
      iVar20 = iVar20 + 1;
      *puVar17 = 0xffff;
    } while (iVar20 < param_1);
  }
  DAT_0029a928 = DAT_0029a928 + 0x100;
  if ((int)DAT_0029a928 < 0) {
    DAT_0029a928 = 0;
  }
  iVar20 = 0;
  if (0 < param_1) {
    puVar17 = &DAT_0029a930;
    do {
      lVar15 = -1;
      uVar13 = 0xffffffff;
      if (param_4 < param_5) {
        iVar18 = (int)param_4;
        lVar12 = param_4;
        lVar16 = lVar15;
        do {
          iVar18 = DAT_0029a8f0 + iVar18 * 0x6c;
          lVar11 = (long)((int)lVar12 + 1);
          lVar15 = lVar16;
          uVar14 = uVar13;
          if (*(char *)(iVar18 + 0xb) == '\0') {
            iVar9 = 0;
            if (iVar21 < 1) {
              bVar3 = false;
            }
            else {
              lVar11 = (long)((int)lVar12 + 1);
              iVar6 = 0;
              do {
                iVar9 = iVar9 + 1;
                if (*(short *)((int)&DAT_0029a930 + iVar6) == lVar12) {
                  bVar3 = true;
                  goto LAB_00228e58;
                }
                iVar6 = iVar9 * 2;
              } while (iVar9 < iVar21);
              bVar3 = false;
            }
LAB_00228e58:
            if ((!bVar3) && (uVar14 = *(uint *)(iVar18 + 0x1c), lVar15 = lVar12, uVar13 <= uVar14))
            {
              lVar15 = lVar16;
              uVar14 = uVar13;
            }
          }
          uVar13 = uVar14;
          iVar18 = (int)lVar11;
          lVar12 = lVar11;
          lVar16 = lVar15;
        } while (lVar11 < param_5);
      }
      iVar20 = iVar20 + 1;
      if (-1 < lVar15) {
        *puVar17 = (short)lVar15;
        iVar21 = iVar21 + 1;
        puVar17 = puVar17 + 1;
      }
      bVar3 = iVar21 < param_1;
    } while (iVar20 < param_1);
  }
  if (bVar3) {
    puVar17 = &DAT_0029a930 + iVar21;
    iVar20 = iVar21;
    do {
      bVar10 = 0x66;
      lVar15 = -1;
      lVar12 = param_4;
      uVar13 = 0xffffffff;
joined_r0x00228eec:
      lVar16 = lVar12;
      if (lVar16 < param_5) {
        iVar18 = 0;
        iVar9 = (int)lVar16;
        if (iVar21 < 1) {
          lVar12 = (long)(iVar9 + 1);
          bVar3 = false;
        }
        else {
          lVar12 = (long)(iVar9 + 1);
          iVar6 = 0;
          do {
            iVar18 = iVar18 + 1;
            if (*(short *)((int)&DAT_0029a930 + iVar6) == lVar16) {
              bVar3 = true;
              goto LAB_00228f44;
            }
            iVar6 = iVar18 * 2;
          } while (iVar18 < iVar21);
          bVar3 = false;
        }
LAB_00228f44:
        if ((!bVar3) && (iVar18 = DAT_0029a8f0 + iVar9 * 0x6c, *(byte *)(iVar18 + 0x16) < 0x65)) {
          bVar1 = *(byte *)(iVar18 + 0x16);
          if (bVar1 < bVar10) {
            uVar14 = *(uint *)(iVar18 + 0x1c);
            bVar10 = bVar1;
          }
          else if ((bVar1 != bVar10) || (uVar14 = *(uint *)(iVar18 + 0x1c), uVar13 <= uVar14))
          goto joined_r0x00228eec;
          lVar15 = lVar16;
          uVar13 = uVar14;
        }
        goto joined_r0x00228eec;
      }
      if (-1 < lVar15) {
        *puVar17 = (short)lVar15;
        iVar21 = iVar21 + 1;
        puVar17 = puVar17 + 1;
        if (param_1 <= iVar21) break;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < param_1);
  }
  sVar5 = -9;
  if (iVar21 == param_1) {
    do {
      bVar3 = true;
      if (0 < iVar21 + -1) {
        iVar20 = 0;
        iVar18 = 1;
        do {
          psVar22 = &DAT_0029a930 + iVar18;
          sVar5 = (&DAT_0029a930)[iVar20];
          if (*psVar22 < sVar5) {
            (&DAT_0029a930)[iVar20] = *psVar22;
            bVar3 = false;
            *psVar22 = sVar5;
          }
          bVar4 = iVar18 < iVar21 + -1;
          iVar20 = iVar18;
          iVar18 = iVar18 + 1;
        } while (bVar4);
      }
      sVar5 = DAT_0029a930;
    } while (!bVar3);
    *param_3 = DAT_0029a928 | (int)DAT_0029a930;
    if (0 < iVar21) {
      psVar22 = &DAT_0029a930;
      iVar20 = iVar21;
      do {
        piVar19 = (int *)(DAT_0029a8f0 + *psVar22 * 0x6c);
        iVar18 = *piVar19;
        if (*(char *)((int)piVar19 + 0xb) == '\x01') {
          if (iVar18 < 0) {
            iVar18 = *(int *)((short)piVar19[6] * 0x6c + DAT_0029a8f0);
          }
          FUN_00228918(iVar18);
        }
        *(undefined1 *)((int)piVar19 + 0xb) = 1;
        psVar22 = psVar22 + 1;
        iVar20 = iVar20 + -1;
        piVar19[7] = DAT_0029a894;
        *(undefined1 *)((int)piVar19 + 0x16) = param_2;
      } while (iVar20 != 0);
    }
    iVar20 = DAT_0029a8f0;
    uVar13 = *param_3;
    iVar18 = 1;
    puVar8 = (uint *)(DAT_0029a930 * 0x6c + DAT_0029a8f0);
    *(short *)(puVar8 + 1) = DAT_0029a930;
    *puVar8 = uVar13;
    *(undefined2 *)(DAT_0029a930 * 0x6c + iVar20 + 0x18) = 0xffff;
    if (1 < iVar21) {
      psVar22 = &DAT_0029a932;
      do {
        iVar9 = iVar18 * 2;
        iVar18 = iVar18 + 1;
        *(short *)(DAT_0029a930 * 0x6c + iVar20 + iVar9 + 4) = *psVar22;
        sVar2 = *psVar22;
        psVar22 = psVar22 + 1;
        puVar7 = (undefined4 *)(sVar2 * 0x6c + iVar20);
        *(short *)(puVar7 + 6) = DAT_0029a930;
        *puVar7 = 0xffffffff;
      } while (iVar18 < iVar21);
    }
  }
  return sVar5;
}

