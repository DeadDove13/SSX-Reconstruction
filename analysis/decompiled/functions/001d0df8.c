/* Ghidra pseudocode. PS2 address: 001d0df8. Not validated source. */

void FUN_001d0df8(undefined8 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  
  puVar27 = (undefined4 *)param_1;
  if (puVar27[0xf] != 0) {
    puVar27[0xb] = puVar27[0xe];
    puVar27[9] = puVar27[0xd];
    FUN_0023bac0(puVar27[10],puVar27[0xf],puVar27[0xd] * 0x58);
    if (puVar27[0xf] == 0) {
      puVar27[0xf] = 0;
    }
    else {
      FUN_00103710();
      puVar27[0xf] = 0;
    }
    puVar27[0xd] = 0;
    puVar27[0xe] = 0;
  }
  if (puVar27[9] == 0) {
    return;
  }
  if (DAT_002859e4 == 0) {
    *(undefined8 *)(puVar27 + 0x1a) = 0;
    puVar27[0x19] = 0xffffffff;
    puVar27[0x17] = 0xffffffff;
    puVar27[0x18] = 0xffffffff;
    *(undefined8 *)(puVar27 + 0x1c) = 0;
    *(undefined8 *)(puVar27 + 0x1e) = 0;
    iVar23 = puVar27[0x11];
  }
  else {
    iVar23 = puVar27[0x11];
  }
  if (iVar23 == 0) {
    iVar23 = puVar27[0x21];
  }
  else {
    puVar27[0x12] = 0;
    puVar27[0x13] = 0;
    puVar27[0x15] = 0;
    puVar27[0x11] = 0;
    puVar27[0x14] = 0;
    iVar23 = puVar27[0x21];
  }
  if (iVar23 != 0) {
    puVar27[0x21] = 0;
  }
  iVar23 = puVar27[9] << 4;
  piVar2 = (int *)FUN_0023a448(0x2c5338,iVar23,0x10);
  if (piVar2 != (int *)0x0) {
    FUN_0023bbd0(piVar2,0xffffffffdeadc0ed,iVar23);
  }
  iVar23 = puVar27[0xb];
  iVar14 = 0;
  iVar10 = iVar23 << 2;
  if (iVar23 < 0x40) {
    puVar27[0x20] = iVar23;
  }
  else {
    iVar10 = 0x100;
    puVar27[0x20] = 0x40;
  }
  param_3 = param_3 - iVar10;
  iVar10 = param_2 + iVar10;
  FUN_0018ac08(0x2b7538);
  iVar23 = 0;
  if (0 < (int)puVar27[9]) {
    iVar24 = 0;
    iVar28 = 0;
    do {
      iVar21 = puVar27[10];
      iVar11 = iVar28 + 1;
      iVar18 = 0;
      iVar3 = iVar24 + iVar21;
      *(undefined4 *)(iVar3 + 0x24) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x30) = 0xffffffff;
      iVar23 = iVar23 + *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0x54) = 0;
      piVar6 = piVar2;
      piVar15 = piVar2;
      while( true ) {
        if ((((int *)(iVar24 + iVar21))[3] < *piVar15) || (iVar18 == iVar14)) break;
        iVar3 = *(int *)(iVar24 + iVar21);
        uVar25 = 0;
        if (iVar3 == 1) {
          uVar25 = 0x21;
        }
        else if (iVar3 == 3) {
          uVar25 = 4;
        }
        else if (iVar3 == 2) {
          uVar25 = 2;
        }
        iVar3 = iVar28 * 0x58 + iVar21;
        if (*(int *)(iVar3 + 0x20) == 0x13) {
          uVar25 = uVar25 | 8;
        }
        if (*(int *)(iVar3 + 0x20) == 0x1b) {
          *(undefined4 *)(iVar3 + 0x20) = 0x13;
          uVar25 = uVar25 | 8;
        }
        if (*(int *)(iVar3 + 0x44) == 2) {
          uVar25 = uVar25 | 0x20;
        }
        if ((*(int *)(iVar3 + 0xc) == *piVar15) && (uVar25 == piVar15[1])) {
          piVar15[2] = piVar15[2] + 1;
          piVar15[3] = piVar15[3] + 1;
          goto LAB_001d11ac;
        }
        piVar15 = piVar15 + 4;
        iVar18 = iVar18 + 1;
        piVar6 = piVar6 + 4;
      }
      FUN_0023bcd0(piVar6 + 4,piVar15,(iVar14 - iVar18) * 0x10);
      iVar21 = puVar27[10];
      iVar3 = ((int *)(iVar24 + iVar21))[3];
      piVar6[1] = 0;
      *piVar6 = iVar3;
      iVar24 = *(int *)(iVar24 + iVar21);
      if (iVar24 == 1) {
        piVar6[1] = 0x21;
      }
      else if (iVar24 == 3) {
        piVar6[1] = 4;
      }
      else if (iVar24 == 2) {
        piVar15[1] = piVar15[1] | 2;
      }
      iVar28 = iVar28 * 0x58 + puVar27[10];
      iVar24 = *(int *)(iVar28 + 0x20);
      if (iVar24 == 0x13) {
        piVar15[1] = piVar15[1] | 8;
        iVar24 = *(int *)(iVar28 + 0x20);
      }
      if (iVar24 == 0x1b) {
        *(undefined4 *)(iVar28 + 0x20) = 0x13;
        piVar15[1] = piVar15[1] | 8;
        iVar24 = *(int *)(iVar28 + 0x44);
      }
      else {
        iVar24 = *(int *)(iVar28 + 0x44);
      }
      if (iVar24 == 2) {
        piVar15[1] = piVar15[1] | 0x20;
        piVar15[3] = 1;
      }
      else {
        piVar15[3] = 1;
      }
      iVar14 = iVar14 + 1;
      piVar15[2] = 1;
LAB_001d11ac:
      iVar24 = iVar11 * 0x58;
      iVar28 = iVar11;
    } while (iVar11 < (int)puVar27[9]);
  }
  FUN_0018ac08(0x2b7550);
  iVar24 = iVar14;
  piVar6 = piVar2;
  if (0 < iVar14) {
    do {
      uVar25 = piVar6[1];
      iVar24 = iVar24 + -1;
      FUN_0018ac08(0x2b7568,*piVar6,uVar25 & 1,(uVar25 & 2) != 0,(uVar25 & 4) != 0,(uVar25 & 8) != 0
                   ,(uVar25 & 0x10) != 0,(uVar25 & 0x20) != 0);
      piVar6 = piVar6 + 4;
    } while (iVar24 != 0);
  }
  uVar25 = param_5 >> 2;
  if (param_5 != 0) {
    uVar26 = uVar25;
    iVar24 = iVar14;
    piVar6 = piVar2;
    if (0 < iVar14) {
      do {
        if ((piVar6[1] & 0x3aU) == 10) {
          if (piVar6[2] * *piVar6 < (int)uVar26) {
            uVar26 = uVar26 - piVar6[2] * *piVar6;
            piVar6[1] = piVar6[1] | 0x10;
            FUN_0018ac08(0x2b75e8);
          }
        }
        iVar24 = iVar24 + -1;
        piVar6 = piVar6 + 4;
      } while (iVar24 != 0);
    }
    iVar24 = iVar14;
    piVar6 = piVar2;
    if (0 < iVar14) {
      do {
        if ((piVar6[1] & 0x38U) == 8) {
          if (piVar6[2] * *piVar6 < (int)uVar26) {
            uVar26 = uVar26 - piVar6[2] * *piVar6;
            piVar6[1] = piVar6[1] | 0x10;
          }
        }
        iVar24 = iVar24 + -1;
        piVar6 = piVar6 + 4;
      } while (iVar24 != 0);
    }
    iVar24 = 0;
    if ((0 < iVar14) && (uVar26 != 0)) {
      piVar15 = piVar2 + iVar14 * 4;
      uVar4 = piVar2[1];
      piVar6 = piVar2;
      while( true ) {
        if ((uVar4 & 0x38) == 8) {
          iVar21 = *piVar6;
          iVar28 = (int)uVar26 / iVar21;
          if (iVar21 == 0) {
            trap(7);
          }
          if (0 < iVar28) {
            uVar20 = *(undefined8 *)(piVar6 + 2);
            *(undefined8 *)piVar15 = *(undefined8 *)piVar6;
            uVar26 = uVar26 - iVar28 * iVar21;
            *(undefined8 *)(piVar15 + 2) = uVar20;
            iVar14 = iVar14 + 1;
            piVar15[2] = iVar28;
            piVar15[3] = iVar28;
            piVar15[1] = piVar15[1] | 0x10;
            piVar15 = piVar15 + 4;
            piVar6[2] = piVar6[2] - iVar28;
            piVar6[3] = piVar6[3] - iVar28;
          }
        }
        iVar24 = iVar24 + 1;
        if ((iVar14 <= iVar24) || (uVar26 == 0)) break;
        uVar4 = piVar6[5];
        piVar6 = piVar6 + 4;
      }
    }
    iVar23 = iVar23 - (uVar25 - uVar26);
  }
  if (param_3 < iVar23) {
    do {
      iVar24 = -1;
      fVar29 = 0.0;
      iVar28 = iVar14 - (uint)((piVar2 + iVar14 * 4)[-1] == 1);
      if (0 < iVar28) {
        iVar3 = 0;
        iVar21 = 0;
        do {
          iVar18 = iVar21 + 1;
          fVar30 = fVar29;
          iVar11 = iVar24;
          if (*(int *)((int)piVar2 + iVar3 + 0xc) < 2) {
LAB_001d14d8:
            fVar29 = fVar30;
            iVar24 = iVar11;
          }
          else if ((*(uint *)((int)piVar2 + iVar3 + 4) & 0x17) == 0) {
            iVar11 = 0;
            fVar30 = 0.0;
            iVar3 = 0;
            piVar6 = piVar2;
            if (0 < iVar14) {
              do {
                iVar5 = piVar6[3] - (uint)(iVar21 == iVar3);
                iVar11 = iVar11 + (piVar6[2] - iVar5);
                if (iVar5 != 0) {
                  fVar30 = fVar30 + (float)iVar11 / (float)iVar5;
                }
                iVar3 = iVar3 + 1;
                piVar6 = piVar6 + 4;
              } while (iVar3 < iVar14);
            }
            iVar11 = iVar21;
            if ((iVar24 < 0) || (fVar30 < fVar29)) goto LAB_001d14d8;
          }
          iVar3 = iVar18 * 0x10;
          iVar21 = iVar18;
        } while (iVar18 < iVar28);
      }
      piVar6 = piVar2 + iVar24 * 4;
      iVar23 = iVar23 - *piVar6;
      piVar6[3] = piVar6[3] + -1;
    } while (param_3 < iVar23);
  }
  do {
    bVar1 = true;
    iVar24 = 0;
    if ((0 < iVar14) && (*piVar2 < param_3 - iVar23)) {
      iVar28 = piVar2[3];
      piVar6 = piVar2;
      while( true ) {
        if (iVar28 < piVar6[2]) {
          bVar1 = false;
          piVar6[3] = iVar28 + 1;
          iVar23 = iVar23 + *piVar6;
        }
        iVar24 = iVar24 + 1;
        if ((iVar14 <= iVar24) || (param_3 - iVar23 <= piVar6[4])) break;
        iVar28 = piVar6[7];
        piVar6 = piVar6 + 4;
      }
    }
  } while (!bVar1);
  iVar24 = 0;
  iVar23 = 0;
  piVar6 = piVar2;
  if (0 < iVar14) {
    do {
      if ((piVar6[1] & 0x17U) != 0) {
        if ((0 < iVar24) && (iVar23 < iVar24)) {
          uVar20 = *(undefined8 *)piVar6;
          uVar22 = *(undefined8 *)(piVar6 + 2);
          FUN_0023bcd0(piVar2 + 4,piVar2,iVar24 << 4);
          *(undefined8 *)piVar2 = uVar20;
          *(undefined8 *)(piVar2 + 2) = uVar22;
        }
        iVar23 = iVar23 + 1;
      }
      iVar24 = iVar24 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar24 < iVar14);
  }
  puVar27[0x16] = iVar23;
  FUN_0018ac08(0x2b7610);
  iVar23 = iVar14;
  piVar6 = piVar2;
  if (0 < iVar14) {
    do {
      uVar25 = piVar6[1];
      iVar23 = iVar23 + -1;
      FUN_0018ac08(0x2b7568,*piVar6,uVar25 & 1,(uVar25 & 2) != 0,(uVar25 & 4) != 0,(uVar25 & 8) != 0
                   ,(uVar25 & 0x10) != 0,(uVar25 & 0x20) != 0);
      piVar6 = piVar6 + 4;
    } while (iVar23 != 0);
    iVar23 = iVar14;
    if (0 < iVar14) {
      do {
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
  }
  puVar27[0x14] = 0;
  if (0 < iVar14) {
    piVar6 = piVar2 + 3;
    iVar23 = iVar14;
    do {
      iVar24 = *piVar6;
      iVar23 = iVar23 + -1;
      piVar6 = piVar6 + 4;
      puVar27[0x14] = puVar27[0x14] + iVar24;
    } while (iVar23 != 0);
  }
  puVar27[0x12] = &DAT_002cd7b0;
  iVar23 = 0;
  puVar27[0x13] = &DAT_002cd7b0;
  puVar27[0x11] = iVar14;
  puVar27[0x15] = &DAT_002cd7b0 + iVar14 * 0x18;
  if (0 < iVar14) {
    iVar14 = puVar27[0x13];
    iVar21 = 0;
    iVar24 = 0;
    iVar28 = 0;
    do {
      piVar6 = piVar2 + iVar28 * 4;
      puVar13 = (undefined4 *)(iVar24 + iVar14);
      puVar13[1] = *piVar6;
      iVar3 = piVar6[3];
      *puVar13 = 0;
      puVar13[2] = iVar3;
      if ((piVar6[1] & 0x10U) != 0) {
        *puVar13 = 2;
      }
      uVar25 = piVar6[1];
      if ((uVar25 & 1) == 0) {
        if ((uVar25 & 2) != 0) {
          uVar25 = *(uint *)(iVar24 + iVar14) | 8;
          goto LAB_001d17d8;
        }
        if ((uVar25 & 4) != 0) {
          uVar25 = *(uint *)(iVar24 + iVar14) | 0x10;
          goto LAB_001d17d8;
        }
      }
      else {
        uVar25 = *(uint *)(iVar24 + iVar14) | 4;
LAB_001d17d8:
        *(uint *)(iVar24 + iVar14) = uVar25;
      }
      iVar3 = 0;
      iVar11 = iVar28 + 1;
      iVar24 = iVar28 * 0x18 + iVar14;
      puVar13 = (undefined4 *)(puVar27[0x15] + iVar21);
      *(undefined4 **)(iVar24 + 0x14) = puVar13;
      *(undefined4 **)(iVar24 + 0xc) = puVar13;
      *(undefined4 **)(iVar24 + 0x10) = puVar13;
      if (0 < *(int *)(iVar24 + 8)) {
        puVar17 = puVar13 + -5;
        iVar24 = iVar28 * 0x18 + iVar14;
        puVar16 = puVar13;
        puVar19 = puVar13;
        do {
          puVar19 = puVar19 + 5;
          puVar16[2] = iVar23;
          iVar21 = iVar21 + 0x14;
          *puVar16 = 0xffffffff;
          iVar23 = iVar23 + 1;
          puVar16[1] = 0xffffffff;
          if (iVar3 == 0) {
            puVar13[4] = 0;
          }
          else {
            puVar16[4] = puVar17;
          }
          if (iVar3 == *(int *)(iVar24 + 8) + -1) {
            puVar16[3] = 0;
          }
          else {
            puVar16[3] = puVar19;
          }
          iVar3 = iVar3 + 1;
          puVar17 = puVar17 + 5;
          puVar16 = puVar16 + 5;
        } while (iVar3 < *(int *)(iVar24 + 8));
      }
      iVar24 = iVar11 * 0x18;
      iVar28 = iVar11;
    } while (iVar11 < (int)puVar27[0x11]);
  }
  iVar23 = puVar27[0x11];
  if (0 < iVar23) {
    iVar14 = puVar27[0x13];
    iVar24 = 0;
    iVar28 = 0;
    do {
      puVar12 = (uint *)(iVar24 + iVar14);
      iVar21 = iVar28 + 1;
      if ((*puVar12 & 2) != 0) {
        piVar6 = (int *)puVar12[5];
        if (piVar6 != (int *)0x0) {
          do {
            *piVar6 = param_4;
            piVar6 = (int *)piVar6[3];
            param_4 = param_4 + *(int *)(iVar28 * 0x18 + iVar14 + 4) * 4;
          } while (piVar6 != (int *)0x0);
        }
      }
      iVar23 = puVar27[0x11];
      iVar24 = iVar21 * 0x18;
      iVar28 = iVar21;
    } while (iVar21 < iVar23);
  }
  if (0 < iVar23) {
    iVar14 = puVar27[0x13];
    iVar24 = 0;
    iVar28 = 0;
    do {
      puVar12 = (uint *)(iVar24 + iVar14);
      iVar21 = iVar28 + 1;
      if ((*puVar12 & 0x10) != 0) {
        piVar6 = (int *)puVar12[5];
        if (piVar6 != (int *)0x0) {
          do {
            *piVar6 = iVar10;
            piVar6 = (int *)piVar6[3];
            iVar10 = iVar10 + *(int *)(iVar28 * 0x18 + iVar14 + 4);
          } while (piVar6 != (int *)0x0);
        }
      }
      iVar23 = puVar27[0x11];
      iVar24 = iVar21 * 0x18;
      iVar28 = iVar21;
    } while (iVar21 < iVar23);
  }
  if (0 < iVar23) {
    iVar14 = puVar27[0x13];
    iVar24 = 0;
    iVar28 = 0;
    do {
      puVar12 = (uint *)(iVar24 + iVar14);
      iVar21 = iVar28 + 1;
      if ((*puVar12 & 4) != 0) {
        piVar6 = (int *)puVar12[5];
        if (piVar6 != (int *)0x0) {
          do {
            *piVar6 = iVar10;
            piVar6 = (int *)piVar6[3];
            iVar10 = iVar10 + *(int *)(iVar28 * 0x18 + iVar14 + 4);
          } while (piVar6 != (int *)0x0);
        }
      }
      iVar23 = puVar27[0x11];
      iVar24 = iVar21 * 0x18;
      iVar28 = iVar21;
    } while (iVar21 < iVar23);
  }
  if (0 < iVar23) {
    iVar23 = puVar27[0x13];
    iVar14 = 0;
    iVar24 = 0;
    do {
      puVar12 = (uint *)(iVar14 + iVar23);
      iVar28 = iVar24 + 1;
      if ((*puVar12 & 0x1e) == 0) {
        piVar6 = (int *)puVar12[5];
        if (piVar6 != (int *)0x0) {
          do {
            *piVar6 = iVar10;
            piVar6 = (int *)piVar6[3];
            iVar10 = iVar10 + *(int *)(iVar24 * 0x18 + iVar23 + 4);
          } while (piVar6 != (int *)0x0);
        }
      }
      iVar14 = iVar28 * 0x18;
      iVar24 = iVar28;
    } while (iVar28 < (int)puVar27[0x11]);
  }
  do {
    lVar8 = FUN_001c3a58(0x2913b0);
  } while (lVar8 == 0);
  iVar14 = puVar27[0x11];
  iVar23 = puVar27[0x10];
  iVar10 = puVar27[9];
  if (0 < iVar14) {
    iVar24 = 0;
    iVar28 = 0;
    do {
      iVar21 = iVar28 + 1;
      if ((*(uint *)(iVar24 + puVar27[0x13]) & 10) == 10) {
        puVar13 = (undefined4 *)((uint *)(iVar24 + puVar27[0x13]))[5];
        if (puVar13 != (undefined4 *)0x0) {
          do {
            iVar14 = 0;
            if (0 < iVar10) {
              iVar24 = 0;
              do {
                piVar6 = (int *)(iVar24 + puVar27[10]);
                if ((((piVar6[9] < 0) && (piVar6[3] == *(int *)(iVar28 * 0x18 + puVar27[0x13] + 4)))
                    && (piVar6[8] == 0x13)) && (*piVar6 == 2)) {
                  iVar10 = puVar13[2];
                  puVar13[1] = iVar14;
                  piVar6[8] = 0x1b;
                  iVar23 = iVar23 + -1;
                  piVar6[9] = iVar10;
                  FUN_001d2990(param_1,iVar14,*puVar13);
                  puVar13 = (undefined4 *)puVar13[3];
                  goto LAB_001d1b78;
                }
                iVar14 = iVar14 + 1;
                iVar24 = iVar24 + 0x58;
              } while (iVar14 < iVar10);
            }
            puVar13 = (undefined4 *)puVar13[3];
LAB_001d1b78:
            iVar10 = puVar27[9];
          } while (puVar13 != (undefined4 *)0x0);
          goto LAB_001d1b80;
        }
        iVar14 = puVar27[0x11];
      }
      else {
LAB_001d1b80:
        iVar14 = puVar27[0x11];
      }
      iVar24 = iVar21 * 0x18;
      iVar28 = iVar21;
    } while (iVar21 < iVar14);
  }
  if (0 < iVar14) {
    iVar24 = 0;
    iVar28 = 0;
    do {
      iVar21 = iVar28 + 1;
      if ((*(uint *)(iVar24 + puVar27[0x13]) & 10) == 2) {
        puVar13 = (undefined4 *)((uint *)(iVar24 + puVar27[0x13]))[5];
        if (puVar13 != (undefined4 *)0x0) {
          do {
            iVar14 = 0;
            if (0 < iVar10) {
              iVar24 = 0;
              do {
                piVar6 = (int *)(iVar24 + puVar27[10]);
                if (((piVar6[9] < 0) && (piVar6[3] == *(int *)(iVar28 * 0x18 + puVar27[0x13] + 4)))
                   && ((piVar6[8] == 0x13 && ((*piVar6 == 0 && (piVar6[0x11] != 2)))))) {
                  iVar10 = puVar13[2];
                  puVar13[1] = iVar14;
                  piVar6[8] = 0x1b;
                  piVar6[9] = iVar10;
                  FUN_001d2990(param_1,iVar14,*puVar13);
                  puVar13 = (undefined4 *)puVar13[3];
                  goto LAB_001d1c80;
                }
                iVar14 = iVar14 + 1;
                iVar24 = iVar24 + 0x58;
              } while (iVar14 < iVar10);
            }
            puVar13 = (undefined4 *)puVar13[3];
LAB_001d1c80:
            iVar10 = puVar27[9];
          } while (puVar13 != (undefined4 *)0x0);
          goto LAB_001d1c88;
        }
        iVar14 = puVar27[0x11];
      }
      else {
LAB_001d1c88:
        iVar14 = puVar27[0x11];
      }
      iVar24 = iVar21 * 0x18;
      iVar28 = iVar21;
    } while (iVar21 < iVar14);
  }
  if (0 < iVar10) {
    if (iVar23 == 0) {
      iVar23 = puVar27[0x20];
      goto LAB_001d1ea4;
    }
    iVar10 = 0;
    iVar24 = 0;
    do {
      iVar28 = puVar27[10];
      iVar21 = iVar24 + 1;
      if (*(int *)(iVar10 + iVar28) == 3) {
        iVar23 = iVar23 + -1;
        bVar1 = false;
        iVar10 = 0;
        if (0 < iVar14) {
          iVar3 = puVar27[0x13];
          iVar11 = 0;
          do {
            puVar12 = (uint *)(iVar11 + iVar3);
            iVar10 = iVar10 + 1;
            if ((*puVar12 & 0x10) == 0) {
LAB_001d1d84:
              iVar14 = puVar27[0x11];
            }
            else {
              iVar14 = iVar24 * 0x58 + iVar28;
              if (puVar12[1] == *(uint *)(iVar14 + 0xc)) {
                uVar25 = puVar12[5];
                if (uVar25 == 0) {
                  iVar14 = puVar27[0x11];
                }
                else {
                  if (*(int *)(uVar25 + 4) < 0) {
                    bVar1 = true;
                    *(int *)(uVar25 + 4) = iVar24;
                    *(undefined4 *)(iVar14 + 0x24) = *(undefined4 *)(uVar25 + 8);
                    goto LAB_001d1d84;
                  }
                  for (iVar14 = *(int *)(uVar25 + 0xc); iVar14 != 0; iVar14 = *(int *)(iVar14 + 0xc)
                      ) {
                    if (*(int *)(iVar14 + 4) < 0) {
                      bVar1 = true;
                      *(int *)(iVar14 + 4) = iVar24;
                      *(undefined4 *)(iVar24 * 0x58 + iVar28 + 0x24) = *(undefined4 *)(iVar14 + 8);
                      goto LAB_001d1d84;
                    }
                  }
                  iVar14 = puVar27[0x11];
                }
              }
              else {
                iVar14 = puVar27[0x11];
              }
            }
          } while ((iVar10 < iVar14) && (iVar11 = iVar10 * 0x18, !bVar1));
        }
      }
      if (*(int *)(iVar24 * 0x58 + iVar28) == 1) {
        iVar23 = iVar23 + -1;
        iVar10 = 0;
        bVar1 = false;
        if (0 < iVar14) {
          iVar28 = 0;
          do {
            puVar12 = (uint *)(iVar28 + puVar27[0x13]);
            iVar10 = iVar10 + 1;
            if (((*puVar12 & 4) == 0) ||
               (iVar14 = puVar27[10], puVar12[1] != *(uint *)(iVar24 * 0x58 + iVar14 + 0xc))) {
LAB_001d1e60:
              iVar14 = puVar27[0x11];
            }
            else {
              for (puVar13 = (undefined4 *)puVar12[5]; puVar13 != (undefined4 *)0x0;
                  puVar13 = (undefined4 *)puVar13[3]) {
                if ((int)puVar13[1] < 0) {
                  puVar13[1] = iVar24;
                  bVar1 = true;
                  *(undefined4 *)(iVar24 * 0x58 + iVar14 + 0x24) = puVar13[2];
                  FUN_001d2990(param_1,iVar24,*puVar13);
                  goto LAB_001d1e60;
                }
              }
              iVar14 = puVar27[0x11];
            }
          } while ((iVar10 < iVar14) && (iVar28 = iVar10 * 0x18, !bVar1));
        }
        iVar10 = puVar27[9];
      }
      else {
        iVar10 = puVar27[9];
      }
      if (iVar10 <= iVar21) {
        iVar23 = puVar27[0x20];
        goto LAB_001d1ea4;
      }
      iVar10 = iVar21 * 0x58;
      iVar24 = iVar21;
    } while (iVar23 != 0);
  }
  iVar23 = puVar27[0x20];
LAB_001d1ea4:
  piVar6 = &DAT_002cf7b0;
  iVar10 = 0;
  puVar27[0x21] = &DAT_002cf7b0;
  if (0 < iVar23) {
    do {
      *piVar6 = param_2;
      iVar10 = iVar10 + 1;
      piVar6[1] = 4;
      param_2 = param_2 + 4;
      piVar6[3] = -1;
      piVar6 = piVar6 + 4;
    } while (iVar10 < (int)puVar27[0x20]);
  }
  FUN_001cf988(param_1);
  iVar23 = 0;
  if (0 < (int)puVar27[9]) {
    iVar10 = puVar27[10];
    do {
      iVar14 = *(int *)(iVar10 + 0x44);
      if (iVar14 == 1) {
        *(undefined4 *)(iVar10 + 0x48) = puVar27[6];
        *(undefined4 *)(iVar10 + 0x4c) = puVar27[7];
        *(undefined4 *)(iVar10 + 0x50) = puVar27[8];
LAB_001d1f8c:
        iVar14 = puVar27[9];
      }
      else if (iVar14 < 2) {
        if (iVar14 == 0) {
          uVar7 = *puVar27;
LAB_001d1f54:
          *(undefined4 *)(iVar10 + 0x48) = uVar7;
          *(undefined4 *)(iVar10 + 0x4c) = puVar27[1];
          *(undefined4 *)(iVar10 + 0x50) = puVar27[2];
          goto LAB_001d1f8c;
        }
        iVar14 = puVar27[9];
      }
      else {
        if (iVar14 == 2) {
          uVar7 = *puVar27;
          goto LAB_001d1f54;
        }
        if (iVar14 == 3) {
          *(undefined4 *)(iVar10 + 0x48) = 1;
          *(undefined4 *)(iVar10 + 0x50) = 0;
          goto LAB_001d1f8c;
        }
        iVar14 = puVar27[9];
      }
      iVar23 = iVar23 + 1;
      iVar10 = iVar10 + 0x58;
    } while (iVar23 < iVar14);
  }
  if (DAT_002859e4 != 0) {
    if (-1 < (int)puVar27[0x17]) {
      iVar23 = puVar27[0x17] * 0x58 + puVar27[10];
      lVar9 = (long)(*(int *)(iVar23 + 0x10) >> 6);
      lVar8 = 1;
      if (0 < lVar9) {
        lVar8 = lVar9;
      }
      *(long *)(puVar27 + 0x1a) =
           (long)*(int *)(*(int *)(iVar23 + 0x24) * 0x14 + puVar27[0x15]) | lVar8 << 0xe;
    }
    if (-1 < (int)puVar27[0x18]) {
      iVar23 = puVar27[0x18] * 0x58 + puVar27[10];
      lVar9 = (long)(*(int *)(iVar23 + 0x10) >> 6);
      lVar8 = 1;
      if (0 < lVar9) {
        lVar8 = lVar9;
      }
      *(long *)(puVar27 + 0x1c) =
           (long)*(int *)(*(int *)(iVar23 + 0x24) * 0x14 + puVar27[0x15]) | lVar8 << 0xe;
    }
    if (-1 < (int)puVar27[0x19]) {
      iVar23 = puVar27[0x19] * 0x58 + puVar27[10];
      lVar9 = (long)(*(int *)(iVar23 + 0x10) >> 6);
      lVar8 = 1;
      if (0 < lVar9) {
        lVar8 = lVar9;
      }
      *(long *)(puVar27 + 0x1e) =
           (long)*(int *)(*(int *)(iVar23 + 0x24) * 0x14 + puVar27[0x15]) | lVar8 << 0xe;
    }
    iVar23 = 0;
    if (0 < (int)puVar27[9]) {
      iVar10 = puVar27[10];
      do {
        iVar14 = *(int *)(iVar10 + 0x44);
        if (iVar14 == 1) {
          iVar14 = *(int *)(iVar10 + 0x20);
          *(undefined4 *)(iVar10 + 0x3c) = 1;
          if (iVar14 == 0x13) {
LAB_001d2178:
            *(undefined4 *)(iVar10 + 0x40) = 1;
LAB_001d217c:
            iVar14 = puVar27[9];
          }
          else if (iVar14 < 0x14) {
            if (iVar14 == 0) {
              *(undefined4 *)(iVar10 + 0x40) = 2;
              goto LAB_001d217c;
            }
            iVar14 = puVar27[9];
          }
          else {
            if (iVar14 == 0x1b) {
              *(undefined4 *)(iVar10 + 0x40) = 0;
              goto LAB_001d217c;
            }
            iVar14 = puVar27[9];
          }
        }
        else if (iVar14 < 2) {
          if (iVar14 == 0) {
LAB_001d2124:
            *(undefined4 *)(iVar10 + 0x3c) = 1;
            if (*(int *)(iVar10 + 0x20) == 0x13) goto LAB_001d2178;
            if (*(int *)(iVar10 + 0x20) == 0x1b) {
              *(undefined4 *)(iVar10 + 0x40) = 0;
              goto LAB_001d217c;
            }
            iVar14 = puVar27[9];
          }
          else {
            iVar14 = puVar27[9];
          }
        }
        else {
          if (iVar14 == 2) goto LAB_001d2124;
          if (iVar14 == 3) {
            *(undefined4 *)(iVar10 + 0x3c) = 0;
            goto LAB_001d217c;
          }
          iVar14 = puVar27[9];
        }
        iVar23 = iVar23 + 1;
        iVar10 = iVar10 + 0x58;
      } while (iVar23 < iVar14);
    }
  }
  if (piVar2 != (int *)0x0) {
    FUN_00103710(piVar2);
  }
  return;
}

