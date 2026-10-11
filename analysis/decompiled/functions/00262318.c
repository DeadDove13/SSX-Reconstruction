/* Ghidra pseudocode. PS2 address: 00262318. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00262318(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  char *pcVar25;
  ulong in_hi;
  int iStack_110;
  int iStack_10c;
  undefined4 *puStack_108;
  int iStack_104;
  long lStack_100;
  char *pcStack_f8;
  uint uStack_f0;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int *piStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  lVar13 = 0;
  bVar16 = false;
  uVar19 = 0;
  iStack_104 = 0;
  pcVar24 = param_2;
LAB_00262360:
  cVar7 = *pcVar24;
  puStack_108 = param_3;
  switch(*pcVar24) {
  case '\0':
    goto switchD_00262384_caseD_0;
  default:
    goto switchD_00262384_caseD_1;
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case ' ':
    goto switchD_00262384_caseD_9;
  case '+':
    break;
  case '-':
    iStack_104 = 1;
  }
  pcVar24 = pcVar24 + 1;
  cVar7 = *pcVar24;
  pcVar25 = param_2;
  if (*pcVar24 == '\0') goto LAB_002631c8;
switchD_00262384_caseD_1:
  if (cVar7 == '0') {
    bVar16 = true;
    do {
      pcVar24 = pcVar24 + 1;
      cVar7 = *pcVar24;
    } while (*pcVar24 == '0');
    pcVar25 = pcVar24;
    if (*pcVar24 == '\0') goto LAB_002631c8;
  }
  lVar6 = (long)(int)cVar7;
  uVar20 = 0;
  uStack_f0 = 0;
  lVar15 = 0;
  iVar21 = 0;
  pcVar25 = pcVar24;
  if ((0x2f < lVar6) && (lVar6 < 0x3a)) {
    bVar9 = true;
    do {
      if (bVar9) {
        in_hi = CONCAT44((int)(in_hi >> 0x20),(int)(uStack_f0 * 10) >> 0x1f);
        uStack_f0 = (uStack_f0 * 10 + (int)lVar6) - 0x30;
      }
      else if (iVar21 < 0x10) {
        uVar20 = (lVar6 + uVar20 * 10) - 0x30;
      }
      pcVar25 = pcVar25 + 1;
      lVar6 = (long)*pcVar25;
      iVar21 = iVar21 + 1;
    } while ((0x2f < lVar6) && (bVar9 = iVar21 < 9, lVar6 < 0x3a));
  }
  iVar22 = iVar21;
  pcStack_f8 = pcVar24;
  if (lVar6 == 0x2e) {
    pcVar25 = pcVar25 + 1;
    lVar6 = (long)*pcVar25;
    iVar12 = (int)*pcVar25;
    lVar14 = lVar13;
    if (iVar21 != 0) goto joined_r0x002624f0;
    if (lVar6 == 0x30) {
      do {
        pcVar25 = pcVar25 + 1;
        lVar13 = (long)((int)lVar13 + 1);
        lVar6 = (long)*pcVar25;
      } while (lVar6 == 0x30);
      iVar12 = (int)*pcVar25;
    }
    if (iVar12 - 0x31U < 9) {
      uVar8 = (ulong)((int)lVar6 + -0x30);
      lVar14 = 0;
      lVar15 = lVar13;
      pcStack_f8 = pcVar25;
      do {
        iVar12 = (int)lVar14 + 1;
        lVar14 = (long)iVar12;
        if (uVar8 != 0) {
          lVar13 = 1;
          lVar15 = (long)((int)lVar15 + iVar12);
          if (1 < lVar14) {
            do {
              bVar9 = iVar22 < 9;
              iVar22 = iVar22 + 1;
              if (bVar9) {
                uStack_f0 = uStack_f0 * 10;
                in_hi = CONCAT44((int)(in_hi >> 0x20),(int)uStack_f0 >> 0x1f);
              }
              else if (iVar22 < 0x11) {
                uVar20 = uVar20 * 10;
              }
              lVar13 = (long)((int)lVar13 + 1);
            } while (lVar13 < lVar14);
          }
          bVar9 = iVar22 < 9;
          iVar22 = iVar22 + 1;
          if (bVar9) {
            lVar13 = (uVar8 | in_hi) + (long)(int)(uStack_f0 * 10);
            uStack_f0 = (uint)lVar13;
            in_hi = (ulong)(int)((ulong)lVar13 >> 0x20);
          }
          else if (iVar22 < 0x11) {
            uVar20 = uVar8 + uVar20 * 10;
          }
          lVar14 = 0;
        }
        pcVar25 = pcVar25 + 1;
        lVar6 = (long)*pcVar25;
        iVar12 = (int)*pcVar25;
joined_r0x002624f0:
        uVar8 = (ulong)(iVar12 + -0x30);
        lVar13 = lVar14;
      } while (uVar8 < 10);
    }
  }
  lStack_100 = 0;
  if ((lVar6 == 0x65) || (lVar6 == 0x45)) {
    if ((iVar22 == 0) && ((lVar13 == 0 && (!bVar16)))) {
switchD_00262384_caseD_0:
      pcVar25 = param_2;
      goto LAB_002631c8;
    }
    pcVar24 = pcVar25 + 1;
    cVar7 = *pcVar24;
    lVar6 = (long)cVar7;
    bVar9 = false;
    if (lVar6 == 0x2b) {
LAB_00262630:
      pcVar24 = pcVar25 + 2;
      cVar7 = *pcVar24;
      lVar6 = (long)cVar7;
    }
    else if (lVar6 == 0x2d) {
      bVar9 = true;
      goto LAB_00262630;
    }
    param_2 = pcVar25;
    if ((int)cVar7 - 0x30U < 10) {
      if (lVar6 == 0x30) {
        do {
          pcVar24 = pcVar24 + 1;
          lVar6 = (long)*pcVar24;
        } while (lVar6 == 0x30);
        iVar12 = (int)*pcVar24;
      }
      else {
        iVar12 = (int)lVar6;
      }
      lStack_100 = (long)((int)lVar6 + -0x30);
      if (iVar12 - 0x31U < 9) {
        pcVar25 = pcVar24 + 1;
        lVar6 = (long)*pcVar25;
        iVar12 = (int)pcVar25 - (int)pcVar24;
        if (0x2f < lVar6) {
          do {
            if (0x39 < lVar6) break;
            pcVar25 = pcVar25 + 1;
            lStack_100 = lVar6 + lStack_100 * 10;
            lVar6 = (long)*pcVar25;
            lStack_100 = lStack_100 + -0x30;
          } while (0x2f < lVar6);
          iVar12 = (int)pcVar25 - (int)pcVar24;
        }
        if (8 < iVar12) {
          lStack_100 = 9999999;
        }
        if (bVar9) {
          lStack_100 = -lStack_100;
        }
      }
      else {
        lStack_100 = 0;
        pcVar25 = pcVar24;
      }
    }
  }
  if (iVar22 == 0) {
    if (bVar16) {
      param_2 = pcVar25;
    }
    if (lVar13 == 0) {
      pcVar25 = param_2;
    }
    goto LAB_002631c8;
  }
  if (iVar21 == 0) {
    iVar21 = iVar22;
  }
  lStack_100 = lStack_100 - lVar15;
  iVar12 = 0x10;
  if (iVar22 < 0x11) {
    iVar12 = iVar22;
  }
  iStack_a8 = (int)lStack_100;
  uVar19 = FUN_00257af8(uStack_f0);
  iVar23 = iStack_a8;
  if ((int)uStack_f0 < 0) {
    uVar19 = FUN_002574c0(uVar19,0x41f0000000000000);
  }
  if (9 < iVar12) {
    uVar3 = FUN_00257580(*(undefined8 *)(&DAT_002c08e0 + (iVar12 + -9) * 8),uVar19);
    if ((long)uVar20 < 0) {
      uVar4 = FUN_00269610(uVar20 & 1 | uVar20 >> 1);
      uVar4 = FUN_002574c0(uVar4,uVar4);
    }
    else {
      uVar4 = FUN_00269610(uVar20);
    }
    uVar19 = FUN_002574c0(uVar3,uVar4);
  }
  iStack_d8 = 0;
  if (iVar22 < 0x10) {
    if (lStack_100 == 0) goto LAB_002631c8;
    if (0 < lStack_100) {
      if (0x16 < lStack_100) {
        iVar10 = -iVar22 + 0xf;
        iVar12 = iVar22 - iVar12;
        if (-iVar22 + 0x25 < lStack_100) goto LAB_002628b8;
        lStack_100 = lStack_100 - iVar10;
        uVar19 = FUN_00257580(*(undefined8 *)(&DAT_002c08e0 + iVar10 * 8),uVar19);
        iVar23 = (int)lStack_100;
      }
      uVar19 = FUN_00257580(*(undefined8 *)(&DAT_002c08e0 + iVar23 * 8),uVar19);
      goto LAB_002631c8;
    }
    iVar12 = iVar22 - iVar12;
    if (-0x17 < lStack_100) {
      uVar19 = FUN_00257828(uVar19,*(undefined8 *)(&DAT_002c08e0 + iVar23 * -8));
      goto LAB_002631c8;
    }
  }
  else {
    iVar12 = iVar22 - iVar12;
  }
LAB_002628b8:
  uVar17 = iVar23 + iVar12;
  if ((int)uVar17 < 1) {
    if (-1 < (int)uVar17) goto LAB_00262b60;
    uVar17 = -uVar17;
    if ((uVar17 & 0xf) != 0) {
      uVar19 = FUN_00257828(uVar19,*(undefined8 *)(&DAT_002c08e0 + (uVar17 & 0xf) * 8));
    }
    uVar18 = (int)uVar17 >> 4;
    if ((uVar17 & 0xfffffff0) == 0) goto LAB_00262b60;
    if ((int)uVar18 < 0x20) {
      iVar12 = 0;
      uVar20 = uVar19;
      for (; 1 < (int)uVar18; uVar18 = (int)uVar18 >> 1) {
        if ((uVar18 & 1) != 0) {
          uVar20 = FUN_00257580(*(undefined8 *)(&DAT_002c09d0 + iVar12 * 8),uVar20);
        }
        iVar12 = iVar12 + 1;
      }
      uVar3 = *(undefined8 *)(&DAT_002c09d0 + iVar12 * 8);
      uVar19 = FUN_00257580(uVar3,uVar20);
      lVar13 = FUN_00257aa8(uVar19,0);
      if (lVar13 == 0) {
        uVar4 = FUN_002574c0(uVar20,uVar20);
        uVar3 = FUN_00257580(uVar3,uVar4);
        lVar13 = FUN_00257aa8(uVar3,0);
        uVar19 = 1;
        if (lVar13 == 0) goto LAB_00262b28;
      }
      goto LAB_00262b60;
    }
LAB_00262b28:
    *(undefined4 *)param_1 = 0x22;
    uVar19 = 0;
joined_r0x00262b30:
    if (iStack_d8 == 0) goto LAB_002631c8;
LAB_0026318c:
    FUN_00261050(param_1,uStack_e0);
    FUN_00261050(param_1,iStack_dc);
    FUN_00261050(param_1,uStack_d4);
    FUN_00261050(param_1,iStack_d8);
    FUN_00261050(param_1,iStack_d0);
LAB_002631c8:
    if (puStack_108 != (undefined4 *)0x0) {
      *puStack_108 = pcVar25;
    }
    if (iStack_104 != 0) {
      FUN_00257518(0,uVar19);
    }
    return;
  }
  if ((uVar17 & 0xf) != 0) {
    uVar19 = FUN_00257580(*(undefined8 *)(&DAT_002c08e0 + (uVar17 & 0xf) * 8),uVar19);
  }
  if ((uVar17 & 0xfffffff0) != 0) {
    if ((int)(uVar17 & 0xfffffff0) < 0x135) {
      uVar17 = (int)uVar17 >> 4;
      if (uVar17 != 0) {
        iVar12 = 0;
        for (; 1 < (int)uVar17; uVar17 = (int)uVar17 >> 1) {
          if ((uVar17 & 1) != 0) {
            uVar19 = FUN_00257580((&DAT_002c09a8)[iVar12],uVar19);
          }
          iVar12 = iVar12 + 1;
        }
        uVar19 = FUN_00257580((&DAT_002c09a8)[iVar12],
                              uVar19 & 0xffffffff |
                              (long)((int)(uVar19 >> 0x20) + -0x3500000) << 0x20);
        uVar20 = (long)uVar19 >> 0x20 & 0x7ff00000;
        if (0x7ca00000 < uVar20) goto LAB_00262904;
        if (uVar20 < 0x7c900001) {
          uVar19 = uVar19 & 0xffffffff | (long)((int)(uVar19 >> 0x20) + 0x3500000) << 0x20;
        }
        else {
          uVar19 = 0x7fefffffffffffff;
        }
      }
      goto LAB_00262b60;
    }
LAB_00262904:
    *(undefined4 *)param_1 = 0x22;
    uVar19 = DAT_002bfe70;
    goto joined_r0x00262b30;
  }
LAB_00262b60:
  iStack_d8 = FUN_00261198(param_1,pcStack_f8,iVar21,iVar22,uStack_f0);
  iStack_ac = iStack_d8 + 0xc;
  piStack_b0 = &iStack_10c;
  do {
    iStack_dc = FUN_00260fa8(param_1,*(undefined4 *)(iStack_d8 + 4));
    FUN_0025a55c(iStack_dc + 0xc,iStack_ac,*(int *)(iStack_d8 + 0x10) * 4 + 8);
    uStack_e0 = FUN_00261d18(param_1,uVar19,&iStack_110,piStack_b0);
    uStack_d4 = FUN_00261428(param_1,1);
    if (lStack_100 < 0) {
      iVar22 = 0;
      iVar21 = -iStack_a8;
    }
    else {
      iVar21 = 0;
      iVar22 = iStack_a8;
    }
    if (iStack_110 < 0) {
      iVar12 = iVar22 - iStack_110;
      iVar23 = iVar21;
    }
    else {
      iVar12 = iVar22;
      iVar23 = iVar21 + iStack_110;
    }
    if (iStack_110 + iStack_10c + -1 < -0x3fe) {
      iVar10 = iStack_110 + 0x433;
    }
    else {
      iVar10 = 0x36 - iStack_10c;
    }
    iVar12 = iVar12 + iVar10;
    iVar10 = iVar23 + iVar10;
    iVar11 = iVar12;
    if (iVar10 < iVar12) {
      iVar11 = iVar10;
    }
    if (iVar23 < iVar11) {
      iVar11 = iVar23;
    }
    if (0 < iVar11) {
      iVar23 = iVar23 - iVar11;
      iVar10 = iVar10 - iVar11;
      iVar12 = iVar12 - iVar11;
    }
    if (0 < iVar21) {
      uVar3 = FUN_00261690(param_1,uStack_d4);
      uStack_d4 = (undefined4)uVar3;
      uVar2 = FUN_00261460(param_1,uVar3,uStack_e0);
      uVar1 = uStack_e0;
      uStack_e0 = uVar2;
      FUN_00261050(param_1,uVar1);
    }
    if (0 < iVar10) {
      uStack_e0 = FUN_00261790(param_1,uStack_e0,iVar10);
    }
    if (0 < iVar22) {
      iStack_dc = FUN_00261690(param_1,iStack_dc,iVar22);
    }
    if (0 < iVar12) {
      iStack_dc = FUN_00261790(param_1,iStack_dc,iVar12);
    }
    if (0 < iVar23) {
      uStack_d4 = FUN_00261790(param_1,uStack_d4,iVar23);
    }
    uVar3 = FUN_00261970(param_1,uStack_e0,iStack_dc);
    iStack_d0 = (int)uVar3;
    iVar21 = *(int *)(iStack_d0 + 0xc);
    *(undefined4 *)(iStack_d0 + 0xc) = 0;
    lVar13 = FUN_00261908(uVar3,uStack_d4);
    uVar17 = (uint)(uVar19 >> 0x20);
    if (lVar13 < 0) {
      if ((iVar21 == 0) && ((uVar19 & 0xfffffffffffff) == 0)) {
        uVar3 = FUN_00261790(param_1,iStack_d0,1);
        iStack_d0 = (int)uVar3;
        lVar13 = FUN_00261908(uVar3,uStack_d4);
        if (0 < lVar13) {
LAB_00262c0c:
          uVar19 = uVar19 & 0xffffffff |
                   ((long)(int)((uVar17 & 0x7ff00000) - 0x100000) | 0xfffffU) << 0x20 | 0xffffffff;
        }
      }
      goto LAB_0026318c;
    }
    if (lVar13 == 0) {
      if (iVar21 == 0) {
        if ((uVar19 & 0xfffffffffffff) == 0) goto LAB_00262c0c;
      }
      else if ((uVar19 & 0xfffffffffffff) == 0xfffffffffffff) {
        uVar19 = ((long)uVar19 >> 0x20 & 0x7ff00000U) + 0x100000 << 0x20;
        goto LAB_0026318c;
      }
      if ((uVar19 & 1) != 0) {
        if (iVar21 == 0) {
          uVar3 = FUN_00261b00(uVar19,uStack_e0);
          uVar19 = FUN_00257518(uVar19,uVar3);
          lVar13 = FUN_00257aa8(uVar19,0);
          if (lVar13 == 0) goto LAB_00262b28;
        }
        else {
          uVar3 = FUN_00261b00(uVar19,uStack_e0);
          uVar19 = FUN_002574c0(uVar3,uVar19);
        }
      }
      goto LAB_0026318c;
    }
    uVar3 = FUN_00261e98(iStack_d0,uStack_d4);
    lVar13 = FUN_00257aa8(uVar3,0x4000000000000000);
    if (lVar13 < 1) {
      if (iVar21 == 0) {
        if ((uVar19 & 0xfffffffffffff) == 0) {
          lVar13 = FUN_00257aa8(uVar3,0x3ff0000000000000);
          if (lVar13 < 0) {
            uVar4 = 0x3fe0000000000000;
          }
          else {
            uVar4 = FUN_00257580(uVar3,0x3fe0000000000000);
          }
          goto LAB_00262d6c;
        }
        if (uVar19 == 1) goto LAB_00262b28;
        uVar4 = 0x3ff0000000000000;
        uVar3 = 0xbff0000000000000;
      }
      else {
        uVar4 = 0x3ff0000000000000;
        uVar3 = uVar4;
      }
    }
    else {
      uVar4 = FUN_00257580(uVar3,0x3fe0000000000000);
      uVar3 = uVar4;
      if (iVar21 == 0) {
LAB_00262d6c:
        uVar3 = FUN_00257518(0,uVar4);
      }
    }
    uStack_f0 = uVar17 & 0x7ff00000;
    if (uStack_f0 == 0x7fe00000) {
      uVar20 = uVar19 & 0xffffffff | (long)(int)(uVar17 + 0xfcb00000) << 0x20;
      uVar5 = FUN_00261b00(uVar20);
      uVar3 = FUN_00257580(uVar3,uVar5);
      uVar20 = FUN_002574c0(uVar3,uVar20);
      if (((long)uVar20 >> 0x20 & 0x7ff00000U) < 0x7ca00000) {
        uVar19 = uVar20 & 0xffffffff | (long)((int)(uVar20 >> 0x20) + 0x3500000) << 0x20;
        goto LAB_00262ed4;
      }
      if (uVar19 == 0x7fefffffffffffff) goto LAB_00262904;
      uVar19 = 0x7fefffffffffffff;
    }
    else {
      if ((uStack_f0 < 0x3400001) && (lVar13 = FUN_00257aa8(uVar4,0x3ff0000000000000), -1 < lVar13))
      {
        uVar3 = FUN_002574c0(uVar4,0x3fe0000000000000);
        uVar3 = FUN_00257bb0(uVar3);
        uVar3 = FUN_00257af8(uVar3);
        if (iVar21 == 0) {
          uVar3 = FUN_00257518(0,uVar3);
        }
      }
      uVar5 = FUN_00261b00(uVar19);
      uVar3 = FUN_00257580(uVar3,uVar5);
      uVar19 = FUN_002574c0(uVar3,uVar19);
LAB_00262ed4:
      if ((ulong)uStack_f0 == ((long)uVar19 >> 0x20 & 0x7ff00000U)) {
        uVar3 = FUN_002694c0(uVar4,uStack_e0);
        uVar3 = FUN_00269610(uVar3);
        uVar3 = FUN_00257518(uVar4,uVar3);
        if ((iVar21 == 0) && ((uVar19 & 0xfffffffffffff) == 0)) {
          lVar13 = FUN_00257aa8(uVar3,_DAT_002c0ac8);
          if (lVar13 < 0) goto LAB_0026318c;
        }
        else {
          lVar13 = FUN_00257aa8(uVar3,DAT_002c0ab8);
          if ((lVar13 < 0) || (lVar13 = FUN_00257aa8(uVar3,DAT_002c0ac0), 0 < lVar13))
          goto LAB_0026318c;
        }
      }
    }
    FUN_00261050(param_1,uStack_e0);
    FUN_00261050(param_1,iStack_dc);
    FUN_00261050(param_1,uStack_d4);
    FUN_00261050(param_1,iStack_d0);
  } while( true );
switchD_00262384_caseD_9:
  pcVar24 = pcVar24 + 1;
  goto LAB_00262360;
}

