/* Ghidra pseudocode. PS2 address: 0025ebf8. Not validated source. */

char * FUN_0025ebf8(undefined8 param_1,ulong param_2,uint param_3,uint param_4,int *param_5,
                   undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  char cVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  char *pcVar22;
  char *pcVar23;
  int iStack_100;
  int iStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  int *piStack_f0;
  undefined4 *puStack_ec;
  int iStack_e8;
  int iStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  
  iVar6 = (int)param_1;
  iVar15 = *(int *)(iVar6 + 0x40);
  uStack_f8 = param_3;
  uStack_f4 = param_4;
  piStack_f0 = param_5;
  puStack_ec = param_7;
  if (iVar15 != 0) {
    *(undefined4 *)(iVar15 + 4) = *(undefined4 *)(iVar6 + 0x44);
    *(int *)(iVar15 + 8) = 1 << (*(uint *)(iVar6 + 0x44) & 0x1f);
    FUN_00261050(param_1,iVar15);
    *(undefined4 *)(iVar6 + 0x40) = 0;
  }
  uVar13 = (ulong)(int)(param_2 >> 0x20);
  if ((long)uVar13 < 0) {
    *param_6 = 1;
    param_2 = param_2 & 0xffffffff | (uVar13 & 0x7fffffff) << 0x20;
  }
  else {
    *param_6 = 0;
  }
  uVar14 = (uint)(param_2 >> 0x20);
  if ((uVar14 & 0x7ff00000) == 0x7ff00000) {
    *piStack_f0 = 9999;
    if ((param_2 & 0xfffffffffffff) == 0) {
      pcVar22 = "Infinity";
    }
    else {
      pcVar22 = "NaN";
    }
    if (puStack_ec == (undefined4 *)0x0) {
      return pcVar22;
    }
    pcVar4 = pcVar22 + 3;
    if (pcVar22[3] != '\0') {
      pcVar4 = pcVar22 + 8;
    }
    *puStack_ec = pcVar4;
    return pcVar22;
  }
  lVar7 = FUN_00257aa8(param_2,0);
  if (lVar7 == 0) {
    *piStack_f0 = 1;
    if (puStack_ec == (undefined4 *)0x0) {
      return "0";
    }
    *puStack_ec = &DAT_002c0849;
    return "0";
  }
  uStack_b8 = FUN_00261d18(param_1,param_2,&iStack_100,(uint)&iStack_100 | 4);
  iVar15 = iStack_fc;
  uVar20 = uVar14 >> 0x14 & 0x7ff;
  if (uVar20 == 0) {
    iVar16 = iStack_fc + iStack_100;
    iVar21 = iVar16 + 0x432;
    if (iVar21 < 0x21) {
      uVar14 = (uint)param_2 << (-iVar21 & 0x1fU);
    }
    else {
      uVar14 = uVar14 << (-iVar21 & 0x1fU) | (uint)param_2 >> (iVar16 + 0x412U & 0x1f);
    }
    uVar13 = FUN_00257af8(uVar14);
    if ((int)uVar14 < 0) {
      uVar13 = FUN_002574c0(uVar13,0x41f0000000000000);
    }
    iStack_bc = 1;
    uVar20 = iVar16 - 1;
    uVar13 = uVar13 & 0xffffffff | (long)((int)(uVar13 >> 0x20) + -0x1f00000) << 0x20;
  }
  else {
    uVar20 = uVar20 - 0x3ff;
    iStack_bc = 0;
    uVar13 = param_2 & 0xffffffff |
             ((long)(param_2 & 0xffffffff | ((long)param_2 >> 0x20 & 0xfffffU) << 0x20) >> 0x20 |
             0x3ff00000U) << 0x20;
  }
  uVar8 = FUN_00257518(uVar13,0x3ff8000000000000);
  uVar8 = FUN_00257580(uVar8,DAT_002c0850);
  uVar8 = FUN_002574c0(uVar8,DAT_002c0858);
  uVar9 = FUN_00257af8(uVar20);
  uVar9 = FUN_00257580(uVar9,DAT_002c0860);
  uVar8 = FUN_002574c0(uVar8,uVar9);
  uVar14 = FUN_00257bb0(uVar8);
  lVar7 = FUN_00257aa8(uVar8,0);
  if (lVar7 < 0) {
    uVar9 = FUN_00257af8(uVar14);
    lVar7 = FUN_00257aa8(uVar8,uVar9);
    if (lVar7 != 0) {
      uVar14 = uVar14 - 1;
    }
  }
  iStack_d0 = 1;
  if (uVar14 < 0x17) {
    iStack_d0 = 0;
    lVar7 = FUN_00257aa8(param_2,*(undefined8 *)(&DAT_002c08e0 + uVar14 * 8));
    if (lVar7 < 0) {
      uVar14 = uVar14 - 1;
    }
  }
  iStack_c8 = (iVar15 - uVar20) + -1;
  if (iStack_c8 < 0) {
    iStack_e8 = -iStack_c8;
    iStack_c8 = 0;
  }
  else {
    iStack_e8 = 0;
  }
  if ((int)uVar14 < 0) {
    iStack_e4 = -uVar14;
    iStack_e8 = iStack_e8 - uVar14;
    uStack_c4 = 0;
  }
  else {
    iStack_e4 = 0;
    iStack_c8 = iStack_c8 + uVar14;
    uStack_c4 = uVar14;
  }
  if (9 < uStack_f8) {
    uStack_f8 = 0;
  }
  bVar2 = 5 < (int)uStack_f8;
  if (bVar2) {
    uStack_f8 = uStack_f8 - 4;
  }
  iStack_cc = 1;
  uVar19 = uStack_f4;
  switch(uStack_f8) {
  case 0:
  case 1:
    uStack_d8 = 0xffffffff;
    uStack_e0 = 0xffffffff;
    uStack_f4 = 0;
    uVar20 = 0x12;
    uVar19 = uStack_f4;
    break;
  case 2:
    iStack_cc = 0;
  case 4:
    uStack_e0 = 1;
    uVar20 = uStack_e0;
    uVar19 = uStack_e0;
    uStack_d8 = uStack_e0;
    if (0 < (int)uStack_f4) {
      uVar20 = uStack_f4;
      uVar19 = uStack_f4;
      uStack_e0 = uStack_f4;
      uStack_d8 = uStack_f4;
    }
    break;
  case 3:
    iStack_cc = 0;
  case 5:
    uStack_d8 = uStack_f4 + uVar14;
    uStack_e0 = uStack_d8 + 1;
    uVar20 = uStack_e0;
    if ((int)uStack_e0 < 1) {
      uVar20 = 1;
    }
  }
  uStack_f4 = uVar19;
  iVar15 = 4;
  *(undefined4 *)(iVar6 + 0x44) = 0;
  if (uVar20 < 0x18) {
    uVar1 = *(undefined4 *)(iVar6 + 0x44);
  }
  else {
    do {
      iVar15 = iVar15 * 2;
      *(int *)(iVar6 + 0x44) = *(int *)(iVar6 + 0x44) + 1;
    } while (iVar15 + 0x14U <= uVar20);
    uVar1 = *(undefined4 *)(iVar6 + 0x44);
  }
  bVar3 = 0xe < uStack_e0;
  pcVar4 = (char *)FUN_00260fa8(param_1,uVar1);
  *(char **)(iVar6 + 0x40) = pcVar4;
  uVar20 = uStack_e0;
  uVar19 = uVar14;
  pcVar22 = pcVar4;
  if ((bVar3) || (bVar2)) {
LAB_0025f4b8:
    uStack_e0 = uVar20;
    uVar14 = uStack_f8;
    if ((iStack_100 < 0) || (0xe < (int)uVar19)) {
      iStack_b4 = 0;
      iStack_b0 = 0;
      iVar15 = iStack_e8;
      iVar6 = iStack_e4;
      if (iStack_cc != 0) {
        if ((int)uStack_f8 < 2) {
          uVar20 = iStack_100 + 0x433;
          if (iStack_bc == 0) {
            uVar20 = 0x36 - iStack_fc;
          }
        }
        else {
          iVar16 = uStack_e0 - 1;
          if (iStack_e4 < iVar16) {
            iVar6 = 0;
            iVar16 = iVar16 - iStack_e4;
            iStack_e4 = iStack_e4 + iVar16;
            uStack_c4 = uStack_c4 + iVar16;
          }
          else {
            iVar6 = iStack_e4 - iVar16;
          }
          uVar20 = uStack_e0;
          if ((int)uStack_e0 < 0) {
            iVar15 = iStack_e8 - uStack_e0;
            uVar20 = 0;
          }
        }
        iStack_b0 = FUN_00261428(param_1,1);
        iStack_c8 = iStack_c8 + uVar20;
        iStack_e8 = iStack_e8 + uVar20;
      }
      if ((0 < iVar15) && (0 < iStack_c8)) {
        iVar16 = iStack_c8;
        if (iVar15 < iStack_c8) {
          iVar16 = iVar15;
        }
        iStack_c8 = iStack_c8 - iVar16;
        iVar15 = iVar15 - iVar16;
        iStack_e8 = iStack_e8 - iVar16;
      }
      if (0 < iStack_e4) {
        if (iStack_cc == 0) {
          uStack_b8 = FUN_00261690(param_1,uStack_b8,iStack_e4);
        }
        else {
          if (0 < iVar6) {
            uVar8 = FUN_00261690(param_1,iStack_b0,iVar6);
            iStack_b0 = (int)uVar8;
            uVar5 = FUN_00261460(param_1,uVar8,uStack_b8);
            uVar1 = uStack_b8;
            uStack_b8 = uVar5;
            FUN_00261050(param_1,uVar1);
          }
          if (iStack_e4 - iVar6 != 0) {
            uStack_b8 = FUN_00261690(param_1,uStack_b8,iStack_e4 - iVar6);
          }
        }
      }
      uVar8 = FUN_00261428(param_1,1);
      iStack_ac = (int)uVar8;
      if (0 < (int)uStack_c4) {
        iStack_ac = FUN_00261690(param_1,uVar8,uStack_c4);
      }
      if ((int)uVar14 < 2) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          if (((long)param_2 >> 0x20 & 0x7ff00000U) == 0) {
            iStack_c0 = 0;
          }
          else {
            iStack_e8 = iStack_e8 + 1;
            iStack_c0 = 1;
            iStack_c8 = iStack_c8 + 1;
          }
        }
        else {
          iStack_c0 = 0;
        }
      }
      if (uStack_c4 == 0) {
        uVar14 = iStack_c8 + 1;
      }
      else {
        iVar6 = FUN_002612e0(*(undefined4 *)
                              (iStack_ac + (*(int *)(iStack_ac + 0x10) + -1) * 4 + 0x14));
        uVar14 = iStack_c8 - iVar6;
      }
      iVar6 = 0;
      if ((uVar14 & 0x1f) != 0) {
        iVar6 = 0x20 - (uVar14 & 0x1f);
      }
      if (iVar6 < 5) {
        if (iVar6 < 4) {
          iVar6 = iVar6 + 0x1c;
          iVar15 = iVar15 + iVar6;
          iStack_c8 = iStack_c8 + iVar6;
          iStack_e8 = iStack_e8 + iVar6;
        }
      }
      else {
        iVar6 = iVar6 + -4;
        iVar15 = iVar15 + iVar6;
        iStack_c8 = iStack_c8 + iVar6;
        iStack_e8 = iStack_e8 + iVar6;
      }
      if (0 < iStack_e8) {
        uStack_b8 = FUN_00261790(param_1,uStack_b8,iStack_e8);
      }
      if (0 < iStack_c8) {
        iStack_ac = FUN_00261790(param_1,iStack_ac,iStack_c8);
      }
      if ((iStack_d0 != 0) && (lVar7 = FUN_00261908(uStack_b8,iStack_ac), lVar7 < 0)) {
        uStack_b8 = FUN_00261080(param_1,uStack_b8,10,0);
        uVar19 = uVar19 - 1;
        if (iStack_cc != 0) {
          iStack_b0 = FUN_00261080(param_1,iStack_b0,10,0);
        }
        uStack_e0 = uStack_d8;
      }
      if ((0 < (int)uStack_e0) || ((int)uStack_f8 < 3)) {
        iVar6 = 1;
        pcVar22 = pcVar4;
        if (iStack_cc != 0) {
          if (0 < iVar15) {
            iStack_b0 = FUN_00261790(param_1,iStack_b0,iVar15);
          }
          iStack_b4 = iStack_b0;
          if (iStack_c0 != 0) {
            iStack_b0 = FUN_00260fa8(param_1,*(undefined4 *)(iStack_b0 + 4));
            FUN_0025a55c(iStack_b0 + 0xc,iStack_b4 + 0xc,*(int *)(iStack_b4 + 0x10) * 4 + 8);
            iStack_b0 = FUN_00261790(param_1,iStack_b0,1);
          }
          uVar14 = 1;
          do {
            iVar15 = FUN_0025e9e0(uStack_b8,iStack_ac);
            uVar20 = iVar15 + 0x30;
            lVar7 = FUN_00261908(uStack_b8,iStack_b4);
            uVar8 = FUN_00261970(param_1,iStack_ac,iStack_b0);
            lVar18 = 1;
            if (*(int *)((int)uVar8 + 0xc) == 0) {
              lVar18 = FUN_00261908(uStack_b8,uVar8);
            }
            FUN_00261050(param_1,uVar8);
            cVar12 = (char)uVar20;
            if (((lVar18 == 0) && (uStack_f8 == 0)) && ((param_2 & 1) == 0)) {
              if (uVar20 != 0x39) {
                *pcVar22 = (0 < lVar7) + cVar12;
                goto LAB_0025fd24;
              }
LAB_0025fc00:
              *pcVar22 = '9';
              pcVar22 = pcVar22 + 1;
              goto LAB_0025fcd4;
            }
            if ((lVar7 < 0) || (((lVar7 == 0 && (uStack_f8 == 0)) && ((param_2 & 1) == 0)))) {
              if (0 < lVar18) {
                uVar8 = FUN_00261790(param_1,uStack_b8,1);
                uStack_b8 = (undefined4)uVar8;
                lVar7 = FUN_00261908(uVar8,iStack_ac);
                if (lVar7 < 1) {
                  if (lVar7 != 0) {
                    *pcVar22 = cVar12;
                    goto LAB_0025fd24;
                  }
                  if ((uVar20 & 1) == 0) {
                    *pcVar22 = cVar12;
                    goto LAB_0025fd24;
                  }
                }
                uVar20 = iVar15 + 0x31;
                if (uVar20 == 0x3a) goto LAB_0025fc00;
              }
              *pcVar22 = (char)uVar20;
              goto LAB_0025fd24;
            }
            if (0 < lVar18) {
              if (uVar20 == 0x39) goto LAB_0025fc00;
              *pcVar22 = cVar12 + '\x01';
              goto LAB_0025fd24;
            }
            *pcVar22 = cVar12;
            pcVar22 = pcVar22 + 1;
            if (uVar14 == uStack_e0) goto LAB_0025fc7c;
            uStack_b8 = FUN_00261080(param_1,uStack_b8,10,0);
            if (iStack_b4 == iStack_b0) {
              iStack_b4 = FUN_00261080(param_1,iStack_b0,10,0);
              iStack_b0 = iStack_b4;
            }
            else {
              iStack_b4 = FUN_00261080(param_1,iStack_b4,10,0);
              iStack_b0 = FUN_00261080(param_1,iStack_b0,10,0);
            }
            uVar14 = uVar14 + 1;
          } while( true );
        }
        while( true ) {
          iVar15 = FUN_0025e9e0(uStack_b8,iStack_ac);
          uVar20 = iVar15 + 0x30;
          *pcVar22 = (char)uVar20;
          pcVar22 = pcVar22 + 1;
          if ((int)uStack_e0 <= iVar6) break;
          uStack_b8 = FUN_00261080(param_1,uStack_b8,10,0);
          iVar6 = iVar6 + 1;
        }
LAB_0025fc7c:
        uVar8 = FUN_00261790(param_1,uStack_b8,1);
        uStack_b8 = (undefined4)uVar8;
        lVar7 = FUN_00261908(uVar8,iStack_ac);
        if ((lVar7 < 1) && ((lVar7 != 0 || ((uVar20 & 1) == 0)))) {
          do {
            pcVar22 = pcVar22 + -1;
          } while (*pcVar22 == '0');
LAB_0025fd24:
          iVar15 = uVar19 + 1;
          pcVar22 = pcVar22 + 1;
        }
        else {
LAB_0025fcd4:
          do {
            pcVar22 = pcVar22 + -1;
            if (*pcVar22 != '9') {
              *pcVar22 = *pcVar22 + '\x01';
              goto LAB_0025fd24;
            }
          } while (pcVar22 != pcVar4);
          iVar15 = uVar19 + 2;
          pcVar22 = pcVar4 + 1;
          *pcVar4 = '1';
        }
        goto LAB_0025fd28;
      }
      if (-1 < (int)uStack_e0) {
        uVar8 = FUN_00261080(param_1,iStack_ac,5,0);
        iStack_ac = (int)uVar8;
        lVar7 = FUN_00261908(uStack_b8,uVar8);
        uVar14 = uVar19;
        goto joined_r0x0025f9a8;
      }
    }
    else {
      uVar8 = *(undefined8 *)(&DAT_002c08e0 + uVar19 * 8);
      if ((-1 < (int)uStack_f4) || (0 < (int)uStack_e0)) {
        uVar14 = 1;
        iVar15 = uVar19 + 1;
        pcVar22 = pcVar4;
        do {
          uVar9 = FUN_00257828(param_2,uVar8);
          uVar13 = FUN_00257bb0(uVar9);
          uVar9 = FUN_00257af8(uVar13);
          uVar9 = FUN_00257580(uVar9,uVar8);
          uVar9 = FUN_00257518(param_2,uVar9);
          *pcVar22 = (char)uVar13 + '0';
          pcVar22 = pcVar22 + 1;
          if (uVar14 == uStack_e0) {
            uVar9 = FUN_002574c0(uVar9);
            lVar7 = FUN_00257aa8(uVar9,uVar8);
            pcVar23 = pcVar22;
            if (0 < lVar7) goto LAB_0025f604;
            lVar7 = FUN_00257aa8(uVar9,uVar8);
            if ((lVar7 == 0) && ((uVar13 & 1) != 0)) goto LAB_0025f604;
            break;
          }
          param_2 = FUN_00257580(0x4024000000000000);
          lVar7 = FUN_00257aa8(param_2,0);
          uVar14 = uVar14 + 1;
        } while (lVar7 != 0);
        goto LAB_0025fd70;
      }
      iStack_b0 = 0;
      iStack_ac = 0;
      if (-1 < (int)uStack_e0) {
        uVar8 = FUN_00257580(uVar8,0x4014000000000000);
        lVar7 = FUN_00257aa8(param_2,uVar8);
        uVar14 = uVar19;
joined_r0x0025f9a8:
        if (0 < lVar7) goto LAB_0025f9c4;
      }
    }
LAB_0025f9b0:
    iVar15 = ~uStack_f4 + 1;
    pcVar22 = pcVar4;
  }
  else {
    iVar15 = 2;
    uStack_dc = uStack_e0;
    uStack_d4 = uVar14;
    if ((int)uVar14 < 1) {
      uVar20 = -uVar14;
      uVar13 = param_2;
      if (uVar20 != 0) {
        uVar19 = (int)uVar20 >> 4;
        uVar13 = FUN_00257580(*(undefined8 *)(&DAT_002c08e0 + (uVar20 & 0xf) * 8),param_2);
        if (uVar19 != 0) {
          puVar17 = &DAT_002c09a8;
          do {
            if ((uVar19 & 1) != 0) {
              iVar15 = iVar15 + 1;
              uVar13 = FUN_00257580(*puVar17,uVar13);
            }
            uVar19 = (int)uVar19 >> 1;
            puVar17 = puVar17 + 1;
          } while (uVar19 != 0);
        }
      }
    }
    else {
      uVar20 = (int)uVar14 >> 4;
      uVar8 = *(undefined8 *)(&DAT_002c08e0 + (uVar14 & 0xf) * 8);
      uVar13 = param_2;
      if ((uVar20 & 0x10) != 0) {
        uVar20 = uVar20 & 0xf;
        iVar15 = 3;
        uVar13 = FUN_00257828(param_2,DAT_002c09c8);
      }
      if (uVar20 != 0) {
        puVar17 = &DAT_002c09a8;
        do {
          if ((uVar20 & 1) != 0) {
            iVar15 = iVar15 + 1;
            uVar8 = FUN_00257580(uVar8,*puVar17);
          }
          uVar20 = (int)uVar20 >> 1;
          puVar17 = puVar17 + 1;
        } while (uVar20 != 0);
      }
      uVar13 = FUN_00257828(uVar13,uVar8);
    }
    if (((iStack_d0 != 0) && (lVar7 = FUN_00257aa8(uVar13,0x3ff0000000000000), lVar7 < 0)) &&
       (0 < (int)uStack_e0)) {
      uVar20 = uStack_dc;
      uVar19 = uStack_d4;
      if ((int)uStack_d8 < 1) goto LAB_0025f4b8;
      uVar14 = uVar14 - 1;
      uStack_e0 = uStack_d8;
      iVar15 = iVar15 + 1;
      uVar13 = FUN_00257580(0x4024000000000000,uVar13);
    }
    uVar8 = FUN_00257af8(iVar15);
    uVar8 = FUN_00257580(uVar8,uVar13);
    uVar10 = FUN_002574c0(uVar8,0x401c000000000000);
    uVar10 = uVar10 & 0xffffffff | (long)((int)(uVar10 >> 0x20) + -0x3400000) << 0x20;
    if (uStack_e0 != 0) {
      if (iStack_cc != 0) {
        iVar15 = 0;
        uVar8 = FUN_00257828(0x3fe0000000000000,*(undefined8 *)(&DAT_002c08e0 + (uStack_e0 - 1) * 8)
                            );
        uVar8 = FUN_00257518(uVar8,uVar10);
        while( true ) {
          uVar9 = FUN_00257bb0(uVar13);
          uVar11 = FUN_00257af8(uVar9);
          uVar11 = FUN_00257518(uVar13,uVar11);
          *pcVar22 = (char)uVar9 + '0';
          pcVar22 = pcVar22 + 1;
          lVar7 = FUN_00257aa8(uVar11,uVar8);
          if (lVar7 < 0) break;
          uVar9 = FUN_00257518(0x3ff0000000000000,uVar11);
          lVar7 = FUN_00257aa8(uVar9,uVar8);
          if (lVar7 < 0) goto LAB_0025f5f8;
          iVar15 = iVar15 + 1;
          uVar20 = uStack_dc;
          uVar19 = uStack_d4;
          if ((int)uStack_e0 <= iVar15) goto LAB_0025f4b8;
          uVar8 = FUN_00257580(0x4024000000000000,uVar8);
          uVar13 = FUN_00257580(0x4024000000000000,uVar11);
        }
        iVar15 = uVar14 + 1;
        goto LAB_0025fd70;
      }
      uVar20 = 1;
      uVar8 = FUN_00257580(*(undefined8 *)(&DAT_002c08e0 + (uStack_e0 - 1) * 8),uVar10);
      while( true ) {
        uVar9 = FUN_00257bb0(uVar13);
        uVar11 = FUN_00257af8(uVar9);
        uVar11 = FUN_00257518(uVar13,uVar11);
        *pcVar22 = (char)uVar9 + '0';
        pcVar22 = pcVar22 + 1;
        if (uVar20 == uStack_e0) break;
        uVar20 = uVar20 + 1;
        uVar13 = FUN_00257580(0x4024000000000000,uVar11);
      }
      uVar9 = FUN_002574c0(0x3fe0000000000000,uVar8);
      lVar7 = FUN_00257aa8(uVar11,uVar9);
      if (0 < lVar7) {
LAB_0025f5f8:
        iVar15 = uVar14 + 1;
        pcVar23 = pcVar22;
LAB_0025f604:
        do {
          pcVar22 = pcVar23;
          pcVar23 = pcVar22 + -1;
          cVar12 = *pcVar23;
          if (*pcVar23 != '9') goto LAB_0025f628;
        } while (pcVar23 != pcVar4);
        *pcVar4 = '0';
        cVar12 = '0';
        iVar15 = iVar15 + 1;
LAB_0025f628:
        *pcVar23 = cVar12 + '\x01';
        goto LAB_0025fd70;
      }
      uVar8 = FUN_00257518(0x3fe0000000000000,uVar8);
      lVar7 = FUN_00257aa8(uVar11,uVar8);
      uVar20 = uStack_dc;
      uVar19 = uStack_d4;
      if (lVar7 < 0) {
        iVar15 = uVar14 + 1;
        pcVar23 = pcVar22;
        do {
          pcVar22 = pcVar23;
          pcVar23 = pcVar22 + -1;
        } while (pcVar22[-1] == '0');
        goto LAB_0025fd70;
      }
      goto LAB_0025f4b8;
    }
    iStack_b0 = 0;
    iStack_ac = 0;
    uVar8 = FUN_00257518(uVar13,0x4014000000000000);
    lVar7 = FUN_00257aa8(uVar8,uVar10);
    if (lVar7 < 1) {
      uVar9 = FUN_00257518(0,uVar10);
      lVar7 = FUN_00257aa8(uVar8,uVar9);
      uVar20 = uStack_dc;
      uVar19 = uStack_d4;
      if (-1 < lVar7) goto LAB_0025f4b8;
      goto LAB_0025f9b0;
    }
LAB_0025f9c4:
    iVar15 = uVar14 + 2;
    *pcVar4 = '1';
    pcVar22 = pcVar4 + 1;
  }
LAB_0025fd28:
  FUN_00261050(param_1,iStack_ac);
  if (iStack_b0 != 0) {
    if ((iStack_b4 != 0) && (iStack_b4 != iStack_b0)) {
      FUN_00261050(param_1,iStack_b4);
    }
    FUN_00261050(param_1,iStack_b0);
  }
LAB_0025fd70:
  FUN_00261050(param_1,uStack_b8);
  *pcVar22 = '\0';
  *piStack_f0 = iVar15;
  if (puStack_ec != (undefined4 *)0x0) {
    *puStack_ec = pcVar22;
  }
  return pcVar4;
}

