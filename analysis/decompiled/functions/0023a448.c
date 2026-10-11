/* Ghidra pseudocode. PS2 address: 0023a448. Not validated source. */

uint FUN_0023a448(long param_1,long param_2,uint param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  short *psVar16;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  uVar13 = param_3 & 0xf;
  iVar3 = (&DAT_002a33c8)[uVar13];
  uStack_b0 = 0;
  iStack_a8 = 0x40;
  if (param_2 < 1) {
    uStack_b0 = 0;
  }
  else {
    psVar16 = (short *)(iVar3 + 0x10);
    do {
      iStack_ac = 0;
      if (*(int *)(iVar3 + 0x38) != 0) {
        FUN_0023ee58();
      }
      iVar10 = *(int *)(iVar3 + 0x28);
      uVar15 = iVar10 - 1;
      uVar14 = uVar15;
      if ((param_3 & 0x40) != 0) {
        uVar14 = *(int *)(iVar3 + 0x2c) - 1;
      }
      iVar11 = (&DAT_002a33c8)[uVar13];
      if (iStack_a8 < iVar10) {
        iStack_a8 = iVar10;
      }
      iVar10 = 0;
      if (param_1 == 0) {
LAB_0023a534:
        iVar11 = *(int *)(iVar11 + 0x30);
      }
      else {
        if ((*(uint *)(iVar11 + 0x34) & 0x100) != 0) {
          iVar10 = FUN_0025bcf8(param_1);
          iVar10 = iVar10 + 1;
          goto LAB_0023a534;
        }
        iVar11 = *(int *)(iVar11 + 0x30);
      }
      iVar11 = (int)param_2 + iVar11 + iVar10;
      iVar10 = iVar11 + uVar14 + 0x10;
      if ((param_3 & 0x20) == 0) {
        psVar8 = psVar16;
        if ((param_3 & 0x10) == 0) {
          do {
            psVar8 = *(short **)(psVar8 + 8);
          } while (*(int *)(psVar8 + 2) < iVar10);
          sVar1 = *psVar8;
        }
        else {
          do {
            psVar8 = *(short **)(psVar8 + 10);
          } while (*(int *)(psVar8 + 2) < iVar10);
          sVar1 = *psVar8;
        }
        psVar7 = (short *)0x0;
        if (sVar1 != 0x4253) {
          psVar7 = psVar8;
        }
      }
      else {
        iVar6 = iVar10 + -1;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        psVar7 = (short *)0x0;
        if ((param_3 & 0x10) != 0) {
          psVar8 = *(short **)(iVar3 + 0x24);
          do {
            if (iVar6 < *(int *)(psVar8 + 2)) {
              if (*psVar8 == 0x4253) goto LAB_0023a66c;
              iVar6 = *(int *)(psVar8 + 2);
              psVar7 = psVar8;
            }
            psVar8 = *(short **)(psVar8 + 10);
          } while( true );
        }
        psVar8 = *(short **)(iVar3 + 0x20);
        psVar9 = psVar7;
        if (*(int *)(psVar8 + 2) <= iVar6) goto LAB_0023a594;
        sVar1 = *psVar8;
        psVar7 = (short *)0x0;
        while (psVar9 = psVar8, sVar1 != 0x4253) {
          iVar6 = *(int *)(psVar9 + 2);
          psVar8 = psVar9;
LAB_0023a594:
          do {
            psVar8 = *(short **)(psVar8 + 8);
          } while (*(int *)(psVar8 + 2) <= iVar6);
          sVar1 = *psVar8;
          psVar7 = psVar9;
        }
      }
LAB_0023a66c:
      if (psVar7 == (short *)0x0) {
        if (DAT_002c5a0c != (code *)0x0) {
          iStack_ac = (*DAT_002c5a0c)(param_1,param_2,param_3);
        }
        iVar10 = *(int *)(iVar3 + 0x38);
      }
      else {
        iVar6 = *(int *)(psVar7 + 4);
        iVar4 = *(int *)(psVar7 + 10);
        psVar8 = (short *)0x0;
        uVar2 = psVar7[1];
        iVar12 = *(int *)(psVar7 + 8);
        uVar5 = *(undefined4 *)(psVar7 + 6);
        *(int *)(iVar4 + 0x10) = iVar12;
        *(int *)(iVar12 + 0x14) = iVar4;
        psVar7[1] = uVar2 & 0xbfff;
        *psVar7 = 0x424f;
        iVar4 = *(int *)(psVar7 + 2);
        if ((param_3 & 0x10) == 0) {
          uStack_b0 = (int)psVar7 + uVar14 + 0x10 & ~uVar14;
        }
        else {
          uStack_b0 = (int)psVar7 + (iVar4 - iVar11) & ~uVar14;
          psVar8 = psVar7;
        }
        iVar12 = uStack_b0 - 0x10;
        *(int *)(uStack_b0 - 8) = iVar6;
        *(undefined4 *)(uStack_b0 - 4) = uVar5;
        if (iStack_a8 < iVar4 - iVar10) {
          if ((param_3 & 0x10) == 0) {
            psVar7 = (short *)(uStack_b0 + iVar11 + uVar15 & ~uVar15);
            *(short **)(iVar6 + 0xc) = psVar7;
            *(int *)(*(int *)(uStack_b0 - 4) + 8) = iVar12;
            FUN_0023abc0(psVar7,0,0,0,0,iVar12,*(undefined4 *)(uStack_b0 - 8));
            iVar10 = *(int *)(psVar7 + 4);
            psVar8 = *(short **)(iVar3 + 0x20);
            if ((short *)((int)psVar8 + ((uint)(*(int *)(iVar3 + 0x24) - (int)psVar8) >> 1)) <
                psVar7) {
              uVar2 = psVar7[1];
              psVar9 = psVar16;
              do {
                psVar9 = *(short **)(psVar9 + 10);
              } while (psVar7 < psVar9);
              psVar8 = *(short **)(psVar9 + 8);
            }
            else {
              uVar2 = psVar7[1];
              for (; psVar8 < psVar7; psVar8 = *(short **)(psVar8 + 8)) {
              }
              psVar9 = *(short **)(psVar8 + 10);
            }
            *(short **)(psVar7 + 8) = psVar8;
            *(short **)(psVar7 + 10) = psVar9;
            *(short **)(psVar9 + 8) = psVar7;
            *(int *)(psVar7 + 2) = (iVar10 - (int)psVar7) + -0x10;
            *(short **)(psVar8 + 10) = psVar7;
            psVar7[1] = uVar2 | 0x4000;
            *psVar7 = 0x4246;
            *(short **)(uStack_b0 - 8) = psVar7;
          }
          else {
            *(int *)(*(int *)(psVar8 + 4) + 0xc) = iVar12;
            uVar5 = *(undefined4 *)(psVar8 + 4);
            *(short **)(uStack_b0 - 4) = psVar8;
            *(undefined4 *)(uStack_b0 - 8) = uVar5;
            FUN_0023abc0(psVar8,0,0,0,0,*(undefined4 *)(psVar8 + 6),iVar12);
            psVar7 = *(short **)(iVar3 + 0x20);
            iVar10 = *(int *)(psVar8 + 4);
            if ((short *)((int)psVar7 + ((uint)(*(int *)(iVar3 + 0x24) - (int)psVar7) >> 1)) <
                psVar8) {
              uVar2 = psVar8[1];
              psVar9 = psVar16;
              do {
                psVar9 = *(short **)(psVar9 + 10);
              } while (psVar8 < psVar9);
              psVar7 = *(short **)(psVar9 + 8);
            }
            else {
              uVar2 = psVar8[1];
              for (; psVar7 < psVar8; psVar7 = *(short **)(psVar7 + 8)) {
              }
              psVar9 = *(short **)(psVar7 + 10);
            }
            *(short **)(psVar8 + 8) = psVar7;
            *(short **)(psVar8 + 10) = psVar9;
            *(short **)(psVar9 + 8) = psVar8;
            *psVar8 = 0x4246;
            *(int *)(psVar8 + 2) = (iVar10 - (int)psVar8) + -0x10;
            *(short **)(psVar7 + 10) = psVar8;
            psVar8[1] = uVar2 | 0x4000;
          }
        }
        else {
          *(int *)(iVar6 + 0xc) = iVar12;
          *(int *)(*(int *)(uStack_b0 - 4) + 8) = iVar12;
        }
        param_3 = param_3 | *(uint *)(iVar3 + 0x34) & 0x700;
        if (param_1 == 0) {
          param_3 = param_3 & 0xfffffeff;
        }
        FUN_0023abc0(iVar12,param_1,param_2,*(undefined4 *)(iVar3 + 0x30),param_3,
                     *(undefined4 *)(uStack_b0 - 4),*(undefined4 *)(uStack_b0 - 8));
        iVar10 = *(int *)(iVar3 + 0x38);
      }
      if (iVar10 != 0) {
        FUN_0023ea60();
      }
      uVar13 = param_3 & 0xf;
    } while (iStack_ac == 1);
  }
  return uStack_b0;
}

