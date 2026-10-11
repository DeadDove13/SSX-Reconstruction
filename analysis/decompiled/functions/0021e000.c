/* Ghidra pseudocode. PS2 address: 0021e000. Not validated source. */

float FUN_0021e000(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ushort *puVar14;
  long lVar15;
  ushort *puVar16;
  int *piVar17;
  int *piVar18;
  ulong in_hi;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined4 auStack_180 [6];
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [8];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [8];
  undefined4 uStack_128;
  undefined4 uStack_124;
  float fStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_100;
  undefined4 uStack_fc;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  iVar13 = (int)param_2;
  iStack_118 = 0;
  iStack_11c = 0x7fffffff;
  iStack_100 = (int)param_4;
  uStack_fc = (undefined4)((ulong)param_4 >> 0x20);
  fVar23 = DAT_002c3f10;
  fVar19 = (float)(**(code **)(*(int *)(iVar13 + 0x40) + 0x1c))
                            (iVar13 + *(short *)(*(int *)(iVar13 + 0x40) + 0x18));
  uStack_138 = *(undefined4 *)(iVar13 + 0x38);
  fStack_13c = *(float *)(iVar13 + 0x34);
  fStack_140 = *(float *)(iVar13 + 0x30);
  uStack_134 = 0x3f800000;
  lVar9 = CONCAT44(uStack_fc,iStack_100);
  fVar20 = (float)*(int *)(DAT_00299cc8 + 0x24);
  iVar21 = (int)(((fStack_140 - *(float *)(DAT_00299cc8 + 0xc)) + fVar20) / fVar20);
  iStack_114 = (int)(((fStack_13c - *(float *)(DAT_00299cc8 + 0x10)) + fVar20) / fVar20);
  iStack_110 = iVar21 + -2;
  if (iVar21 <= iStack_118) {
    iVar21 = 0;
  }
  iVar8 = iStack_114 + -2;
  if (iStack_11c <= iStack_110) {
    iStack_110 = iStack_11c;
  }
  iVar6 = *(int *)(DAT_00299cc8 + 0x28) + -1;
  iVar7 = *(int *)(DAT_00299cc8 + 0x2c) + -1;
  if (iStack_114 < 1) {
    iStack_114 = 0;
  }
  if (iVar8 < iStack_11c) {
    iStack_11c = iVar8;
  }
  iStack_118 = iVar21;
  if (iVar6 < iVar21) {
    iStack_118 = iVar6;
  }
  if (iStack_110 < 0) {
    iStack_110 = 0;
  }
  if (iStack_11c < 0) {
    iStack_11c = 0;
  }
  if (iVar7 < iStack_114) {
    iStack_114 = iVar7;
  }
  if (iStack_110 <= iStack_118) {
    do {
      lVar10 = (long)iStack_11c;
      if (lVar10 <= iStack_114) {
        piVar18 = (int *)param_1;
        iVar21 = *piVar18;
        do {
          iStack_f0 = (int)lVar10;
          lVar5 = ((long)iStack_110 | in_hi) + (long)(iStack_f0 * *(int *)(iVar21 + 0x28));
          iVar21 = (int)lVar5;
          in_hi = (ulong)(int)((ulong)lVar5 >> 0x20);
          iStack_100 = (int)lVar9;
          uStack_fc = (undefined4)((ulong)lVar9 >> 0x20);
          uStack_ec = (undefined4)((ulong)lVar10 >> 0x20);
          lVar10 = FUN_0021f730(param_1,iVar21);
          lVar9 = CONCAT44(uStack_fc,iStack_100);
          uVar11 = CONCAT44(uStack_ec,iStack_f0);
          if (lVar10 == 0) {
            piVar17 = *(int **)(iVar21 * 8 + piVar18[3]);
          }
          else {
            piVar17 = (int *)0x0;
          }
          lVar5 = (long)iStack_114;
          if (piVar17 != (int *)0x0) {
            iVar21 = *piVar17;
            bVar3 = false;
            if (((((*(float *)(iVar21 + 0xc) < *(float *)(iVar13 + 0x10)) &&
                  (*(float *)(iVar13 + 0x20) < *(float *)(iVar21 + 0x18))) &&
                 (*(float *)(iVar21 + 0x10) < *(float *)(iVar13 + 0x14))) &&
                ((*(float *)(iVar13 + 0x24) < *(float *)(iVar21 + 0x1c) &&
                 (*(float *)(iVar21 + 0x14) < *(float *)(iVar13 + 0x18))))) &&
               (*(float *)(iVar13 + 0x28) < *(float *)(iVar21 + 0x20))) {
              bVar3 = true;
            }
            lVar5 = (long)iStack_114;
            if (bVar3) {
              puVar14 = (ushort *)piVar17[1];
              lVar10 = 0;
              while (iVar21 = (int)*(short *)(DAT_00299cc8 + 0x42) *
                              (int)*(short *)(DAT_00299cc8 + 0x42),
                    in_hi = CONCAT44((int)(in_hi >> 0x20),iVar21 >> 0x1f), lVar10 < iVar21) {
                if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
                  uVar1 = puVar14[2];
                }
                else {
                  uVar1 = puVar14[1];
                }
                lVar5 = (long)(short)uVar1;
                if ((*puVar14 == 0) && (lVar5 == 0)) {
                  iVar21 = (int)lVar10;
                }
                else {
                  bVar3 = false;
                  if (((*(float *)(puVar14 + 0xc) < *(float *)(iVar13 + 0x10)) &&
                      (((*(float *)(iVar13 + 0x20) < *(float *)(puVar14 + 0x12) &&
                        (*(float *)(puVar14 + 0xe) < *(float *)(iVar13 + 0x14))) &&
                       (*(float *)(iVar13 + 0x24) < *(float *)(puVar14 + 0x14))))) &&
                     ((*(float *)(puVar14 + 0x10) < *(float *)(iVar13 + 0x18) &&
                      (*(float *)(iVar13 + 0x28) < *(float *)(puVar14 + 0x16))))) {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    lVar15 = 0;
                    if (0 < (int)((uint)*puVar14 << 0x10)) {
                      puVar16 = (ushort *)(piVar17[2] + (short)puVar14[7] * 4 + 2);
                      uVar12 = 0xffff;
                      do {
                        in_hi = in_hi & 0xffffffff00000000;
                        iVar21 = piVar17[4] + (uint)*puVar16 * 0x1c0;
                        if (*(int *)(iVar21 + 0x1b8) == 0x11) {
LAB_0021e598:
                          uVar1 = *puVar14;
                        }
                        else {
                          bVar3 = false;
                          if (((*(float *)(iVar21 + 400) < *(float *)(iVar13 + 0x10)) &&
                              (*(float *)(iVar13 + 0x20) < *(float *)(iVar21 + 0x1a0))) &&
                             ((*(float *)(iVar21 + 0x194) < *(float *)(iVar13 + 0x14) &&
                              (((*(float *)(iVar13 + 0x24) < *(float *)(iVar21 + 0x1a4) &&
                                (*(float *)(iVar21 + 0x198) < *(float *)(iVar13 + 0x18))) &&
                               (*(float *)(iVar13 + 0x28) < *(float *)(iVar21 + 0x1a8))))))) {
                            bVar3 = true;
                          }
                          if (!bVar3) goto LAB_0021e598;
                          iStack_100 = (int)lVar9;
                          uStack_fc = (undefined4)((ulong)lVar9 >> 0x20);
                          iStack_f0 = (int)uVar11;
                          uStack_ec = (undefined4)((ulong)uVar11 >> 0x20);
                          uStack_e0 = (undefined4)uVar12;
                          uStack_dc = (undefined4)((ulong)uVar12 >> 0x20);
                          uStack_d0 = (undefined4)lVar10;
                          uStack_cc = (undefined4)((ulong)lVar10 >> 0x20);
                          lVar4 = FUN_0021f8c8(param_2,iVar21,&fStack_140,auStack_130,&fStack_120,
                                               lVar9);
                          lVar9 = CONCAT44(uStack_fc,iStack_100);
                          uVar11 = CONCAT44(uStack_ec,iStack_f0);
                          uVar12 = CONCAT44(uStack_dc,uStack_e0);
                          lVar10 = CONCAT44(uStack_cc,uStack_d0);
                          if (lVar4 == 0) goto LAB_0021e598;
                          if (lVar9 != 0) {
                            lVar4 = ((long)iStack_110 | in_hi) +
                                    (long)(iStack_f0 * *(int *)(*piVar18 + 0x28));
                            in_hi = (ulong)(int)((ulong)lVar4 >> 0x20);
                            if ((int)lVar4 < 0) {
                              *(short *)(iStack_100 + 8) = (short)lVar4;
                            }
                            else {
                              *(short *)(iStack_100 + 8) = (short)lVar4;
                            }
                            *(short *)(iStack_100 + 10) = (short)uStack_d0;
                            *(short *)(iStack_100 + 0xc) = (short)lVar15;
                          }
                          if (ABS(fStack_120 - fVar19) < ABS(fVar23 - fVar19)) {
                            lVar4 = (**(code **)(*(int *)(iVar13 + 0x40) + 0x24))
                                              (iVar13 + *(short *)(*(int *)(iVar13 + 0x40) + 0x20),
                                               auStack_130);
                            lVar9 = CONCAT44(uStack_fc,iStack_100);
                            uVar11 = CONCAT44(uStack_ec,iStack_f0);
                            uVar12 = CONCAT44(uStack_dc,uStack_e0);
                            lVar10 = CONCAT44(uStack_cc,uStack_d0);
                            if (lVar4 == 0) {
                              param_3[4] = fStack_140;
                              param_3[5] = fStack_13c;
                              param_3[6] = uStack_138;
                              param_3[7] = uStack_134;
                              param_3[8] = auStack_130._0_4_;
                              param_3[9] = auStack_130._4_4_;
                              param_3[10] = uStack_128;
                              param_3[0xb] = uStack_124;
                              uVar2 = *(undefined4 *)(iVar21 + 0x1b8);
                              *(short *)(param_3 + 0xe) = (short)uStack_e0;
                              param_3[0xd] = uVar2;
                              *(short *)((int)param_3 + 0x3a) = (short)uStack_e0;
                              param_3[0xc] = 0;
                              *param_3 = 0;
                              fVar23 = fStack_120;
                              if (fVar19 < 0.0) {
                                return fStack_120;
                              }
                            }
                            goto LAB_0021e598;
                          }
                          uVar1 = *puVar14;
                        }
                        lVar15 = (long)((int)lVar15 + 1);
                        puVar16 = puVar16 + 2;
                      } while (lVar15 < (short)uVar1);
                    }
                    lVar15 = 0;
                    if (0 < lVar5) {
                      iVar21 = piVar17[2];
                      while( true ) {
                        in_hi = in_hi & 0xffffffff00000000;
                        iVar21 = piVar17[3] +
                                 (uint)*(ushort *)
                                        (iVar21 + (int)lVar15 * 4 + (short)puVar14[8] * 4 + 2) *
                                 0x110;
                        if ((*(short *)(iVar21 + 0xfe) != -1) &&
                           ((*(uint *)(iVar21 + 0xe8) & 0x20) != 0)) {
                          bVar3 = false;
                          if (((*(float *)(iVar21 + 0xd0) < *(float *)(iVar13 + 0x10)) &&
                              ((*(float *)(iVar13 + 0x20) < *(float *)(iVar21 + 0xdc) &&
                               (*(float *)(iVar21 + 0xd4) < *(float *)(iVar13 + 0x14))))) &&
                             ((*(float *)(iVar13 + 0x24) < *(float *)(iVar21 + 0xe0) &&
                              ((*(float *)(iVar21 + 0xd8) < *(float *)(iVar13 + 0x18) &&
                               (*(float *)(iVar13 + 0x28) < *(float *)(iVar21 + 0xe4))))))) {
                            bVar3 = true;
                          }
                          if (bVar3) {
                            iStack_100 = (int)lVar9;
                            uStack_fc = (undefined4)((ulong)lVar9 >> 0x20);
                            iStack_f0 = (int)uVar11;
                            uStack_ec = (undefined4)((ulong)uVar11 >> 0x20);
                            uStack_d0 = (undefined4)lVar10;
                            uStack_cc = (undefined4)((ulong)lVar10 >> 0x20);
                            fVar20 = (float)FUN_0021ed18(param_1,param_2,auStack_180);
                            fVar22 = 0.0;
                            lVar9 = CONCAT44(uStack_fc,iStack_100);
                            uVar11 = CONCAT44(uStack_ec,iStack_f0);
                            lVar10 = CONCAT44(uStack_cc,uStack_d0);
                            if ((0.0 <= fVar20) && (ABS(fVar20 - fVar19) < ABS(fVar23 - fVar19))) {
                              lVar4 = (**(code **)(*(int *)(iVar13 + 0x40) + 0x24))
                                                (fVar20,iVar13 + *(short *)(*(int *)(iVar13 + 0x40)
                                                                           + 0x20),auStack_160);
                              lVar9 = CONCAT44(uStack_fc,iStack_100);
                              uVar11 = CONCAT44(uStack_ec,iStack_f0);
                              lVar10 = CONCAT44(uStack_cc,uStack_d0);
                              if (lVar4 == 0) {
                                *param_3 = auStack_180[0];
                                param_3[4] = (int)auStack_180._16_8_;
                                param_3[5] = SUB84(auStack_180._16_8_,4);
                                param_3[6] = uStack_168;
                                param_3[7] = uStack_164;
                                param_3[8] = auStack_160._0_4_;
                                param_3[9] = auStack_160._4_4_;
                                param_3[10] = uStack_158;
                                param_3[0xb] = uStack_154;
                                param_3[0xc] = uStack_150;
                                param_3[0xd] = uStack_14c;
                                param_3[0xe] = uStack_148;
                                fVar23 = fVar20;
                                if (fVar19 < fVar22) {
                                  return fVar20;
                                }
                              }
                            }
                          }
                        }
                        lVar15 = (long)((int)lVar15 + 1);
                        if (lVar5 <= lVar15) break;
                        iVar21 = piVar17[2];
                      }
                    }
                  }
                  iVar21 = (int)lVar10;
                }
                puVar14 = puVar14 + 0x18;
                lVar10 = (long)(iVar21 + 1);
              }
              lVar5 = (long)iStack_114;
            }
          }
          lVar10 = (long)((int)uVar11 + 1);
          if (lVar5 < lVar10) break;
          iVar21 = *piVar18;
        } while( true );
      }
      iStack_110 = iStack_110 + 1;
    } while (iStack_110 <= iStack_118);
  }
  fVar19 = -1.0;
  if (fVar23 != DAT_002c3f14) {
    fVar19 = fVar23;
  }
  return fVar19;
}

