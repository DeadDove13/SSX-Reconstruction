/* Ghidra pseudocode. PS2 address: 00214d50. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00215088) */

void FUN_00214d50(undefined8 param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  uint *puVar27;
  ulong in_hi1;
  uint auStack_8c0 [256];
  undefined4 auStack_4c0 [256];
  uint uStack_c0;
  uint *puStack_bc;
  uint uStack_b8;
  undefined4 *puStack_b4;
  undefined4 *puStack_b0;
  uint uStack_ac;
  
  puVar13 = auStack_8c0;
  puStack_b4 = auStack_4c0;
  iVar22 = (int)param_1;
  piVar26 = (int *)(iVar22 + 0x100);
  uVar19 = 0;
  uStack_c0 = 0;
  piVar12 = piVar26;
  do {
    *piVar12 = 0;
    uVar19 = uVar19 + 1;
    piVar12 = piVar12 + 1;
  } while (uVar19 < 0x300);
  uVar25 = ~param_2;
  pbVar11 = *(byte **)(iVar22 + 0x2db4);
  uStack_ac = param_2 & 0x20;
  puStack_b0 = (undefined4 *)(iVar22 + 0xd00);
  iVar23 = 0;
  puVar27 = (uint *)(iVar22 + 0x2564);
  uStack_b8 = (uint)(param_3 < 99);
  pbVar4 = *(byte **)(iVar22 + 0x2db0);
  uVar19 = 0x100;
  while (pbVar4 < pbVar11) {
    uVar20 = (uint)*pbVar4;
    pbVar16 = pbVar4 + 1;
    iVar23 = iVar23 + uVar20;
    if (uVar20 == uVar19) {
      pbVar8 = pbVar4 + 0x7531;
      if (pbVar11 < pbVar4 + 0x7531) {
        pbVar8 = pbVar11;
      }
      uVar24 = 0;
      if (pbVar16 < pbVar8) {
        bVar1 = *pbVar16;
        while( true ) {
          uVar20 = (uint)bVar1;
          uVar24 = uVar24 + 1;
          pbVar16 = pbVar16 + 1;
          iVar23 = iVar23 + uVar20;
          if ((uVar20 != uVar19) || (pbVar8 <= pbVar16)) break;
          bVar1 = *pbVar16;
        }
      }
      if (uVar24 < 0xff) {
        piVar26[uVar24 + 0x200] = piVar26[uVar24 + 0x200] + 1;
      }
      else {
        *(int *)(iVar22 + 0x900) = *(int *)(iVar22 + 0x900) + 1;
      }
    }
    piVar26[uVar20] = piVar26[uVar20] + 1;
    piVar26[(uVar20 - (uVar19 - 0x100) & 0xff) + 0x100] =
         piVar26[(uVar20 - (uVar19 - 0x100) & 0xff) + 0x100] + 1;
    pbVar4 = pbVar16;
    uVar19 = uVar20;
  }
  *(int *)(iVar22 + 0x2dbc) = iVar23;
  if (*(int *)(iVar22 + 0x900) == 0) {
    *(undefined4 *)(iVar22 + 0x900) = 1;
  }
  *(undefined4 *)(iVar22 + 0x2dd4) = 0;
  uVar19 = 0;
  *(undefined4 *)(iVar22 + 0x2dd8) = 0;
  uVar20 = 0;
  iVar23 = 0;
  do {
    uVar24 = 0;
    if (*(uint *)((int)piVar26 + iVar23) < (uint)piVar26[uVar19]) {
      uVar19 = uVar20;
    }
    uVar21 = uVar20;
    if (*(uint *)((int)piVar26 + iVar23) == 0) {
      if (uVar20 < 0x100) {
        piVar12 = (int *)(iVar23 + (int)piVar26);
        do {
          piVar12 = piVar12 + 1;
          uVar24 = uVar24 + 1;
          uVar21 = uVar21 + 1;
          if (*piVar12 != 0) break;
        } while (uVar21 < 0x100);
        goto LAB_00214f4c;
      }
      uVar15 = *(uint *)(iVar22 + 0x2dd8);
    }
    else {
LAB_00214f4c:
      uVar15 = *(uint *)(iVar22 + 0x2dd8);
    }
    if (uVar15 <= uVar24) {
      *(uint *)(iVar22 + 0x2dd0) = uVar20;
      *(uint *)(iVar22 + 0x2dd8) = uVar24;
      if (*(uint *)(iVar22 + 0x2dd4) <= uVar24) {
        *(uint *)(iVar22 + 0x2dd8) = *(uint *)(iVar22 + 0x2dd4);
        *(undefined4 *)(iVar22 + 0x2dd0) = *(undefined4 *)(iVar22 + 0x2dcc);
        *(uint *)(iVar22 + 0x2dcc) = uVar20;
        *(uint *)(iVar22 + 0x2dd4) = uVar24;
      }
    }
    uVar20 = uVar21 + 1;
    iVar23 = uVar20 * 4;
  } while (uVar20 < 0x100);
  if ((uStack_ac != 0) && (*(int *)(iVar22 + 0x2dd4) == 0)) {
    *(uint *)(iVar22 + 0x2dcc) = uVar19;
    *(undefined4 *)(iVar22 + 0x2dd4) = 1;
  }
  if ((uVar25 & 2) != 0) {
    if (1 < *(uint *)(iVar22 + 0x2dd4)) {
      *(undefined4 *)(iVar22 + 0x2dd4) = 1;
    }
    if ((uVar25 & 1) != 0) {
      *(undefined4 *)(iVar22 + 0x2dd4) = 0;
    }
  }
  if ((uVar25 & 4) == 0) {
    if (*(uint *)(iVar22 + 0x2dd8) < 0xb) {
      iVar23 = *(int *)(iVar22 + 0x2dd4);
    }
    else {
      uVar3 = *(undefined4 *)(iVar22 + 0x2dcc);
      uVar24 = *(uint *)(iVar22 + 0x2dd4);
      *(uint *)(iVar22 + 0x2dd4) = *(uint *)(iVar22 + 0x2dd8);
      *(undefined4 *)(iVar22 + 0x2dcc) = *(undefined4 *)(iVar22 + 0x2dd0);
      *(undefined4 *)(iVar22 + 0x2dd0) = uVar3;
      *(uint *)(iVar22 + 0x2dd8) = uVar24;
      iVar23 = *(int *)(iVar22 + 0x2dd4);
    }
    uVar20 = *(uint *)(iVar22 + 0x2dd8);
    if ((uint)(iVar23 << 2) < uVar20) {
      iVar23 = uVar20 - (uVar20 >> 2);
      *(uint *)(iVar22 + 0x2dd4) = uVar20 >> 2;
      *(int *)(iVar22 + 0x2dd8) = iVar23;
      *(int *)(iVar22 + 0x2dcc) = *(int *)(iVar22 + 0x2dd0) + iVar23;
    }
  }
  else {
    *(undefined4 *)(iVar22 + 0x2dd8) = 0;
  }
  iVar23 = *(int *)(iVar22 + 0x2dd8);
  if (iVar23 != 0) {
    uVar20 = 1;
    uStack_c0 = *(int *)(iVar22 + 0x2de8) / 0x19;
    iVar9 = iVar23 + -(iVar23 / 2);
    *(int *)(iVar22 + 0x2ddc) = -(iVar23 / 2);
    *(int *)(iVar22 + 0x2de0) = iVar9;
    if (iVar9 != 0) {
      iVar23 = 0;
      puVar10 = (uint *)(iVar22 + 0x504);
      do {
        if (uStack_c0 < *puVar10) {
          piVar26[*(int *)(iVar22 + 0x2dd0) + iVar23] = *puVar10;
          uVar24 = *(uint *)(iVar22 + 0x2de0);
        }
        else {
          uVar24 = *(uint *)(iVar22 + 0x2de0);
        }
        uVar20 = uVar20 + 1;
        iVar23 = iVar23 + 2;
        puVar10 = puVar10 + 1;
      } while (uVar20 <= uVar24);
    }
    uVar20 = 1;
    if (*(int *)(iVar22 + 0x2ddc) != 0) {
      iVar23 = 0;
      puVar10 = (uint *)(iVar22 + 0x8fc);
      do {
        if (uStack_c0 < *puVar10) {
          piVar26[*(int *)(iVar22 + 0x2dd0) + iVar23 + 1] = *puVar10;
          iVar9 = *(int *)(iVar22 + 0x2ddc);
        }
        else {
          iVar9 = *(int *)(iVar22 + 0x2ddc);
        }
        uVar20 = uVar20 + 1;
        iVar23 = iVar23 + 2;
        puVar10 = puVar10 + -1;
      } while (uVar20 <= (uint)-iVar9);
    }
    uVar24 = 0;
    uVar20 = 0;
    if (*(uint *)(iVar22 + 0x2dd8) != 0) {
      piVar12 = piVar26 + *(int *)(iVar22 + 0x2dd0);
      do {
        iVar23 = *piVar12;
        piVar12 = piVar12 + 1;
        if (iVar23 != 0) {
          uVar24 = uVar20;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(iVar22 + 0x2dd8));
    }
    iVar9 = (*(int *)(iVar22 + 0x2dd8) - uVar24) + -1;
    iVar23 = *(int *)(iVar22 + 0x2dd8) - iVar9;
    *(int *)(iVar22 + 0x2dd8) = iVar23;
    if (*(int *)(iVar22 + 0x2dcc) == *(int *)(iVar22 + 0x2dd0) + iVar23 + iVar9) {
      *(int *)(iVar22 + 0x2dcc) = *(int *)(iVar22 + 0x2dcc) - iVar9;
      *(int *)(iVar22 + 0x2dd4) = *(int *)(iVar22 + 0x2dd4) + iVar9;
    }
    iVar23 = -(*(int *)(iVar22 + 0x2dd8) / 2);
    *(int *)(iVar22 + 0x2ddc) = iVar23;
    *(int *)(iVar22 + 0x2de0) = *(int *)(iVar22 + 0x2dd8) + iVar23;
  }
  if ((*(int *)(iVar22 + 0x2dd4) != 0) && (uVar20 = 0, *(int *)(iVar22 + 0x2dd4) != 0)) {
    piVar12 = (int *)(iVar22 + 0x900);
    do {
      iVar23 = *(int *)(iVar22 + 0x2dcc) + uVar20;
      uVar20 = uVar20 + 1;
      piVar26[iVar23] = *piVar12;
      piVar12 = piVar12 + 1;
    } while (uVar20 < *(uint *)(iVar22 + 0x2dd4));
  }
  FUN_00214688(param_1);
  if (*(uint *)(iVar22 + 0x2dd4) < 2) {
    pbVar11 = *(byte **)(iVar22 + 0x2db0);
  }
  else {
    uVar20 = 1;
    if (1 < *(uint *)(iVar22 + 0x2dd4)) {
      iVar23 = *(int *)(iVar22 + 0x2dcc);
      do {
        uVar21 = uVar20 - 1;
        if (8 < uVar20 - 1) {
          uVar21 = 8;
        }
        if (piVar26[iVar23 + uVar20] == 0) {
LAB_002152c4:
          uVar21 = *(uint *)(iVar22 + 0x2dd4);
        }
        else {
          uVar21 = FUN_00214878(param_1,uVar20,uVar21);
          iVar23 = *(int *)(iVar22 + 0x2dcc) + uVar20;
          if ((uVar21 <= puVar27[iVar23]) ||
             (piVar26[iVar23] * (uVar21 - puVar27[iVar23]) < uVar20 >> 1)) {
            piVar26[iVar23] = 0;
            goto LAB_002152c4;
          }
          uVar21 = *(uint *)(iVar22 + 0x2dd4);
        }
        uVar20 = uVar20 + 1;
        if (uVar21 <= uVar20) goto code_r0x002152d8;
        iVar23 = *(int *)(iVar22 + 0x2dcc);
      } while( true );
    }
    pbVar11 = *(byte **)(iVar22 + 0x2db0);
  }
LAB_002152dc:
  uVar20 = 0;
  pbVar4 = *(byte **)(iVar22 + 0x2db4);
  piVar12 = piVar26;
  puVar7 = puStack_b4;
  do {
    iVar23 = *piVar12;
    uVar20 = uVar20 + 1;
    *piVar12 = 0;
    *puVar13 = iVar23;
    *puVar7 = 0;
    puVar13 = puVar13 + 1;
    piVar12[0x100] = 0;
    puVar7 = puVar7 + 1;
    piVar12[0x200] = 0;
    piVar12 = piVar12 + 1;
  } while (uVar20 < 0x100);
  if (pbVar11 < pbVar4) {
    puStack_bc = puVar27;
    uVar20 = 0x100;
    do {
      bVar1 = *pbVar11;
      uVar21 = (uint)bVar1;
      pbVar16 = pbVar11 + 1;
      if (uVar21 == uVar20) {
        uVar24 = 0;
        uVar15 = *(uint *)(iVar22 + 0x2dd4);
        pbVar8 = pbVar11 + 0x7531;
        if (pbVar4 < pbVar11 + 0x7531) {
          pbVar8 = pbVar4;
        }
        if (pbVar16 < pbVar8) {
          bVar2 = *pbVar16;
          while( true ) {
            uVar21 = (uint)bVar2;
            uVar24 = uVar24 + 1;
            pbVar16 = pbVar16 + 1;
            if ((uVar21 != uVar20) || (pbVar8 <= pbVar16)) break;
            bVar2 = *pbVar16;
          }
        }
        uVar17 = 32000;
        uVar18 = uVar17;
        if (uVar15 != 0) {
          iVar23 = *(int *)(iVar22 + 0x2dcc);
          if ((auStack_8c0[iVar23] != 0) && (uVar18 = 0x14, uVar24 < 0xfc)) {
            uVar18 = (ulong)(int)(puVar27[iVar23] + *(int *)(iVar22 + uVar24 * 4 + 0xd44) * 2 + 3);
          }
          if (1 < uVar15) {
            uVar17 = 0;
            iVar9 = uVar15 - 1;
            uVar14 = uVar24;
            if (iVar9 != 0) {
              puVar10 = auStack_8c0 + iVar23 + iVar9;
              puVar13 = puVar27 + iVar23 + iVar9;
              do {
                if (*puVar10 != 0) {
                  if (iVar9 == 0) {
                    trap(7);
                  }
                  lVar5 = (uVar17 | in_hi1) + (long)(int)(((int)uVar14 / iVar9) * *puVar13);
                  uVar17 = (ulong)(int)lVar5;
                  in_hi1 = (ulong)(int)((ulong)lVar5 >> 0x20);
                  uVar14 = uVar14 - ((int)uVar14 / iVar9) * iVar9;
                }
                puVar13 = puVar13 + -1;
                iVar9 = iVar9 + -1;
                puVar10 = puVar10 + -1;
              } while (iVar9 != 0);
            }
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar17 = 32000;
            }
          }
        }
        if ((uVar18 < (ulong)(long)(int)(uVar24 * puVar27[bVar1])) ||
           (uVar17 < (ulong)(long)(int)(uVar24 * puVar27[bVar1]))) {
          if (uVar18 < uVar17) {
            piVar26[*(int *)(iVar22 + 0x2dcc)] = piVar26[*(int *)(iVar22 + 0x2dcc)] + 1;
          }
          else {
            iVar23 = uVar15 - 1;
            uVar19 = 0;
            if (iVar23 != 0) {
              iVar9 = *(int *)(iVar22 + 0x2dcc);
              uVar15 = uVar24;
              while( true ) {
                if (auStack_8c0[iVar9 + iVar23] != 0) {
                  if (iVar23 == 0) {
                    trap(7);
                  }
                  piVar26[iVar9 + iVar23] = piVar26[iVar9 + iVar23] + (int)uVar15 / iVar23;
                  uVar15 = uVar15 - ((int)uVar15 / iVar23) * iVar23;
                }
                iVar23 = iVar23 + -1;
                uVar19 = 0;
                if (iVar23 == 0) break;
                iVar9 = *(int *)(iVar22 + 0x2dcc);
              }
            }
          }
        }
        else {
          piVar26[bVar1] = piVar26[bVar1] + uVar24;
        }
      }
      pbVar11 = pbVar16;
      uVar15 = uVar21 - uVar20;
      if (*(int *)(iVar22 + 0x2dd8) == 0) {
LAB_002155f0:
        uVar15 = uVar21;
      }
      else {
        uVar19 = 0;
        if (((int)uVar15 <= *(int *)(iVar22 + 0x2de0)) && (*(int *)(iVar22 + 0x2ddc) <= (int)uVar15)
           ) {
          uVar15 = (uVar15 - 1) * 2 + *(int *)(iVar22 + 0x2dd0);
          if (uVar21 < uVar20) {
            uVar15 = ((uVar20 - uVar21) + -1) * 2 + *(int *)(iVar22 + 0x2dd0) + 1;
          }
          if ((uStack_c0 < auStack_8c0[uVar15]) &&
             (uVar19 = (uint)(auStack_8c0[uVar21] < 4) + (uint)(puVar27[uVar15] < puVar27[uVar21]),
             puVar27[uVar15] == puVar27[uVar21])) {
            uVar19 = uVar19 + ((uint)piVar26[uVar21] < (uint)piVar26[uVar15]);
          }
        }
        if (uVar19 == 0) goto LAB_002155f0;
      }
      piVar26[uVar15] = piVar26[uVar15] + 1;
      uVar20 = uVar21;
    } while (pbVar11 < pbVar4);
  }
  if (uStack_ac != 0) {
    piVar26[*(int *)(iVar22 + 0x2dcc)] = piVar26[*(int *)(iVar22 + 0x2dcc)] + 1;
  }
  FUN_00214688(param_1);
  *(undefined4 *)(iVar22 + 0x2dc8) = 0;
  while (uStack_b8 != 0) {
    uVar15 = 0;
    puVar13 = puVar27;
    uVar20 = 0;
    piVar12 = piVar26;
    uVar21 = uVar19;
    do {
      uVar14 = uVar20;
      uVar19 = uVar21;
      uVar6 = uVar24;
      if ((*piVar12 != 0) && (uVar14 = *puVar13, uVar19 = uVar24, uVar6 = uVar15, *puVar13 < uVar20)
         ) {
        uVar14 = uVar20;
        uVar19 = uVar21;
        uVar6 = uVar24;
      }
      uVar24 = uVar6;
      uVar15 = uVar15 + 1;
      puVar13 = puVar13 + 1;
      piVar12 = piVar12 + 1;
      uVar20 = uVar14;
      uVar21 = uVar19;
    } while (uVar15 < 0x100);
    if (uVar14 <= param_3) break;
    if ((*(int *)(iVar22 + 0x100) == 0) || (param_3 <= *(uint *)(iVar22 + 0x2564))) {
      uVar20 = 1;
      while (uVar20 < 0x100) {
        if (piVar26[uVar20] == 0) {
          uVar20 = uVar20 + 1;
        }
        else {
          if (puVar27[uVar20] < param_3) break;
          uVar20 = uVar20 + 1;
        }
      }
    }
    else {
      uVar20 = 0;
    }
    if (uVar20 < 0x100) {
      piVar12 = piVar26 + uVar20;
      puVar13 = puVar27 + uVar20;
      uVar21 = uVar20;
      do {
        if (((*piVar12 != 0) && (*puVar13 < param_3)) && (puVar27[uVar20] < *puVar13)) {
          uVar20 = uVar21;
        }
        uVar21 = uVar21 + 1;
        puVar13 = puVar13 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar21 < 0x100);
    }
    uVar21 = puVar27[uVar20] + 1;
    puVar27[uVar20] = uVar21;
    puVar27[uVar24] = uVar21;
    puVar27[uVar19] = puVar27[uVar19] - 1;
    *(uint *)(iVar22 + 0x2dc8) = param_3;
  }
  uVar19 = 0;
  puVar13 = puVar27;
  if ((uVar25 & 8) != 0) {
    do {
      *puVar13 = 8;
      uVar19 = uVar19 + 1;
      puVar13 = puVar13 + 1;
    } while (uVar19 < 0x100);
  }
  uVar19 = 0;
  puVar7 = puStack_b0;
  do {
    *puVar7 = 0;
    uVar19 = uVar19 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar19 < 0x11);
  uVar19 = 0;
  puVar13 = puVar27;
  do {
    if (*puVar13 < 0x11) {
      puStack_b0[*puVar13] = puStack_b0[*puVar13] + 1;
    }
    uVar19 = uVar19 + 1;
    puVar13 = puVar13 + 1;
  } while (uVar19 < 0x100);
  uVar25 = 0;
  iVar9 = 0x2dec;
  iVar23 = 4;
  uVar19 = 1;
  do {
    uVar20 = uVar19 + 1;
    if (*(int *)((int)puStack_b0 + iVar23) != 0) {
      uVar24 = 0;
      puVar10 = (uint *)(iVar9 + iVar22);
      puVar13 = puVar27;
      do {
        if (*puVar13 == uVar19) {
          *puVar10 = uVar24;
          iVar9 = iVar9 + 4;
          puVar10 = puVar10 + 1;
        }
        uVar24 = uVar24 + 1;
        puVar13 = puVar13 + 1;
        uVar25 = uVar19;
      } while (uVar24 < 0x100);
    }
    iVar23 = uVar20 * 4;
    uVar19 = uVar20;
  } while (uVar20 < 0x11);
  iVar23 = 0;
  *(uint *)(iVar22 + 0x2dc0) = uVar25;
  uVar25 = 0;
  uVar19 = 0;
  if (*(int *)(iVar22 + 0x2dc4) != 0) {
    do {
      iVar9 = *(int *)(iVar22 + 0x2dec + uVar19 * 4);
      uVar19 = uVar19 + 1;
      if (uVar25 < puVar27[iVar9]) {
        do {
          uVar25 = uVar25 + 1;
          iVar23 = iVar23 << 1;
        } while (uVar25 < puVar27[iVar9]);
      }
      *(int *)(iVar22 + 0x2964 + iVar9 * 4) = iVar23;
      iVar23 = iVar23 + 1;
    } while (uVar19 < *(uint *)(iVar22 + 0x2dc4));
  }
  return;
code_r0x002152d8:
  pbVar11 = *(byte **)(iVar22 + 0x2db0);
  goto LAB_002152dc;
}

