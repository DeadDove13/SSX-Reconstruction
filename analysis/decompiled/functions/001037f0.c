/* Ghidra pseudocode. PS2 address: 001037f0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00103824) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001037f0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int aiStack_1a0 [8];
  int aiStack_180 [8];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int aiStack_e0 [8];
  int aiStack_c0 [4];
  int *piStack_b0;
  
  iVar12 = DAT_0027ba88;
  piVar15 = aiStack_1a0;
  piVar8 = aiStack_1a0;
  piVar9 = aiStack_1a0;
  if (*(int *)(param_2 + 0x18) % 6 != 0) {
    return;
  }
  if (*(int *)(param_2 + 0x8c) < 2) {
    return;
  }
  if (*(int *)(param_2 + 0x80) == 0) {
    return;
  }
  iVar10 = 0;
  piVar16 = (int *)(param_2 + 200);
  piVar14 = aiStack_180;
  piStack_b0 = piVar14;
  if (0 < *(int *)(param_2 + 0x8c)) {
    bVar3 = DAT_0027ba88 < 4;
    piVar13 = piVar16;
    do {
      iVar6 = *piVar13;
      *piVar15 = iVar10;
      if (iVar12 == 3) {
LAB_001038e0:
        iVar6 = *(int *)(iVar6 + 0x8440);
LAB_00103934:
        *piVar14 = iVar6;
      }
      else {
        if (bVar3) {
          if (iVar12 == 0) {
            iVar6 = *(int *)(iVar6 + 0x8414) - *(int *)(iVar6 + 0x8418);
          }
          else {
            iVar6 = *piVar13;
LAB_001038e8:
            if (*(int *)(iVar6 + 0x348) < 0) {
              fVar18 = (float)FUN_001055f8(iVar6);
              iVar6 = -(int)(fVar18 + (float)(*(int *)(iVar6 + 0x9c) * 0x14));
            }
            else {
              iVar6 = 0x7fffffff - *(int *)(iVar6 + 0x348);
            }
          }
          goto LAB_00103934;
        }
        if (iVar12 == 5) goto LAB_001038e0;
        if (iVar12 != 6) {
          iVar6 = *piVar13;
          goto LAB_001038e8;
        }
        *piVar14 = iVar10;
      }
      iVar10 = iVar10 + 1;
      piVar14 = piVar14 + 1;
      piVar13 = piVar13 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar10 < *(int *)(param_2 + 0x8c));
  }
  FUN_0023bed8(*(undefined4 *)(param_2 + 0x8c),piStack_b0,aiStack_1a0);
  if (*(int *)(piVar16[aiStack_1a0[0]] + 0x9c) == 0) {
    iVar10 = *(int *)(param_2 + 0x8c);
  }
  else {
    FUN_00201b78(DAT_002c56e8);
    iVar10 = *(int *)(param_2 + 0x8c);
  }
  iVar6 = 0;
  if (0 < iVar10) {
    do {
      *(int *)(piVar16[*piVar8] + 0x9c) = iVar6;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x8c));
  }
  uVar5 = DAT_002c102c;
  uVar4 = DAT_002c1028;
  uStack_160 = DAT_002a6ff8;
  uStack_158 = DAT_002a7000;
  uStack_150 = DAT_002a7008;
  uStack_140 = DAT_002a7010;
  uStack_138 = DAT_002a7018;
  uStack_130 = DAT_002a7020;
  uStack_120 = DAT_002a7028;
  uStack_118 = DAT_002a7030;
  uStack_110 = DAT_002a7038;
  uStack_100 = DAT_002a7040;
  uStack_f8 = DAT_002a7048;
  uStack_f0 = _DAT_002a7050;
  if (iVar12 == 2) {
    iVar10 = *(int *)(param_2 + 0x8c);
LAB_00103b78:
    iVar6 = *(int *)(param_2 + 0x80);
    if (0 < iVar10) {
      piVar15 = aiStack_c0;
      piVar8 = aiStack_e0;
      iVar11 = iVar10;
      do {
        iVar1 = *piVar9;
        if (*(int *)(piVar16[iVar1] + 0x340) == 0) {
          *piVar8 = iVar1;
          piVar8 = piVar8 + 1;
        }
        else {
          *piVar15 = iVar1;
          piVar15 = piVar15 + 1;
        }
        iVar11 = iVar11 + -1;
        piVar9 = piVar9 + 1;
      } while (iVar11 != 0);
    }
    iVar10 = iVar10 / iVar6;
    if (iVar6 == 0) {
      trap(7);
    }
    iVar6 = 0;
    iVar11 = FUN_0019c4d0(0x28acf8);
    fVar18 = DAT_002c1030;
    fVar20 = *(float *)(iVar11 + 0x38);
    if (fVar20 <= 0.0) {
      fVar20 = 1.0;
    }
    iVar11 = 0;
    if (0 < *(int *)(param_2 + 0x84)) {
      do {
        piVar8 = aiStack_e0 + iVar11;
        iVar1 = piVar16[*piVar8];
        iVar2 = piVar16[aiStack_c0[iVar6]];
        *(int *)(iVar1 + 0x8c) = aiStack_c0[iVar6];
        iVar2 = *(int *)(iVar2 + 0x9c);
        *(float *)(iVar1 + 0x94) = fVar20;
        fVar19 = (fVar20 - *(float *)(iVar1 + 0x2e8)) / fVar20;
        *(float *)(iVar1 + 0x90) = -fVar20;
        if (*(int *)(iVar1 + 0x9c) < iVar2) {
          if (iVar12 == 2) {
            pfVar7 = (float *)((int)&uStack_140 + *piVar8 * 4);
          }
          else {
            pfVar7 = (float *)((int)&uStack_100 + *piVar8 * 4);
          }
          fVar17 = *pfVar7;
          if (*pfVar7 < 0.0) {
            fVar17 = fVar20;
          }
          *(float *)(iVar1 + 0x94) = fVar17 + fVar19 * fVar18;
        }
        else {
          if (iVar12 == 2) {
            pfVar7 = (float *)((int)&uStack_160 + *piVar8 * 4);
          }
          else {
            pfVar7 = (float *)((int)&uStack_120 + *piVar8 * 4);
          }
          fVar17 = *pfVar7;
          if (0.0 < *pfVar7) {
            fVar17 = -fVar20;
          }
          *(float *)(iVar1 + 0x90) = fVar17 - fVar19 * fVar18;
        }
        iVar11 = iVar11 + 1;
        if (iVar10 == 0) {
          trap(7);
        }
        if (iVar11 % iVar10 == 0) {
          iVar6 = iVar6 + 1;
        }
      } while (iVar11 < *(int *)(param_2 + 0x84));
    }
  }
  else {
    if (iVar12 < 3) {
      iVar10 = *(int *)(param_2 + 0x8c);
      if (iVar12 == 0) {
        piVar8 = piVar16;
        if (0 < iVar10) {
          do {
            iVar12 = *piVar8;
            iVar10 = iVar10 + -1;
            *(undefined4 *)(iVar12 + 0x94) = uVar5;
            *(undefined4 *)(iVar12 + 0x90) = uVar4;
            piVar8 = piVar8 + 1;
          } while (iVar10 != 0);
        }
        iVar12 = 1;
        *(int *)(piVar16[aiStack_1a0[0]] + 0x8c) = aiStack_1a0[1];
        if (*(int *)(param_2 + 0x8c) < 2) {
          return;
        }
        piVar8 = aiStack_1a0;
        do {
          piVar8 = piVar8 + 1;
          iVar12 = iVar12 + 1;
          *(int *)(piVar16[*piVar8] + 0x8c) = piVar8[-1];
        } while (iVar12 < *(int *)(param_2 + 0x8c));
        return;
      }
    }
    else {
      iVar10 = *(int *)(param_2 + 0x8c);
      if (iVar12 == 4) goto LAB_00103b78;
    }
    iVar12 = 0;
    if (0 < iVar10) {
      do {
        iVar10 = *piVar16;
        iVar12 = iVar12 + 1;
        piVar16 = piVar16 + 1;
        *(undefined4 *)(iVar10 + 0x8c) = 0xffffffff;
      } while (iVar12 < *(int *)(param_2 + 0x8c));
    }
  }
  return;
}

