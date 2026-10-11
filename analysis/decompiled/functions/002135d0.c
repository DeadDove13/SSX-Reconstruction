/* Ghidra pseudocode. PS2 address: 002135d0. Not validated source. */

uint FUN_002135d0(long param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  ushort uVar23;
  int iVar24;
  int aiStack_570 [16];
  undefined1 auStack_530 [64];
  undefined1 auStack_4f0 [64];
  byte abStack_4b0 [256];
  byte abStack_3b0 [256];
  byte abStack_2b0 [4];
  undefined4 auStack_2ac [63];
  char acStack_1b0 [4];
  undefined4 auStack_1ac [63];
  byte *pbStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  
  pbStack_b0 = param_2;
  uStack_a8 = 0;
  uStack_ac = 0;
  if (param_1 != 0) {
    pbVar21 = (byte *)param_1;
    iVar17 = 0;
    pbVar15 = pbVar21 + 4;
    uVar12 = (uint)CONCAT11(pbVar21[2],pbVar21[3]);
    uVar7 = uVar12 << 0x10;
    if ((*pbVar21 & 1) != 0) {
      iVar17 = 8;
      pbVar15 = pbVar21 + 8;
      uVar12 = (uint)CONCAT21(CONCAT11(pbVar21[5],pbVar21[6]),pbVar21[7]);
      uVar7 = uVar12 << 8;
    }
    uVar8 = uVar7 << 8;
    iVar16 = iVar17 + -8;
    uVar23 = CONCAT11(*pbVar21,pbVar21[1]) & 0xfeff;
    if (iVar16 < 0) {
      bVar4 = *pbVar15;
      pbVar21 = pbVar15 + 1;
      uVar8 = -iVar16;
      pbVar15 = pbVar15 + 2;
      iVar16 = iVar17 + 8;
      uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
      uVar8 = uVar12 << (uVar8 & 0x1f);
    }
    iVar17 = iVar16 + -0x10;
    uVar9 = uVar8 << 0x10;
    if (iVar17 < 0) {
      bVar4 = *pbVar15;
      pbVar21 = pbVar15 + 1;
      pbVar15 = pbVar15 + 2;
      uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
      uVar9 = uVar12 << (-iVar17 & 0x1fU);
      iVar17 = iVar16;
    }
    uVar13 = uVar9 >> 0x18;
    iVar16 = iVar17 + -8;
    uVar9 = uVar9 << 8;
    uStack_ac = uVar8 >> 0x10 | (uVar7 >> 0x18) << 0x10;
    if (iVar16 < 0) {
      bVar4 = *pbVar15;
      pbVar21 = pbVar15 + 1;
      uVar7 = -iVar16;
      pbVar15 = pbVar15 + 2;
      iVar16 = iVar17 + 8;
      uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
      uVar9 = uVar12 << (uVar7 & 0x1f);
    }
    puStack_a4 = auStack_530;
    puStack_a0 = auStack_4f0;
    iVar22 = 0;
    iVar24 = 0;
    iVar17 = 1;
    do {
      iVar18 = iVar17;
      *(int *)(puStack_a4 + iVar18 * 4) = iVar24 * 2 - iVar22;
      if ((int)uVar9 < 0) {
        uVar7 = uVar9 >> 0x1d;
        iVar17 = iVar16 + -3;
        uVar9 = uVar9 << 3;
        if (iVar17 < 0) {
          bVar4 = *pbVar15;
          pbVar21 = pbVar15 + 1;
          pbVar15 = pbVar15 + 2;
          uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
          uVar9 = uVar12 << (-iVar17 & 0x1fU);
          iVar17 = iVar16 + 0xd;
        }
      }
      else {
        if (uVar9 >> 0x10 == 0) {
          uVar7 = 2;
          do {
            uVar7 = uVar7 + 1;
            iVar17 = iVar16 + -1;
            uVar8 = uVar9 << 1;
            if (iVar17 < 0) {
              bVar4 = *pbVar15;
              pbVar21 = pbVar15 + 1;
              pbVar15 = pbVar15 + 2;
              uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
              uVar8 = uVar12 << (-iVar17 & 0x1fU);
              iVar17 = iVar16 + 0xf;
            }
            iVar16 = iVar17;
            bVar1 = -1 < (int)uVar9;
            uVar9 = uVar8;
          } while (bVar1);
        }
        else {
          uVar7 = 2;
          do {
            uVar8 = uVar9;
            uVar9 = uVar8 << 1;
            uVar7 = uVar7 + 1;
          } while (-1 < (int)uVar9);
          iVar16 = (iVar16 + 1) - uVar7;
          uVar8 = uVar8 << 2;
          if (iVar16 < 0) {
            bVar4 = *pbVar15;
            pbVar21 = pbVar15 + 1;
            uVar8 = -iVar16;
            pbVar15 = pbVar15 + 2;
            iVar16 = iVar16 + 0x10;
            uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
            uVar8 = uVar12 << (uVar8 & 0x1f);
          }
        }
        if ((int)uVar7 < 0x11) {
          iVar17 = iVar16 - uVar7;
          uVar9 = uVar8 << (uVar7 & 0x1f);
          if (iVar17 < 0) {
            bVar4 = *pbVar15;
            pbVar21 = pbVar15 + 1;
            uVar9 = -iVar17;
            pbVar15 = pbVar15 + 2;
            iVar17 = iVar17 + 0x10;
            uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
            uVar9 = uVar12 << (uVar9 & 0x1f);
          }
          uVar7 = (uVar8 >> (-uVar7 & 0x1f)) + (1 << (uVar7 & 0x1f));
        }
        else {
          iVar16 = (iVar16 + 0x10) - uVar7;
          uVar11 = uVar8 << (uVar7 - 0x10 & 0x1f);
          if (iVar16 < 0) {
            bVar4 = *pbVar15;
            pbVar21 = pbVar15 + 1;
            uVar9 = -iVar16;
            pbVar15 = pbVar15 + 2;
            iVar16 = iVar16 + 0x10;
            uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
            uVar11 = uVar12 << (uVar9 & 0x1f);
          }
          iVar17 = iVar16 + -0x10;
          uVar9 = uVar11 << 0x10;
          if (iVar17 < 0) {
            bVar4 = *pbVar15;
            pbVar21 = pbVar15 + 1;
            pbVar15 = pbVar15 + 2;
            uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
            uVar9 = uVar12 << (-iVar17 & 0x1fU);
            iVar17 = iVar16;
          }
          uVar7 = (uVar11 >> 0x10 | (uVar8 >> (0x30 - uVar7 & 0x1f)) << 0x10) +
                  (1 << (uVar7 & 0x1f));
        }
      }
      iVar16 = iVar17;
      iVar14 = uVar7 - 4;
      iVar22 = iVar22 + iVar14;
      aiStack_570[iVar18] = iVar14;
      iVar24 = iVar24 * 2 + iVar14;
      uVar7 = 0;
      if (iVar14 != 0) {
        uVar7 = iVar24 << (0x10U - iVar18 & 0x1f) & 0xffff;
      }
      *(uint *)(puStack_a0 + iVar18 * 4) = uVar7;
      iVar17 = iVar18 + 1;
    } while ((iVar14 == 0) || (uVar7 != 0));
    *(undefined4 *)(puStack_a0 + iVar18 * 4) = 0xffffffff;
    iVar17 = 0x10;
    pcVar3 = acStack_1b0;
    do {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      iVar17 = iVar17 + -1;
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
      pcVar3[10] = '\0';
      pcVar3[0xb] = '\0';
      pcVar3[0xc] = '\0';
      pcVar3[0xd] = '\0';
      pcVar3[0xe] = '\0';
      pcVar3[0xf] = '\0';
      pcVar3 = pcVar3 + 0x10;
    } while (iVar17 != 0);
    uVar7 = 0xff;
    iVar17 = 0;
    if (0 < iVar22) {
      do {
        if ((int)uVar9 < 0) {
          uVar8 = uVar9 >> 0x1d;
          iVar24 = iVar16 + -3;
          uVar9 = uVar9 << 3;
          if (iVar24 < 0) {
            bVar4 = *pbVar15;
            pbVar21 = pbVar15 + 1;
            pbVar15 = pbVar15 + 2;
            uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
            uVar9 = uVar12 << (-iVar24 & 0x1fU);
            iVar24 = iVar16 + 0xd;
          }
        }
        else {
          if (uVar9 >> 0x10 == 0) {
            uVar8 = 2;
            do {
              uVar8 = uVar8 + 1;
              iVar24 = iVar16 + -1;
              uVar11 = uVar9 << 1;
              if (iVar24 < 0) {
                bVar4 = *pbVar15;
                pbVar21 = pbVar15 + 1;
                pbVar15 = pbVar15 + 2;
                uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
                uVar11 = uVar12 << (-iVar24 & 0x1fU);
                iVar24 = iVar16 + 0xf;
              }
              iVar16 = iVar24;
              bVar1 = -1 < (int)uVar9;
              uVar9 = uVar11;
            } while (bVar1);
          }
          else {
            uVar8 = 2;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 << 1;
              uVar8 = uVar8 + 1;
            } while (-1 < (int)uVar9);
            iVar16 = (iVar16 + 1) - uVar8;
            uVar11 = uVar11 << 2;
            if (iVar16 < 0) {
              bVar4 = *pbVar15;
              pbVar21 = pbVar15 + 1;
              uVar9 = -iVar16;
              pbVar15 = pbVar15 + 2;
              iVar16 = iVar16 + 0x10;
              uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
              uVar11 = uVar12 << (uVar9 & 0x1f);
            }
          }
          if ((int)uVar8 < 0x11) {
            iVar24 = iVar16 - uVar8;
            uVar9 = uVar11 << (uVar8 & 0x1f);
            if (iVar24 < 0) {
              bVar4 = *pbVar15;
              pbVar21 = pbVar15 + 1;
              uVar9 = -iVar24;
              pbVar15 = pbVar15 + 2;
              iVar24 = iVar24 + 0x10;
              uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
              uVar9 = uVar12 << (uVar9 & 0x1f);
            }
            uVar8 = (uVar11 >> (-uVar8 & 0x1f)) + (1 << (uVar8 & 0x1f));
          }
          else {
            iVar16 = (iVar16 + 0x10) - uVar8;
            uVar10 = uVar11 << (uVar8 - 0x10 & 0x1f);
            if (iVar16 < 0) {
              bVar4 = *pbVar15;
              pbVar21 = pbVar15 + 1;
              uVar9 = -iVar16;
              pbVar15 = pbVar15 + 2;
              iVar16 = iVar16 + 0x10;
              uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
              uVar10 = uVar12 << (uVar9 & 0x1f);
            }
            iVar24 = iVar16 + -0x10;
            uVar9 = uVar10 << 0x10;
            if (iVar24 < 0) {
              bVar4 = *pbVar15;
              pbVar21 = pbVar15 + 1;
              pbVar15 = pbVar15 + 2;
              uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
              uVar9 = uVar12 << (-iVar24 & 0x1fU);
              iVar24 = iVar16;
            }
            uVar8 = (uVar10 >> 0x10 | (uVar11 >> (0x30 - uVar8 & 0x1f)) << 0x10) +
                    (1 << (uVar8 & 0x1f));
          }
        }
        iVar16 = iVar24;
        iVar14 = iVar17 + 1;
        iVar24 = uVar8 - 3;
        do {
          uVar8 = uVar7 + 1;
          uVar7 = uVar8 & 0xff;
          if (acStack_1b0[uVar7] == '\0') {
            iVar24 = iVar24 + -1;
          }
        } while (iVar24 != 0);
        acStack_1b0[uVar7] = '\x01';
        abStack_4b0[iVar17] = (byte)uVar8;
        iVar17 = iVar14;
      } while (iVar14 < iVar22);
    }
    iVar17 = 0x10;
    pbVar21 = abStack_2b0;
    do {
      pbVar21[0] = 0x40;
      pbVar21[1] = 0x40;
      pbVar21[2] = 0x40;
      pbVar21[3] = 0x40;
      iVar17 = iVar17 + -1;
      pbVar21[4] = 0x40;
      pbVar21[5] = 0x40;
      pbVar21[6] = 0x40;
      pbVar21[7] = 0x40;
      pbVar21[8] = 0x40;
      pbVar21[9] = 0x40;
      pbVar21[10] = 0x40;
      pbVar21[0xb] = 0x40;
      pbVar21[0xc] = 0x40;
      pbVar21[0xd] = 0x40;
      pbVar21[0xe] = 0x40;
      pbVar21[0xf] = 0x40;
      pbVar21 = pbVar21 + 0x10;
    } while (iVar17 != 0);
    uVar7 = 1;
    pbVar21 = abStack_4b0;
    pbVar19 = abStack_2b0;
    pbVar20 = abStack_3b0;
    if (0 < iVar18) {
      do {
        iVar17 = aiStack_570[1] + -1;
        iVar22 = 1 << (8 - uVar7 & 0x1f);
        uVar8 = uVar7 + 1;
        if (iVar17 != -1) {
          bVar4 = *pbVar21;
          while( true ) {
            pbVar21 = pbVar21 + 1;
            uVar11 = uVar7;
            if (bVar4 == uVar13) {
              uStack_a8 = uVar7;
              uVar11 = 0x60;
            }
            iVar17 = iVar17 + -1;
            iVar24 = iVar22;
            if (0 < iVar22) {
              do {
                *pbVar20 = bVar4;
                iVar24 = iVar24 + -1;
                *pbVar19 = (byte)uVar11;
                pbVar20 = pbVar20 + 1;
                pbVar19 = pbVar19 + 1;
              } while (iVar24 != 0);
            }
            if (iVar17 == -1) break;
            bVar4 = *pbVar21;
          }
        }
      } while (((int)uVar8 <= iVar18) &&
              (aiStack_570[1] = aiStack_570[uVar8], uVar7 = uVar8, (int)uVar8 < 9));
    }
LAB_00213dc0:
    bVar4 = abStack_2b0[uVar9 >> 0x18];
    pbVar21 = param_2;
    for (iVar16 = iVar16 - (uint)bVar4; uVar7 = (uint)bVar4, param_2 = pbVar21, -1 < iVar16;
        iVar16 = iVar16 - (uint)bVar4) {
      uVar8 = uVar9 >> 0x18;
      uVar9 = uVar9 << (uVar7 & 0x1f);
      uVar11 = uVar9 >> 0x18;
      *pbVar21 = abStack_3b0[uVar8];
      bVar4 = abStack_2b0[uVar11];
      uVar7 = (uint)bVar4;
      iVar16 = iVar16 - (uint)bVar4;
      param_2 = pbVar21 + 1;
      if (iVar16 < 0) break;
      uVar9 = uVar9 << (bVar4 & 0x1f);
      uVar8 = uVar9 >> 0x18;
      pbVar21[1] = abStack_3b0[uVar11];
      bVar4 = abStack_2b0[uVar8];
      uVar7 = (uint)bVar4;
      iVar16 = iVar16 - (uint)bVar4;
      param_2 = pbVar21 + 2;
      if (iVar16 < 0) break;
      uVar9 = uVar9 << (bVar4 & 0x1f);
      uVar11 = uVar9 >> 0x18;
      pbVar21[2] = abStack_3b0[uVar8];
      bVar4 = abStack_2b0[uVar11];
      uVar7 = (uint)bVar4;
      iVar16 = iVar16 - (uint)bVar4;
      param_2 = pbVar21 + 3;
      if (iVar16 < 0) break;
      uVar9 = uVar9 << (bVar4 & 0x1f);
      pbVar21[3] = abStack_3b0[uVar11];
      bVar4 = abStack_2b0[uVar9 >> 0x18];
      pbVar21 = pbVar21 + 4;
    }
    iVar16 = iVar16 + 0x10;
    if (-1 < iVar16) {
      *param_2 = abStack_3b0[uVar9 >> 0x18];
      param_2 = param_2 + 1;
      bVar4 = *pbVar15;
      pbVar21 = pbVar15 + 1;
      pbVar15 = pbVar15 + 2;
      uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
      uVar9 = uVar12 << (0x10U - iVar16 & 0x1f);
      goto LAB_00213dc0;
    }
    uVar8 = uStack_a8;
    if (uVar7 != 0x60) {
      uVar8 = 8;
      puVar6 = (uint *)(puStack_a0 + 0x20);
      do {
        puVar6 = puVar6 + 1;
        uVar8 = uVar8 + 1;
      } while (*puVar6 <= uVar9 >> 0x10);
    }
    iVar16 = (iVar16 + (uVar7 - 0x10)) - uVar8;
    bVar4 = abStack_4b0[(uVar9 >> (0x20 - uVar8 & 0x1f)) - *(int *)(puStack_a4 + uVar8 * 4)];
    uVar9 = uVar9 << (uVar8 & 0x1f);
    if (bVar4 != uVar13) {
      if (iVar16 < 0) {
        bVar2 = *pbVar15;
LAB_00213f1c:
        pbVar21 = pbVar15 + 1;
        pbVar15 = pbVar15 + 2;
        uVar12 = (uint)*pbVar21 | ((uint)bVar2 | uVar12 << 8) << 8;
        uVar9 = uVar12 << (-iVar16 & 0x1fU);
        iVar17 = iVar16 + 0x10;
        goto LAB_00213f40;
      }
      *param_2 = bVar4;
LAB_00213f4c:
      param_2 = param_2 + 1;
      goto LAB_00213dc0;
    }
    iVar17 = iVar16;
    if (iVar16 < 0) {
      bVar2 = *pbVar15;
      goto LAB_00213f1c;
    }
LAB_00213f40:
    iVar16 = iVar17;
    if (bVar4 != uVar13) {
LAB_00213f48:
      *param_2 = bVar4;
      goto LAB_00213f4c;
    }
    if ((int)uVar9 < 0) {
      uVar7 = uVar9 >> 0x1d;
      iVar16 = iVar17 + -3;
      uVar9 = uVar9 << 3;
      if (iVar16 < 0) {
        bVar4 = *pbVar15;
        pbVar21 = pbVar15 + 1;
        uVar8 = -iVar16;
        pbVar15 = pbVar15 + 2;
        iVar16 = iVar17 + 0xd;
        uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
        uVar9 = uVar12 << (uVar8 & 0x1f);
      }
    }
    else {
      if (uVar9 >> 0x10 == 0) {
        uVar7 = 2;
        do {
          uVar7 = uVar7 + 1;
          iVar16 = iVar17 + -1;
          uVar8 = uVar9 << 1;
          if (iVar16 < 0) {
            bVar4 = *pbVar15;
            pbVar21 = pbVar15 + 1;
            pbVar15 = pbVar15 + 2;
            uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
            uVar8 = uVar12 << (-iVar16 & 0x1fU);
            iVar16 = iVar17 + 0xf;
          }
          iVar17 = iVar16;
          bVar1 = -1 < (int)uVar9;
          uVar9 = uVar8;
        } while (bVar1);
      }
      else {
        uVar7 = 2;
        do {
          uVar8 = uVar9;
          uVar9 = uVar8 << 1;
          uVar7 = uVar7 + 1;
        } while (-1 < (int)uVar9);
        iVar17 = (iVar17 + 1) - uVar7;
        uVar8 = uVar8 << 2;
        if (iVar17 < 0) {
          bVar4 = *pbVar15;
          pbVar21 = pbVar15 + 1;
          uVar8 = -iVar17;
          pbVar15 = pbVar15 + 2;
          iVar17 = iVar17 + 0x10;
          uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
          uVar8 = uVar12 << (uVar8 & 0x1f);
        }
      }
      if ((int)uVar7 < 0x11) {
        iVar16 = iVar17 - uVar7;
        uVar9 = uVar8 << (uVar7 & 0x1f);
        if (iVar16 < 0) {
          bVar4 = *pbVar15;
          pbVar21 = pbVar15 + 1;
          uVar9 = -iVar16;
          pbVar15 = pbVar15 + 2;
          iVar16 = iVar16 + 0x10;
          uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
          uVar9 = uVar12 << (uVar9 & 0x1f);
        }
        uVar7 = (uVar8 >> (0x20 - uVar7 & 0x1f)) + (1 << (uVar7 & 0x1f));
      }
      else {
        iVar17 = (iVar17 + 0x10) - uVar7;
        uVar11 = uVar8 << (uVar7 - 0x10 & 0x1f);
        if (iVar17 < 0) {
          bVar4 = *pbVar15;
          pbVar21 = pbVar15 + 1;
          uVar9 = -iVar17;
          pbVar15 = pbVar15 + 2;
          iVar17 = iVar17 + 0x10;
          uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
          uVar11 = uVar12 << (uVar9 & 0x1f);
        }
        iVar16 = iVar17 + -0x10;
        uVar9 = uVar11 << 0x10;
        if (iVar16 < 0) {
          bVar4 = *pbVar15;
          pbVar21 = pbVar15 + 1;
          pbVar15 = pbVar15 + 2;
          uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
          uVar9 = uVar12 << (-iVar16 & 0x1fU);
          iVar16 = iVar17;
        }
        uVar7 = (uVar11 >> 0x10 | (uVar8 >> (0x30 - uVar7 & 0x1f)) << 0x10) + (1 << (uVar7 & 0x1f));
      }
    }
    pbVar21 = param_2 + (uVar7 - 4);
    if (uVar7 - 4 != 0) {
      bVar4 = param_2[-1];
      do {
        *param_2 = bVar4;
        param_2 = param_2 + 1;
      } while (param_2 < pbVar21);
      goto LAB_00213dc0;
    }
    iVar22 = iVar16 + -1;
    iVar17 = uVar9 << 1;
    if (iVar22 < 0) {
      bVar4 = *pbVar15;
      pbVar21 = pbVar15 + 1;
      uVar7 = -iVar22;
      pbVar15 = pbVar15 + 2;
      iVar22 = iVar16 + 0xf;
      uVar12 = (uint)*pbVar21 | ((uint)bVar4 | uVar12 << 8) << 8;
      iVar17 = uVar12 << (uVar7 & 0x1f);
    }
    if (-1 < (int)uVar9) {
      bVar4 = (byte)((uint)iVar17 >> 0x18);
      iVar16 = iVar22 + -8;
      uVar9 = iVar17 << 8;
      if (iVar16 < 0) {
        bVar2 = *pbVar15;
        pbVar21 = pbVar15 + 1;
        uVar7 = -iVar16;
        pbVar15 = pbVar15 + 2;
        iVar16 = iVar22 + 8;
        uVar12 = (uint)*pbVar21 | ((uint)bVar2 | uVar12 << 8) << 8;
        uVar9 = uVar12 << (uVar7 & 0x1f);
      }
      goto LAB_00213f48;
    }
    if (uVar23 == 0x32fb) {
      pbVar21 = pbStack_b0 + uStack_ac;
      bVar4 = 0;
      for (; pbStack_b0 < pbVar21; pbStack_b0 = pbStack_b0 + 1) {
        bVar4 = bVar4 + *pbStack_b0;
        *pbStack_b0 = bVar4;
      }
    }
    else if (uVar23 == 0x34fb) {
      cVar5 = '\0';
      pbVar21 = pbStack_b0 + uStack_ac;
      bVar4 = 0;
      for (; pbStack_b0 < pbVar21; pbStack_b0 = pbStack_b0 + 1) {
        cVar5 = cVar5 + *pbStack_b0;
        bVar4 = bVar4 + cVar5;
        *pbStack_b0 = bVar4;
      }
    }
  }
  return uStack_ac;
}

