/* Ghidra pseudocode. PS2 address: 0025a770. Not validated source. */

void FUN_0025a770(undefined8 *param_1,uint param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  code *pcVar18;
  byte bVar19;
  uint uStack_110;
  int iStack_d8;
  undefined8 *puStack_d4;
  
  uStack_110 = param_2;
  do {
    bVar19 = 2;
    if ((((uint)param_1 & 7) == 0) && ((param_3 & 7) == 0)) {
      bVar19 = param_3 != 8;
    }
    bVar4 = false;
    uVar17 = (uint)param_3;
    pcVar18 = (code *)param_4;
    if (uStack_110 < 7) {
      puVar6 = (undefined8 *)(uStack_110 * uVar17 + (int)param_1);
      if ((undefined8 *)((int)param_1 + uVar17) < puVar6) {
        puVar15 = (undefined8 *)((int)param_1 + uVar17);
        do {
          puVar16 = (undefined8 *)((int)puVar15 + uVar17);
          while ((puVar13 = (undefined8 *)((int)puVar15 - uVar17), param_1 < puVar15 &&
                 (lVar5 = (*pcVar18)(puVar13,puVar15), 0 < lVar5))) {
            if (bVar19 == 0) {
              uVar7 = *puVar15;
              *puVar15 = *puVar13;
              *puVar13 = uVar7;
              puVar15 = puVar13;
            }
            else {
              lVar5 = (long)(int)(uVar17 >> 3);
              puVar8 = puVar15;
              puVar12 = puVar13;
              if (bVar19 < 2) {
                do {
                  lVar5 = lVar5 + -1;
                  uVar7 = *puVar8;
                  *puVar8 = *puVar12;
                  *puVar12 = uVar7;
                  puVar15 = puVar13;
                  puVar8 = puVar8 + 1;
                  puVar12 = puVar12 + 1;
                } while (0 < lVar5);
              }
              else {
                uVar10 = param_3 & 0xffffffff;
                do {
                  uVar10 = uVar10 - 1;
                  uVar1 = *(undefined1 *)puVar8;
                  *(undefined1 *)puVar8 = *(undefined1 *)puVar12;
                  *(undefined1 *)puVar12 = uVar1;
                  puVar8 = (undefined8 *)((int)puVar8 + 1);
                  puVar12 = (undefined8 *)((int)puVar12 + 1);
                  puVar15 = puVar13;
                } while (0 < (long)uVar10);
              }
            }
          }
          puVar15 = puVar16;
        } while (puVar16 < puVar6);
      }
      return;
    }
    puVar6 = (undefined8 *)((uStack_110 >> 1) * uVar17 + (int)param_1);
    if (7 < uStack_110) {
      puVar13 = (undefined8 *)((uStack_110 - 1) * uVar17 + (int)param_1);
      puVar15 = param_1;
      puVar16 = puVar13;
      if (0x28 < uStack_110) {
        iVar9 = (uStack_110 >> 3) * uVar17;
        puVar15 = (undefined8 *)((int)param_1 + iVar9);
        puVar16 = (undefined8 *)(iVar9 * 2 + (int)param_1);
        lVar5 = (*pcVar18)(param_1,puVar15);
        if (lVar5 < 0) {
          lVar5 = (*pcVar18)(puVar15,puVar16);
          if ((-1 < lVar5) && (lVar5 = (*pcVar18)(param_1,puVar16), puVar15 = puVar16, -1 < lVar5))
          {
            puVar15 = param_1;
          }
        }
        else {
          lVar5 = (*pcVar18)(puVar15,puVar16);
          if ((lVar5 < 1) && (lVar5 = (*pcVar18)(param_1,puVar16), puVar15 = param_1, -1 < lVar5)) {
            puVar15 = puVar16;
          }
        }
        puVar8 = (undefined8 *)((int)puVar6 - iVar9);
        puVar16 = (undefined8 *)((int)puVar6 + iVar9);
        lVar5 = (*pcVar18)(puVar8,puVar6);
        if (lVar5 < 0) {
          lVar5 = (*pcVar18)(puVar6,puVar16);
          if ((-1 < lVar5) && (lVar5 = (*pcVar18)(puVar8,puVar16), puVar6 = puVar16, -1 < lVar5)) {
            puVar6 = puVar8;
          }
        }
        else {
          lVar5 = (*pcVar18)(puVar6,puVar16);
          if ((lVar5 < 1) && (lVar5 = (*pcVar18)(puVar8,puVar16), puVar6 = puVar8, -1 < lVar5)) {
            puVar6 = puVar16;
          }
        }
        puVar8 = (undefined8 *)((int)puVar13 + iVar9 * -2);
        puVar16 = (undefined8 *)((int)puVar13 - iVar9);
        lVar5 = (*pcVar18)(puVar8,puVar16);
        if (lVar5 < 0) {
          lVar5 = (*pcVar18)(puVar16,puVar13);
          if ((-1 < lVar5) && (lVar5 = (*pcVar18)(puVar8,puVar13), puVar16 = puVar13, -1 < lVar5)) {
            puVar16 = puVar8;
          }
        }
        else {
          lVar5 = (*pcVar18)(puVar16,puVar13);
          if ((lVar5 < 1) && (lVar5 = (*pcVar18)(puVar8,puVar13), puVar16 = puVar8, -1 < lVar5)) {
            puVar16 = puVar13;
          }
        }
      }
      lVar5 = (*pcVar18)(puVar15,puVar6);
      if (lVar5 < 0) {
        lVar5 = (*pcVar18)(puVar6,puVar16);
        if ((-1 < lVar5) && (lVar5 = (*pcVar18)(puVar15,puVar16), puVar6 = puVar16, -1 < lVar5)) {
          puVar6 = puVar15;
        }
      }
      else {
        lVar5 = (*pcVar18)(puVar6,puVar16);
        if ((lVar5 < 1) && (lVar5 = (*pcVar18)(puVar15,puVar16), puVar6 = puVar15, -1 < lVar5)) {
          puVar6 = puVar16;
        }
      }
    }
    iStack_d8 = uStack_110 - 1;
    if (bVar19 == 0) {
      uVar7 = *param_1;
      *param_1 = *puVar6;
      *puVar6 = uVar7;
    }
    else {
      lVar5 = (long)(int)(uVar17 >> 3);
      puVar15 = param_1;
      if (bVar19 < 2) {
        do {
          lVar5 = lVar5 + -1;
          uVar7 = *puVar15;
          *puVar15 = *puVar6;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 1;
          puVar15 = puVar15 + 1;
        } while (0 < lVar5);
      }
      else {
        uVar10 = param_3 & 0xffffffff;
        do {
          uVar10 = uVar10 - 1;
          uVar1 = *(undefined1 *)puVar15;
          *(undefined1 *)puVar15 = *(undefined1 *)puVar6;
          *(undefined1 *)puVar6 = uVar1;
          puVar15 = (undefined8 *)((int)puVar15 + 1);
          puVar6 = (undefined8 *)((int)puVar6 + 1);
        } while (0 < (long)uVar10);
      }
    }
    puStack_d4 = (undefined8 *)((int)param_1 + uVar17);
    puVar16 = (undefined8 *)(iStack_d8 * uVar17 + (int)param_1);
    puVar6 = puStack_d4;
    puVar15 = puStack_d4;
    puVar13 = puVar16;
LAB_0025ad90:
    while ((bVar2 = puVar16 < puVar6, !bVar2 && (lVar5 = (*pcVar18)(puVar6,param_1), lVar5 < 1))) {
      puVar8 = puVar15;
      if (lVar5 == 0) {
        bVar4 = true;
        if (bVar19 == 0) {
          uVar7 = *puVar15;
          *puVar15 = *puVar6;
          *puVar6 = uVar7;
        }
        else {
          if (bVar19 < 2) {
            puVar8 = (undefined8 *)((int)puVar15 + uVar17);
            lVar5 = (long)(int)(uVar17 >> 3);
            puVar12 = puVar6;
            do {
              lVar5 = lVar5 + -1;
              uVar7 = *puVar15;
              *puVar15 = *puVar12;
              *puVar12 = uVar7;
              puVar15 = puVar15 + 1;
              puVar12 = puVar12 + 1;
            } while (0 < lVar5);
            goto LAB_0025ad8c;
          }
          uVar10 = param_3 & 0xffffffff;
          puVar12 = puVar6;
          do {
            uVar10 = uVar10 - 1;
            uVar1 = *(undefined1 *)puVar8;
            *(undefined1 *)puVar8 = *(undefined1 *)puVar12;
            *(undefined1 *)puVar12 = uVar1;
            puVar8 = (undefined8 *)((int)puVar8 + 1);
            puVar12 = (undefined8 *)((int)puVar12 + 1);
          } while (0 < (long)uVar10);
        }
        puVar8 = (undefined8 *)((int)puVar15 + uVar17);
      }
LAB_0025ad8c:
      puVar15 = puVar8;
      puVar6 = (undefined8 *)((int)puVar6 + uVar17);
    }
    while (!bVar2) {
      lVar5 = (*pcVar18)(puVar16,param_1);
      if (lVar5 < 0) goto code_r0x0025aea4;
      puVar12 = (undefined8 *)((int)puVar16 - uVar17);
      puVar8 = puVar13;
      if (lVar5 == 0) {
        bVar4 = true;
        if (bVar19 == 0) {
          uVar7 = *puVar16;
          *puVar16 = *puVar13;
          *puVar13 = uVar7;
        }
        else {
          if (bVar19 < 2) {
            uVar10 = (ulong)(uVar17 >> 3);
            puVar12 = (undefined8 *)((int)puVar16 - uVar17);
            puVar8 = (undefined8 *)((int)puVar13 - uVar17);
            do {
              uVar10 = uVar10 - 1;
              uVar7 = *puVar16;
              *puVar16 = *puVar13;
              *puVar13 = uVar7;
              puVar16 = puVar16 + 1;
              puVar13 = puVar13 + 1;
            } while (0 < (long)uVar10);
            goto LAB_0025ae6c;
          }
          uVar10 = param_3 & 0xffffffff;
          puVar8 = puVar16;
          puVar12 = puVar13;
          do {
            uVar10 = uVar10 - 1;
            uVar1 = *(undefined1 *)puVar8;
            *(undefined1 *)puVar8 = *(undefined1 *)puVar12;
            *(undefined1 *)puVar12 = uVar1;
            puVar8 = (undefined8 *)((int)puVar8 + 1);
            puVar12 = (undefined8 *)((int)puVar12 + 1);
          } while (0 < (long)uVar10);
        }
        puVar12 = (undefined8 *)((int)puVar16 - uVar17);
        puVar8 = (undefined8 *)((int)puVar13 - uVar17);
      }
LAB_0025ae6c:
      puVar13 = puVar8;
      puVar16 = puVar12;
      bVar2 = puVar12 < puVar6;
    }
    iVar9 = (int)puVar6 - (int)puVar15;
    uVar10 = (ulong)iVar9;
    if (!bVar4) {
      puVar6 = (undefined8 *)(uStack_110 * uVar17 + (int)param_1);
      if (puVar6 <= puStack_d4) {
        return;
      }
      do {
        puVar15 = (undefined8 *)((int)puStack_d4 + uVar17);
        while ((puVar16 = (undefined8 *)((int)puStack_d4 - uVar17), param_1 < puStack_d4 &&
               (lVar5 = (*pcVar18)(puVar16,puStack_d4), 0 < lVar5))) {
          if (bVar19 == 0) {
            uVar7 = *puStack_d4;
            *puStack_d4 = *puVar16;
            *puVar16 = uVar7;
            puStack_d4 = puVar16;
          }
          else {
            lVar5 = (long)(int)(uVar17 >> 3);
            puVar13 = puStack_d4;
            puVar8 = puVar16;
            if (bVar19 < 2) {
              do {
                lVar5 = lVar5 + -1;
                uVar7 = *puVar13;
                *puVar13 = *puVar8;
                *puVar8 = uVar7;
                puStack_d4 = puVar16;
                puVar13 = puVar13 + 1;
                puVar8 = puVar8 + 1;
              } while (0 < lVar5);
            }
            else {
              uVar10 = param_3 & 0xffffffff;
              do {
                uVar10 = uVar10 - 1;
                uVar1 = *(undefined1 *)puVar13;
                *(undefined1 *)puVar13 = *(undefined1 *)puVar8;
                *(undefined1 *)puVar8 = uVar1;
                puVar13 = (undefined8 *)((int)puVar13 + 1);
                puVar8 = (undefined8 *)((int)puVar8 + 1);
                puStack_d4 = puVar16;
              } while (0 < (long)uVar10);
            }
          }
        }
        puStack_d4 = puVar15;
      } while (puVar15 < puVar6);
      return;
    }
    uVar11 = uVar10;
    if ((long)((int)puVar15 - (int)param_1) < (long)uVar10) {
      uVar11 = (long)((int)puVar15 - (int)param_1);
    }
    iVar3 = uStack_110 * uVar17;
    if ((long)uVar11 < 1) {
      uVar14 = (ulong)((int)puVar13 - (int)puVar16);
      uVar11 = (ulong)(int)((int)param_1 + ((iVar3 - (int)puVar13) - uVar17));
    }
    else {
      puVar15 = (undefined8 *)((int)puVar6 - (uint)uVar11);
      if (bVar19 < 2) {
        lVar5 = (long)(int)((uint)uVar11 >> 3);
        uVar14 = (ulong)((int)puVar13 - (int)puVar16);
        puVar16 = param_1;
        do {
          lVar5 = lVar5 + -1;
          uVar7 = *puVar16;
          *puVar16 = *puVar15;
          *puVar15 = uVar7;
          puVar16 = puVar16 + 1;
          puVar15 = puVar15 + 1;
        } while (0 < lVar5);
        uVar11 = (ulong)(int)((int)param_1 + ((iVar3 - (int)puVar13) - uVar17));
      }
      else {
        uVar11 = uVar11 & 0xffffffff;
        uVar14 = (ulong)((int)puVar13 - (int)puVar16);
        puVar16 = param_1;
        do {
          uVar11 = uVar11 - 1;
          uVar1 = *(undefined1 *)puVar16;
          *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
          *(undefined1 *)puVar15 = uVar1;
          puVar16 = (undefined8 *)((int)puVar16 + 1);
          puVar15 = (undefined8 *)((int)puVar15 + 1);
        } while (0 < (long)uVar11);
        uVar11 = (ulong)(int)((int)param_1 + ((iVar3 - (int)puVar13) - uVar17));
      }
    }
    if ((long)uVar14 < (long)uVar11) {
      uVar11 = uVar14;
    }
    if (0 < (long)uVar11) {
      puVar15 = (undefined8 *)((int)param_1 + (iVar3 - (uint)uVar11));
      if (bVar19 < 2) {
        lVar5 = (long)(int)((uint)uVar11 >> 3);
        do {
          lVar5 = lVar5 + -1;
          uVar7 = *puVar6;
          *puVar6 = *puVar15;
          *puVar15 = uVar7;
          puVar6 = puVar6 + 1;
          puVar15 = puVar15 + 1;
        } while (0 < lVar5);
      }
      else {
        uVar11 = uVar11 & 0xffffffff;
        do {
          uVar11 = uVar11 - 1;
          uVar1 = *(undefined1 *)puVar6;
          *(undefined1 *)puVar6 = *(undefined1 *)puVar15;
          *(undefined1 *)puVar15 = uVar1;
          puVar6 = (undefined8 *)((int)puVar6 + 1);
          puVar15 = (undefined8 *)((int)puVar15 + 1);
        } while (0 < (long)uVar11);
      }
    }
    if (param_3 < uVar10) {
      if (param_3 == 0) {
        trap(7);
      }
      FUN_0025a770(param_1,iVar9 / (int)uVar17,param_3,param_4);
    }
    if (uVar14 <= param_3) {
      return;
    }
    uStack_110 = (int)uVar14 / (int)uVar17;
    if (param_3 == 0) {
      trap(7);
    }
    param_1 = (undefined8 *)((int)param_1 + (iVar3 - (int)uVar14));
  } while( true );
code_r0x0025aea4:
  if (bVar19 == 0) {
    uVar7 = *puVar6;
    *puVar6 = *puVar16;
    *puVar16 = uVar7;
  }
  else {
    lVar5 = (long)(int)(uVar17 >> 3);
    puVar8 = puVar6;
    puVar12 = puVar16;
    if (bVar19 < 2) {
      do {
        lVar5 = lVar5 + -1;
        uVar7 = *puVar8;
        *puVar8 = *puVar12;
        *puVar12 = uVar7;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      } while (0 < lVar5);
    }
    else {
      uVar10 = param_3 & 0xffffffff;
      do {
        uVar10 = uVar10 - 1;
        uVar1 = *(undefined1 *)puVar8;
        *(undefined1 *)puVar8 = *(undefined1 *)puVar12;
        *(undefined1 *)puVar12 = uVar1;
        puVar8 = (undefined8 *)((int)puVar8 + 1);
        puVar12 = (undefined8 *)((int)puVar12 + 1);
      } while (0 < (long)uVar10);
    }
  }
  puVar16 = (undefined8 *)((int)puVar16 - uVar17);
  puVar6 = (undefined8 *)((int)puVar6 + uVar17);
  bVar4 = true;
  goto LAB_0025ad90;
}

