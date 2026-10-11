/* Ghidra pseudocode. PS2 address: 0025dc18. Not validated source. */

int FUN_0025dc18(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  char cVar17;
  int iVar18;
  byte *pbVar19;
  char *pcVar20;
  char *pcVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  byte *pbVar26;
  int iVar27;
  long lVar28;
  undefined4 uVar29;
  char acStack_320 [255];
  char acStack_221 [353];
  int iStack_c0;
  code *pcStack_bc;
  undefined **ppuStack_b0;
  undefined4 uStack_ac;
  
  lVar28 = 0;
  iVar27 = 0;
  iStack_c0 = 0;
  pcStack_bc = (code *)0x0;
  pbVar15 = param_2 + 1;
LAB_0025dc6c:
  do {
    while( true ) {
      pbVar26 = pbVar15;
      bVar1 = *param_2;
      if (bVar1 == 0) {
        return iVar27;
      }
      piVar22 = (int *)param_1;
      if ((*(byte *)((int)&PTR_DAT_002c00a1 + (int)(char)bVar1) & 8) == 0) break;
      iVar18 = piVar22[1];
      while( true ) {
        if (iVar18 < 1) {
          lVar12 = FUN_00261fe8(param_1);
          if (lVar12 != 0) {
            return iVar27;
          }
          pbVar15 = (byte *)*piVar22;
        }
        else {
          pbVar15 = (byte *)*piVar22;
        }
        if ((*(byte *)((int)&PTR_DAT_002c00a1 + (uint)*pbVar15) & 8) == 0) break;
        *piVar22 = (int)(pbVar15 + 1);
        lVar28 = (long)((int)lVar28 + 1);
        piVar22[1] = piVar22[1] + -1;
        iVar18 = piVar22[1];
      }
      pbVar15 = pbVar26 + 1;
      param_2 = pbVar26;
    }
    pbVar19 = pbVar26 + -1;
    if (bVar1 == 0x25) {
      uVar24 = 0;
      uVar23 = 0;
      bVar4 = false;
      bVar10 = false;
      bVar6 = false;
      bVar2 = false;
      bVar11 = false;
      bVar3 = false;
      pbVar19 = pbVar26;
      while( true ) {
        bVar1 = *pbVar19;
        pbVar26 = pbVar19 + 1;
        param_2 = pbVar26;
        if (0x78 < bVar1) break;
        switch(bVar1) {
        case 0:
          return -1;
        default:
          goto switchD_0025dd34_caseD_1;
        case 0x25:
          goto LAB_0025dd40;
        case 0x2a:
          bVar3 = true;
          pbVar19 = pbVar26;
          break;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          uVar24 = (uVar24 * 10 + (int)(char)bVar1) - 0x30;
          pbVar19 = pbVar26;
          break;
        case 0x44:
          uVar23 = 1;
        case 100:
          uVar29 = 3;
          pcStack_bc = (code *)&LAB_002634a8;
          iStack_c0 = 10;
          goto LAB_0025df4c;
        case 0x45:
        case 0x47:
        case 0x65:
        case 0x66:
        case 0x67:
          uVar29 = 4;
          goto LAB_0025df4c;
        case 0x4c:
          bVar4 = true;
          pbVar19 = pbVar26;
          break;
        case 0x4f:
          uVar23 = 1;
        case 0x6f:
          uVar29 = 3;
          pcStack_bc = FUN_00263700;
          iStack_c0 = 8;
          goto LAB_0025df4c;
        case 0x58:
        case 0x78:
          bVar6 = true;
          pcStack_bc = FUN_00263700;
          uVar29 = 3;
          iStack_c0 = 0x10;
          goto LAB_0025df4c;
        case 0x5b:
          param_2 = (byte *)FUN_0025e720(acStack_320,pbVar26);
          bVar2 = true;
          uVar29 = 1;
          goto LAB_0025df4c;
        case 99:
          bVar2 = true;
          uVar29 = 0;
          goto LAB_0025df4c;
        case 0x68:
          bVar11 = true;
          pbVar19 = pbVar26;
          break;
        case 0x69:
          uVar29 = 3;
          iStack_c0 = 0;
          pcStack_bc = (code *)&LAB_002634a8;
          goto LAB_0025df4c;
        case 0x6c:
          uVar23 = 1;
          pbVar19 = pbVar26;
          break;
        case 0x6e:
          if (bVar3) {
            pbVar15 = pbVar19 + 2;
          }
          else if (bVar11) {
            *(short *)*param_3 = (short)lVar28;
            param_3 = param_3 + 2;
            pbVar15 = pbVar19 + 2;
          }
          else {
            pbVar15 = pbVar19 + 2;
            if (uVar23 == 0) {
              *(int *)*param_3 = (int)lVar28;
              param_3 = param_3 + 2;
            }
            else {
              *(long *)*param_3 = lVar28;
              param_3 = param_3 + 2;
            }
          }
          goto LAB_0025dc6c;
        case 0x70:
          bVar10 = true;
          bVar6 = true;
          uVar29 = 3;
          pcStack_bc = FUN_00263700;
          iStack_c0 = 0x10;
          goto LAB_0025df4c;
        case 0x73:
          uVar29 = 2;
          goto LAB_0025df4c;
        case 0x75:
          uVar29 = 3;
          pcStack_bc = FUN_00263700;
          iStack_c0 = 10;
          goto LAB_0025df4c;
        }
      }
switchD_0025dd34_caseD_1:
      pcStack_bc = (code *)&LAB_002634a8;
      uVar29 = 3;
      iStack_c0 = 10;
      uVar23 = uVar23 | *(byte *)((int)&PTR_DAT_002c00a1 + (int)(char)bVar1) & 1;
LAB_0025df4c:
      if ((piVar22[1] < 1) && (lVar12 = FUN_00261fe8(param_1), lVar12 != 0)) {
LAB_0025e6e4:
        if (iVar27 == 0) {
          return -1;
        }
        return iVar27;
      }
      if ((!bVar2) &&
         (pbVar15 = (byte *)*piVar22, (*(byte *)((int)&PTR_DAT_002c00a1 + (uint)*pbVar15) & 8) != 0)
         ) {
        iVar18 = piVar22[1];
        while( true ) {
          lVar28 = (long)((int)lVar28 + 1);
          piVar22[1] = iVar18 + -1;
          if (iVar18 + -1 < 1) {
            lVar12 = FUN_00261fe8(param_1);
            if (lVar12 != 0) goto LAB_0025e6e4;
          }
          else {
            *piVar22 = (int)(pbVar15 + 1);
          }
          pbVar15 = (byte *)*piVar22;
          if ((*(byte *)((int)&PTR_DAT_002c00a1 + (uint)*pbVar15) & 8) == 0) break;
          iVar18 = piVar22[1];
        }
      }
      iVar18 = (int)lVar28;
      switch(uVar29) {
      case 0:
        if (uVar24 == 0) {
          uVar24 = 1;
        }
        if (bVar3) {
          iVar25 = 0;
          uVar23 = piVar22[1];
          while (uVar23 < uVar24) {
            iVar25 = iVar25 + uVar23;
            uVar24 = uVar24 - uVar23;
            *piVar22 = *piVar22 + uVar23;
            lVar28 = FUN_00261fe8(param_1);
            if (lVar28 != 0) {
              lVar28 = (long)(iVar18 + iVar25);
              if (iVar25 == 0) goto LAB_0025e6e4;
              pbVar15 = param_2 + 1;
              goto LAB_0025dc6c;
            }
            uVar23 = piVar22[1];
          }
          piVar22[1] = uVar23 - uVar24;
          *piVar22 = *piVar22 + uVar24;
          lVar28 = (long)(int)(iVar18 + iVar25 + uVar24);
        }
        else {
          lVar12 = FUN_00260128(*param_3,1,uVar24,param_1);
          lVar28 = (long)(iVar18 + (int)lVar12);
          if (lVar12 == 0) goto LAB_0025e6e4;
          iVar27 = iVar27 + 1;
          param_3 = param_3 + 2;
        }
        break;
      case 1:
        if (uVar24 == 0) {
          uVar24 = 0xffffffff;
        }
        if (bVar3) {
          iVar25 = 0;
          pbVar15 = (byte *)*piVar22;
          while (acStack_320[*pbVar15] != '\0') {
            iVar14 = piVar22[1];
            *piVar22 = (int)(pbVar15 + 1);
            iVar25 = iVar25 + 1;
            uVar24 = uVar24 - 1;
            piVar22[1] = iVar14 + -1;
            if (uVar24 == 0) break;
            if (iVar14 + -1 < 1) {
              lVar28 = FUN_00261fe8(param_1);
              if (lVar28 != 0) {
                if (iVar25 == 0) goto LAB_0025e6e4;
                break;
              }
              pbVar15 = (byte *)*piVar22;
            }
            else {
              pbVar15 = (byte *)*piVar22;
            }
          }
          lVar28 = (long)(iVar18 + iVar25);
          if (iVar25 == 0) {
            return iVar27;
          }
          pbVar15 = param_2 + 1;
          goto LAB_0025dc6c;
        }
        pbVar15 = (byte *)*param_3;
        pbVar26 = (byte *)*piVar22;
        pbVar19 = pbVar15;
        while (acStack_320[*pbVar26] != '\0') {
          uVar24 = uVar24 - 1;
          piVar22[1] = piVar22[1] + -1;
          *pbVar19 = *pbVar26;
          *piVar22 = (int)(pbVar26 + 1);
          pbVar19 = pbVar19 + 1;
          if (uVar24 == 0) {
LAB_0025e198:
            iVar25 = (int)pbVar19 - (int)pbVar15;
            goto LAB_0025e19c;
          }
          if (piVar22[1] < 1) {
            lVar28 = FUN_00261fe8(param_1);
            if (lVar28 != 0) {
              if (pbVar19 != pbVar15) goto LAB_0025e198;
              goto LAB_0025e6e4;
            }
            pbVar26 = (byte *)*piVar22;
          }
          else {
            pbVar26 = (byte *)*piVar22;
          }
        }
        iVar25 = (int)pbVar19 - (int)pbVar15;
LAB_0025e19c:
        lVar28 = (long)(iVar18 + iVar25);
        if (iVar25 == 0) {
          return iVar27;
        }
        *pbVar19 = 0;
        iVar27 = iVar27 + 1;
        param_3 = param_3 + 2;
        break;
      case 2:
        if (uVar24 == 0) {
          uVar24 = 0xffffffff;
        }
        if (bVar3) {
          iVar25 = 0;
          pbVar15 = (byte *)*piVar22;
          while ((*(byte *)((int)&PTR_DAT_002c00a1 + (uint)*pbVar15) & 8) == 0) {
            iVar14 = piVar22[1];
            *piVar22 = (int)(pbVar15 + 1);
            iVar25 = iVar25 + 1;
            uVar24 = uVar24 - 1;
            piVar22[1] = iVar14 + -1;
            if (uVar24 == 0) break;
            if (iVar14 + -1 < 1) {
              lVar28 = FUN_00261fe8(param_1);
              if (lVar28 != 0) break;
              pbVar15 = (byte *)*piVar22;
            }
            else {
              pbVar15 = (byte *)*piVar22;
            }
          }
          lVar28 = (long)(iVar18 + iVar25);
          pbVar15 = param_2 + 1;
        }
        else {
          pbVar15 = (byte *)*param_3;
          iVar27 = iVar27 + 1;
          pbVar26 = pbVar15;
          ppuVar16 = &PTR_DAT_002c00a1;
          uVar29 = 0;
          do {
            pbVar19 = (byte *)*piVar22;
            while( true ) {
              if ((*(byte *)((uint)*pbVar19 + (int)ppuVar16) & 8) != 0) goto LAB_0025e2a8;
              uVar24 = uVar24 - 1;
              piVar22[1] = piVar22[1] + -1;
              *pbVar26 = *pbVar19;
              *piVar22 = (int)(pbVar19 + 1);
              pbVar26 = pbVar26 + 1;
              if (uVar24 == 0) goto LAB_0025e2a8;
              if (piVar22[1] < 1) break;
              pbVar19 = (byte *)*piVar22;
            }
            ppuStack_b0 = ppuVar16;
            uStack_ac = uVar29;
            lVar28 = FUN_00261fe8(param_1);
            ppuVar16 = ppuStack_b0;
            uVar29 = uStack_ac;
          } while (lVar28 == 0);
LAB_0025e2a8:
          *pbVar26 = 0;
          lVar28 = (long)(int)(pbVar26 + (iVar18 - (int)pbVar15));
          param_3 = param_3 + 2;
          pbVar15 = param_2 + 1;
        }
        goto LAB_0025dc6c;
      case 3:
        uVar24 = uVar24 - 1;
        pcVar20 = acStack_221 + 1;
        if (0x15c < uVar24) {
          uVar24 = 0x15c;
        }
        iVar25 = uVar24 + 1;
        bVar8 = true;
        bVar4 = true;
        bVar2 = true;
        if (iVar25 != 0) {
          pcVar21 = (char *)*piVar22;
          do {
            switch(*pcVar21) {
            case '+':
            case '-':
              if (!bVar4) goto switchD_0025e304_caseD_2c;
              bVar4 = false;
              break;
            default:
              goto switchD_0025e304_caseD_2c;
            case '0':
              if (iStack_c0 == 0) {
                bVar6 = true;
                iStack_c0 = 8;
              }
              uVar24 = 0xfffffd3f;
              bVar9 = 0;
              bVar7 = 1;
              bVar5 = 0;
              bVar1 = 0;
              if (!bVar2) {
                uVar24 = 0xfffffe3f;
                bVar9 = 0;
                bVar7 = 0;
                bVar5 = 0;
                bVar1 = 1;
              }
              goto LAB_0025e3d4;
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
              bVar8 = false;
              bVar6 = false;
              bVar4 = false;
              iStack_c0 = (int)*(short *)(&UNK_002c03c0 + iStack_c0 * 2);
              break;
            case '8':
            case '9':
              iVar14 = iStack_c0 * 2;
              iStack_c0 = (int)*(short *)(&UNK_002c03c0 + iVar14);
              if (8 < *(short *)(&UNK_002c03c0 + iVar14)) {
                uVar24 = 0xfffffe3f;
                bVar9 = 0;
                bVar7 = 0;
                bVar5 = 0;
                bVar1 = 1;
                goto LAB_0025e3d4;
              }
              goto switchD_0025e304_caseD_2c;
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
              if (iStack_c0 < 0xb) goto switchD_0025e304_caseD_2c;
              bVar8 = false;
              bVar6 = false;
              bVar4 = false;
              break;
            case 'X':
            case 'x':
              if (!bVar6) goto switchD_0025e304_caseD_2c;
              bVar1 = 1;
              uVar24 = 0xfffffeff;
              bVar9 = 1;
              bVar7 = 0;
              bVar5 = 1;
              if (pcVar20 != acStack_221 + 2) goto switchD_0025e304_caseD_2c;
              iStack_c0 = 0x10;
LAB_0025e3d4:
              uVar23 = uVar23 & uVar24;
              bVar8 = (bool)(bVar8 & bVar9);
              bVar6 = (bool)(bVar6 & bVar7);
              bVar4 = (bool)(bVar4 & bVar5);
              bVar2 = (bool)(bVar2 & bVar1);
            }
            *pcVar20 = *pcVar21;
            pcVar20 = pcVar20 + 1;
            iVar14 = piVar22[1];
            piVar22[1] = iVar14 + -1;
            if (iVar14 + -1 < 1) {
              lVar28 = FUN_00261fe8(param_1);
              if (lVar28 != 0) goto LAB_0025e420;
            }
            else {
              *piVar22 = *piVar22 + 1;
            }
            iVar25 = iVar25 + -1;
            if (iVar25 == 0) break;
            pcVar21 = (char *)*piVar22;
          } while( true );
        }
switchD_0025e304_caseD_2c:
LAB_0025e420:
        if (bVar8) {
          if (pcVar20 <= acStack_221 + 1) {
            return iVar27;
          }
          FUN_00263828(pcVar20[-1],param_1);
          return iVar27;
        }
        cVar17 = pcVar20[-1];
        if ((cVar17 == 'x') || (cVar17 == 'X')) {
          pcVar20 = pcVar20 + -1;
          FUN_00263828(cVar17,param_1);
        }
        if (!bVar3) {
          *pcVar20 = '\0';
          uVar13 = (*pcStack_bc)(acStack_221 + 1,0,iStack_c0);
          if (bVar10) {
            *(int *)*param_3 = (int)uVar13;
          }
          else if (bVar11) {
            *(short *)*param_3 = (short)uVar13;
          }
          else if (uVar23 == 0) {
            *(int *)*param_3 = (int)uVar13;
          }
          else {
            *(undefined8 *)*param_3 = uVar13;
          }
          param_3 = param_3 + 2;
          iVar27 = iVar27 + 1;
        }
        lVar28 = (long)(int)(pcVar20 + (iVar18 - (int)(acStack_221 + 1)));
        pbVar15 = param_2 + 1;
        goto LAB_0025dc6c;
      case 4:
        uVar24 = uVar24 - 1;
        pcVar20 = acStack_221 + 1;
        if (0x15c < uVar24) {
          uVar24 = 0x15c;
        }
        iVar25 = uVar24 + 1;
        uVar23 = uVar23 | 0x3c0;
        bVar6 = true;
        bVar2 = true;
        if (iVar25 != 0) {
          pcVar21 = (char *)*piVar22;
          do {
            switch(*pcVar21) {
            case '+':
            case '-':
              if (!bVar2) goto switchD_0025e55c_caseD_2c;
              uVar23 = uVar23 & 0xffffffbf;
              bVar2 = false;
              break;
            default:
              goto switchD_0025e55c_caseD_2c;
            case '.':
              if (!bVar6) goto switchD_0025e55c_caseD_2c;
              uVar23 = uVar23 & 0xfffffebf;
              bVar6 = false;
              bVar2 = false;
              break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
              uVar23 = uVar23 & 0xffffff3f;
              bVar2 = false;
              break;
            case 'E':
            case 'e':
              if ((uVar23 & 0x280) != 0x200) goto switchD_0025e55c_caseD_2c;
              uVar23 = uVar23 & 0xfffffcff | 0xc0;
              bVar6 = false;
              bVar2 = true;
            }
            *pcVar20 = *pcVar21;
            pcVar20 = pcVar20 + 1;
            iVar14 = piVar22[1];
            piVar22[1] = iVar14 + -1;
            if (iVar14 + -1 < 1) {
              lVar28 = FUN_00261fe8(param_1);
              if (lVar28 != 0) goto LAB_0025e5f8;
            }
            else {
              *piVar22 = *piVar22 + 1;
            }
            iVar25 = iVar25 + -1;
            if (iVar25 == 0) break;
            pcVar21 = (char *)*piVar22;
          } while( true );
        }
switchD_0025e55c_caseD_2c:
LAB_0025e5f8:
        if ((uVar23 & 0x80) != 0) {
          if ((uVar23 & 0x200) != 0) {
            if (pcVar20 <= acStack_221 + 1) {
              return iVar27;
            }
            do {
              pcVar20 = pcVar20 + -1;
              FUN_00263828(*pcVar20,param_1);
            } while (acStack_221 + 1 < pcVar20);
            return iVar27;
          }
          pcVar21 = pcVar20 + -1;
          cVar17 = *pcVar21;
          if ((cVar17 != 'e') && (cVar17 != 'E')) {
            FUN_00263828(cVar17,param_1);
            cVar17 = pcVar20[-2];
            pcVar21 = pcVar20 + -2;
          }
          pcVar20 = pcVar21;
          FUN_00263828(cVar17,param_1);
        }
        if (!bVar3) {
          *pcVar20 = '\0';
          uVar13 = FUN_0025e9c0(acStack_221 + 1);
          if (((uVar23 & 1) != 0) || (bVar4)) {
            *(undefined8 *)*param_3 = uVar13;
          }
          else {
            uVar29 = FUN_00257d50();
            *(undefined4 *)*param_3 = uVar29;
          }
          param_3 = param_3 + 2;
          iVar27 = iVar27 + 1;
        }
        lVar28 = (long)(int)(pcVar20 + (iVar18 - (int)(acStack_221 + 1)));
        pbVar15 = param_2 + 1;
        goto LAB_0025dc6c;
      default:
        pbVar15 = param_2 + 1;
        goto LAB_0025dc6c;
      }
      pbVar15 = param_2 + 1;
      goto LAB_0025dc6c;
    }
LAB_0025dd40:
    iVar18 = 0;
    do {
      if (piVar22[1] < 1) {
        lVar12 = FUN_00261fe8(param_1);
        if (lVar12 != 0) goto LAB_0025e6e4;
        pbVar15 = (byte *)*piVar22;
      }
      else {
        pbVar15 = (byte *)*piVar22;
      }
      if ((ulong)*pbVar15 != (long)(char)*pbVar19) {
        return iVar27;
      }
      *piVar22 = (int)(pbVar15 + 1);
      lVar28 = (long)((int)lVar28 + 1);
      pbVar19 = pbVar19 + 1;
      iVar18 = iVar18 + 1;
      piVar22[1] = piVar22[1] + -1;
    } while (iVar18 < 1);
    pbVar15 = pbVar26 + 1;
    param_2 = pbVar26;
  } while( true );
}

