/* Ghidra pseudocode. PS2 address: 001e3360. Not validated source. */

void FUN_001e3360(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  
  iVar10 = (int)param_1;
  if ((*(int *)(iVar10 + 0x434) == 0) && (*(int *)(iVar10 + 0x418) == 0)) {
    return;
  }
  FUN_001e4340(param_1);
  uStack_160 = 0x3f8000003f800000;
  uStack_158 = 0x3f8000003f800000;
  uStack_150 = CONCAT44(0x3f800000,DAT_002c3764);
  uStack_140 = CONCAT44(0x3f800000,DAT_002c3764);
  uStack_138 = 0x3f800000;
  uStack_130 = 0x3f000000;
  uStack_128 = 0x3f800000;
  uStack_120 = 0x3f800000;
  uStack_114 = DAT_002c3768;
  uStack_11c = DAT_002c3768;
  uStack_118 = DAT_002c3768;
  uStack_110 = 0x3f8000003f000000;
  iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x2c);
  if (*(int *)(iVar10 + 0x42c) != 0) {
    uStack_160 = CONCAT44(DAT_002c376c,0x3f800000);
    uStack_158 = CONCAT44(DAT_002c376c,DAT_002c376c);
    uStack_150 = CONCAT44(DAT_002c376c,DAT_002c3764);
    uStack_140 = CONCAT44(DAT_002c376c,DAT_002c3764);
    uStack_138 = (ulong)DAT_002c376c;
    uStack_130 = (ulong)DAT_002c3770;
    uStack_128 = (ulong)DAT_002c376c;
    uStack_100 = 0x3f000000;
    uStack_fc = DAT_002c376c;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_110 = CONCAT44(DAT_002c376c,0x3f000000);
  }
  uStack_108 = 0;
  uStack_148 = 0;
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecf8(0x295e90,1);
  if (*(int *)(iVar10 + 0x3f4) + *(int *)(iVar10 + 0x3f0) < iVar1) {
    *(int *)(iVar10 + 0x404) = 1 - *(int *)(iVar10 + 0x3f8);
    *(int *)(iVar10 + 0x3f4) = iVar1 - (*(int *)(iVar10 + 0x3f0) - *(int *)(iVar10 + 0x3f8));
  }
  else {
    if (*(int *)(iVar10 + 0x3f4) <= iVar1) {
      iVar5 = *(int *)(iVar10 + 0x11c);
      goto LAB_001e35f4;
    }
    *(int *)(iVar10 + 0x404) = *(int *)(iVar10 + 0x3f8) + -1;
    *(int *)(iVar10 + 0x3f4) = iVar1 - *(int *)(iVar10 + 0x3f8);
  }
  iVar5 = *(int *)(iVar10 + 0x11c);
LAB_001e35f4:
  iVar5 = iVar5 - *(int *)(iVar10 + 0x3f0);
  if (iVar5 < *(int *)(iVar10 + 0x3f4)) {
    *(int *)(iVar10 + 0x3f4) = iVar5;
    *(undefined4 *)(iVar10 + 0x404) = 0;
    iVar5 = *(int *)(iVar10 + 0x3f4);
  }
  else {
    iVar5 = *(int *)(iVar10 + 0x3f4);
  }
  if (iVar5 < 0) {
    *(undefined4 *)(iVar10 + 0x3f4) = 0;
    *(undefined4 *)(iVar10 + 0x404) = 0;
    iVar5 = *(int *)(iVar10 + 0x3f4);
  }
  else {
    iVar5 = *(int *)(iVar10 + 0x3f4);
  }
  fVar11 = DAT_002c3774;
  fVar12 = 0.5;
  iVar5 = iVar5 + *(int *)(iVar10 + 0x404);
  iVar4 = FUN_001a8df8(param_1,0x54);
  fVar18 = *(float *)(iVar4 + 0xc) * DAT_002c377c;
  iVar4 = 0;
  fVar13 = fVar18 * fVar12;
  fVar16 = *(float *)(iVar10 + 0xf0) * DAT_002c3780 + DAT_002c3784;
  bVar3 = false;
  fVar19 = (*(float *)(iVar10 + 0x10c) * fVar11 + 15.0) - DAT_002c3778;
  fVar17 = fVar13 - 1.0;
  fVar14 = DAT_002c3778;
  FUN_00176e38(0x28ad30,&uStack_160);
  FUN_001a9ca0(*(float *)(iVar10 + 0x10c) * fVar11 - fVar14,fVar16 - fVar13,DAT_002c3788,fVar18,
               param_1,1);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_00176e38(0x28ad30,&uStack_130);
  fVar11 = DAT_002c378c;
  if (*(int *)(iVar10 + 800) < 1) {
    iVar4 = *(int *)(iVar10 + 0x438);
  }
  else {
    piVar9 = (int *)(iVar10 + 0x324);
    do {
      iVar7 = *(int *)(*(int *)*piVar9 + 0x38);
      iVar8 = iVar7 + ((int *)*piVar9)[1];
      iVar6 = iVar5 + *(int *)(iVar10 + 0x3f0);
      if ((iVar5 < iVar8) && (iVar7 < iVar6)) {
        if (iVar7 <= iVar5) {
          iVar7 = iVar5;
        }
        fVar14 = (float)*(int *)(iVar10 + 0x3f0);
        if (iVar8 < iVar6) {
          iVar6 = iVar8;
        }
        FUN_001a9ca0(fVar19 + ((float)(iVar7 - iVar5) / fVar14) * fVar11,fVar16 - fVar18 * fVar12,
                     ((float)(iVar6 - iVar7) / fVar14) * fVar11,fVar18,param_1,1);
      }
      piVar2 = (int *)*piVar9;
      iVar4 = iVar4 + 1;
      piVar9 = piVar9 + 1;
      if (*(int *)(*piVar2 + 0x38) == iVar1) {
        bVar3 = true;
      }
    } while (iVar4 < *(int *)(iVar10 + 800));
    iVar4 = *(int *)(iVar10 + 0x438);
  }
  if (iVar4 != 0) {
    if (*(int *)(iVar10 + 0x430) != 0) {
      FUN_00176e38(0x28ad30,&uStack_110);
      iVar7 = iVar5 + *(int *)(iVar10 + 0x3f0);
      fVar11 = (float)*(int *)(iVar10 + 0x3f0);
      iVar4 = *(int *)(iVar10 + 0x3fc);
      if (*(int *)(iVar10 + 0x3fc) <= iVar5) {
        iVar4 = iVar5;
      }
      iVar6 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x2c);
      if (iVar6 < iVar7) {
        iVar7 = iVar6;
      }
      FUN_001a9ca0(fVar19 + ((float)(iVar4 - iVar5) / fVar11) * DAT_002c3790,fVar16 - fVar18 * 0.5,
                   ((float)(iVar7 - iVar4) / fVar11) * DAT_002c3790,fVar18,param_1,1);
    }
    if (*(int *)(iVar10 + 0x438) != 0) {
      FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
      piVar9 = *(int **)(iVar10 + 0x364);
      for (iVar4 = 0; iVar4 < *piVar9; iVar4 = iVar4 + 1) {
        iVar7 = FUN_0019a310(piVar9,iVar4);
        if (iVar5 + *(int *)(iVar10 + 0x3f0) < iVar7) break;
        if (iVar5 <= iVar7) {
          if ((*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18) == 3) &&
             (iVar7 == *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x2c))) {
            FUN_00176e38(0x28ad30,&uStack_140);
          }
          else {
            DAT_0028ad3c = 0;
            DAT_0028ad30 = DAT_002c3794;
            DAT_0028ad34 = 0x3f800000;
            DAT_0028ad38 = 0;
          }
          fVar12 = fVar16 - fVar17;
          fVar11 = fVar17 + 6.0;
          fVar13 = fVar16 - fVar11;
          fVar14 = (float)(int)(fVar19 + ((float)(iVar7 - iVar5) / (float)*(int *)(iVar10 + 0x3f0))
                                         * DAT_002c3798);
          FUN_0019fe18(fVar14,fVar13,fVar14,fVar12,0x28ad30);
          FUN_0019fe18(fVar14 + 1.0,fVar13,fVar14 + 1.0,fVar12,0x28ad30);
          FUN_0019f6d8(fVar14 - 1.0,fVar16 - (fVar11 + 4.0),0x40800000,0x40800000,0x28ad30);
        }
        piVar9 = *(int **)(iVar10 + 0x364);
      }
    }
  }
  iVar4 = 0;
  FUN_00176e38(0x28ad30,&uStack_120);
  fVar11 = DAT_002c379c;
  if (0 < *(int *)(iVar10 + 0x118)) {
    iVar7 = *(int *)(iVar10 + 0x3f0);
    iVar6 = *(int *)(iVar10 + 0x120);
    if (iVar6 <= iVar5 + iVar7) {
      fVar14 = 1.0;
      piVar9 = (int *)(iVar10 + 0x120);
      do {
        if (iVar6 < iVar5) {
          iVar7 = *(int *)(iVar10 + 0x118);
        }
        else {
          fVar12 = fVar16 - fVar17;
          fVar15 = fVar16 + fVar17;
          fVar13 = fVar19 + ((float)(iVar6 - iVar5) / (float)iVar7) * fVar11;
          FUN_0019fe18(fVar13,fVar12,fVar13,fVar15,0x28ad30);
          FUN_0019fe18(fVar13 + fVar14,fVar12,fVar13 + fVar14,fVar15,0x28ad30);
          iVar7 = *(int *)(iVar10 + 0x118);
        }
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 1;
        if (iVar7 <= iVar4) break;
        iVar7 = *(int *)(iVar10 + 0x3f0);
        iVar6 = *piVar9;
      } while (iVar6 <= iVar5 + iVar7);
    }
  }
  FUN_00176e38(0x28ad30,&uStack_160);
  FUN_001a9ca0(*(float *)(iVar10 + 0x10c) * DAT_002c37a0 - DAT_002c37a4,fVar16 - fVar18 * 0.5,
               DAT_002c37a8,fVar18,param_1,2);
  if ((iVar5 <= iVar1) && (iVar1 <= iVar5 + *(int *)(iVar10 + 0x3f0))) {
    fVar11 = (((float)iVar1 - (float)iVar5) / (float)*(int *)(iVar10 + 0x3f0)) * DAT_002c37ac;
    if (bVar3) {
      FUN_00176e38(0x28ad30,&uStack_140);
    }
    else {
      FUN_00176e38(0x28ad30,&uStack_150);
    }
    FUN_001a90b8(((fVar19 + fVar11) - 2.0) - 1.0,(fVar16 - (fVar17 + 2.0)) - 4.0,0x40e00000,
                 DAT_002c37b0,param_1,0x54,0);
  }
  FUN_001e44f8(param_1);
  return;
}

