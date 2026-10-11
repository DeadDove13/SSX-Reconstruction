/* Ghidra pseudocode. PS2 address: 001e4b18. Not validated source. */

void FUN_001e4b18(undefined8 param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  
  iVar10 = (int)param_1;
  if ((*(int *)(iVar10 + 0x434) != 0) || (*(int *)(iVar10 + 0x418) == *(int *)(iVar10 + 0x41c))) {
    uStack_130 = 0x3f8000003f800000;
    uStack_128 = 0x3f8000003f800000;
    uStack_120 = 0x3f8000003f800000;
    uStack_118 = 0x3f8000003f800000;
    uStack_110 = 0x3f8000003f800000;
    uStack_108 = 0x3f8000003f800000;
    if (*(int *)(iVar10 + 0x42c) != 0) {
      uStack_130 = CONCAT44(DAT_002c3810,DAT_002c380c);
      uStack_128 = CONCAT44(DAT_002c3810,DAT_002c3810);
      uStack_120 = CONCAT44(DAT_002c3810,DAT_002c380c);
      uStack_118 = CONCAT44(DAT_002c3810,DAT_002c3810);
      uStack_100 = DAT_002c380c;
      uStack_f4 = DAT_002c3810;
      uStack_fc = DAT_002c3810;
      uStack_f8 = DAT_002c3810;
      uStack_110 = CONCAT44(DAT_002c3810,DAT_002c380c);
      uStack_108 = CONCAT44(DAT_002c3810,DAT_002c3810);
    }
    FUN_0011ed18(0x295e90,0xd);
    FUN_0011ed48(0x295e90,3);
    fVar19 = 320.0;
    FUN_00176e38(0x28ad30,&uStack_110);
    pfVar6 = (float *)&DAT_002967e0;
    pfVar8 = (float *)&DAT_002967e4;
    fVar17 = *(float *)(iVar10 + 0xf0) + 96.0;
    do {
      FUN_0011ed18(0x295e90,0xd);
      FUN_001a90b8(fVar19 + *pfVar6 + pfVar8[2],fVar17 + *pfVar8 + pfVar8[3],0x3f800000,0x3f800000,
                   param_1,pfVar6[5],0x20);
      FUN_0011ed18(0x295e90,0xe);
      fVar13 = *pfVar6;
      fVar12 = *pfVar8;
      pfVar2 = pfVar6 + 2;
      pfVar6 = pfVar6 + 7;
      pfVar8 = pfVar8 + 7;
      FUN_001a90b8(fVar19 + fVar13,fVar17 + fVar12,0x3f800000,0x3f800000,param_1,*pfVar2,0x20);
    } while ((int)pfVar6 < 0x29694c);
    FUN_0011ed18(0x295e90,0xd);
    FUN_0011ed48(0x295e90,3);
    iVar9 = 0;
    pfVar6 = (float *)&DAT_00296950;
    do {
      uVar5 = FUN_00234e80(DAT_002852fc,pfVar6[2]);
      iVar1 = FUN_001a0a88(0x3f800000,*(undefined4 *)(iVar10 + 0xec),uVar5,0);
      fVar12 = (float)iVar1;
      if (pfVar6[3] == 0.0) {
        fVar12 = fVar12 * 0.5;
      }
      else if (pfVar6[3] == 1.4013e-45) {
        fVar12 = 0.0;
      }
      FUN_00176e38(0x28ad30,&uStack_120);
      pfVar2 = (float *)(iVar9 + 0x296954);
      iVar9 = iVar9 + 0x20;
      fVar16 = fVar19 + *pfVar6;
      pfVar8 = pfVar6 + 2;
      fVar13 = fVar17 + *pfVar2;
      pfVar6 = pfVar6 + 8;
      uVar5 = FUN_00234e80(DAT_002852fc,*pfVar8);
      FUN_001a1368(fVar16 - fVar12,fVar13,*(undefined4 *)(iVar10 + 0xec),uVar5);
    } while ((int)pfVar6 < 0x296b90);
    fVar13 = 3.0;
    FUN_0011ed48(0x295e90,3);
    FUN_00176e38(0x28ad30,&uStack_130);
    fVar12 = DAT_002c3814;
    pfVar6 = (float *)&DAT_00296950;
    iVar9 = 0;
    piVar7 = (int *)0x296968;
    pfVar8 = (float *)0x296954;
    iVar1 = 0x11;
    piVar11 = &DAT_0029695c;
    do {
      fVar16 = *(float *)(&DAT_00296960 + iVar9);
      if (0.0 < fVar16) {
        if (*piVar11 == 0) {
          fVar18 = fVar19 + *pfVar6 + fVar16;
          fVar15 = (fVar17 + *pfVar8 + (float)*(int *)(*(int *)(iVar10 + 0xec) + 0xc)) - 6.0;
          FUN_001a90b8(fVar19 + *pfVar6,fVar15,fVar16,0x3f800000,param_1,0x69,0x10);
        }
        else if (*piVar11 == 1) {
          fVar14 = (fVar19 + *pfVar6) - 2.0;
          fVar15 = fVar17 + *pfVar8 + (float)*(int *)(*(int *)(iVar10 + 0xec) + 0xc) * DAT_002c3818;
          fVar18 = fVar14 - fVar16;
          FUN_001a90b8(fVar14,fVar15,fVar16,0x3f800000,param_1,0x69,8);
          if (*piVar7 != -1) {
            uVar5 = FUN_00234e80(DAT_002852fc,*(undefined4 *)((int)&DAT_00296958 + iVar9));
            iVar3 = FUN_001a0a88(0x3f800000,*(undefined4 *)(iVar10 + 0xec),uVar5,0);
            iVar4 = FUN_001a8df8(param_1,*piVar7);
            if (piVar7[1] == 0) {
              fVar14 = fVar19 + (float)piVar7[-6] + (float)iVar3 + fVar13;
              fVar16 = fVar17 + (float)piVar7[-5] + 2.0;
            }
            else {
              fVar14 = fVar19 + *pfVar6 + (float)iVar3 + fVar13;
              fVar16 = (fVar17 + *pfVar8 + (float)*(int *)(*(int *)(iVar10 + 0xec) + 0xc) * 0.5) -
                       *(float *)(iVar4 + 0xc) * 0.5;
            }
            FUN_001a90b8(fVar14,fVar16,fVar12,fVar12,param_1,*piVar7,piVar7[1]);
          }
        }
        else {
          fVar14 = fVar19 + *pfVar6 + 4.0;
          fVar15 = fVar17 + *pfVar8 + (float)*(int *)(*(int *)(iVar10 + 0xec) + 0xc) * DAT_002c381c;
          fVar18 = fVar14 + fVar16;
          FUN_001a90b8(fVar14,fVar15,fVar16,0x3f800000,param_1,0x69,0);
          if (*piVar7 != -1) {
            uVar5 = FUN_00234e80(DAT_002852fc,*(undefined4 *)((int)&DAT_00296958 + iVar9));
            iVar3 = FUN_001a0a88(0x3f800000,*(undefined4 *)(iVar10 + 0xec),uVar5,0);
            iVar4 = FUN_001a8df8(param_1,*piVar7);
            if (piVar7[1] == 0) {
              fVar16 = fVar17 + (float)piVar7[-5] + 4.0;
              fVar14 = (fVar19 + (float)piVar7[-6]) -
                       ((float)iVar3 + *(float *)(iVar4 + 8) * fVar12 + fVar13);
            }
            else {
              fVar14 = (fVar19 + *pfVar6) -
                       ((float)iVar3 + *(float *)(iVar4 + 0xc) * fVar12 + fVar13);
              fVar16 = (fVar17 + *pfVar8 + (float)*(int *)(*(int *)(iVar10 + 0xec) + 0xc) * 0.5) -
                       *(float *)(iVar4 + 0xc) * 0.5;
            }
            FUN_001a90b8(fVar14,fVar16,fVar12,fVar12,param_1,*piVar7,piVar7[1]);
          }
        }
        fVar16 = *(float *)(&DAT_00296964 + iVar9);
        if (fVar16 != 0.0) {
          fVar14 = ABS(fVar16);
          if (fVar16 < 0.0) {
            if (*piVar11 == 2) {
              FUN_001a90b8(fVar18 - fVar13,fVar15 + fVar16,fVar14,0x3f800000,param_1,0x69,0x11);
            }
            else {
              FUN_001a90b8(fVar18,fVar15 + fVar16,fVar14,0x3f800000,param_1,0x69,0x10);
            }
          }
          else {
            FUN_001a90b8(fVar18,fVar15,fVar14,0x3f800000,param_1,0x69,0x10);
          }
        }
      }
      piVar11 = piVar11 + 8;
      iVar9 = iVar9 + 0x20;
      piVar7 = piVar7 + 8;
      pfVar8 = pfVar8 + 8;
      iVar1 = iVar1 + -1;
      pfVar6 = pfVar6 + 8;
    } while (-1 < iVar1);
  }
  return;
}

