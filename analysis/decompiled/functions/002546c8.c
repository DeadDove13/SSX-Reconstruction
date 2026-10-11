/* Ghidra pseudocode. PS2 address: 002546c8. Not validated source. */

uint FUN_002546c8(int param_1,float *param_2,int param_3,int param_4,long param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint auStack_210 [20];
  float afStack_1c0 [20];
  float afStack_170 [19];
  float afStack_124 [21];
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  
  iVar13 = param_3 + 4;
  if (-1 < param_3 + -3) {
    iVar13 = param_3 + -3;
  }
  iStack_cc = (int)param_5;
  iVar13 = iVar13 >> 3;
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  param_4 = param_4 + -1;
  param_3 = param_3 + (iVar13 + 1) * -8;
  iVar8 = iVar13 - param_4;
  iVar9 = 0;
  iVar10 = *(int *)(&DAT_002bfdc8 + iStack_cc * 4);
  iStack_d0 = param_1;
  iStack_c8 = param_6;
  if (param_4 + iVar10 < 0) {
    uStack_bc = (uint)(iVar10 < 0);
    uStack_c0 = (uint)(iStack_cc < 3);
  }
  else {
    uStack_bc = (uint)(iVar10 < 0);
    uStack_c0 = (uint)(param_5 < 3);
    do {
      if (iVar8 < 0) {
        afStack_1c0[iVar9] = 0.0;
      }
      else {
        afStack_1c0[iVar9] = (float)*(int *)(iVar8 * 4 + iStack_c8);
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar9 <= param_4 + iVar10);
  }
  iVar8 = iVar10;
  if (uStack_bc == 0) {
    iVar9 = 0;
    do {
      fVar17 = 0.0;
      iVar12 = 0;
      if (-1 < param_4) {
        do {
          iVar2 = (param_4 + iVar9) - iVar12;
          iVar4 = iVar12 * 4;
          iVar12 = iVar12 + 1;
          fVar17 = fVar17 + *(float *)(iVar4 + iStack_d0) * afStack_1c0[iVar2];
        } while (iVar12 <= param_4);
      }
      iVar12 = iVar9 + 1;
      afStack_124[iVar9 + 1] = fVar17;
      iVar9 = iVar12;
    } while (iVar12 <= iVar10);
  }
LAB_00254864:
  fVar17 = afStack_124[iVar8 + 1];
  if (0 < iVar8) {
    pfVar7 = afStack_124 + iVar8;
    puVar5 = auStack_210;
    iVar9 = iVar8;
    do {
      fVar14 = *pfVar7;
      pfVar7 = pfVar7 + -1;
      iVar9 = iVar9 + -1;
      fVar15 = fVar17 - (float)(int)(fVar17 * 0.00390625) * 256.0;
      fVar17 = fVar14 + (float)(int)(fVar17 * 0.00390625);
      *puVar5 = (int)fVar15;
      puVar5 = puVar5 + 1;
    } while (0 < iVar9);
  }
  fVar17 = (float)FUN_00255808(fVar17,param_3);
  iStack_c4 = 0;
  fVar14 = (float)FUN_002556f8(fVar17 * 0.125);
  fVar17 = fVar17 - fVar14 * 8.0;
  uVar16 = (uint)fVar17;
  fVar17 = fVar17 - (float)(int)uVar16;
  if (param_3 < 1) {
    if (param_3 == 0) {
      iStack_c4 = (int)auStack_210[iVar8 + -1] >> 8;
    }
    else if (0.5 <= fVar17) {
      iStack_c4 = 2;
    }
  }
  else {
    uVar3 = auStack_210[iVar8 + -1];
    iVar9 = (int)uVar3 >> (8U - param_3 & 0x1f);
    uVar16 = uVar16 + iVar9;
    uVar3 = uVar3 - (iVar9 << (8U - param_3 & 0x1f));
    iStack_c4 = (int)uVar3 >> (7U - param_3 & 0x1f);
    auStack_210[iVar8 + -1] = uVar3;
  }
  if (0 < iStack_c4) {
    uVar16 = uVar16 + 1;
    bVar11 = false;
    puVar5 = auStack_210;
    iVar9 = iVar8;
    if (0 < iVar8) {
      do {
        iVar12 = *puVar5;
        if (bVar11) {
          iVar2 = 0xff - iVar12;
LAB_002549e4:
          *puVar5 = iVar2;
        }
        else {
          iVar2 = 0x100 - iVar12;
          if (iVar12 != 0) {
            bVar11 = true;
            goto LAB_002549e4;
          }
        }
        iVar9 = iVar9 + -1;
        puVar5 = puVar5 + 1;
      } while (iVar9 != 0);
    }
    if (0 < param_3) {
      if (param_3 == 1) {
        puVar5 = auStack_210 + iVar8 + -1;
        uVar3 = *puVar5 & 0x7f;
      }
      else {
        if (param_3 != 2) goto LAB_00254a4c;
        puVar5 = auStack_210 + iVar8 + -1;
        uVar3 = *puVar5 & 0x3f;
      }
      *puVar5 = uVar3;
    }
LAB_00254a4c:
    if ((iStack_c4 == 2) && (fVar17 = 1.0 - fVar17, bVar11)) {
      fVar14 = (float)FUN_00255808(param_3);
      fVar17 = fVar17 - fVar14;
    }
  }
  iVar9 = iVar8 + -1;
  if (fVar17 == 0.0) {
    uVar3 = 0;
    if (iVar10 <= iVar9) {
      puVar5 = auStack_210 + iVar9;
      do {
        uVar1 = *puVar5;
        iVar9 = iVar9 + -1;
        puVar5 = puVar5 + -1;
        uVar3 = uVar3 | uVar1;
      } while (iVar10 <= iVar9);
    }
    if (uVar3 != 0) goto LAB_00254bcc;
    iVar9 = 1;
    if (auStack_210[iVar10 + -1] == 0) {
      do {
        iVar9 = iVar9 + 1;
      } while (auStack_210[iVar10 - iVar9] == 0);
      iVar9 = iVar8 + iVar9;
    }
    else {
      iVar9 = iVar8 + 1;
    }
    iVar12 = iVar8 + 1;
    iVar8 = iVar9;
    if (iVar12 <= iVar9) {
      do {
        iVar2 = 0;
        fVar17 = 0.0;
        afStack_1c0[param_4 + iVar12] = (float)*(int *)((iVar13 + iVar12) * 4 + iStack_c8);
        if (-1 < param_4) {
          do {
            iVar4 = (param_4 + iVar12) - iVar2;
            iVar6 = iVar2 * 4;
            iVar2 = iVar2 + 1;
            fVar17 = fVar17 + *(float *)(iVar6 + iStack_d0) * afStack_1c0[iVar4];
          } while (iVar2 <= param_4);
        }
        iVar2 = iVar12 + 1;
        afStack_124[iVar12 + 1] = fVar17;
        iVar12 = iVar2;
      } while (iVar2 <= iVar9);
    }
    goto LAB_00254864;
  }
LAB_00254bcc:
  if (fVar17 == 0.0) {
    iVar8 = iVar8 + -1;
    uVar3 = auStack_210[iVar8];
    while (param_3 = param_3 + -8, uVar3 == 0) {
      iVar8 = iVar8 + -1;
      uVar3 = auStack_210[iVar8];
    }
  }
  else {
    fVar17 = (float)FUN_00255808(fVar17,-param_3);
    puVar5 = auStack_210 + iVar8;
    if (256.0 <= fVar17) {
      iVar8 = iVar8 + 1;
      *puVar5 = (int)(fVar17 - (float)(int)(fVar17 * 0.00390625) * 256.0);
      auStack_210[iVar8] = (int)(float)(int)(fVar17 * 0.00390625);
      param_3 = param_3 + 8;
    }
    else {
      auStack_210[iVar8] = (int)fVar17;
    }
  }
  fVar17 = (float)FUN_00255808(0x3f800000,param_3);
  iVar13 = iVar8;
  if (-1 < iVar8) {
    puVar5 = auStack_210 + iVar8;
    pfVar7 = afStack_124 + iVar8 + 1;
    iVar9 = iVar8;
    do {
      uVar3 = *puVar5;
      iVar9 = iVar9 + -1;
      puVar5 = puVar5 + -1;
      fVar14 = fVar17 * (float)(int)uVar3;
      fVar17 = fVar17 * 0.00390625;
      *pfVar7 = fVar14;
      pfVar7 = pfVar7 + -1;
    } while (-1 < iVar9);
  }
  do {
    if (iVar13 < 0) {
      if (uStack_c0 == 0) {
        iVar13 = iVar8;
        if (iStack_cc == 3) {
          while (iVar10 = iVar8, 0 < iVar13) {
            fVar17 = afStack_170[iVar13];
            fVar14 = afStack_170[iVar13 + -1];
            fVar15 = fVar14 + fVar17;
            afStack_170[iVar13] = fVar17 + (fVar14 - fVar15);
            afStack_170[iVar13 + -1] = fVar15;
            iVar13 = iVar13 + -1;
          }
          while (1 < iVar10) {
            fVar17 = afStack_170[iVar10];
            fVar14 = afStack_170[iVar10 + -1];
            fVar15 = fVar14 + fVar17;
            afStack_170[iVar10] = fVar17 + (fVar14 - fVar15);
            afStack_170[iVar10 + -1] = fVar15;
            iVar10 = iVar10 + -1;
          }
          fVar17 = 0.0;
          for (; 1 < iVar8; iVar8 = iVar8 + -1) {
            fVar17 = fVar17 + afStack_170[iVar8];
          }
          if (iStack_c4 == 0) {
            param_2[2] = fVar17;
            *param_2 = afStack_170[0];
            param_2[1] = afStack_170[1];
          }
          else {
            *param_2 = -afStack_170[0];
            param_2[1] = -afStack_170[1];
            param_2[2] = -fVar17;
          }
        }
      }
      else if (iStack_cc < 1) {
        if (iStack_cc == 0) {
          fVar17 = 0.0;
          if (iVar8 < 0) {
            *param_2 = 0.0;
          }
          else {
            do {
              pfVar7 = afStack_170 + iVar8;
              iVar8 = iVar8 + -1;
              fVar17 = fVar17 + *pfVar7;
            } while (-1 < iVar8);
            *param_2 = fVar17;
          }
          if (iStack_c4 != 0) {
            *param_2 = -fVar17;
          }
        }
      }
      else {
        fVar17 = 0.0;
        iVar13 = iVar8;
        if (iVar8 < 0) {
          *param_2 = 0.0;
        }
        else {
          do {
            iVar10 = iVar13 + -1;
            fVar17 = fVar17 + afStack_170[iVar13];
            iVar13 = iVar10;
          } while (-1 < iVar10);
          *param_2 = fVar17;
        }
        if (iStack_c4 != 0) {
          *param_2 = -fVar17;
        }
        afStack_170[0] = afStack_170[0] - fVar17;
        iVar13 = 1;
        if (0 < iVar8) {
          do {
            pfVar7 = afStack_170 + iVar13;
            iVar13 = iVar13 + 1;
            afStack_170[0] = afStack_170[0] + *pfVar7;
          } while (iVar13 <= iVar8);
        }
        param_2[1] = afStack_170[0];
        if (iStack_c4 != 0) {
          param_2[1] = -afStack_170[0];
        }
      }
      return uVar16 & 7;
    }
    fVar17 = 0.0;
    iVar9 = 0;
    if (uStack_bc == 0) {
      iVar12 = iVar8 - iVar13;
      if (iVar12 < 0) goto LAB_00254d80;
      do {
        iVar2 = iVar13 + iVar9;
        iVar4 = iVar9 * 4;
        iVar9 = iVar9 + 1;
        fVar17 = fVar17 + *(float *)(&DAT_002bfdd8 + iVar4) * afStack_124[iVar2 + 1];
        if (iVar10 < iVar9) goto LAB_00254d80;
        iVar2 = iVar12 * 4;
      } while (iVar9 <= iVar12);
    }
    else {
      iVar12 = iVar8 - iVar13;
LAB_00254d80:
      iVar2 = iVar12 << 2;
    }
    *(float *)((int)afStack_170 + iVar2) = fVar17;
    iVar13 = iVar13 + -1;
  } while( true );
}

