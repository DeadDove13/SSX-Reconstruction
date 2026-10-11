/* Ghidra pseudocode. PS2 address: 001baaa8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001bb0fc) */

void FUN_001baaa8(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 int param_6)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  ulong in_hi;
  uint uVar19;
  ulong uVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iStack_f8;
  
  uVar18 = in_hi & 0xffffffff00000000;
  iVar1 = *(int *)(param_6 * 0x80 + DAT_002859e4 + 0xa4);
  iVar14 = (int)param_5;
  puVar6 = (undefined4 *)(iVar14 + param_6 * 0x124 + 0x104);
  lVar5 = FUN_001a3210(*(undefined4 *)(DAT_002859e4 + 0x30));
  if ((lVar5 == 0) && (*(int *)(iVar1 + 0x348) < 0)) {
    fVar28 = 1.0;
  }
  else {
    fVar28 = 0.5;
  }
  param_4 = param_4 / 480.0;
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecf8(0x295e90,1);
  iVar13 = DAT_002c512c;
  if ((*(uint *)(iVar14 + 0xf4) & 0x200) == 0) {
LAB_001bacd4:
    uVar19 = *(uint *)(iVar14 + 0xf4);
  }
  else {
    iVar16 = DAT_002c512c * 0x2d0;
    uVar18 = uVar18 & 0xffffffff00000000;
    iVar17 = DAT_002c512c * 0x5a;
    iVar4 = DAT_002c512c * 0x5a;
    fVar20 = (float)FUN_001bcff0(*puVar6,DAT_002c34ac,param_5);
    fVar24 = *(float *)((int)&DAT_0028f70c + iVar16 + 4);
    iVar3 = *(int *)(iVar1 + 0x9c);
    DAT_0028ad3c = 1.0;
    iVar12 = iVar3 + 1;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    if (iVar3 != 0) {
      DAT_0028ad30 = fVar28;
      FUN_001a90b8(param_2 + *(float *)(&DAT_0028f704 + iVar17),
                   param_1 + *(float *)((int)&DAT_0028f704 + iVar16 + 4),fVar24,fVar24,param_5,
                   iVar3 + 0x15,*(undefined4 *)(&DAT_0028f70c + iVar13 * 0x5a));
      uVar25 = *(undefined4 *)((int)&DAT_0028f720 + iVar16 + 4);
      if (3 < iVar12) {
        iVar12 = 4;
      }
      FUN_001a90b8(param_2 + *(float *)(&DAT_0028f718 + iVar4),
                   param_1 + *(float *)((int)&DAT_0028f718 + iVar16 + 4),uVar25,uVar25,param_5,
                   iVar12 + 0x1d,*(undefined4 *)(&DAT_0028f720 + iVar13 * 0x5a));
      goto LAB_001bacd4;
    }
    DAT_0028ad30 = fVar28;
    FUN_001a90b8(param_2 + *(float *)(&DAT_0028f704 + iVar17),
                 param_1 + *(float *)((int)&DAT_0028f704 + iVar16 + 4),fVar24 + fVar20,
                 fVar24 + fVar20,param_5,1,*(undefined4 *)(&DAT_0028f70c + iVar13 * 0x5a));
    uVar25 = *(undefined4 *)((int)&DAT_0028f720 + iVar16 + 4);
    FUN_001a90b8(param_2 + *(float *)(&DAT_0028f718 + iVar4),
                 param_1 + *(float *)((int)&DAT_0028f718 + iVar16 + 4),uVar25,uVar25,param_5,0x10,
                 *(undefined4 *)(&DAT_0028f720 + iVar13 * 0x5a));
    uVar19 = *(uint *)(iVar14 + 0xf4);
  }
  iVar13 = DAT_002c512c;
  if (((uVar19 & 0x200000) != 0) && (iVar3 = puVar6[0x25], iVar3 != 0)) {
    DAT_0028ad3c = 1.0;
    iVar16 = DAT_002c512c * 0x2d0;
    uVar18 = uVar18 & 0xffffffff00000000;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    iVar17 = DAT_002c512c * 0x5a;
    DAT_0028ad30 = fVar28;
    fVar20 = (float)FUN_001bcff0(puVar6[0x26],DAT_002c34b0,param_5);
    fVar20 = *(float *)((int)&DAT_0028f950 + iVar16 + 4) + fVar20;
    FUN_001a90b8(param_2 + *(float *)(&DAT_0028f948 + iVar17),
                 param_1 + *(float *)((int)&DAT_0028f948 + iVar16 + 4),fVar20,fVar20,param_5,
                 iVar3 + 0x2e,*(undefined4 *)(&DAT_0028f950 + iVar13 * 0x5a));
  }
  uVar19 = (uint)(uVar18 >> 0x20);
  if ((*(uint *)(iVar14 + 0xf4) & 0x1000) != 0) {
    fVar20 = fVar28;
    if ((float)puVar6[3] == DAT_00291290) {
      fVar20 = 0.5;
    }
    iVar3 = DAT_002c512c * 0x2d0;
    uVar18 = uVar18 & 0xffffffff00000000;
    iStack_f8 = -1;
    iVar16 = 0;
    fVar24 = *(float *)(&DAT_0028f880 + DAT_002c512c * 0x5a) + param_2;
    iVar17 = 0;
    pfVar15 = (float *)(puVar6 + 3);
    fVar30 = *(float *)((int)&DAT_0028f880 + iVar3 + 4) + param_1;
    FUN_0011ed18(0x295e90,6);
    pfVar8 = (float *)&DAT_002912a0;
    piVar10 = puVar6 + 4;
    iVar13 = *piVar10;
    while( true ) {
      fVar29 = 8.68805e-44;
      fVar26 = *(float *)((int)&DAT_0028f888 + iVar3 + 4);
      if (iVar13 != 0) {
        fVar29 = pfVar8[-2];
        fVar26 = fVar26 * (float)puVar6[0x21];
        iStack_f8 = iVar16;
      }
      DAT_0028ad3c = 1.0;
      DAT_0028ad38 = 1.0;
      DAT_0028ad34 = 1.0;
      fVar22 = *pfVar15;
      fVar21 = *pfVar8;
      pfVar2 = (float *)(&DAT_0029129c + iVar17);
      iVar16 = iVar16 + 1;
      pfVar8 = pfVar8 + 5;
      iVar17 = iVar17 + 0x14;
      pfVar15 = pfVar15 + 2;
      piVar10 = piVar10 + 2;
      DAT_0028ad30 = fVar20;
      FUN_001a90b8(fVar24 + *pfVar2,fVar30 + fVar21,fVar26 * fVar22,param_5,fVar29,0x20);
      uVar19 = (uint)(uVar18 >> 0x20);
      if (0xd < iVar16) break;
      iVar13 = *piVar10;
    }
    FUN_0011ed18(0x295e90,4);
    DAT_0028ad3c = 1.0;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    DAT_0028ad30 = fVar20;
    FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f7f4 + DAT_002c512c * 0x5a),
                 fVar30 + *(float *)((int)&DAT_0028f7f4 + DAT_002c512c * 0x2d0 + 4),
                 *(undefined4 *)((int)&DAT_0028f7fc + DAT_002c512c * 0x2d0 + 4),
                 (&DAT_0028f804)[DAT_002c512c * 0xb4],param_5,0x25,
                 *(undefined4 *)(&DAT_0028f7fc + DAT_002c512c * 0x5a));
    FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f808 + DAT_002c512c * 0x5a),
                 fVar30 + *(float *)((int)&DAT_0028f808 + DAT_002c512c * 0x2d0 + 4),
                 *(undefined4 *)((int)&DAT_0028f810 + DAT_002c512c * 0x2d0 + 4),
                 (&DAT_0028f818)[DAT_002c512c * 0xb4],param_5,0x25,
                 *(undefined4 *)(&DAT_0028f810 + DAT_002c512c * 0x5a));
    FUN_0011ed18(0x295e90,5);
    FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f7a4 + DAT_002c512c * 0x5a),
                 fVar30 + *(float *)((int)&DAT_0028f7a4 + DAT_002c512c * 0x2d0 + 4),
                 *(undefined4 *)((int)&DAT_0028f7ac + DAT_002c512c * 0x2d0 + 4),
                 (&DAT_0028f7b4)[DAT_002c512c * 0xb4],param_5,0x3d,
                 *(undefined4 *)(&DAT_0028f7ac + DAT_002c512c * 0x5a));
    FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f7b8 + DAT_002c512c * 0x5a),
                 fVar30 + *(float *)((int)&DAT_0028f7b8 + DAT_002c512c * 0x2d0 + 4),
                 *(undefined4 *)((int)&DAT_0028f7c0 + DAT_002c512c * 0x2d0 + 4),
                 (&DAT_0028f7c8)[DAT_002c512c * 0xb4],param_5,0x3c,
                 *(undefined4 *)(&DAT_0028f7c0 + DAT_002c512c * 0x5a));
    FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f7cc + DAT_002c512c * 0x5a),
                 fVar30 + *(float *)((int)&DAT_0028f7cc + DAT_002c512c * 0x2d0 + 4),
                 *(undefined4 *)((int)&DAT_0028f7d4 + DAT_002c512c * 0x2d0 + 4),
                 (&DAT_0028f7dc)[DAT_002c512c * 0xb4],param_5,0x3b,
                 *(undefined4 *)(&DAT_0028f7d4 + DAT_002c512c * 0x5a));
    iVar16 = DAT_002c512c;
    iVar13 = DAT_002c512c * 0x2d0;
    iVar3 = DAT_002c512c * 0x5a;
    fVar29 = *(float *)((int)&DAT_0028f7e8 + iVar13 + 4) * (float)puVar6[0x21];
    FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f7e0 + iVar3),
                 fVar30 + *(float *)((int)&DAT_0028f7e0 + iVar13 + 4),fVar29,fVar29,param_5,0x36,
                 *(undefined4 *)(&DAT_0028f7e8 + DAT_002c512c * 0x5a));
    uVar11 = 0x3a;
    if ((iStack_f8 != -1) && (uVar11 = 0x39, 5 < iStack_f8)) {
      uVar11 = 0x37;
      if (iStack_f8 < 0xb) {
        uVar11 = 0x38;
      }
    }
    DAT_0028ad3c = 1.0;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    DAT_0028ad30 = fVar20;
    FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f7e0 + iVar3),
                 fVar30 + *(float *)((int)&DAT_0028f7e0 + iVar13 + 4),fVar29,fVar29,param_5,uVar11,
                 *(undefined4 *)(&DAT_0028f7e8 + iVar16 * 0x5a));
    if (0.0 < (float)puVar6[0x22]) {
      iVar13 = (int)((float)puVar6[0x22] * 14.0) % 7;
      uVar19 = iVar13 >> 0x1f;
      FUN_0011ed18(0x295e90,7);
      switch(iVar13) {
      case 5:
      case 6:
        FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f86c + DAT_002c512c * 0x5a),
                     fVar30 + *(float *)((int)&DAT_0028f86c + DAT_002c512c * 0x2d0 + 4),
                     *(undefined4 *)((int)&DAT_0028f874 + DAT_002c512c * 0x2d0 + 4),
                     (&DAT_0028f87c)[DAT_002c512c * 0xb4],param_5,0x35,
                     *(undefined4 *)(&DAT_0028f874 + DAT_002c512c * 0x5a));
      case 4:
        FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f858 + DAT_002c512c * 0x5a),
                     fVar30 + *(float *)((int)&DAT_0028f858 + DAT_002c512c * 0x2d0 + 4),
                     *(undefined4 *)((int)&DAT_0028f860 + DAT_002c512c * 0x2d0 + 4),
                     (&DAT_0028f868)[DAT_002c512c * 0xb4],param_5,0x34,
                     *(undefined4 *)(&DAT_0028f860 + DAT_002c512c * 0x5a));
      case 3:
        FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f844 + DAT_002c512c * 0x5a),
                     fVar30 + *(float *)((int)&DAT_0028f844 + DAT_002c512c * 0x2d0 + 4),
                     *(undefined4 *)((int)&DAT_0028f84c + DAT_002c512c * 0x2d0 + 4),
                     (&DAT_0028f854)[DAT_002c512c * 0xb4],param_5,0x33,
                     *(undefined4 *)(&DAT_0028f84c + DAT_002c512c * 0x5a));
      case 2:
        FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f830 + DAT_002c512c * 0x5a),
                     fVar30 + *(float *)((int)&DAT_0028f830 + DAT_002c512c * 0x2d0 + 4),
                     *(undefined4 *)((int)&DAT_0028f838 + DAT_002c512c * 0x2d0 + 4),
                     (&DAT_0028f840)[DAT_002c512c * 0xb4],param_5,0x33,
                     *(undefined4 *)(&DAT_0028f838 + DAT_002c512c * 0x5a));
      case 1:
        FUN_001a90b8(fVar24 + *(float *)(&DAT_0028f81c + DAT_002c512c * 0x5a),
                     fVar30 + *(float *)((int)&DAT_0028f81c + DAT_002c512c * 0x2d0 + 4),
                     *(undefined4 *)((int)&DAT_0028f824 + DAT_002c512c * 0x2d0 + 4),
                     (&DAT_0028f82c)[DAT_002c512c * 0xb4],param_5,0x32,
                     *(undefined4 *)(&DAT_0028f824 + DAT_002c512c * 0x5a));
      }
    }
  }
  if (((*(uint *)(iVar14 + 0xf4) & 0x80) != 0) && (puVar6[0x29] != 0)) {
    DAT_0028ad3c = 1.0;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    DAT_0028ad30 = fVar28;
    FUN_001a90b8(param_2 + *(float *)(&DAT_0028f77c + DAT_002c512c * 0x5a),
                 param_1 + *(float *)((int)&DAT_0028f77c + DAT_002c512c * 0x2d0 + 4),
                 *(undefined4 *)((int)&DAT_0028f784 + DAT_002c512c * 0x2d0 + 4),
                 (&DAT_0028f78c)[DAT_002c512c * 0xb4],param_5,0x43,
                 *(undefined4 *)(&DAT_0028f784 + DAT_002c512c * 0x5a));
  }
  if ((*(uint *)(iVar14 + 0xf4) & 0x100) != 0) {
    iVar16 = 0;
    iVar3 = FUN_0019c4d0(0x28acf8);
    iVar13 = DAT_002c512c;
    fVar20 = *(float *)(iVar3 + 0x38);
    if (((-1 < DAT_002c512c) && (1 < DAT_002c512c)) && (DAT_002c512c == 2)) {
      iVar16 = 1;
    }
    iVar3 = DAT_002c512c * 0x2d0;
    lVar5 = (ulong)uVar19 << 0x20;
    puVar9 = &DAT_0028f768 + DAT_002c512c * 0x5a;
    FUN_0011ed18(0x295e90,8);
    DAT_0028ad3c = 1.0;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    if (iVar16 == 0) {
      DAT_0028ad30 = fVar28;
      FUN_001a90b8(*(undefined4 *)puVar9,*(float *)((int)&DAT_0028f768 + iVar3 + 4) - 14.0,
                   *(undefined4 *)((int)&DAT_0028f770 + iVar3 + 4),(&DAT_0028f778)[iVar13 * 0xb4],
                   param_5,0x27,*(undefined4 *)(&DAT_0028f770 + iVar13 * 0x5a));
    }
    else {
      DAT_0028ad30 = fVar28;
      FUN_001a90b8(*(undefined4 *)puVar9,*(float *)((int)&DAT_0028f768 + iVar3 + 4) - 14.0,
                   *(undefined4 *)((int)&DAT_0028f770 + iVar3 + 4),(&DAT_0028f778)[iVar13 * 0xb4],
                   param_5,0x2a,*(undefined4 *)(&DAT_0028f770 + iVar13 * 0x5a));
    }
    iVar17 = 0;
    while (iVar17 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c)) {
      iVar4 = FUN_00189b78(DAT_002859e4,iVar17);
      if (iVar4 == iVar1) {
        iVar17 = iVar17 + 1;
      }
      else if (0.0 < fVar20) {
        fVar24 = (float)puVar6[iVar17 + 0x2a] / DAT_002c34b4;
        if (*(float *)(iVar4 + 0x2e4) < 0.0) {
          fVar24 = (float)FUN_001055f8(iVar1);
        }
        if (-1.0 < fVar24) {
          if (fVar24 < 1.0) {
            fVar30 = (ABS(fVar24) - 0.5) + (ABS(fVar24) - 0.5);
            fVar24 = fVar24 * 150.0;
            DAT_0028ad30 = fVar28;
            if (0.0 <= fVar30) {
              DAT_0028ad30 = (1.0 - fVar30) * fVar28;
            }
            DAT_0028ad34 = 1.0;
            DAT_0028ad38 = 1.0;
            DAT_0028ad3c = 1.0;
            if (*(char *)(*(int *)(iVar4 + 0x394) + 0x54) < '\0') {
              FUN_0011ed18(0x295e90,6);
              FUN_001a90b8(*(undefined4 *)puVar9,
                           (*(float *)((int)&DAT_0028f768 + iVar3 + 4) + fVar24) - 10.0,
                           *(undefined4 *)((int)&DAT_0028f770 + iVar3 + 4),
                           (&DAT_0028f778)[iVar13 * 0xb4],param_5,iVar16 + 0x2b,
                           *(undefined4 *)(&DAT_0028f770 + iVar13 * 0x5a));
              goto LAB_001bb5a0;
            }
            FUN_0011ed18(0x295e90,7);
            FUN_001a90b8(*(undefined4 *)puVar9,
                         (*(float *)((int)&DAT_0028f768 + iVar3 + 4) + fVar24) - 14.0,
                         *(undefined4 *)((int)&DAT_0028f770 + iVar3 + 4),
                         (&DAT_0028f778)[iVar13 * 0xb4],param_5,iVar16 + 0x28,
                         *(undefined4 *)(&DAT_0028f770 + iVar13 * 0x5a));
            iVar17 = iVar17 + 1;
          }
          else {
            iVar17 = iVar17 + 1;
          }
        }
        else {
          iVar17 = iVar17 + 1;
        }
      }
      else {
LAB_001bb5a0:
        iVar17 = iVar17 + 1;
      }
    }
    iVar16 = 0;
    FUN_0011ed18(0x295e90,5);
    uVar19 = (uint)((ulong)lVar5 >> 0x20);
    if (0 < *(int *)(iVar14 + 0x1c)) {
      fVar20 = 1.0;
      iVar17 = 0;
      do {
        fVar24 = *(float *)((int)puVar6 + iVar17 + 0xc0) / DAT_002c34b8;
        if (-1.0 < fVar24) {
          if (fVar24 < fVar20) {
            fVar30 = fVar24 * 150.0;
            if (0.0 < fVar30) {
              fVar24 = (ABS(fVar24) - 0.25) * 4.0;
            }
            else {
              fVar24 = (ABS(fVar24) - 0.5) + (ABS(fVar24) - 0.5);
            }
            DAT_0028ad30 = fVar28;
            if (0.0 <= fVar24) {
              if (fVar24 <= 1.0) {
                DAT_0028ad30 = (1.0 - fVar24) * fVar28;
              }
              else {
                DAT_0028ad30 = 0.0;
              }
            }
            iVar17 = *(int *)(iVar14 + iVar17 + 0x84);
            uVar11 = 0;
            if (iVar17 == 1) {
              uVar11 = 0x2d;
              if (0.0 < fVar30) {
                fVar30 = 0.0;
              }
            }
            else if (iVar17 < 2) {
              if (iVar17 == 0) {
LAB_001bb744:
                uVar11 = 0x2e;
              }
            }
            else if (iVar17 == 2) goto LAB_001bb744;
            DAT_0028ad34 = fVar20;
            DAT_0028ad38 = fVar20;
            DAT_0028ad3c = fVar20;
            if (DAT_002c512c == 1) {
              fVar24 = *(float *)((int)&DAT_0028f768 + iVar3 + 4);
              uVar25 = *(undefined4 *)puVar9;
              uVar27 = *(undefined4 *)((int)&DAT_0028f770 + iVar3 + 4);
              uVar23 = (&DAT_0028f778)[iVar13 * 0xb4];
              uVar7 = 8;
LAB_001bb7e4:
              FUN_001a90b8(uVar25,fVar24 + fVar30,uVar27,uVar23,param_5,uVar11,uVar7);
              iVar4 = *(int *)(iVar14 + 0x1c);
            }
            else if (DAT_002c512c < 2) {
              if (DAT_002c512c == 0) {
                FUN_001a90b8(*(undefined4 *)puVar9,
                             *(float *)((int)&DAT_0028f768 + iVar3 + 4) + fVar30,
                             *(undefined4 *)((int)&DAT_0028f770 + iVar3 + 4),
                             (&DAT_0028f778)[iVar13 * 0xb4],param_5,uVar11,8);
                fVar24 = *(float *)((int)&DAT_0028f768 + iVar3 + 4);
LAB_001bb7c8:
                uVar25 = *(undefined4 *)puVar9;
                uVar27 = *(undefined4 *)((int)&DAT_0028f770 + iVar3 + 4);
                uVar23 = (&DAT_0028f778)[iVar13 * 0xb4];
                uVar7 = 0;
                goto LAB_001bb7e4;
              }
              iVar4 = *(int *)(iVar14 + 0x1c);
            }
            else {
              if (DAT_002c512c == 2) {
                fVar24 = *(float *)((int)&DAT_0028f768 + iVar3 + 4);
                goto LAB_001bb7c8;
              }
              iVar4 = *(int *)(iVar14 + 0x1c);
            }
          }
          else {
            iVar4 = *(int *)(iVar14 + 0x1c);
          }
        }
        else {
          iVar4 = *(int *)(iVar14 + 0x1c);
        }
        uVar19 = (uint)((ulong)lVar5 >> 0x20);
        iVar16 = iVar16 + 1;
        iVar17 = iVar16 * 4;
      } while (iVar16 < iVar4);
    }
    uVar25 = DAT_002c34bc;
    FUN_0011ed18(0x295e90,4);
    FUN_0011ed28(uVar25,0x295e90,1,0);
    DAT_0028ad3c = 1.0;
    DAT_0028ad34 = 1.0;
    fVar20 = *(float *)((int)&DAT_0028f748 + DAT_002c512c * 0x2d0 + 4);
    DAT_0028ad38 = 1.0;
    DAT_0028ad30 = fVar28;
    if (0.0 < fVar20) {
      FUN_001a90b8(param_2 + *(float *)(&DAT_0028f740 + DAT_002c512c * 0x5a),
                   param_1 + *(float *)((int)&DAT_0028f740 + DAT_002c512c * 0x2d0 + 4),fVar20,
                   (&DAT_0028f750)[DAT_002c512c * 0xb4],param_5,0x25,
                   *(undefined4 *)(&DAT_0028f748 + DAT_002c512c * 0x5a));
      FUN_001a90b8(param_2 + *(float *)(&DAT_0028f754 + DAT_002c512c * 0x5a),
                   param_1 + *(float *)((int)&DAT_0028f754 + DAT_002c512c * 0x2d0 + 4),
                   *(undefined4 *)((int)&DAT_0028f75c + DAT_002c512c * 0x2d0 + 4),
                   (&DAT_0028f764)[DAT_002c512c * 0xb4],param_5,0x25,
                   *(undefined4 *)(&DAT_0028f75c + DAT_002c512c * 0x5a));
    }
    FUN_0011ed28(uVar25,0x295e90,1,2);
  }
  lVar5 = FUN_001a3260(*(undefined4 *)(DAT_002859e4 + 0x30));
  iVar13 = DAT_002c512c;
  if (lVar5 != 0) {
    return;
  }
  if ((*(uint *)(iVar14 + 0xf4) & 0x2000) != 0) {
    iVar3 = DAT_002c512c * 0x2d0;
    uVar18 = CONCAT44(uVar19,iVar3 >> 0x1f);
    pfVar8 = (float *)(&DAT_0028f894 + DAT_002c512c * 0x5a);
    if (0 < (int)puVar6[2]) {
      uVar25 = *(undefined4 *)((int)&DAT_0028f89c + iVar3 + 4);
      DAT_0028ad3c = 1.0;
      DAT_0028ad34 = 1.0;
      DAT_0028ad38 = 1.0;
      DAT_0028ad30 = fVar28;
      FUN_001a8e10(param_2 + *pfVar8,param_1 + *(float *)((int)&DAT_0028f894 + iVar3 + 4),uVar25,
                   uVar25,0,param_5,0,puVar6[2],*(undefined4 *)(&DAT_0028f89c + DAT_002c512c * 0x5a)
                  );
    }
    if (-1 < *(int *)(iVar1 + 0x348)) {
      uVar19 = *(uint *)(iVar14 + 0xf4);
      goto LAB_001bbb98;
    }
    piVar10 = (int *)(iVar1 + 0x8470);
    iVar17 = 9;
    iVar16 = *piVar10;
    while( true ) {
      if ((iVar16 == 2) || (iVar16 == 3)) {
        uVar18 = CONCAT44((int)(uVar18 >> 0x20),DAT_002c512c * 0x2d0 >> 0x1f);
        fVar20 = (float)piVar10[3] / (float)piVar10[2];
        fVar24 = *(float *)((int)&DAT_0028f894 + iVar3 + 4);
        DAT_0028ad30 = (1.0 - fVar20) * fVar28;
        if (iVar16 == 3) {
          DAT_0028ad3c = 0.5;
          DAT_0028ad38 = 0.5;
        }
        else {
          DAT_0028ad3c = 1.0;
          DAT_0028ad38 = 1.0;
        }
        DAT_0028ad34 = 1.0;
        fVar30 = (1.0 - fVar20 * 0.5) * (float)puVar6[0x21] * (float)(&DAT_0028f8a4)[iVar13 * 0xb4]
                 * *(float *)((int)&DAT_0028f89c + iVar3 + 4);
        FUN_001a8e10(param_2 + *pfVar8 +
                     (*(float *)(&DAT_0028f8bc + DAT_002c512c * 0x5a) - *pfVar8) * fVar20,
                     param_1 + fVar24 +
                     (*(float *)((int)&DAT_0028f8bc + DAT_002c512c * 0x2d0 + 4) - fVar24) * fVar20,
                     fVar30,fVar30,0,param_5,1,piVar10[1],
                     *(undefined4 *)(&DAT_0028f89c + iVar13 * 0x5a));
      }
      else if (iVar16 == 1) {
        uVar25 = *(undefined4 *)((int)&DAT_0028f89c + iVar3 + 4);
        DAT_0028ad34 = 1.0;
        DAT_0028ad38 = 1.0;
        DAT_0028ad3c = 1.0;
        DAT_0028ad30 = (1.0 - (float)piVar10[3] / (float)piVar10[2]) * fVar28;
        FUN_001a8e10(param_2 + *pfVar8,param_1 + *(float *)((int)&DAT_0028f894 + iVar3 + 4),uVar25,
                     uVar25,param_5,0,piVar10[1],*(undefined4 *)(&DAT_0028f89c + iVar13 * 0x5a));
      }
      else if (iVar16 == 0xe) {
        lVar5 = (uVar18 | 0x28f9ac) + (long)(DAT_002c512c * 0x2d0);
        pfVar15 = (float *)lVar5;
        uVar18 = (ulong)(int)((ulong)lVar5 >> 0x20);
        DAT_0028ad34 = 1.0;
        DAT_0028ad38 = 1.0;
        DAT_0028ad3c = 1.0;
        fVar20 = pfVar15[3] + ((float)piVar10[3] / (float)piVar10[2]) * 0.75;
        DAT_0028ad30 = (1.0 - (float)piVar10[3] / (float)piVar10[2]) * fVar28;
        FUN_001a90b8(param_2 + *pfVar15,param_1 + pfVar15[1],fVar20,fVar20,param_5,0x24,pfVar15[2]);
      }
      piVar10 = piVar10 + 4;
      iVar17 = iVar17 + -1;
      if (iVar17 < 0) break;
      iVar16 = *piVar10;
    }
  }
  uVar19 = *(uint *)(iVar14 + 0xf4);
LAB_001bbb98:
  if ((uVar19 & 0x80000) != 0) {
    piVar10 = (int *)(iVar1 + 0x8470);
    iVar13 = 9;
    do {
      if (*piVar10 == 0xb) {
        fVar20 = (float)piVar10[3] / (float)piVar10[2] + (float)piVar10[3] / (float)piVar10[2];
        if (fVar20 < 1.0) {
          DAT_0028ad3c = 1.0;
          DAT_0028ad34 = 1.0;
          DAT_0028ad38 = 1.0;
          DAT_0028ad30 = (1.0 - fVar20) * fVar28;
          FUN_001a90b8(param_2 + *(float *)(&DAT_0028f790 + DAT_002c512c * 0x5a),
                       param_1 + *(float *)((int)&DAT_0028f790 + DAT_002c512c * 0x2d0 + 4),
                       param_3 / 640.0,param_4,param_5,0xd,
                       *(undefined4 *)(&DAT_0028f798 + DAT_002c512c * 0x5a));
        }
      }
      else if (*piVar10 == 10) {
        fVar20 = (float)piVar10[3] / (float)piVar10[2] + (float)piVar10[3] / (float)piVar10[2];
        if (fVar20 < 1.0) {
          DAT_0028ad3c = 1.0;
          DAT_0028ad34 = 1.0;
          DAT_0028ad38 = 1.0;
          DAT_0028ad30 = (1.0 - fVar20) * fVar28;
          FUN_001a90b8(param_2 + *(float *)(&DAT_0028f790 + DAT_002c512c * 0x5a),
                       param_1 + *(float *)((int)&DAT_0028f790 + DAT_002c512c * 0x2d0 + 4),
                       param_3 / 640.0,param_4,param_5,0xc,
                       *(undefined4 *)(&DAT_0028f798 + DAT_002c512c * 0x5a));
        }
      }
      piVar10 = piVar10 + 4;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  if ((((*(uint *)(iVar14 + 0xf4) & 0x100000) != 0) && (lVar5 = FUN_0010a100(iVar1), lVar5 == 0)) &&
     ((*(int *)(iVar1 + 0x348) < 0 &&
      ((fVar20 = *(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14), fVar20 < 11.0 && (1.0 < fVar20)))
      ))) {
    fVar24 = fVar20 - (float)(int)fVar20;
    DAT_0028ad3c = (float)DAT_002c34c0;
    DAT_0028ad34 = (float)DAT_002c34c4;
    DAT_0028ad30 = fVar24 * fVar28;
    fVar28 = *(float *)((int)&DAT_0028f9a0 + DAT_002c512c * 0x2d0 + 4) + (1.0 - fVar24);
    DAT_0028ad38 = (float)DAT_002c34c0;
    FUN_001a8e10(param_2 + *(float *)(&DAT_0028f998 + DAT_002c512c * 0x5a),
                 param_1 + *(float *)((int)&DAT_0028f998 + DAT_002c512c * 0x2d0 + 4),fVar28,fVar28,0
                 ,param_5,0,(int)fVar20,*(undefined4 *)(&DAT_0028f9a0 + DAT_002c512c * 0x5a));
  }
  return;
}

