/* Ghidra pseudocode. PS2 address: 001b9fd0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001ba174) */
/* WARNING: Removing unreachable block (ram,0x001ba24c) */
/* WARNING: Removing unreachable block (ram,0x001ba26c) */

void FUN_001b9fd0(undefined8 param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  undefined8 uVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  FUN_001b9f68();
  lVar7 = FUN_001a3260(*(undefined4 *)(DAT_002859e4 + 0x30));
  if (lVar7 != 0) {
    return;
  }
  iVar16 = (int)param_1;
  switch(DAT_0027ba88) {
  case 3:
  case 5:
    iVar20 = (int)*(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14);
    if (iVar20 - 1U < 10) {
      if (iVar20 != (int)*(float *)(iVar16 + 0x594) + -1) goto LAB_001ba100;
      iVar10 = 0;
      do {
        if (3 < iVar10) goto switchD_001ba060_caseD_1;
        iVar14 = *(int *)(iVar10 * 0x80 + DAT_002859e4 + 0xa4);
        iVar10 = iVar10 + 1;
      } while ((iVar14 == 0) || (-1 < *(int *)(iVar14 + 0x348)));
      if (iVar20 == 10) {
        FUN_001f20a8(DAT_002c56e8);
      }
      FUN_001feb30(DAT_002c56e8);
    }
  }
switchD_001ba060_caseD_1:
LAB_001ba100:
  fVar5 = DAT_002c3488;
  fVar23 = 1.0;
  iVar20 = 0;
  *(float *)(iVar16 + 0x594) = (float)(int)*(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14);
  do {
    iVar10 = *(int *)(iVar20 * 0x80 + DAT_002859e4 + 0xa4);
    if (iVar10 != 0) {
      iVar14 = *(int *)(iVar10 + 0x350);
      pfVar13 = (float *)(iVar16 + iVar20 * 0x124 + 0x104);
      pfVar13[0x28] = 0.0;
      pfVar13[0x29] = 0.0;
      fVar6 = (float)(((int)pfVar13[0x27] + 1) % 0x36);
      pfVar13[0x27] = fVar6;
      if ((iVar14 == 0x14) || (*(int *)(iVar10 + 0x210) == 0)) {
        if (0x12 < (int)fVar6) {
          pfVar13[0x28] = 1.4013e-45;
        }
      }
      else {
        pfVar13[0x27] = 0.0;
      }
      fVar6 = (float)FUN_00136a70(iVar10 + 0x8370);
      if ((int)fVar6 < 1) {
        pfVar13[1] = 0.0;
LAB_001ba294:
        pfVar13[2] = 0.0;
        fVar6 = *(float *)(iVar10 + 0x1c);
      }
      else {
        fVar17 = pfVar13[1];
        if ((int)fVar6 < (int)fVar17) {
          pfVar13[1] = 0.0;
          goto LAB_001ba294;
        }
        fVar21 = (float)((int)fVar17 + -0x32);
        if (((int)fVar17 <= (int)fVar6 + 0x32) &&
           (fVar21 = (float)((int)fVar17 + 0x32), (int)fVar6 + -0x32 <= (int)fVar17)) {
          fVar21 = fVar6;
        }
        pfVar13[1] = fVar21;
        fVar6 = (float)FUN_00136af0(iVar10 + 0x8370);
        pfVar13[2] = fVar6;
        if ((*(uint *)(iVar16 + 0xf4) & 0x2000) == 0) {
          fVar6 = *(float *)(iVar10 + 0x1c);
        }
        else if ((int)pfVar13[1] % 100 < (int)(float)(int)fVar17 % 100) {
          FUN_00202200(DAT_002c56e8);
          fVar6 = *(float *)(iVar10 + 0x1c);
        }
        else {
          fVar6 = *(float *)(iVar10 + 0x1c);
        }
      }
      fVar17 = pfVar13[0x1f];
      if (fVar6 + DAT_002c348c < fVar17) {
        fVar6 = fVar17 - DAT_002c348c;
      }
      else if (fVar17 < fVar6 - DAT_002c348c) {
        fVar6 = fVar17 + DAT_002c348c;
      }
      fVar17 = pfVar13[0x1f];
      if (((fVar17 < DAT_002c3490) && (DAT_002c3490 <= fVar6)) ||
         ((fVar17 < DAT_002c3494 && (DAT_002c3494 <= fVar6)))) {
LAB_001ba34c:
        FUN_00200ab0(DAT_002c56e8);
LAB_001ba358:
        pfVar13[0x1f] = fVar6;
      }
      else {
        if (1.0 <= fVar17) goto LAB_001ba358;
        if (1.0 <= fVar6) goto LAB_001ba34c;
        pfVar13[0x1f] = fVar6;
      }
      fVar6 = (float)FUN_00136a48(iVar10 + 0x8370);
      fVar17 = pfVar13[0x20];
      if (fVar6 + DAT_002c3498 < fVar17) {
        fVar6 = fVar17 - DAT_002c3498;
      }
      else if (fVar17 < fVar6 - DAT_002c3498) {
        fVar6 = fVar17 + DAT_002c3498;
      }
      pfVar13[0x20] = fVar6;
      fVar17 = DAT_002c349c;
      fVar21 = pfVar13[0x1f];
      pfVar15 = (float *)&DAT_00291290;
      fVar22 = 0.0;
      iVar14 = 0;
      pfVar9 = pfVar13 + 3;
      pfVar11 = pfVar13 + 4;
      do {
        if (fVar22 < fVar21) {
          fVar18 = fVar21;
          if (*pfVar11 == 0.0) {
            FUN_00200aa8(DAT_002c56e8,iVar14);
            *pfVar11 = 1.4013e-45;
          }
          else {
            *pfVar11 = 1.4013e-45;
          }
        }
        else {
          *pfVar11 = 0.0;
          fVar18 = fVar6 + fVar21;
        }
        fVar18 = fVar18 / fVar17;
        if (fVar18 < fVar22) {
          fVar18 = 0.0;
        }
        else if (1.0 < fVar18) {
          fVar18 = 1.0;
        }
        fVar19 = *pfVar15;
        pfVar1 = pfVar15 + 1;
        iVar14 = iVar14 + 1;
        fVar21 = fVar21 - fVar17;
        pfVar11 = pfVar11 + 2;
        pfVar15 = pfVar15 + 5;
        *pfVar9 = fVar18 * *pfVar1 + (fVar23 - fVar18) * fVar19;
        pfVar9 = pfVar9 + 2;
      } while (iVar14 < 0xe);
      pfVar13[0x21] = fVar23;
      pfVar13[0x22] = 0.0;
      piVar12 = (int *)(iVar10 + 0x8470);
      iVar14 = 9;
      do {
        if (*piVar12 == 2) {
          fVar6 = (float)piVar12[3];
LAB_001ba4b8:
          fVar6 = (float)FUN_001bcff0(fVar6 / (float)piVar12[2],DAT_002c34a0,param_1);
          pfVar13[0x21] = fVar6 + 1.0;
          pfVar13[0x22] = (float)piVar12[3] / (float)piVar12[2];
        }
        else if (*piVar12 == 3) {
          fVar6 = (float)piVar12[3];
          goto LAB_001ba4b8;
        }
        iVar14 = iVar14 + -1;
        piVar12 = piVar12 + 4;
      } while (-1 < iVar14);
      if (0.0 < pfVar13[0x24]) {
        fVar6 = pfVar13[0x24] + fVar5;
        pfVar13[0x24] = fVar6;
        if (fVar23 < fVar6) {
          pfVar13[0x24] = 0.0;
        }
        fVar6 = *(float *)(iVar10 + 0xe0);
      }
      else {
        fVar6 = *(float *)(iVar10 + 0xe0);
      }
      if (DAT_002c34a4 <= fVar6) {
        if (pfVar13[0x23] == 0.0) {
          pfVar13[0x24] = fVar5;
          pfVar13[0x23] = 1.4013e-45;
        }
      }
      else {
        pfVar13[0x23] = 0.0;
      }
      fVar6 = (float)FUN_001055f8(iVar10);
      if (-1 < *(int *)(iVar10 + 0x348)) {
        fVar6 = 0.0;
      }
      fVar17 = 36.0;
      pfVar11 = pfVar13 + 0x2a;
      for (iVar14 = 0; iVar14 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar14 = iVar14 + 1)
      {
        uVar8 = FUN_00189b78(DAT_002859e4,iVar14);
        fVar21 = (float)FUN_001055f8(uVar8);
        *pfVar11 = *pfVar11 - (*pfVar11 - (fVar21 - fVar6)) / fVar17;
        pfVar11 = pfVar11 + 1;
      }
      iVar14 = *(int *)(iVar16 + 0x1c);
      iVar2 = *(int *)(iVar10 + 0x9c);
      iVar3 = *(int *)(iVar10 + 0x394);
      iVar4 = *(int *)(iVar10 + 0x144);
      if (0 < iVar14) {
        pfVar11 = pfVar13 + 0x30;
        pfVar9 = (float *)(iVar16 + 0x20);
        do {
          fVar17 = *pfVar9;
          iVar14 = iVar14 + -1;
          pfVar9 = pfVar9 + 1;
          *pfVar11 = *pfVar11 - (*pfVar11 - (fVar17 - fVar6)) / 36.0;
          pfVar11 = pfVar11 + 1;
        } while (iVar14 != 0);
      }
      if (iVar2 == 0) {
        if (*pfVar13 < 1.0) {
          *pfVar13 = *pfVar13 + DAT_002c34a8;
        }
        else {
          *pfVar13 = 1.0;
        }
      }
      else {
        *pfVar13 = 0.0;
      }
      if (iVar4 != *(int *)(iVar3 + 0x28)) {
        pfVar13[0x29] = 1.4013e-45;
      }
      if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
        fVar6 = pfVar13[0x26];
        if (0.0 < fVar6) {
          pfVar13[0x26] = fVar6 + fVar5;
          if (fVar23 < fVar6 + fVar5) {
            pfVar13[0x26] = 0.0;
          }
        }
        else {
          iVar10 = *(int *)(iVar10 + 0x8440);
          if (iVar10 < *(int *)(iVar16 + 0xe8)) {
            iVar14 = *(int *)(iVar16 + 0xec);
LAB_001ba6fc:
            if (iVar10 < iVar14) {
              iVar14 = *(int *)(iVar16 + 0xf0);
            }
            else {
              if (pfVar13[0x25] == 1.4013e-45) {
                pfVar13[0x25] = 2.8026e-45;
                goto LAB_001ba74c;
              }
              iVar14 = *(int *)(iVar16 + 0xf0);
            }
            if ((iVar10 < iVar14) || (pfVar13[0x25] != 0.0)) goto LAB_001ba758;
            pfVar13[0x25] = 1.4013e-45;
          }
          else {
            if (pfVar13[0x25] != 2.8026e-45) {
              iVar14 = *(int *)(iVar16 + 0xec);
              goto LAB_001ba6fc;
            }
            pfVar13[0x25] = 4.2039e-45;
          }
LAB_001ba74c:
          pfVar13[0x26] = fVar6 + fVar5;
        }
      }
    }
LAB_001ba758:
    iVar20 = iVar20 + 1;
    if (3 < iVar20) {
      return;
    }
  } while( true );
}

