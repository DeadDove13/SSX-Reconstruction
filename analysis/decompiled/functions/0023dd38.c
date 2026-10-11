/* Ghidra pseudocode. PS2 address: 0023dd38. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0023e02c) */

void FUN_0023dd38(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  char *pcVar23;
  byte abStack_1c0 [257];
  byte abStack_bf [15];
  uint uStack_b0;
  
  pcVar23 = "0123456789abcdef";
  pbVar16 = param_1 + 1;
LAB_0023dd80:
  bVar6 = *param_2;
  if (bVar6 != 0) {
    if (bVar6 != 0x25) {
      *param_1 = bVar6;
      param_1 = pbVar16;
      while( true ) {
        param_2 = param_2 + 1;
        bVar6 = *param_2;
        if (bVar6 == 0) goto switchD_0023ddf8_caseD_0;
        pbVar16 = param_1 + 1;
        if (bVar6 == 0x25) break;
        *param_1 = bVar6;
        param_1 = pbVar16;
      }
    }
    uVar15 = 0;
    bVar5 = false;
    bVar4 = false;
    if (bVar6 != 0) {
      pbVar22 = (byte *)0x0;
      uVar8 = 0;
      bVar6 = 0;
      pbVar7 = (byte *)0xffffffff;
LAB_0023ddd8:
      pbVar18 = param_2 + 1;
      bVar3 = *pbVar18;
      uVar11 = (uint)bVar3;
      if (0x78 < uVar11) goto switchD_0023ddf8_caseD_1;
      puVar20 = param_3;
      switch((uint)bVar3) {
      case 0:
        goto switchD_0023ddf8_caseD_0;
      default:
        goto switchD_0023ddf8_caseD_1;
      case 0x20:
        param_2 = pbVar18;
        if (bVar6 == 0) {
          bVar6 = 0x20;
        }
        goto LAB_0023ddd8;
      case 0x23:
        bVar4 = true;
        param_2 = pbVar18;
        goto LAB_0023ddd8;
      case 0x2a:
        puVar20 = param_3 + 2;
        uVar8 = *param_3;
        param_2 = pbVar18;
        param_3 = puVar20;
        if ((int)uVar8 < 0) {
          uVar8 = -uVar8;
          goto switchD_0023ddf8_caseD_2d;
        }
        goto LAB_0023ddd8;
      case 0x2b:
        bVar6 = 0x2b;
        param_2 = pbVar18;
        goto LAB_0023ddd8;
      case 0x2d:
switchD_0023ddf8_caseD_2d:
        uVar15 = uVar15 | 4;
        param_2 = pbVar18;
        param_3 = puVar20;
        goto LAB_0023ddd8;
      case 0x2e:
        param_2 = param_2 + 2;
        if (*param_2 == 0x2a) {
          pbVar18 = (byte *)*param_3;
          param_3 = param_3 + 2;
        }
        else {
          uVar11 = (uint)*param_2;
          pbVar18 = (byte *)0x0;
          if ((*(byte *)((int)&PTR_DAT_002c00a1 + (uint)*param_2) & 4) != 0) {
            iVar9 = 0;
            do {
              param_2 = param_2 + 1;
              pbVar18 = (byte *)(iVar9 + -0x30 + uVar11);
              uVar11 = (uint)*param_2;
              iVar9 = (int)pbVar18 * 10;
            } while ((*(byte *)((int)&PTR_DAT_002c00a1 + uVar11) & 4) != 0);
          }
          param_2 = param_2 + -1;
        }
        pbVar7 = (byte *)0xffffffff;
        if (-2 < (int)pbVar18) {
          pbVar7 = pbVar18;
        }
        goto LAB_0023ddd8;
      case 0x30:
        uVar15 = uVar15 | 8;
        param_2 = pbVar18;
        goto LAB_0023ddd8;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar8 = 0;
        if ((*(byte *)((int)&PTR_DAT_002c00a1 + (uint)bVar3) & 4) != 0) {
          iVar9 = 0;
          do {
            pbVar18 = pbVar18 + 1;
            uVar8 = iVar9 + -0x30 + uVar11;
            uVar11 = (uint)*pbVar18;
            iVar9 = uVar8 * 10;
          } while ((*(byte *)((int)&PTR_DAT_002c00a1 + (uint)*pbVar18) & 4) != 0);
        }
        param_2 = pbVar18 + -1;
        goto LAB_0023ddd8;
      case 0x44:
      case 100:
      case 0x69:
        uVar11 = *param_3;
        iVar9 = 10;
        if ((int)uVar11 < 0) {
          uVar11 = -uVar11;
          bVar6 = 0x2d;
        }
        goto LAB_0023e1f8;
      case 0x4f:
      case 0x6f:
        iVar9 = 8;
        uVar11 = *param_3;
        break;
      case 0x55:
      case 0x75:
        iVar9 = 10;
        uVar11 = *param_3;
        break;
      case 0x58:
        pcVar23 = "0123456789ABCDEF";
      case 0x78:
        iVar9 = 0x10;
        uVar11 = *param_3;
        if ((bVar4) && (uVar11 != 0)) {
          bVar5 = true;
        }
        break;
      case 0x62:
        iVar9 = 2;
        uVar11 = *param_3;
        break;
      case 99:
        pbVar19 = abStack_bf + 1;
        uVar11 = *param_3;
        pbVar22 = (byte *)0x0;
        uVar14 = uVar15 & 4;
        bVar5 = false;
        goto LAB_0023df64;
      case 0x66:
        uVar11 = *param_3;
        if ((int)uVar11 < 0) {
          uVar11 = -uVar11;
          bVar6 = 0x2d;
        }
        uVar14 = uVar15 & 4;
        uStack_b0 = uVar11 & 0xffff;
        bVar5 = false;
        pbVar10 = (byte *)0x0;
        uVar11 = uVar11 >> 0x10;
        iVar9 = 10000;
        pbVar19 = (byte *)0x1;
        do {
          iVar2 = (int)uVar11 / iVar9;
          if (iVar9 == 0) {
            trap(7);
          }
          if (((iVar2 != 0) || (pbVar10 != (byte *)0x0)) || (pbVar13 = pbVar19, iVar9 == 1)) {
            abStack_1c0[(int)pbVar10] = (char)iVar2 + 0x30;
            pbVar13 = pbVar19 + 1;
            pbVar10 = pbVar19;
          }
          iVar1 = iVar9 / 10;
          uVar11 = uVar11 - iVar2 * iVar9;
          iVar9 = iVar1;
          pbVar19 = pbVar13;
        } while (0 < iVar1);
        if ((uStack_b0 != 0) || (pbVar19 = abStack_1c0, 0 < (int)pbVar7)) {
          uVar11 = uStack_b0 * 10;
          abStack_1c0[(int)pbVar10] = 0x2e;
          pbVar22 = (byte *)0x0;
          pbVar10 = pbVar13;
          do {
            pbVar13 = pbVar10 + 1;
            do {
              uVar12 = uVar11;
              pbVar19 = abStack_1c0;
              if (4 < (int)pbVar22) goto LAB_0023e2bc;
              if ((int)pbVar7 < 0) {
                pbVar19 = abStack_1c0;
                if (uVar12 == 0) goto LAB_0023e2bc;
              }
              else {
                pbVar19 = abStack_1c0;
                if ((int)pbVar7 <= (int)pbVar22) goto LAB_0023e2bc;
              }
              pbVar22 = pbVar22 + 1;
              uVar11 = (uVar12 & 0xffff) * 10;
            } while ((uVar12 >> 0x10 == 0) && (uVar11 == 0));
            abStack_1c0[(int)pbVar10] = (char)(uVar12 >> 0x10) + 0x30;
            pbVar10 = pbVar13;
          } while( true );
        }
        goto LAB_0023e2bc;
      case 0x68:
        param_2 = pbVar18;
        goto LAB_0023ddd8;
      case 0x6c:
        goto switchD_0023ddf8_caseD_6c;
      case 0x70:
        iVar9 = 0x10;
        uVar11 = *param_3;
        break;
      case 0x73:
        pbVar19 = (byte *)*param_3;
        if (pbVar19 == (byte *)0x0) {
          pbVar19 = &DAT_002c5a30;
        }
        if ((int)pbVar7 < 0) {
          pbVar10 = (byte *)FUN_0025bcf8(pbVar19);
          goto LAB_0023e1b4;
        }
        pbVar10 = (byte *)0x0;
        if (((int)pbVar7 < 1) || (uVar14 = uVar15 & 4, *pbVar19 == 0)) goto LAB_0023e1b4;
        bVar5 = false;
        pbVar10 = (byte *)0x1;
        goto LAB_0023e178;
      }
      bVar6 = 0;
LAB_0023e1f8:
      if (-1 < (int)pbVar7) {
        uVar15 = uVar15 & 0xfffffffffffffff7;
      }
      pbVar19 = abStack_bf + 1;
      pbVar22 = pbVar7;
      if ((uVar11 != 0) || (pbVar7 != (byte *)0x0)) {
        uVar14 = uVar15 & 4;
        do {
          pbVar10 = pbVar19;
          uVar12 = (int)uVar11 / iVar9;
          if (iVar9 == 0) {
            trap(7);
          }
          pbVar19 = pbVar10 + -1;
          bVar3 = pcVar23[(int)uVar11 % iVar9];
          *pbVar19 = bVar3;
          if (iVar9 == 0) {
            trap(7);
          }
          uVar11 = uVar12;
        } while (uVar12 != 0);
        pcVar23 = "0123456789abcdef";
        if (bVar4) {
          pbVar7 = pbVar10 + -0x103;
          if ((iVar9 == 8) && (pbVar7 = pbVar10 + -0x103, bVar3 != 0x30)) {
            pbVar19 = pbVar10 + -2;
            *pbVar19 = 0x30;
            goto LAB_0023e2ac;
          }
          goto LAB_0023e2b0;
        }
      }
LAB_0023e2ac:
      uVar14 = uVar15 & 4;
      pbVar7 = pbVar19 + -0x102;
      goto LAB_0023e2b0;
    }
  }
switchD_0023ddf8_caseD_0:
  *param_1 = 0;
  return;
LAB_0023e178:
  if ((int)pbVar7 <= (int)pbVar10) goto LAB_0023e1b4;
  if (pbVar19[(int)pbVar10] == 0) {
    bVar6 = 0;
    goto LAB_0023e2b4;
  }
  pbVar10 = pbVar10 + 1;
  goto LAB_0023e178;
LAB_0023e1b4:
  uVar14 = uVar15 & 4;
  bVar5 = false;
  bVar6 = 0;
  goto LAB_0023e2b4;
switchD_0023ddf8_caseD_6c:
  param_2 = pbVar18;
  goto LAB_0023ddd8;
LAB_0023df64:
  if ((int)pbVar7 < 0) {
    if (uVar11 == 0) goto LAB_0023df88;
  }
  else if ((int)pbVar7 <= (int)pbVar22) goto LAB_0023df88;
  pbVar19 = pbVar19 + -1;
  pbVar22 = pbVar22 + 1;
  *pbVar19 = (byte)uVar11;
  uVar11 = uVar11 >> 8;
  goto LAB_0023df64;
LAB_0023df88:
  pbVar7 = pbVar19 + -0x102;
  bVar6 = 0;
LAB_0023e2b0:
  pbVar10 = abStack_1c0 + -(int)pbVar7;
LAB_0023e2b4:
  pbVar13 = pbVar10 + 1;
LAB_0023e2bc:
  param_3 = param_3 + 2;
  if (bVar6 == 0) {
    pbVar13 = pbVar10;
  }
  pbVar7 = pbVar13 + 2;
  if (!bVar5) {
    pbVar7 = pbVar13;
  }
  pbVar13 = pbVar7;
  if ((int)pbVar7 < (int)pbVar22) {
    pbVar13 = pbVar22;
  }
  if (((uVar15 == 0) && (uVar8 != 0)) && ((int)pbVar13 < (int)uVar8)) {
    iVar9 = uVar8 - (int)pbVar13;
    pbVar21 = param_1;
    param_1 = pbVar16;
    while( true ) {
      *pbVar21 = 0x20;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) break;
      pbVar21 = param_1;
      param_1 = param_1 + 1;
    }
    pbVar16 = param_1 + 1;
  }
  pbVar21 = param_1;
  pbVar17 = pbVar16;
  if (bVar6 != 0) {
    *param_1 = bVar6;
    pbVar17 = pbVar16 + 1;
    pbVar21 = pbVar16;
  }
  if (bVar5) {
    *pbVar21 = 0x30;
    pbVar21 = pbVar17 + 1;
    *pbVar17 = *pbVar18;
    pbVar17 = pbVar17 + 2;
  }
  if ((uVar15 == 8) && ((int)pbVar13 < (int)uVar8)) {
    iVar9 = uVar8 - (int)pbVar13;
    pbVar16 = pbVar21;
    pbVar21 = pbVar17;
    while( true ) {
      *pbVar16 = 0x30;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) break;
      pbVar16 = pbVar21;
      pbVar21 = pbVar21 + 1;
    }
    pbVar17 = pbVar21 + 1;
  }
  iVar9 = (int)pbVar22 - (int)pbVar7;
  param_1 = pbVar21;
  if ((int)pbVar7 < (int)pbVar22) {
    while( true ) {
      param_1 = pbVar17;
      *pbVar21 = 0x30;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) break;
      pbVar17 = param_1 + 1;
      pbVar21 = param_1;
    }
    pbVar17 = param_1 + 1;
  }
  pbVar10 = pbVar10 + -1;
  if (-1 < (int)pbVar10) {
    bVar6 = *pbVar19;
    pbVar16 = param_1;
    param_1 = pbVar17;
    while( true ) {
      pbVar10 = pbVar10 + -1;
      pbVar19 = pbVar19 + 1;
      *pbVar16 = bVar6;
      if ((int)pbVar10 < 0) break;
      bVar6 = *pbVar19;
      pbVar16 = param_1;
      param_1 = param_1 + 1;
    }
    pbVar17 = param_1 + 1;
  }
  pbVar16 = pbVar17;
  if ((uVar14 != 0) && (iVar9 = uVar8 - (int)pbVar13, pbVar7 = param_1, (int)pbVar13 < (int)uVar8))
  {
    while( true ) {
      param_1 = pbVar17;
      *pbVar7 = 0x20;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) break;
      pbVar7 = param_1;
      pbVar17 = param_1 + 1;
    }
    pbVar16 = param_1 + 1;
  }
LAB_0023e458:
  param_2 = param_2 + 2;
  goto LAB_0023dd80;
switchD_0023ddf8_caseD_1:
  *param_1 = *pbVar18;
  param_1 = pbVar16;
  pbVar16 = pbVar16 + 1;
  goto LAB_0023e458;
}

