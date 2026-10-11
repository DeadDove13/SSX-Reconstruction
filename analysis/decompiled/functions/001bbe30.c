/* Ghidra pseudocode. PS2 address: 001bbe30. Not validated source. */

void FUN_001bbe30(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 in_hi;
  undefined4 uVar18;
  ulong uVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  
  iVar6 = *(int *)(DAT_002859e4 + 0x58);
  uVar17 = CONCAT44((int)((ulong)in_hi >> 0x20),param_6 * 0x124 >> 0x1f);
  iVar4 = *(int *)(param_6 * 0x80 + DAT_002859e4 + 0xa4);
  iVar14 = (int)param_5;
  iVar15 = iVar14 + param_6 * 0x124 + 0x104;
  lVar7 = FUN_001a3210(*(undefined4 *)(DAT_002859e4 + 0x30));
  if ((lVar7 == 0) && (*(int *)(iVar4 + 0x348) < 0)) {
    fVar25 = 1.0;
  }
  else {
    fVar25 = 0.5;
  }
  FUN_0011ed18(0x295e90,5);
  iVar9 = DAT_002c512c;
  if ((*(uint *)(iVar14 + 0xf4) & 1) != 0) {
    iVar13 = DAT_002c512c * 0x2d0;
    uVar17 = CONCAT44((int)(uVar17 >> 0x20),iVar13 >> 0x1f);
    iVar1 = DAT_002c512c * 0x5a;
    fVar19 = fVar25;
    uVar8 = FUN_0010af80(iVar4);
    if ((((-1 < *(int *)(iVar4 + 0x348)) && (DAT_002c512c == 1)) &&
        (iVar2 = *(int *)(DAT_002859e4 + 0x124), uVar8 = FUN_0010af80(iVar2),
        *(int *)(iVar2 + 0x348) < 0)) &&
       (lVar7 = FUN_001a3210(*(undefined4 *)(DAT_002859e4 + 0x30)), lVar7 == 0)) {
      fVar19 = 1.0;
    }
    FUN_001a2650(uVar8,&uStack_170);
    fVar22 = param_2 + *(float *)(&DAT_0028f8f8 + iVar1);
    fVar20 = fVar22;
    if ((*(uint *)(&DAT_0028f900 + iVar9 * 0x5a) & 0x20) != 0) {
      iVar1 = FUN_001a0840(*(undefined4 *)((int)&DAT_0028f900 + iVar13 + 4),fVar22,iVar6,0x2c5248,0)
      ;
      fVar20 = fVar22 - 50.0;
      fVar22 = fVar22 - (float)iVar1 * 0.5;
    }
    DAT_0028ad3c = 1.0;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    DAT_0028ad30 = fVar19;
    FUN_001a1578(*(undefined4 *)((int)&DAT_0028f900 + iVar13 + 4),fVar20,
                 param_1 + *(float *)((int)&DAT_0028f8f8 + iVar13 + 4),iVar6,&uStack_170);
    FUN_001a1470((&DAT_0028f908)[iVar9 * 0xb4],fVar22,
                 (param_1 + *(float *)((int)&DAT_0028f8f8 + iVar13 + 4)) - 24.0,iVar6,0x2c5248);
  }
  if ((*(uint *)(iVar14 + 0xf4) & 0x800) != 0) {
    if (DAT_0027acd0 == 0) {
      FUN_0025b630(&uStack_170,0x2c5250,(int)(*(float *)(iVar4 + 0xe0) * DAT_002c34cc));
      uVar18 = (undefined4)(uVar17 >> 0x20);
      pcVar10 = &DAT_002c5260;
    }
    else {
      FUN_0025b630(&uStack_170,0x2c5250,(int)(*(float *)(iVar4 + 0xe0) * DAT_002c34c8));
      uVar18 = (undefined4)(uVar17 >> 0x20);
      pcVar10 = s_km_h_002c5258;
    }
    FUN_0025b630(auStack_150,pcVar10);
    iVar1 = DAT_002c512c;
    iVar9 = DAT_002c512c * 0x2d0;
    uVar17 = CONCAT44(uVar18,iVar9 >> 0x1f);
    iVar13 = DAT_002c512c * 0x5a;
    fVar19 = (float)FUN_001bcff0(*(undefined4 *)(iVar15 + 0x90),0x3fc00000,param_5);
    fVar20 = param_2 + *(float *)(&DAT_0028f90c + iVar13);
    iVar2 = FUN_001a0840(*(float *)((int)&DAT_0028f914 + iVar9 + 4) + fVar19,iVar6,&uStack_170,0);
    DAT_0028ad3c = 1.0;
    fVar22 = (float)*(int *)(iVar6 + 0xc) * ((float)(&DAT_0028f91c)[iVar1 * 0xb4] + fVar19) -
             (float)*(int *)(iVar6 + 0xc);
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    DAT_0028ad30 = fVar25;
    FUN_001a1470(*(float *)((int)&DAT_0028f914 + iVar9 + 4) + fVar19,fVar20 - (float)iVar2,
                 (param_1 + *(float *)((int)&DAT_0028f90c + iVar9 + 4)) - fVar22,iVar6,&uStack_170);
    FUN_001a1470((float)(&DAT_0028f91c)[iVar1 * 0xb4] + fVar19,
                 param_2 + *(float *)(&DAT_0028f90c + iVar13),
                 ((param_1 + *(float *)((int)&DAT_0028f90c + iVar9 + 4)) - fVar22) + 4.0,iVar6,
                 auStack_150);
  }
  fVar19 = uStack_170;
  if ((*(uint *)(iVar14 + 0xf4) & 0x200200) == 0x200) {
    iVar9 = DAT_002c512c * 0x2d0;
    uVar17 = CONCAT44((int)(uVar17 >> 0x20),iVar9 >> 0x1f);
    DAT_0028ad3c = 1.0;
    uStack_170._0_2_ = CONCAT11(*(char *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) + '0',0x2f);
    uStack_170._3_1_ = SUB41(fVar19,3);
    uStack_170._0_3_ = (uint3)(ushort)uStack_170;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    DAT_0028ad30 = fVar25;
    FUN_001a1470(*(undefined4 *)((int)&DAT_0028f734 + iVar9 + 4),
                 param_2 + *(float *)(&DAT_0028f72c + DAT_002c512c * 0x5a),
                 param_1 + *(float *)((int)&DAT_0028f72c + iVar9 + 4),iVar6,&uStack_170);
    uVar3 = *(uint *)(iVar14 + 0xf4);
  }
  else {
    uVar3 = *(uint *)(iVar14 + 0xf4);
  }
  fVar19 = DAT_002c34d0;
  if ((uVar3 & 0x400) != 0) {
    piVar11 = (int *)(iVar4 + 0x8470);
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
      if (*piVar11 == 0xd) {
        fVar20 = (float)piVar11[3] / (float)piVar11[2];
        lVar7 = (uVar17 | 0x28f934) + (long)(DAT_002c512c * 0x2d0);
        pfVar12 = (float *)lVar7;
        uVar17 = (ulong)(int)((ulong)lVar7 >> 0x20);
        fVar22 = (1.0 - fVar20) * fVar25;
        fVar23 = pfVar12[4] + fVar20 + fVar20;
        fVar20 = DAT_002c34d4;
        if (piVar11[1] == 2) {
          FUN_0025b630(&uStack_170,0x2b6ba0);
        }
        else {
          FUN_0025b630(&uStack_170,0x2b6bb0);
        }
        iVar9 = FUN_001a0840(fVar23,iVar6,&uStack_170,0);
        DAT_0028ad34 = 1.0;
        DAT_0028ad38 = fVar19;
        DAT_0028ad30 = fVar22;
        DAT_0028ad3c = fVar20;
        FUN_001a1470(fVar23,(param_2 + *pfVar12) - (float)iVar9 * 0.5,param_1 + pfVar12[1],iVar6,
                     &uStack_170);
        uVar3 = *(uint *)(iVar14 + 0xf4);
        goto LAB_001bc3a0;
      }
      piVar11 = piVar11 + 4;
    } while (iVar9 < 10);
  }
  uVar3 = *(uint *)(iVar14 + 0xf4);
LAB_001bc3a0:
  iVar9 = DAT_002c512c;
  if ((uVar3 & 8) != 0) {
    iVar13 = DAT_002c512c * 0x2d0;
    uVar17 = CONCAT44((int)(uVar17 >> 0x20),iVar13 >> 0x1f);
    iVar1 = DAT_002c512c * 0x5a;
    FUN_0025b630(&uStack_170,0x2c5250,*(undefined4 *)(iVar4 + 0x8440));
    fVar19 = param_2 + *(float *)(&DAT_0028f8bc + iVar1);
    if ((*(uint *)(&DAT_0028f8c4 + iVar9 * 0x5a) & 8) != 0) {
      iVar2 = FUN_001a0840(*(undefined4 *)((int)&DAT_0028f8c4 + iVar13 + 4),iVar6,0x2c5268,0);
      fVar19 = fVar19 - (float)iVar2;
    }
    fVar20 = 1.0;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    DAT_0028ad3c = 1.0;
    DAT_0028ad30 = fVar25;
    FUN_001a1470(*(undefined4 *)((int)&DAT_0028f8c4 + iVar13 + 4),fVar19,
                 param_1 + *(float *)((int)&DAT_0028f8bc + iVar13 + 4),iVar6,0x2c5268);
    fVar19 = *(float *)(iVar15 + 0x84);
    fVar23 = (float)(&DAT_0028f8cc)[iVar9 * 0xb4] * fVar19;
    fVar22 = param_2 + *(float *)(&DAT_0028f8bc + iVar1);
    if ((*(uint *)(&DAT_0028f8c4 + iVar9 * 0x5a) & 8) != 0) {
      iVar9 = FUN_001a0840(fVar23,iVar6,&uStack_170,0);
      fVar22 = fVar22 - (float)iVar9;
      fVar19 = *(float *)(iVar15 + 0x84);
    }
    DAT_0028ad3c = fVar20;
    if (fVar19 != fVar20) {
      DAT_0028ad3c = 0.0;
    }
    DAT_0028ad30 = fVar25;
    DAT_0028ad34 = DAT_0028ad3c;
    DAT_0028ad38 = fVar20;
    FUN_001a1470(fVar23,fVar22,param_1 + *(float *)((int)&DAT_0028f8bc + iVar13 + 4) + 18.0,iVar6,
                 &uStack_170);
  }
  if ((*(uint *)(iVar14 + 0xf4) & 0x20000) != 0) {
    piVar11 = (int *)(iVar4 + 0x8470);
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
      if (*piVar11 == 0xc) {
        iVar9 = piVar11[1];
        lVar7 = (uVar17 | 0x28f8a8) + (long)(DAT_002c512c * 0x2d0);
        pfVar12 = (float *)lVar7;
        uVar17 = (ulong)(int)((ulong)lVar7 >> 0x20);
        if (iVar9 == 2) {
          DAT_0028ad3c = DAT_002c34dc;
          DAT_0028ad34 = 1.0;
          DAT_0028ad38 = DAT_002c34d8;
LAB_001bc5c4:
          fVar19 = pfVar12[3];
          DAT_0028ad30 = fVar25;
        }
        else {
          if (iVar9 == 3) {
            DAT_0028ad3c = DAT_002c34e4;
            DAT_0028ad34 = 1.0;
            DAT_0028ad38 = DAT_002c34e0;
            goto LAB_001bc5c4;
          }
          if (iVar9 == 5) {
            DAT_0028ad3c = 0.0;
            DAT_0028ad34 = DAT_002c34e8;
            DAT_0028ad38 = 0.0;
            goto LAB_001bc5c4;
          }
          fVar19 = pfVar12[3];
        }
        uVar3 = (uint)uStack_170 >> 0x10;
        uStack_170._0_2_ = CONCAT11((char)piVar11[1] + '0',0x58);
        uStack_170 = (float)(CONCAT22((short)uVar3,(ushort)uStack_170) & 0xff00ffff);
        iVar9 = FUN_001a0840(fVar19,iVar6,&uStack_170,0);
        FUN_001a1470(pfVar12[3],(param_2 + *pfVar12) - (float)iVar9 * 0.5,param_1 + pfVar12[1],iVar6
                     ,&uStack_170);
        uVar3 = *(uint *)(iVar14 + 0xf4);
        goto LAB_001bc644;
      }
      piVar11 = piVar11 + 4;
    } while (iVar9 < 10);
  }
  uVar3 = *(uint *)(iVar14 + 0xf4);
LAB_001bc644:
  uVar16 = (uint)uVar17;
  if ((uVar3 & 0x4000) != 0) {
    lVar7 = FUN_00136b58(iVar4 + 0x8370,auStack_110);
    iVar9 = DAT_002c512c * 0x2d0;
    uVar16 = iVar9 >> 0x1f;
    uStack_16c = 0x3f800000;
    uStack_168 = DAT_002c34ec;
    uStack_164 = 0;
    uStack_170 = fVar25;
    if (lVar7 != 0) {
      FUN_001a2738(param_2 + *(float *)(&DAT_0028f8d0 + DAT_002c512c * 0x5a),
                   (param_1 + param_4) - *(float *)((int)&DAT_0028f8d0 + iVar9 + 4),param_3 * 0.5,
                   *(undefined4 *)((int)&DAT_0028f8d8 + iVar9 + 4),lVar7,&uStack_170,
                   *(undefined4 *)(&DAT_0028f8d8 + DAT_002c512c * 0x5a));
    }
  }
  if ((*(uint *)(iVar14 + 0xf4) & 0x80000) != 0) {
    fVar19 = 0.5;
    piVar11 = (int *)(iVar4 + 0x8470);
    iVar4 = 0;
    do {
      if (*piVar11 == 0xb) {
        pfVar12 = (float *)((uVar16 | 0x28f790) + DAT_002c512c * 0x2d0);
        if (1.0 < (float)piVar11[3] / (float)piVar11[2] + (float)piVar11[3] / (float)piVar11[2]) {
          FUN_0019a8f0(&uStack_170,0x2b6bc0,piVar11[1]);
          fVar20 = *pfVar12;
LAB_001bc804:
          fVar20 = param_2 + fVar20;
          iVar4 = FUN_001a0a88(pfVar12[4],iVar6,&uStack_170,0);
          FUN_001a1578(pfVar12[4],fVar20 - (float)iVar4 * fVar19,
                       (param_1 + pfVar12[1]) - (float)*(int *)(iVar6 + 0xc) * pfVar12[4] * fVar19,
                       iVar6,&uStack_170);
          uVar3 = *(uint *)(iVar14 + 0xf4);
          goto LAB_001bc878;
        }
        break;
      }
      if (*piVar11 == 10) {
        fVar20 = (float)piVar11[3] / (float)piVar11[2] + (float)piVar11[3] / (float)piVar11[2];
        pfVar12 = (float *)((uVar16 | 0x28f790) + DAT_002c512c * 0x2d0);
        if (1.0 < fVar20) {
          iVar4 = piVar11[1];
          DAT_0028ad30 = (1.0 - (fVar20 - 1.0)) * fVar25;
          if (iVar4 < 0) {
            DAT_0028ad3c = 0.0;
            DAT_0028ad34 = 1.0;
            uStack_170 = (float)CONCAT22(uStack_170._2_2_,0x2d);
            DAT_0028ad38 = 0.0;
            FUN_001a2650(-iVar4,(int)&uStack_170 + 2);
            fVar20 = *pfVar12;
          }
          else {
            DAT_0028ad3c = 0.0;
            DAT_0028ad38 = 1.0;
            uStack_170 = (float)CONCAT22(uStack_170._2_2_,0x2b);
            DAT_0028ad34 = 0.0;
            FUN_001a2650(iVar4,(int)&uStack_170 + 2);
            fVar20 = *pfVar12;
          }
          goto LAB_001bc804;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar11 = piVar11 + 4;
    } while (iVar4 < 10);
  }
  uVar3 = *(uint *)(iVar14 + 0xf4);
LAB_001bc878:
  if ((uVar3 & 0x100) != 0) {
    fVar19 = 1.0;
    iVar4 = DAT_002c512c * 0x2d0;
    iVar13 = 0;
    iVar9 = DAT_002c512c * 0x5a;
    DAT_0028ad34 = 1.0;
    DAT_0028ad38 = 1.0;
    DAT_0028ad3c = 1.0;
    DAT_0028ad30 = fVar25;
    if (0 < *(int *)(iVar14 + 0x1c)) {
      fVar22 = 0.0;
      fVar20 = 3.0;
      iVar1 = 0;
      do {
        fVar23 = *(float *)(iVar15 + iVar1 + 0xc0) / DAT_002c34f0;
        if (-1.0 < fVar23) {
          if (fVar23 < fVar19) {
            fVar21 = fVar23 * 150.0;
            if (fVar22 < fVar21) {
              fVar23 = (ABS(fVar23) - 0.25) * 4.0;
            }
            else {
              fVar23 = (ABS(fVar23) - 0.5) + (ABS(fVar23) - 0.5);
            }
            DAT_0028ad30 = fVar25;
            if (fVar23 < fVar22) {
LAB_001bc9bc:
              fVar23 = *(float *)((int)&DAT_0028f768 + iVar4 + 4);
            }
            else {
              if (fVar23 <= 1.0) {
                DAT_0028ad30 = (1.0 - fVar23) * fVar25;
                goto LAB_001bc9bc;
              }
              DAT_0028ad30 = 0.0;
              fVar23 = *(float *)((int)&DAT_0028f768 + iVar4 + 4);
            }
            fVar23 = fVar23 - (float)*(int *)(iVar6 + 0xc);
            iVar1 = *(int *)(iVar14 + iVar1 + 0x84);
            fVar24 = *(float *)(&DAT_0028f768 + iVar9);
            DAT_0028ad34 = fVar19;
            DAT_0028ad38 = fVar19;
            DAT_0028ad3c = fVar19;
            if (iVar1 == 0) {
              iVar1 = FUN_001a0840(0x3f800000,iVar6,0x2b6bd0,0);
              if (DAT_002c512c == 1) {
                fVar24 = fVar24 - ((float)iVar1 + fVar20);
              }
              else if (DAT_002c512c < 2) {
                if (DAT_002c512c == 0) {
                  fVar24 = fVar24 - (float)iVar1 * 0.5;
                }
              }
              else if (DAT_002c512c == 2) {
                fVar24 = fVar24 + fVar20;
              }
              fVar23 = fVar23 + fVar21;
              uVar8 = 0x2b6bd0;
LAB_001bcbac:
              FUN_001a1470(0x3f800000,fVar24,fVar23,iVar6,uVar8);
            }
            else if (0 < iVar1) {
              if (iVar1 == 1) {
                iVar1 = FUN_001a0840(0x3f800000,iVar6,0x2c5270,0);
                if (fVar22 < fVar21) {
                  fVar21 = 0.0;
                }
                if (DAT_002c512c == 1) {
                  fVar24 = fVar24 - ((float)iVar1 + fVar20);
                }
                else if (DAT_002c512c < 2) {
                  if (DAT_002c512c == 0) {
                    fVar24 = fVar24 - (float)iVar1 * 0.5;
                  }
                }
                else if (DAT_002c512c == 2) {
                  fVar24 = fVar24 + fVar20;
                }
                fVar23 = fVar23 + fVar21;
                uVar8 = 0x2c5270;
              }
              else {
                if (iVar1 != 2) {
                  iVar2 = *(int *)(iVar14 + 0x1c);
                  goto LAB_001bcbb8;
                }
                iVar1 = FUN_001a0840(0x3f800000,iVar6,0x2c5278,0);
                if (DAT_002c512c == 1) {
                  fVar24 = fVar24 - ((float)iVar1 + fVar20);
                }
                else if (DAT_002c512c < 2) {
                  if (DAT_002c512c == 0) {
                    fVar24 = fVar24 - (float)iVar1 * 0.5;
                  }
                }
                else if (DAT_002c512c == 2) {
                  fVar24 = fVar24 + fVar20;
                }
                fVar23 = fVar23 + fVar21;
                uVar8 = 0x2c5278;
              }
              goto LAB_001bcbac;
            }
            iVar2 = *(int *)(iVar14 + 0x1c);
          }
          else {
            iVar2 = *(int *)(iVar14 + 0x1c);
          }
        }
        else {
          iVar2 = *(int *)(iVar14 + 0x1c);
        }
LAB_001bcbb8:
        iVar13 = iVar13 + 1;
        iVar1 = iVar13 * 4;
      } while (iVar13 < iVar2);
    }
  }
  iVar4 = DAT_002c512c;
  if (((*(uint *)(iVar14 + 0xf4) & 0x200000) == 0) ||
     (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) != 1)) goto LAB_001bce28;
  iVar13 = DAT_002c512c * 0x2d0;
  iVar1 = DAT_002c512c * 0x5a;
  FUN_0025b630(auStack_120,0x2c5280);
  iVar9 = *(int *)(iVar15 + 0x94);
  if (iVar9 == 1) {
    FUN_0025b630(auStack_130,0x2c5298);
    FUN_0025b630(&uStack_170,0x2b6bf0);
    uVar18 = *(undefined4 *)(iVar14 + 0xec);
LAB_001bcce0:
    FUN_0025b630(auStack_140,0x2c5250,uVar18);
  }
  else if (iVar9 < 2) {
    if (iVar9 == 0) {
      FUN_0025b630(&uStack_170,0x2b6c00);
      uVar18 = *(undefined4 *)(iVar14 + 0xf0);
      goto LAB_001bcce0;
    }
  }
  else {
    if (iVar9 == 2) {
      FUN_0025b630(auStack_130,0x2c5290);
      FUN_0025b630(&uStack_170,0x2b6be0);
      uVar18 = *(undefined4 *)(iVar14 + 0xe8);
      goto LAB_001bcce0;
    }
    if (iVar9 == 3) {
      FUN_0025b630(auStack_130,0x2c5288);
    }
  }
  DAT_0028ad3c = 1.0;
  DAT_0028ad34 = 1.0;
  DAT_0028ad38 = 1.0;
  if (*(float *)(iVar15 + 0x98) == 0.0) {
    DAT_0028ad30 = fVar25;
    if (*(int *)(iVar15 + 0x94) < 3) {
      if (*(int *)(iVar15 + 0x94) == 0) {
        puVar5 = &DAT_0028f970;
      }
      else {
        puVar5 = &DAT_0028f984;
      }
      pfVar12 = (float *)(puVar5 + DAT_002c512c * 0x5a);
      FUN_001a1470(pfVar12[3],param_2 + *pfVar12,
                   (param_1 + pfVar12[1]) - (float)*(int *)(iVar6 + 0xc) * pfVar12[3],iVar6,
                   &uStack_170);
      FUN_001a1470(pfVar12[4],param_2 + *pfVar12,param_1 + pfVar12[1],iVar6,auStack_140);
    }
  }
  else {
    DAT_0028ad30 = fVar25;
    fVar19 = (float)FUN_001bcff0(*(float *)(iVar15 + 0x98),DAT_002c34f4,param_5);
    fVar20 = *(float *)((int)&DAT_0028f964 + iVar13 + 4) + fVar19;
    fVar22 = (float)(&DAT_0028f96c)[iVar4 * 0xb4];
    FUN_001a1470(fVar20,param_2 + *(float *)(&DAT_0028f95c + iVar1),
                 (param_1 + *(float *)((int)&DAT_0028f95c + iVar13 + 4)) -
                 (float)*(int *)(iVar6 + 0xc) * fVar20,iVar6,auStack_130);
    FUN_001a1470(fVar22 + fVar19,param_2 + *(float *)(&DAT_0028f95c + iVar1),
                 param_1 + *(float *)((int)&DAT_0028f95c + iVar13 + 4),iVar6,auStack_120);
  }
LAB_001bce28:
  iVar6 = *(int *)(DAT_002859e4 + 0x38);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x38) != 0)) &&
     ((*(int *)(iVar6 + 0x18) == 0 && (0 < *(int *)(iVar6 + 0x34))))) {
    uVar18 = *(undefined4 *)(DAT_002859e4 + 0x5c);
    uVar8 = FUN_00234e80(DAT_002852fc,0xdb);
    iVar6 = FUN_001a0a88(0x3f800000,uVar18,uVar8,0);
    DAT_0028ad34 = 1.0;
    fVar19 = (param_1 + param_4) - 30.0;
    DAT_0028ad38 = DAT_002c34f8;
    DAT_0028ad3c = 0.0;
    uVar18 = *(undefined4 *)(DAT_002859e4 + 0x5c);
    DAT_0028ad30 = fVar25;
    uVar8 = FUN_00234e80(DAT_002852fc,0xdb);
    FUN_001a1368((param_2 + param_3 * 0.5) - (float)iVar6 * 0.5,fVar19,uVar18,uVar8);
  }
  return;
}

