/* Ghidra pseudocode. PS2 address: 0023f678. Not validated source. */

uint FUN_0023f678(long param_1,byte *param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  byte bVar6;
  char cVar7;
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
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  byte *pbVar25;
  ushort uVar26;
  int aiStack_570 [16];
  undefined1 auStack_530 [64];
  uint auStack_4f0 [8];
  uint uStack_4d0;
  uint auStack_4cc [7];
  byte abStack_4b0 [256];
  byte abStack_3b0 [256];
  byte abStack_2b0 [4];
  undefined4 auStack_2ac [63];
  undefined4 auStack_1b0 [64];
  byte *pbStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 *puStack_a4;
  uint uStack_a0;
  undefined1 *puStack_9c;
  
  pbStack_b0 = param_2;
  uVar24 = 0xffffffff;
  uStack_a8 = 0;
  uStack_ac = 0;
  if (param_1 != 0) {
    pbVar20 = (byte *)param_1;
    iVar18 = 0;
    pbVar15 = pbVar20 + 4;
    uVar13 = (uint)CONCAT11(pbVar20[2],pbVar20[3]);
    uVar9 = uVar13 << 0x10;
    if ((*pbVar20 & 1) != 0) {
      iVar18 = 8;
      pbVar15 = pbVar20 + 8;
      uVar13 = (uint)CONCAT21(CONCAT11(pbVar20[5],pbVar20[6]),pbVar20[7]);
      uVar9 = uVar13 << 8;
    }
    uVar10 = uVar9 << 8;
    iVar17 = iVar18 + -8;
    uVar26 = CONCAT11(*pbVar20,pbVar20[1]) & 0xfeff;
    if (iVar17 < 0) {
      bVar6 = *pbVar15;
      pbVar20 = pbVar15 + 1;
      uVar10 = -iVar17;
      pbVar15 = pbVar15 + 2;
      iVar17 = iVar18 + 8;
      uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
      uVar10 = uVar13 << (uVar10 & 0x1f);
    }
    iVar18 = iVar17 + -0x10;
    uVar11 = uVar10 << 0x10;
    if (iVar18 < 0) {
      bVar6 = *pbVar15;
      pbVar20 = pbVar15 + 1;
      pbVar15 = pbVar15 + 2;
      uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
      uVar11 = uVar13 << (-iVar18 & 0x1fU);
      iVar18 = iVar17;
    }
    uStack_ac = uVar10 >> 0x10 | (uVar9 >> 0x18) << 0x10;
    if (param_3 == 0) {
      uVar9 = uVar11 >> 0x18;
      puStack_9c = auStack_530;
    }
    else {
      uVar24 = uVar11 >> 0x18;
      iVar17 = iVar18 + -8;
      uVar11 = uVar11 << 8;
      if (iVar17 < 0) {
        bVar6 = *pbVar15;
        pbVar20 = pbVar15 + 1;
        uVar9 = -iVar17;
        pbVar15 = pbVar15 + 2;
        iVar17 = iVar18 + 8;
        uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
        uVar11 = uVar13 << (uVar9 & 0x1f);
      }
      puStack_9c = auStack_530;
      iVar23 = 0;
      puStack_a4 = auStack_1b0;
      iVar22 = 0;
      pbVar21 = abStack_4b0;
      pbVar20 = abStack_2b0;
      pbVar25 = abStack_3b0;
      iVar19 = 1;
      do {
        iVar16 = iVar19;
        *(int *)(puStack_9c + iVar16 * 4) = iVar22 * 2 - iVar23;
        if ((int)uVar11 < 0) {
          uVar9 = uVar11 >> 0x1d;
          iVar18 = iVar17 + -3;
          uVar11 = uVar11 << 3;
          if (iVar18 < 0) {
            bVar6 = *pbVar15;
            pbVar4 = pbVar15 + 1;
            uVar10 = -iVar18;
            pbVar15 = pbVar15 + 2;
            iVar18 = iVar17 + 0xd;
            uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
            uVar11 = uVar13 << (uVar10 & 0x1f);
          }
        }
        else {
          if (uVar11 >> 0x10 == 0) {
            uVar9 = 2;
            do {
              uVar9 = uVar9 + 1;
              iVar18 = iVar17 + -1;
              uVar10 = uVar11 << 1;
              if (iVar18 < 0) {
                bVar6 = *pbVar15;
                pbVar4 = pbVar15 + 1;
                pbVar15 = pbVar15 + 2;
                uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
                uVar10 = uVar13 << (-iVar18 & 0x1fU);
                iVar18 = iVar17 + 0xf;
              }
              iVar17 = iVar18;
              bVar1 = -1 < (int)uVar11;
              uVar11 = uVar10;
            } while (bVar1);
          }
          else {
            uVar9 = 2;
            do {
              uVar10 = uVar11;
              uVar11 = uVar10 << 1;
              uVar9 = uVar9 + 1;
            } while (-1 < (int)uVar11);
            iVar17 = (iVar17 + 1) - uVar9;
            uVar10 = uVar10 << 2;
            if (iVar17 < 0) {
              bVar6 = *pbVar15;
              pbVar4 = pbVar15 + 1;
              uVar10 = -iVar17;
              pbVar15 = pbVar15 + 2;
              iVar17 = iVar17 + 0x10;
              uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
              uVar10 = uVar13 << (uVar10 & 0x1f);
            }
          }
          if ((int)uVar9 < 0x11) {
            iVar18 = iVar17 - uVar9;
            uVar11 = uVar10 << (uVar9 & 0x1f);
            if (iVar18 < 0) {
              bVar6 = *pbVar15;
              pbVar4 = pbVar15 + 1;
              uVar11 = -iVar18;
              pbVar15 = pbVar15 + 2;
              iVar18 = iVar18 + 0x10;
              uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
              uVar11 = uVar13 << (uVar11 & 0x1f);
            }
            uVar9 = (uVar10 >> (-uVar9 & 0x1f)) + (1 << (uVar9 & 0x1f));
          }
          else {
            iVar17 = (iVar17 + 0x10) - uVar9;
            uVar8 = uVar10 << (uVar9 - 0x10 & 0x1f);
            if (iVar17 < 0) {
              bVar6 = *pbVar15;
              pbVar4 = pbVar15 + 1;
              uVar11 = -iVar17;
              pbVar15 = pbVar15 + 2;
              iVar17 = iVar17 + 0x10;
              uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
              uVar8 = uVar13 << (uVar11 & 0x1f);
            }
            iVar18 = iVar17 + -0x10;
            uVar11 = uVar8 << 0x10;
            if (iVar18 < 0) {
              bVar6 = *pbVar15;
              pbVar4 = pbVar15 + 1;
              pbVar15 = pbVar15 + 2;
              uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
              uVar11 = uVar13 << (-iVar18 & 0x1fU);
              iVar18 = iVar17;
            }
            uVar9 = (uVar8 >> 0x10 | (uVar10 >> (0x30 - uVar9 & 0x1f)) << 0x10) +
                    (1 << (uVar9 & 0x1f));
          }
        }
        iVar14 = uVar9 - 4;
        iVar23 = iVar23 + iVar14;
        aiStack_570[iVar16] = iVar14;
        iVar22 = iVar22 * 2 + iVar14;
        uVar9 = 0;
        if (iVar14 != 0) {
          uVar9 = iVar22 << (0x10U - iVar16 & 0x1f) & 0xffff;
        }
        auStack_4f0[iVar16] = uVar9;
        iVar17 = iVar18;
        iVar19 = iVar16 + 1;
      } while ((iVar14 == 0) || (uVar9 != 0));
      uStack_a0 = (uint)(iVar16 < 1);
      auStack_4f0[iVar16] = 0xffffffff;
      iVar17 = 0x10;
      puVar3 = puStack_a4;
      do {
        *puVar3 = 0;
        iVar17 = iVar17 + -1;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 4;
      } while (iVar17 != 0);
      uVar9 = 0xff;
      iVar19 = 0;
      iVar17 = iVar18;
      if (0 < iVar23) {
        do {
          if ((int)uVar11 < 0) {
            uVar10 = uVar11 >> 0x1d;
            iVar18 = iVar17 + -3;
            uVar11 = uVar11 << 3;
            if (iVar18 < 0) {
              bVar6 = *pbVar15;
              pbVar4 = pbVar15 + 1;
              uVar11 = -iVar18;
              pbVar15 = pbVar15 + 2;
              iVar18 = iVar17 + 0xd;
              uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
              uVar11 = uVar13 << (uVar11 & 0x1f);
            }
          }
          else {
            if (uVar11 >> 0x10 == 0) {
              uVar10 = 2;
              do {
                uVar10 = uVar10 + 1;
                iVar18 = iVar17 + -1;
                uVar8 = uVar11 << 1;
                if (iVar18 < 0) {
                  bVar6 = *pbVar15;
                  pbVar4 = pbVar15 + 1;
                  pbVar15 = pbVar15 + 2;
                  uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
                  uVar8 = uVar13 << (-iVar18 & 0x1fU);
                  iVar18 = iVar17 + 0xf;
                }
                iVar17 = iVar18;
                bVar1 = -1 < (int)uVar11;
                uVar11 = uVar8;
              } while (bVar1);
            }
            else {
              uVar10 = 2;
              do {
                uVar8 = uVar11;
                uVar11 = uVar8 << 1;
                uVar10 = uVar10 + 1;
              } while (-1 < (int)uVar11);
              iVar17 = (iVar17 + 1) - uVar10;
              uVar8 = uVar8 << 2;
              if (iVar17 < 0) {
                bVar6 = *pbVar15;
                pbVar4 = pbVar15 + 1;
                uVar11 = -iVar17;
                pbVar15 = pbVar15 + 2;
                iVar17 = iVar17 + 0x10;
                uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
                uVar8 = uVar13 << (uVar11 & 0x1f);
              }
            }
            if ((int)uVar10 < 0x11) {
              iVar18 = iVar17 - uVar10;
              uVar11 = uVar8 << (uVar10 & 0x1f);
              if (iVar18 < 0) {
                bVar6 = *pbVar15;
                pbVar4 = pbVar15 + 1;
                uVar11 = -iVar18;
                pbVar15 = pbVar15 + 2;
                iVar18 = iVar18 + 0x10;
                uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
                uVar11 = uVar13 << (uVar11 & 0x1f);
              }
              uVar10 = (uVar8 >> (-uVar10 & 0x1f)) + (1 << (uVar10 & 0x1f));
            }
            else {
              iVar17 = (iVar17 + 0x10) - uVar10;
              uVar12 = uVar8 << (uVar10 - 0x10 & 0x1f);
              if (iVar17 < 0) {
                bVar6 = *pbVar15;
                pbVar4 = pbVar15 + 1;
                uVar11 = -iVar17;
                pbVar15 = pbVar15 + 2;
                iVar17 = iVar17 + 0x10;
                uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
                uVar12 = uVar13 << (uVar11 & 0x1f);
              }
              iVar18 = iVar17 + -0x10;
              uVar11 = uVar12 << 0x10;
              if (iVar18 < 0) {
                bVar6 = *pbVar15;
                pbVar4 = pbVar15 + 1;
                pbVar15 = pbVar15 + 2;
                uVar13 = (uint)*pbVar4 | ((uint)bVar6 | uVar13 << 8) << 8;
                uVar11 = uVar13 << (-iVar18 & 0x1fU);
                iVar18 = iVar17;
              }
              uVar10 = (uVar12 >> 0x10 | (uVar8 >> (0x30 - uVar10 & 0x1f)) << 0x10) +
                       (1 << (uVar10 & 0x1f));
            }
          }
          iVar22 = iVar19 + 1;
          iVar17 = uVar10 - 3;
          do {
            uVar10 = uVar9 + 1;
            uVar9 = uVar10 & 0xff;
            if (*(char *)((int)puStack_a4 + uVar9) == '\0') {
              iVar17 = iVar17 + -1;
            }
          } while (iVar17 != 0);
          *(char *)((int)puStack_a4 + uVar9) = '\x01';
          pbVar21[iVar19] = (byte)uVar10;
          iVar17 = iVar18;
          iVar19 = iVar22;
        } while (iVar22 < iVar23);
      }
      iVar17 = 0x10;
      uVar9 = uVar11 >> 0x18;
      pbVar4 = pbVar20;
      do {
        pbVar4[0] = 0x40;
        pbVar4[1] = 0x40;
        pbVar4[2] = 0x40;
        pbVar4[3] = 0x40;
        iVar17 = iVar17 + -1;
        pbVar4[4] = 0x40;
        pbVar4[5] = 0x40;
        pbVar4[6] = 0x40;
        pbVar4[7] = 0x40;
        pbVar4[8] = 0x40;
        pbVar4[9] = 0x40;
        pbVar4[10] = 0x40;
        pbVar4[0xb] = 0x40;
        pbVar4[0xc] = 0x40;
        pbVar4[0xd] = 0x40;
        pbVar4[0xe] = 0x40;
        pbVar4[0xf] = 0x40;
        pbVar4 = pbVar4 + 0x10;
      } while (iVar17 != 0);
      uVar10 = 1;
      if (uStack_a0 == 0) {
        do {
          iVar17 = aiStack_570[1] + -1;
          iVar19 = 1 << (8 - uVar10 & 0x1f);
          if (iVar17 != -1) {
            bVar6 = *pbVar21;
            while( true ) {
              pbVar21 = pbVar21 + 1;
              uVar8 = uVar10;
              if (bVar6 == uVar24) {
                uStack_a8 = uVar10;
                uVar8 = 0x60;
              }
              iVar22 = 0;
              if (0 < iVar19) {
                do {
                  *pbVar25 = bVar6;
                  iVar22 = iVar22 + 1;
                  *pbVar20 = (byte)uVar8;
                  pbVar25 = pbVar25 + 1;
                  pbVar20 = pbVar20 + 1;
                } while (iVar22 < iVar19);
              }
              iVar17 = iVar17 + -1;
              if (iVar17 == -1) break;
              bVar6 = *pbVar21;
            }
          }
          uVar10 = uVar10 + 1;
        } while (((int)uVar10 <= iVar16) && (aiStack_570[1] = aiStack_570[uVar10], (int)uVar10 < 9))
        ;
      }
    }
LAB_0023feb8:
    bVar6 = abStack_2b0[uVar9];
    pbVar20 = param_2;
    for (iVar18 = iVar18 - (uint)bVar6; uVar10 = (uint)bVar6, param_2 = pbVar20, -1 < iVar18;
        iVar18 = iVar18 - (uint)bVar6) {
      pbVar25 = abStack_3b0 + uVar9;
      uVar11 = uVar11 << (uVar10 & 0x1f);
      uVar9 = uVar11 >> 0x18;
      *pbVar20 = *pbVar25;
      bVar6 = abStack_2b0[uVar9];
      uVar10 = (uint)bVar6;
      iVar18 = iVar18 - (uint)bVar6;
      param_2 = pbVar20 + 1;
      if (iVar18 < 0) break;
      pbVar25 = abStack_3b0 + uVar9;
      uVar11 = uVar11 << (bVar6 & 0x1f);
      uVar9 = uVar11 >> 0x18;
      pbVar20[1] = *pbVar25;
      bVar6 = abStack_2b0[uVar9];
      uVar10 = (uint)bVar6;
      iVar18 = iVar18 - (uint)bVar6;
      param_2 = pbVar20 + 2;
      if (iVar18 < 0) break;
      pbVar25 = abStack_3b0 + uVar9;
      uVar11 = uVar11 << (bVar6 & 0x1f);
      uVar9 = uVar11 >> 0x18;
      pbVar20[2] = *pbVar25;
      bVar6 = abStack_2b0[uVar9];
      uVar10 = (uint)bVar6;
      iVar18 = iVar18 - (uint)bVar6;
      param_2 = pbVar20 + 3;
      if (iVar18 < 0) break;
      pbVar25 = abStack_3b0 + uVar9;
      uVar11 = uVar11 << (bVar6 & 0x1f);
      uVar9 = uVar11 >> 0x18;
      pbVar20[3] = *pbVar25;
      bVar6 = abStack_2b0[uVar9];
      pbVar20 = pbVar20 + 4;
    }
    iVar18 = iVar18 + 0x10;
    if (-1 < iVar18) {
      *param_2 = abStack_3b0[uVar9];
      param_2 = param_2 + 1;
      bVar6 = *pbVar15;
      pbVar20 = pbVar15 + 1;
      pbVar15 = pbVar15 + 2;
      uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
      uVar11 = uVar13 << (0x10U - iVar18 & 0x1f);
      uVar9 = uVar11 >> 0x18;
      goto LAB_0023feb8;
    }
    if (uVar10 == 0x60) {
      iVar17 = uStack_a8 << 2;
      uVar9 = uStack_a8;
    }
    else {
      uVar9 = 8;
      puVar5 = &uStack_4d0;
      iVar17 = 0x20;
      do {
        puVar5 = puVar5 + 1;
        iVar17 = iVar17 + 4;
        uVar9 = uVar9 + 1;
      } while (*puVar5 <= uVar11 >> 0x10);
    }
    uVar8 = uVar11 >> (0x20 - uVar9 & 0x1f);
    iVar18 = (iVar18 + (uVar10 - 0x10)) - uVar9;
    uVar11 = uVar11 << (uVar9 & 0x1f);
    bVar6 = abStack_4b0[uVar8 - *(int *)(puStack_9c + iVar17)];
    if (bVar6 != uVar24) {
      if (iVar18 < 0) {
        bVar2 = *pbVar15;
        goto LAB_0024001c;
      }
      *param_2 = bVar6;
LAB_0024004c:
      uVar9 = uVar11 >> 0x18;
      param_2 = param_2 + 1;
      goto LAB_0023feb8;
    }
    iVar17 = iVar18;
    if (iVar18 < 0) {
      bVar2 = *pbVar15;
LAB_0024001c:
      pbVar20 = pbVar15 + 1;
      pbVar15 = pbVar15 + 2;
      uVar13 = (uint)*pbVar20 | ((uint)bVar2 | uVar13 << 8) << 8;
      uVar11 = uVar13 << (-iVar18 & 0x1fU);
      iVar17 = iVar18 + 0x10;
    }
    iVar18 = iVar17;
    if (bVar6 != uVar24) {
LAB_00240048:
      *param_2 = bVar6;
      goto LAB_0024004c;
    }
    if ((int)uVar11 < 0) {
      uVar9 = uVar11 >> 0x1d;
      iVar18 = iVar17 + -3;
      uVar11 = uVar11 << 3;
      if (iVar18 < 0) {
        bVar6 = *pbVar15;
        pbVar20 = pbVar15 + 1;
        uVar10 = -iVar18;
        pbVar15 = pbVar15 + 2;
        iVar18 = iVar17 + 0xd;
        uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
        uVar11 = uVar13 << (uVar10 & 0x1f);
      }
    }
    else {
      if (uVar11 >> 0x10 == 0) {
        uVar9 = 2;
        do {
          uVar9 = uVar9 + 1;
          iVar18 = iVar17 + -1;
          uVar10 = uVar11 << 1;
          if (iVar18 < 0) {
            bVar6 = *pbVar15;
            pbVar20 = pbVar15 + 1;
            pbVar15 = pbVar15 + 2;
            uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
            uVar10 = uVar13 << (-iVar18 & 0x1fU);
            iVar18 = iVar17 + 0xf;
          }
          iVar17 = iVar18;
          bVar1 = -1 < (int)uVar11;
          uVar11 = uVar10;
        } while (bVar1);
      }
      else {
        uVar9 = 2;
        do {
          uVar10 = uVar11;
          uVar11 = uVar10 << 1;
          uVar9 = uVar9 + 1;
        } while (-1 < (int)uVar11);
        iVar17 = (iVar17 + 1) - uVar9;
        uVar10 = uVar10 << 2;
        if (iVar17 < 0) {
          bVar6 = *pbVar15;
          pbVar20 = pbVar15 + 1;
          uVar10 = -iVar17;
          pbVar15 = pbVar15 + 2;
          iVar17 = iVar17 + 0x10;
          uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
          uVar10 = uVar13 << (uVar10 & 0x1f);
        }
      }
      if ((int)uVar9 < 0x11) {
        iVar18 = iVar17 - uVar9;
        uVar11 = uVar10 << (uVar9 & 0x1f);
        if (iVar18 < 0) {
          bVar6 = *pbVar15;
          pbVar20 = pbVar15 + 1;
          uVar11 = -iVar18;
          pbVar15 = pbVar15 + 2;
          iVar18 = iVar18 + 0x10;
          uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
          uVar11 = uVar13 << (uVar11 & 0x1f);
        }
        uVar9 = (uVar10 >> (0x20 - uVar9 & 0x1f)) + (1 << (uVar9 & 0x1f));
      }
      else {
        iVar17 = (iVar17 + 0x10) - uVar9;
        uVar8 = uVar10 << (uVar9 - 0x10 & 0x1f);
        if (iVar17 < 0) {
          bVar6 = *pbVar15;
          pbVar20 = pbVar15 + 1;
          uVar11 = -iVar17;
          pbVar15 = pbVar15 + 2;
          iVar17 = iVar17 + 0x10;
          uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
          uVar8 = uVar13 << (uVar11 & 0x1f);
        }
        iVar18 = iVar17 + -0x10;
        uVar11 = uVar8 << 0x10;
        if (iVar18 < 0) {
          bVar6 = *pbVar15;
          pbVar20 = pbVar15 + 1;
          pbVar15 = pbVar15 + 2;
          uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
          uVar11 = uVar13 << (-iVar18 & 0x1fU);
          iVar18 = iVar17;
        }
        uVar9 = (uVar8 >> 0x10 | (uVar10 >> (0x30 - uVar9 & 0x1f)) << 0x10) + (1 << (uVar9 & 0x1f));
      }
    }
    pbVar20 = param_2 + (uVar9 - 4);
    if (uVar9 - 4 != 0) {
      bVar6 = param_2[-1];
      uVar9 = uVar11 >> 0x18;
      do {
        *param_2 = bVar6;
        param_2 = param_2 + 1;
      } while (param_2 < pbVar20);
      goto LAB_0023feb8;
    }
    iVar19 = iVar18 + -1;
    iVar17 = uVar11 << 1;
    if (iVar19 < 0) {
      bVar6 = *pbVar15;
      pbVar20 = pbVar15 + 1;
      uVar9 = -iVar19;
      pbVar15 = pbVar15 + 2;
      iVar19 = iVar18 + 0xf;
      uVar13 = (uint)*pbVar20 | ((uint)bVar6 | uVar13 << 8) << 8;
      iVar17 = uVar13 << (uVar9 & 0x1f);
    }
    if (-1 < (int)uVar11) {
      bVar6 = (byte)((uint)iVar17 >> 0x18);
      iVar18 = iVar19 + -8;
      uVar11 = iVar17 << 8;
      if (iVar18 < 0) {
        bVar2 = *pbVar15;
        pbVar20 = pbVar15 + 1;
        uVar9 = -iVar18;
        pbVar15 = pbVar15 + 2;
        iVar18 = iVar19 + 8;
        uVar13 = (uint)*pbVar20 | ((uint)bVar2 | uVar13 << 8) << 8;
        uVar11 = uVar13 << (uVar9 & 0x1f);
      }
      goto LAB_00240048;
    }
    if (uVar26 == 0x32fb) {
      pbVar20 = pbStack_b0 + uStack_ac;
      bVar6 = 0;
      for (; pbStack_b0 < pbVar20; pbStack_b0 = pbStack_b0 + 1) {
        bVar6 = bVar6 + *pbStack_b0;
        *pbStack_b0 = bVar6;
      }
    }
    else if (uVar26 == 0x34fb) {
      cVar7 = '\0';
      pbVar20 = pbStack_b0 + uStack_ac;
      bVar6 = 0;
      for (; pbStack_b0 < pbVar20; pbStack_b0 = pbStack_b0 + 1) {
        cVar7 = cVar7 + *pbStack_b0;
        bVar6 = bVar6 + cVar7;
        *pbStack_b0 = bVar6;
      }
    }
  }
  return uStack_ac;
}

