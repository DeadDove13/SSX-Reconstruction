/* Ghidra pseudocode. PS2 address: 0025c470. Not validated source. */

/* WARNING: Type propagation algorithm not settling */

int FUN_0025c470(undefined4 param_1,int param_2,undefined8 param_3,ulong *param_4)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined **ppuVar11;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong *puVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_2d0 [16];
  int *piStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int aiStack_2b0 [16];
  char acStack_270 [346];
  char acStack_116 [6];
  char cStack_110;
  undefined1 uStack_10f;
  char cStack_100;
  char acStack_ff [3];
  int iStack_fc;
  undefined4 uStack_f8;
  char *pcStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  char *pcStack_e4;
  int iStack_e0;
  char *pcStack_dc;
  int iStack_d8;
  ulong uStack_d0;
  int iStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  char *pcStack_bc;
  int *piStack_b8;
  undefined4 *puStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 uVar12;
  
  uStack_ec = param_1;
  iStack_e8 = param_2;
  piVar4 = (int *)FUN_00260c10();
  iStack_d8 = *piVar4;
  uVar1 = *(ushort *)(iStack_e8 + 0xc);
  uStack_f8 = 0;
  if (((uVar1 & 8) == 0) || (*(int *)(iStack_e8 + 0x10) == 0)) {
    lVar8 = FUN_0025e8b0(iStack_e8);
    if (lVar8 != 0) {
      return -1;
    }
    uVar1 = *(ushort *)(iStack_e8 + 0xc);
  }
  piStack_2c0 = aiStack_2b0;
  if (((uVar1 & 0x1a) == 10) && (-1 < *(short *)(iStack_e8 + 0xe))) {
    iVar5 = FUN_0025c340(iStack_e8,param_3,param_4);
    return iVar5;
  }
  piStack_b8 = &iStack_fc;
  puStack_b4 = &uStack_f8;
  iStack_2b8 = 0;
  iStack_2bc = 0;
  pcStack_e4 = (char *)param_3;
  iStack_e0 = 0;
  pcVar7 = pcStack_e4;
  piVar4 = piStack_2c0;
LAB_0025c558:
  lVar8 = FUN_00260d88(PTR_DAT_002a6614,piStack_b8,pcStack_e4,DAT_002a6a70,puStack_b4);
  if (0 < lVar8) goto code_r0x0025c584;
  goto LAB_0025c59c;
code_r0x0025c584:
  pcStack_e4 = pcStack_e4 + (int)lVar8;
  if (iStack_fc == 0x25) {
    pcStack_e4 = pcStack_e4 + -1;
LAB_0025c59c:
    iVar5 = (int)pcStack_e4 - (int)pcVar7;
    if (iVar5 != 0) {
      piVar4[1] = iVar5;
      *piVar4 = (int)pcVar7;
      piVar4 = piVar4 + 2;
      iStack_2b8 = iStack_2b8 + iVar5;
      iStack_2bc = iStack_2bc + 1;
      if (7 < iStack_2bc) {
        lVar9 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar4 = aiStack_2b0;
        if (lVar9 != 0) goto LAB_0025d944;
      }
      iStack_e0 = iStack_e0 + iVar5;
    }
    if (0 < lVar8) {
      uVar21 = 0;
      pcStack_c4 = (char *)0x0;
      pcStack_e4 = pcStack_e4 + 1;
      pcStack_dc = (char *)0x0;
      acStack_ff[0] = '\0';
      cVar3 = *pcStack_e4;
      puVar18 = param_4;
      pcVar7 = (char *)0xffffffff;
LAB_0025c634:
      lVar8 = (long)(int)cVar3;
      pcStack_e4 = pcStack_e4 + 1;
LAB_0025c648:
      puVar17 = puVar18;
      uVar22 = uVar21;
      switch((int)lVar8) {
      case 0x20:
        goto switchD_0025c668_caseD_20;
      default:
        pcVar16 = acStack_270;
        if (lVar8 != 0) {
          acStack_270[0] = (char)lVar8;
          param_4 = puVar18;
          pcVar6 = (char *)0x1;
          goto LAB_0025cd3c;
        }
        goto LAB_0025d920;
      case 0x23:
        uVar21 = uVar21 | 1;
        cVar3 = *pcStack_e4;
        goto LAB_0025c634;
      case 0x2a:
        puVar17 = puVar18 + 1;
        pcStack_dc = *(char **)puVar18;
        if ((int)pcStack_dc < 0) {
          pcStack_dc = (char *)-(int)pcStack_dc;
          goto switchD_0025c668_caseD_2d;
        }
        goto LAB_0025c630;
      case 0x2b:
        acStack_ff[0] = '+';
        goto LAB_0025c6c4;
      case 0x2d:
switchD_0025c668_caseD_2d:
        uVar21 = uVar21 | 4;
        goto LAB_0025c630;
      case 0x2e:
        cVar3 = *pcStack_e4;
        lVar8 = (long)cVar3;
        pcStack_e4 = pcStack_e4 + 1;
        if (lVar8 == 0x2a) {
          puVar17 = puVar18 + 1;
          pcVar16 = *(char **)puVar18;
          cVar3 = *pcStack_e4;
          puVar18 = puVar17;
          pcVar7 = (char *)0xffffffff;
          if (-2 < (int)pcVar16) {
            pcVar7 = pcVar16;
          }
          goto LAB_0025c634;
        }
        pcVar16 = (char *)0x0;
        if ((int)cVar3 - 0x30U < 10) {
          iVar5 = 0;
          do {
            pcVar16 = (char *)(iVar5 + -0x30 + (int)lVar8);
            cVar3 = *pcStack_e4;
            lVar8 = (long)cVar3;
            pcStack_e4 = pcStack_e4 + 1;
            iVar5 = (int)pcVar16 * 10;
          } while ((int)cVar3 - 0x30U < 10);
        }
        pcVar7 = (char *)0xffffffff;
        if (-2 < (int)pcVar16) {
          pcVar7 = pcVar16;
        }
        goto LAB_0025c648;
      case 0x30:
        uVar21 = uVar21 | 0x80;
LAB_0025c630:
        cVar3 = *pcStack_e4;
        puVar18 = puVar17;
        goto LAB_0025c634;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        goto switchD_0025c668_caseD_31;
      case 0x44:
        uVar21 = uVar21 | 0x10;
      case 100:
      case 0x69:
        if ((uVar21 & 0x10) == 0) {
          if ((uVar21 & 0x40) == 0) {
            uVar13 = (ulong)(int)(uint)*puVar18;
          }
          else {
            uVar13 = (ulong)(short)(ushort)*puVar18;
          }
        }
        else {
          uVar13 = *puVar18;
        }
        iVar5 = 1;
        if ((long)uVar13 < 0) {
          uVar13 = -uVar13;
          acStack_ff[0] = '-';
        }
LAB_0025cbc4:
        param_4 = puVar18 + 1;
        pcStack_c4 = pcVar7;
        if (-1 < (int)pcVar7) {
          uVar21 = uVar21 & 0xffffff7f;
        }
        pcVar16 = acStack_116 + 2;
        if ((uVar13 == 0) && (pcVar7 == (char *)0x0)) goto LAB_0025cd20;
        if (iVar5 == 1) {
          if (uVar13 < 10) {
            pcVar16 = acStack_116 + 1;
          }
          else {
            do {
              pcVar7 = pcVar16;
              cVar3 = FUN_00269d10(uVar13,10);
              pcVar16 = pcVar7 + -1;
              *pcVar16 = cVar3 + '0';
              uVar13 = FUN_00256ae0(uVar13,10);
            } while (9 < uVar13);
            pcVar16 = pcVar7 + -2;
          }
          *pcVar16 = (char)uVar13 + '0';
          goto LAB_0025cd20;
        }
        if (iVar5 != 0) {
          if (iVar5 == 2) goto LAB_0025cce8;
          pcVar16 = "bug in vfprintf: bad base";
          uVar20 = uVar21 & 0x84;
          pcVar6 = (char *)FUN_0025bcf8(0x2c0218);
          goto LAB_0025cd48;
        }
        do {
          pcVar6 = pcVar16;
          pcVar16 = pcVar6 + -1;
          lVar9 = (uVar13 & 7) + 0x30;
          uVar13 = uVar13 >> 3;
          *pcVar16 = (char)lVar9;
        } while (uVar13 != 0);
        if ((uVar21 & 1) != 0) {
          pcVar7 = pcVar6 + -0x15d;
          if (lVar9 != 0x30) {
            pcVar16 = pcVar6 + -2;
            *pcVar16 = '0';
            goto LAB_0025cd20;
          }
          break;
        }
LAB_0025cd20:
        pcVar7 = pcVar16 + -0x15c;
        break;
      case 0x45:
      case 0x47:
      case 0x65:
      case 0x66:
      case 0x67:
        if (pcVar7 == (char *)0xffffffff) {
          pcVar7 = (char *)0x6;
        }
        else if (((lVar8 == 0x67) || (lVar8 == 0x47)) && (pcVar7 == (char *)0x0)) {
          pcVar7 = (char *)0x1;
        }
        param_4 = puVar18 + 1;
        if ((uVar21 & 8) == 0) {
          uStack_d0 = *puVar18;
        }
        else {
          uStack_d0 = *puVar18;
        }
        lVar9 = FUN_00262160(uStack_d0);
        if (lVar9 == 0) {
          lVar9 = FUN_002554c0(uStack_d0);
          if (lVar9 == 0) {
            uVar22 = uVar21 | 0x100;
            pcVar16 = (char *)FUN_0025d988(uStack_ec,uStack_d0,pcVar7,uVar22,&cStack_100,&pcStack_f4
                                           ,lVar8,&iStack_f0);
            if ((lVar8 == 0x67) || (lVar8 == 0x47)) {
              if (((int)pcStack_f4 < -3) || ((int)pcVar7 < (int)pcStack_f4)) {
                bVar2 = lVar8 != 0x67;
                lVar8 = 0x65;
                if (bVar2) {
                  lVar8 = 0x45;
                }
              }
              else {
                lVar8 = 0x67;
              }
            }
            pcVar6 = pcStack_f4 + -1;
            if (lVar8 < 0x66) {
              pcStack_f4 = pcVar6;
              iStack_c8 = FUN_0025db38(auStack_2d0,pcVar6,lVar8);
              if ((1 < iStack_f0) || (pcVar6 = (char *)(iStack_c8 + iStack_f0), (uVar21 & 1) != 0))
              {
                pcVar6 = (char *)(iStack_c8 + iStack_f0) + 1;
              }
            }
            else if (lVar8 == 0x66) {
              pcVar6 = pcVar7 + 2;
              if ((0 < (int)pcStack_f4) &&
                 ((pcVar7 != (char *)0x0 || (pcVar6 = pcStack_f4, (uVar21 & 1) != 0)))) {
                pcVar6 = pcStack_f4 + 1 + (int)pcVar7;
              }
            }
            else if ((int)pcStack_f4 < iStack_f0) {
              pcVar6 = (char *)(iStack_f0 + 1);
              if ((int)pcStack_f4 < 1) {
                pcVar6 = (char *)((iStack_f0 + 2) - (int)pcStack_f4);
              }
            }
            else {
              pcVar6 = pcStack_f4 + (uVar21 & 1);
            }
            if (cStack_100 != '\0') {
              acStack_ff[0] = '-';
            }
          }
          else {
            pcVar6 = (char *)0x3;
            pcVar16 = "NaN";
          }
        }
        else {
          lVar9 = FUN_00257aa8(uStack_d0,0);
          if (lVar9 < 0) {
            acStack_ff[0] = '-';
          }
          pcVar6 = (char *)0x3;
          pcVar16 = "Inf";
        }
        goto LAB_0025cd44;
      case 0x4c:
        uVar21 = uVar21 | 8;
        cVar3 = *pcStack_e4;
        goto LAB_0025c634;
      case 0x4f:
        uVar21 = uVar21 | 0x10;
      case 0x6f:
        if ((uVar21 & 0x10) == 0) {
          if ((uVar21 & 0x40) == 0) {
            uVar13 = (ulong)(uint)*puVar18;
          }
          else {
            uVar13 = (ulong)(ushort)*puVar18;
          }
        }
        else {
          uVar13 = *puVar18;
        }
        iVar5 = 0;
LAB_0025cbc0:
        acStack_ff[0] = '\0';
        goto LAB_0025cbc4;
      case 0x55:
        uVar21 = uVar21 | 0x10;
      case 0x75:
        if ((uVar21 & 0x10) == 0) {
          if ((uVar21 & 0x40) == 0) {
            uVar13 = (ulong)(uint)*puVar18;
          }
          else {
            uVar13 = (ulong)(ushort)*puVar18;
          }
        }
        else {
          uVar13 = *puVar18;
        }
        iVar5 = 1;
        goto LAB_0025cbc0;
      case 0x58:
        pcStack_bc = "0123456789ABCDEF";
        goto LAB_0025cb7c;
      case 99:
        param_4 = puVar18 + 1;
        pcVar16 = acStack_270;
        pcVar6 = (char *)0x1;
        acStack_ff[0] = '\0';
        acStack_270[0] = (char)*puVar18;
        goto LAB_0025cd44;
      case 0x68:
        uVar21 = uVar21 | 0x40;
        cVar3 = *pcStack_e4;
        goto LAB_0025c634;
      case 0x6c:
        cVar3 = *pcStack_e4;
        if (*pcStack_e4 == 'l') {
          pcStack_e4 = pcStack_e4 + 1;
          uVar21 = uVar21 | 0x20;
          cVar3 = *pcStack_e4;
        }
        else {
          uVar21 = uVar21 | 0x10;
        }
        goto LAB_0025c634;
      case 0x6e:
        pcVar7 = pcStack_e4;
        if ((uVar21 & 0x10) == 0) {
          if ((uVar21 & 0x40) == 0) {
            param_4 = puVar18 + 1;
            **(int **)puVar18 = iStack_e0;
          }
          else {
            param_4 = puVar18 + 1;
            **(undefined2 **)puVar18 = (short)iStack_e0;
          }
        }
        else {
          param_4 = puVar18 + 1;
          **(long **)puVar18 = (long)iStack_e0;
        }
        goto LAB_0025c558;
      case 0x70:
        iVar5 = 2;
        pcStack_bc = "0123456789abcdef";
        uVar21 = uVar21 | 2;
        lVar8 = 0x78;
        uVar13 = (ulong)(int)(uint)*puVar18;
        goto LAB_0025cbc0;
      case 0x71:
        uVar21 = uVar21 | 0x20;
        cVar3 = *pcStack_e4;
        goto LAB_0025c634;
      case 0x73:
        param_4 = puVar18 + 1;
        pcVar16 = *(char **)puVar18;
        if (pcVar16 == (char *)0x0) {
          pcVar16 = "(null)";
        }
        if ((int)pcVar7 < 0) {
          pcVar6 = (char *)FUN_0025bcf8(pcVar16);
        }
        else {
          lVar9 = FUN_00260dc4(pcVar16,0,pcVar7);
          pcVar19 = (char *)((int)lVar9 - (int)pcVar16);
          pcVar6 = pcVar7;
          if ((lVar9 != 0) && (pcVar6 = pcVar19, (int)pcVar7 < (int)pcVar19)) {
            pcVar6 = pcVar7;
          }
        }
LAB_0025cd3c:
        acStack_ff[0] = '\0';
LAB_0025cd44:
        uVar20 = uVar22 & 0x84;
        uVar21 = uVar22;
        goto LAB_0025cd48;
      case 0x78:
        pcStack_bc = "0123456789abcdef";
LAB_0025cb7c:
        if ((uVar21 & 0x10) == 0) {
          if ((uVar21 & 0x40) == 0) {
            uVar13 = (ulong)(uint)*puVar18;
          }
          else {
            uVar13 = (ulong)(ushort)*puVar18;
          }
        }
        else {
          uVar13 = *puVar18;
        }
        iVar5 = 2;
        if (((uVar21 & 1) != 0) && (uVar13 != 0)) {
          uVar21 = uVar21 | 2;
        }
        goto LAB_0025cbc0;
      }
      goto LAB_0025cd24;
    }
LAB_0025d920:
    if (iStack_2b8 != 0) {
      FUN_0025c2f8(iStack_e8,&piStack_2c0);
    }
LAB_0025d944:
    iVar5 = -1;
    if ((*(ushort *)(iStack_e8 + 0xc) & 0x40) == 0) {
      iVar5 = iStack_e0;
    }
    return iVar5;
  }
  goto LAB_0025c558;
LAB_0025cce8:
  do {
    pcVar7 = pcVar16;
    uVar22 = (uint)uVar13;
    pcVar16 = pcVar7 + -1;
    uVar13 = uVar13 >> 4;
    *pcVar16 = pcStack_bc[uVar22 & 0xf];
  } while (uVar13 != 0);
  pcVar7 = pcVar7 + -0x15d;
LAB_0025cd24:
  uVar20 = uVar21 & 0x84;
  pcVar6 = acStack_270 + -(int)pcVar7;
LAB_0025cd48:
  piVar14 = piVar4 + 2;
  pcVar7 = pcStack_c4;
  if ((int)pcStack_c4 <= (int)pcVar6) {
    pcVar7 = pcVar6;
  }
  if (acStack_ff[0] == '\0') {
    pcStack_c0 = pcVar7 + (uVar21 & 2);
  }
  else {
    pcStack_c0 = pcVar7 + 1;
  }
  if ((uVar20 == 0) && (iVar5 = (int)pcStack_dc - (int)pcStack_c0, 0 < iVar5)) {
    uVar12 = 0x2c0000;
    piVar15 = piVar4;
    piVar4 = piVar14;
    for (; iVar10 = (int)uVar12, 0x10 < iVar5; iVar5 = iVar5 + -0x10) {
      *piVar15 = iVar10 + 0x1b0;
      piVar15[1] = 0x10;
      iStack_2b8 = iStack_2b8 + 0x10;
      iStack_2bc = iStack_2bc + 1;
      if (7 < iStack_2bc) {
        uStack_ac = (undefined4)((ulong)uVar12 >> 0x20);
        iStack_b0 = iVar10;
        lVar9 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        uVar12 = CONCAT44(uStack_ac,iStack_b0);
        if (lVar9 != 0) goto LAB_0025d944;
        piVar4 = aiStack_2b0;
      }
      piVar15 = piVar4;
      piVar4 = piVar4 + 2;
    }
    piVar15[1] = iVar5;
    *piVar15 = iVar10 + 0x1b0;
    iStack_2bc = iStack_2bc + 1;
    iStack_2b8 = iStack_2b8 + iVar5;
    if (iStack_2bc < 8) {
      piVar14 = piVar4 + 2;
    }
    else {
      lVar9 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
      piVar4 = aiStack_2b0;
      if (lVar9 != 0) goto LAB_0025d944;
      piVar14 = aiStack_2b0 + 2;
    }
  }
  if (acStack_ff[0] == '\0') {
    piVar15 = piVar14;
    if ((uVar21 & 2) != 0) {
      uStack_10f = (char)lVar8;
      cStack_110 = '0';
      piVar4[1] = 2;
      *piVar4 = (int)&cStack_110;
      iStack_2b8 = iStack_2b8 + 2;
      goto joined_r0x0025cee8;
    }
  }
  else {
    *piVar4 = (int)acStack_ff;
    piVar4[1] = 1;
    iStack_2b8 = iStack_2b8 + 1;
joined_r0x0025cee8:
    if (iStack_2bc + 1 < 8) {
      iStack_2bc = iStack_2bc + 1;
      piVar15 = piVar14 + 2;
      piVar4 = piVar14;
    }
    else {
      iStack_2bc = iStack_2bc + 1;
      lVar9 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
      if (lVar9 != 0) goto LAB_0025d944;
      piVar15 = aiStack_2b0 + 2;
      piVar4 = aiStack_2b0;
    }
  }
  if ((uVar20 == 0x80) && (iVar5 = (int)pcStack_dc - (int)pcStack_c0, piVar14 = piVar4, 0 < iVar5))
  {
    for (; piVar4 = piVar15, 0x10 < iVar5; iVar5 = iVar5 + -0x10) {
      *piVar14 = (int)"0000000000000000Inf";
      piVar14[1] = 0x10;
      iStack_2b8 = iStack_2b8 + 0x10;
      iStack_2bc = iStack_2bc + 1;
      if (7 < iStack_2bc) {
        lVar9 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar4 = aiStack_2b0;
        if (lVar9 != 0) goto LAB_0025d944;
      }
      piVar15 = piVar4 + 2;
      piVar14 = piVar4;
    }
    piVar14[1] = iVar5;
    *piVar14 = (int)"0000000000000000Inf";
    iStack_2bc = iStack_2bc + 1;
    iStack_2b8 = iStack_2b8 + iVar5;
    if (iStack_2bc < 8) {
      piVar15 = piVar4 + 2;
    }
    else {
      lVar9 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
      piVar4 = aiStack_2b0;
      if (lVar9 != 0) goto LAB_0025d944;
      piVar15 = aiStack_2b0 + 2;
    }
  }
  iVar5 = (int)pcStack_c4 - (int)pcVar6;
  piVar14 = piVar4;
  if (0 < iVar5) {
    for (; piVar4 = piVar15, 0x10 < iVar5; iVar5 = iVar5 + -0x10) {
      *piVar14 = (int)"0000000000000000Inf";
      piVar14[1] = 0x10;
      iStack_2b8 = iStack_2b8 + 0x10;
      iStack_2bc = iStack_2bc + 1;
      if (7 < iStack_2bc) {
        lVar9 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar4 = aiStack_2b0;
        if (lVar9 != 0) goto LAB_0025d944;
      }
      piVar14 = piVar4;
      piVar15 = piVar4 + 2;
    }
    piVar14[1] = iVar5;
    *piVar14 = (int)"0000000000000000Inf";
    iStack_2bc = iStack_2bc + 1;
    iStack_2b8 = iStack_2b8 + iVar5;
    if (iStack_2bc < 8) {
      piVar15 = piVar4 + 2;
    }
    else {
      lVar9 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
      piVar4 = aiStack_2b0;
      if (lVar9 != 0) goto LAB_0025d944;
      piVar15 = aiStack_2b0 + 2;
    }
  }
  if ((uVar21 & 0x100) == 0) {
    piVar4[1] = (int)pcVar6;
    *piVar4 = (int)pcVar16;
    iStack_2b8 = iStack_2b8 + (int)pcVar6;
LAB_0025d7e0:
    iStack_2bc = iStack_2bc + 1;
    bVar2 = iStack_2bc < 8;
LAB_0025d7f0:
    if (bVar2) goto LAB_0025d810;
  }
  else {
    if (lVar8 < 0x66) {
      if ((iStack_f0 < 2) && ((uVar21 & 1) == 0)) {
        *piVar4 = (int)pcVar16;
        piVar4[1] = 1;
        iStack_2b8 = iStack_2b8 + 1;
joined_r0x0025d6c8:
        iStack_2bc = iStack_2bc + 1;
        if (7 < iStack_2bc) {
          lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
          piVar15 = aiStack_2b0;
          if (lVar8 != 0) goto LAB_0025d944;
        }
      }
      else {
        cStack_110 = *pcVar16;
        uStack_10f = 0x2e;
        piVar4[1] = 2;
        *piVar4 = (int)&cStack_110;
        iStack_2bc = iStack_2bc + 1;
        iStack_2b8 = iStack_2b8 + 2;
        if (7 < iStack_2bc) {
          lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
          piVar15 = aiStack_2b0;
          if (lVar8 != 0) goto LAB_0025d944;
        }
        lVar8 = FUN_00257aa8(uStack_d0,0);
        iVar5 = iStack_f0;
        if (lVar8 != 0) {
          *piVar15 = (int)(pcVar16 + 1);
          piVar15[1] = iVar5 + -1;
          piVar15 = piVar15 + 2;
          iStack_2b8 = iStack_2b8 + iStack_f0 + -1;
          goto joined_r0x0025d6c8;
        }
        iVar5 = iStack_f0 + -1;
        if (0 < iVar5) {
          if (iVar5 < 0x11) {
            piVar15[1] = iVar5;
          }
          else {
            do {
              *piVar15 = (int)"0000000000000000Inf";
              piVar15[1] = 0x10;
              piVar15 = piVar15 + 2;
              iStack_2b8 = iStack_2b8 + 0x10;
              iStack_2bc = iStack_2bc + 1;
              if (7 < iStack_2bc) {
                lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
                piVar15 = aiStack_2b0;
                if (lVar8 != 0) goto LAB_0025d944;
              }
              iVar5 = iVar5 + -0x10;
            } while (0x10 < iVar5);
            piVar15[1] = iVar5;
          }
          *piVar15 = (int)"0000000000000000Inf";
          piVar15 = piVar15 + 2;
          iStack_2b8 = iStack_2b8 + iVar5;
          goto joined_r0x0025d6c8;
        }
      }
      iVar5 = iStack_c8;
      *piVar15 = (int)auStack_2d0;
      piVar15[1] = iVar5;
      piVar15 = piVar15 + 2;
      iStack_2b8 = iStack_2b8 + iVar5;
      goto LAB_0025d7e0;
    }
    lVar8 = FUN_00257aa8(uStack_d0,0);
    if (lVar8 == 0) {
      piVar4[1] = 1;
      *piVar4 = (int)&DAT_002c0238;
      iStack_2bc = iStack_2bc + 1;
      iStack_2b8 = iStack_2b8 + 1;
      if (7 < iStack_2bc) {
        lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar15 = aiStack_2b0;
        if (lVar8 != 0) goto LAB_0025d944;
      }
      if ((int)pcStack_f4 < iStack_f0) {
        piVar15[1] = 1;
      }
      else {
        if ((uVar21 & 1) == 0) goto LAB_0025d810;
        piVar15[1] = 1;
      }
      *piVar15 = iStack_d8;
      piVar15 = piVar15 + 2;
      iStack_2b8 = iStack_2b8 + 1;
      iStack_2bc = iStack_2bc + 1;
      if (7 < iStack_2bc) {
        lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar15 = aiStack_2b0;
        if (lVar8 != 0) goto LAB_0025d944;
      }
      iVar5 = iStack_f0 + -1;
      if (iVar5 < 1) goto LAB_0025d810;
      if (iVar5 < 0x11) {
        piVar15[1] = iVar5;
      }
      else {
        do {
          *piVar15 = (int)"0000000000000000Inf";
          piVar15[1] = 0x10;
          piVar15 = piVar15 + 2;
          iStack_2b8 = iStack_2b8 + 0x10;
          iStack_2bc = iStack_2bc + 1;
          if (7 < iStack_2bc) {
            lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
            piVar15 = aiStack_2b0;
            if (lVar8 != 0) goto LAB_0025d944;
          }
          iVar5 = iVar5 + -0x10;
        } while (0x10 < iVar5);
        piVar15[1] = iVar5;
      }
      *piVar15 = (int)"0000000000000000Inf";
      piVar15 = piVar15 + 2;
      iStack_2bc = iStack_2bc + 1;
      iStack_2b8 = iStack_2b8 + iVar5;
      bVar2 = iStack_2bc < 8;
      goto LAB_0025d7f0;
    }
    if ((int)pcStack_f4 < 1) {
      piVar4[1] = 1;
      *piVar4 = (int)&DAT_002c0238;
      iStack_2bc = iStack_2bc + 1;
      iStack_2b8 = iStack_2b8 + 1;
      if (7 < iStack_2bc) {
        lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar15 = aiStack_2b0;
        if (lVar8 != 0) goto LAB_0025d944;
      }
      piVar15[1] = 1;
      *piVar15 = iStack_d8;
      piVar15 = piVar15 + 2;
      iStack_2bc = iStack_2bc + 1;
      iStack_2b8 = iStack_2b8 + 1;
      if (7 < iStack_2bc) {
        lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar15 = aiStack_2b0;
        if (lVar8 != 0) goto LAB_0025d944;
      }
      iVar5 = -(int)pcStack_f4;
      if (0 < iVar5) {
        if (iVar5 < 0x11) {
          piVar15[1] = iVar5;
        }
        else {
          do {
            *piVar15 = (int)"0000000000000000Inf";
            piVar15[1] = 0x10;
            piVar15 = piVar15 + 2;
            iStack_2b8 = iStack_2b8 + 0x10;
            iStack_2bc = iStack_2bc + 1;
            if (7 < iStack_2bc) {
              lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
              piVar15 = aiStack_2b0;
              if (lVar8 != 0) goto LAB_0025d944;
            }
            iVar5 = iVar5 + -0x10;
          } while (0x10 < iVar5);
          piVar15[1] = iVar5;
        }
        *piVar15 = (int)"0000000000000000Inf";
        piVar15 = piVar15 + 2;
        iStack_2bc = iStack_2bc + 1;
        iStack_2b8 = iStack_2b8 + iVar5;
        if (7 < iStack_2bc) {
          lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
          piVar15 = aiStack_2b0;
          if (lVar8 != 0) goto LAB_0025d944;
        }
      }
      iVar5 = iStack_f0;
      *piVar15 = (int)pcVar16;
      piVar15[1] = iVar5;
      iStack_2b8 = iStack_2b8 + iStack_f0;
    }
    else {
      if (iStack_f0 <= (int)pcStack_f4) {
        piVar4[1] = iStack_f0;
        *piVar4 = (int)pcVar16;
        iStack_2bc = iStack_2bc + 1;
        iStack_2b8 = iStack_2b8 + iStack_f0;
        if (7 < iStack_2bc) {
          lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
          piVar15 = aiStack_2b0;
          if (lVar8 != 0) goto LAB_0025d944;
        }
        iVar5 = (int)pcStack_f4 - iStack_f0;
        if (0 < iVar5) {
          if (iVar5 < 0x11) {
            piVar15[1] = iVar5;
          }
          else {
            do {
              *piVar15 = (int)"0000000000000000Inf";
              piVar15[1] = 0x10;
              piVar15 = piVar15 + 2;
              iStack_2b8 = iStack_2b8 + 0x10;
              iStack_2bc = iStack_2bc + 1;
              if (7 < iStack_2bc) {
                lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
                piVar15 = aiStack_2b0;
                if (lVar8 != 0) goto LAB_0025d944;
              }
              iVar5 = iVar5 + -0x10;
            } while (0x10 < iVar5);
            piVar15[1] = iVar5;
          }
          *piVar15 = (int)"0000000000000000Inf";
          piVar15 = piVar15 + 2;
          iStack_2bc = iStack_2bc + 1;
          iStack_2b8 = iStack_2b8 + iVar5;
          if (7 < iStack_2bc) {
            lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
            piVar15 = aiStack_2b0;
            if (lVar8 != 0) goto LAB_0025d944;
          }
        }
        if ((uVar21 & 1) == 0) goto LAB_0025d810;
        piVar15[1] = 1;
        *piVar15 = (int)&DAT_002c0240;
        piVar15 = piVar15 + 2;
        iStack_2bc = iStack_2bc + 1;
        iStack_2b8 = iStack_2b8 + 1;
        bVar2 = iStack_2bc < 8;
        goto LAB_0025d7f0;
      }
      piVar4[1] = (int)pcStack_f4;
      *piVar4 = (int)pcVar16;
      iStack_2bc = iStack_2bc + 1;
      iStack_2b8 = iStack_2b8 + (int)pcStack_f4;
      if (7 < iStack_2bc) {
        lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar15 = aiStack_2b0;
        if (lVar8 != 0) goto LAB_0025d944;
      }
      pcVar7 = pcStack_f4;
      piVar15[1] = 1;
      *piVar15 = (int)&DAT_002c0240;
      piVar15 = piVar15 + 2;
      iStack_2bc = iStack_2bc + 1;
      iStack_2b8 = iStack_2b8 + 1;
      if (7 < iStack_2bc) {
        lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
        piVar15 = aiStack_2b0;
        if (lVar8 != 0) goto LAB_0025d944;
      }
      iVar5 = iStack_f0;
      pcVar6 = pcStack_f4;
      *piVar15 = (int)(pcVar16 + (int)pcVar7);
      piVar15[1] = iVar5 - (int)pcVar6;
      iStack_2b8 = iStack_2b8 + (iStack_f0 - (int)pcStack_f4);
    }
    iStack_2bc = iStack_2bc + 1;
    piVar15 = piVar15 + 2;
    if (iStack_2bc < 8) goto LAB_0025d810;
  }
  lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
  piVar15 = aiStack_2b0;
  if (lVar8 != 0) goto LAB_0025d944;
LAB_0025d810:
  if ((uVar21 & 4) != 0) {
    iVar5 = (int)pcStack_dc - (int)pcStack_c0;
    if (0 < iVar5) {
      uVar12 = 0x2c0000;
      if (iVar5 < 0x11) {
        ppuVar11 = &PTR_caseD_0_002c0000;
        piVar15[1] = iVar5;
      }
      else {
        do {
          *piVar15 = (int)uVar12 + 0x1b0;
          piVar15[1] = 0x10;
          piVar15 = piVar15 + 2;
          iStack_2b8 = iStack_2b8 + 0x10;
          iStack_2bc = iStack_2bc + 1;
          if (7 < iStack_2bc) {
            uStack_ac = (undefined4)((ulong)uVar12 >> 0x20);
            iStack_b0 = (int)uVar12;
            lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0);
            uVar12 = CONCAT44(uStack_ac,iStack_b0);
            if (lVar8 != 0) goto LAB_0025d944;
            piVar15 = aiStack_2b0;
          }
          iVar5 = iVar5 + -0x10;
          ppuVar11 = (undefined **)uVar12;
        } while (0x10 < iVar5);
        piVar15[1] = iVar5;
      }
      *piVar15 = (int)(ppuVar11 + 0x6c);
      iStack_2bc = iStack_2bc + 1;
      iStack_2b8 = iStack_2b8 + iVar5;
      if ((7 < iStack_2bc) && (lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0), lVar8 != 0))
      goto LAB_0025d944;
    }
  }
  pcVar7 = pcStack_dc;
  if ((int)pcStack_dc <= (int)pcStack_c0) {
    pcVar7 = pcStack_c0;
  }
  iStack_e0 = iStack_e0 + (int)pcVar7;
  if ((iStack_2b8 != 0) && (lVar8 = FUN_0025c2f8(iStack_e8,&piStack_2c0), lVar8 != 0))
  goto LAB_0025d944;
  iStack_2bc = 0;
  piVar4 = aiStack_2b0;
  pcVar7 = pcStack_e4;
  goto LAB_0025c558;
switchD_0025c668_caseD_31:
  pcStack_dc = (char *)0x0;
  do {
    pcStack_dc = (char *)((int)pcStack_dc * 10 + -0x30 + (int)lVar8);
    cVar3 = *pcStack_e4;
    lVar8 = (long)cVar3;
    pcStack_e4 = pcStack_e4 + 1;
  } while ((int)cVar3 - 0x30U < 10);
  goto LAB_0025c648;
switchD_0025c668_caseD_20:
  if (acStack_ff[0] == '\0') {
    acStack_ff[0] = ' ';
LAB_0025c6c4:
    cVar3 = *pcStack_e4;
  }
  else {
    cVar3 = *pcStack_e4;
  }
  goto LAB_0025c634;
}

