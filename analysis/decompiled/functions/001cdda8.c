/* Ghidra pseudocode. PS2 address: 001cdda8. Not validated source. */

void FUN_001cdda8(undefined8 param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint3 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint3 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 *puStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  iVar17 = (int)param_1;
  puVar1 = *(undefined8 **)(iVar17 + 0x146c);
  if (DAT_002859e4 != 0) {
    piVar2 = *(int **)(DAT_002859e4 + 0x24);
    bVar5 = false;
    if (piVar2 != (int *)0x0) {
      iVar10 = 0;
      do {
        if (1 < iVar10) {
LAB_001cde7c:
          if (!bVar5) {
            *puVar1 = 0x70000000;
            puVar1[1] = 0;
            return;
          }
          iVar10 = *(int *)(iVar17 + 0x24c);
          *puVar1 = 0x10000005;
          puVar1[3] = 0x5000000400000000;
          puVar1[4] = 0x1000000000008003;
          puStack_c0 = puVar1 + 0xc;
          puVar1[5] = 0xe;
          puVar1[6] = 0x30000;
          puVar1[7] = 0x47;
          iStack_b0 = iVar17 + 0x14b8;
          puVar1[1] = 0;
          puVar1[2] = 0;
          uVar3 = *(uint *)(iVar17 + 0x12c0);
          iStack_a8 = iVar17 + 0x1478;
          puVar1[9] = 0x4e;
          puVar1[8] = (ulong)uVar3 | (ulong)(iVar10 - 0x30) << 0x18 | 0x100000000;
          puVar1[10] = 0x48;
          iStack_bc = iVar17 + 0x147c;
          puVar1[0xb] = 0x42;
          iStack_b8 = iVar17 + 0x1480;
          iStack_b4 = iVar17 + 0x1484;
          iVar10 = *(int *)(iVar17 + 0x1468);
          iVar18 = 0;
          while( true ) {
            iVar6 = iVar18 * 0x10 + iVar10 * 0x20;
            iVar10 = *(int *)(iStack_bc + iVar6);
            iVar19 = *(int *)(iStack_b4 + iVar6);
            iVar7 = *(int *)(iStack_a8 + iVar6);
            iVar8 = *(int *)(iStack_b8 + iVar6);
            iVar9 = *(int *)(iStack_bc + iVar6);
            iVar6 = *(int *)(iStack_a8 + iVar6);
            *puStack_c0 = 0x10000003;
            puStack_c0[2] = 0x1000000000000000;
            puStack_c0[3] = 0x5000000200000000;
            puStack_c0[4] = 0x1000000000008001;
            puStack_c0[5] = 0xe;
            puStack_c0[6] =
                 (long)iVar6 | (long)(iVar10 + -1 + iVar19) << 0x30 |
                 (long)iVar9 << 0x20 | (long)(iVar7 + -1 + iVar8) << 0x10;
            puStack_c0[7] = 0x40;
            puStack_c0[1] = 0;
            puStack_c0 = puStack_c0 + 8;
            FUN_001ce890(param_1,&puStack_c0,iVar18);
            iStack_ac = iVar18 + 1;
            iVar10 = *(int *)(iStack_b0 + iVar18 * 4 + *(int *)(iVar17 + 0x28c) * 8);
            if (iVar10 != 0) {
              iVar19 = 0;
              iVar18 = iVar17 + *(int *)(iVar17 + 0x28c) * 0x1400 + 0x14d0 + iVar18 * 0xa00;
              if (0 < iVar10) {
                iVar7 = 0;
                do {
                  iVar19 = iVar19 + 1;
                  iVar8 = iVar7 + iVar18;
                  iVar15 = *(int *)(iVar8 + 0x30) + -4;
                  iVar14 = *(int *)(iVar8 + 0x34) + -4;
                  iVar6 = *(int *)(iVar8 + 0x30) + 4;
                  iVar9 = *(int *)(iVar8 + 0x34) + 4;
                  if (0xf < iVar6) {
                    iVar6 = 0xf;
                  }
                  if (7 < iVar9) {
                    iVar9 = 7;
                  }
                  if (iVar15 < 0) {
                    iVar15 = 0;
                  }
                  if (iVar14 < 0) {
                    iVar14 = 0;
                  }
                  iVar13 = 0;
                  iVar12 = (iVar9 - iVar14) + 1;
                  iVar6 = (iVar6 - iVar15) + 1;
                  iVar9 = 0;
                  if (0 < iVar12) {
                    do {
                      iVar16 = iVar9 + 1;
                      if (0 < iVar6) {
                        puVar11 = (uint3 *)((iVar15 + (iVar14 + iVar9) * 0x10) * 3 +
                                           *(int *)(iVar8 + 0x38));
                        iVar9 = iVar6;
                        do {
                          iVar9 = iVar9 + -1;
                          uVar4 = *puVar11;
                          puVar11 = (uint3 *)((int)puVar11 + 3);
                          if ((uint)uVar4 <= *(uint *)(iVar8 + 0x10)) {
                            iVar13 = iVar13 + 1;
                          }
                        } while (iVar9 != 0);
                      }
                      iVar9 = iVar16;
                    } while (iVar16 < iVar12);
                  }
                  if (iVar13 != 0) {
                    if ((iVar6 == 8) && (iVar12 == 8)) {
                      fVar27 = (float)iVar13 * 0.015625 * *(float *)(iVar7 + iVar18 + 0x14);
                    }
                    else {
                      fVar20 = ((float)iVar13 - 32.0) * 0.03125;
                      fVar27 = *(float *)(iVar7 + iVar18 + 0x14);
                      if (0.0 < fVar20) {
                        fVar27 = fVar20 * fVar27;
                      }
                      else {
                        fVar27 = fVar27 * 0.0;
                      }
                    }
                    fVar20 = (float)piVar2[0xf];
                    fVar28 = *(float *)(iVar17 + 0x1470);
                    iVar7 = iVar18 + iVar7;
                    *puStack_c0 = 0x10000013;
                    puStack_c0[1] = 0;
                    puStack_c0[2] = 0;
                    puStack_c0[3] = 0x5000001200000000;
                    puStack_c0[4] = 0xa400000000008001;
                    puStack_c0[5] = 0x5353535310;
                    puStack_c0[6] = 0x154;
                    puStack_c0[7] =
                         (long)(int)*(float *)(iVar7 + 0x1c) | 0x3f80000000000000U |
                         (long)(int)*(float *)(iVar7 + 0x24) << 0x10 |
                         (long)(int)*(float *)(iVar7 + 0x20) << 8 |
                         (long)(int)(fVar27 * 128.0 * fVar20 * fVar28) << 0x18;
                    puStack_c0[8] = 0;
                    fVar20 = *(float *)(iVar7 + 0x44);
                    fVar21 = *(float *)(iVar7 + 0x84);
                    fVar22 = *(float *)(iVar7 + 0xc4);
                    fVar23 = fVar20 - fVar21;
                    puStack_c0[9] =
                         (long)(int)((*(float *)(iVar7 + 0x40) - *(float *)(iVar7 + 0x80)) +
                                    *(float *)(iVar7 + 0xc0)) | (long)(int)(fVar23 + fVar22) << 0x10
                         | 0x100000000;
                    puStack_c0[10] = 0x7f0;
                    fVar20 = fVar20 + fVar21;
                    puStack_c0[0xb] =
                         (long)(int)(*(float *)(iVar7 + 0x40) + *(float *)(iVar7 + 0x80) +
                                    *(float *)(iVar7 + 0xc0)) | (long)(int)(fVar20 + fVar22) << 0x10
                         | 0x100000000;
                    puStack_c0[0xc] = 0x7f00000;
                    puStack_c0[0xd] =
                         (long)(int)((*(float *)(iVar7 + 0x40) - *(float *)(iVar7 + 0x80)) -
                                    *(float *)(iVar7 + 0xc0)) | (long)(int)(fVar23 - fVar22) << 0x10
                         | 0x100000000;
                    puStack_c0[0xe] = 0x7f007f0;
                    puStack_c0[0xf] =
                         (long)(int)((*(float *)(iVar7 + 0x40) + *(float *)(iVar7 + 0x80)) -
                                    *(float *)(iVar7 + 0xc0)) | (long)(int)(fVar20 - fVar22) << 0x10
                         | 0x100000000;
                    fVar20 = (float)piVar2[0x10];
                    puStack_c0[0x10] = 0xa400000000008001;
                    puStack_c0[0x11] = 0x5353535310;
                    puStack_c0[0x12] = 0x154;
                    fVar25 = *(float *)(iVar7 + 0x54) - *(float *)(iVar7 + 0x94);
                    fVar21 = *(float *)(iVar7 + 0x54) + *(float *)(iVar7 + 0x94);
                    fVar24 = *(float *)(iVar7 + 0xd4);
                    fVar23 = *(float *)(iVar7 + 0x50) - *(float *)(iVar7 + 0x90);
                    fVar26 = *(float *)(iVar7 + 0xd0);
                    fVar22 = *(float *)(iVar7 + 0x50) + *(float *)(iVar7 + 0x90);
                    puStack_c0[0x13] =
                         (long)(int)*(float *)(iVar7 + 0x1c) | 0x3f80000000000000U |
                         (long)(int)*(float *)(iVar7 + 0x24) << 0x10 |
                         (long)(int)*(float *)(iVar7 + 0x20) << 8 |
                         (long)(int)(fVar27 * 128.0 * fVar20 * fVar28) << 0x18;
                    puStack_c0[0x14] = 0x800;
                    puStack_c0[0x15] =
                         (long)(int)(fVar23 + fVar26) | (long)(int)(fVar25 + fVar24) << 0x10 |
                         0x100000000;
                    puStack_c0[0x16] = 0xff0;
                    puStack_c0[0x17] =
                         (long)(int)(fVar22 + fVar26) | (long)(int)(fVar21 + fVar24) << 0x10 |
                         0x100000000;
                    puStack_c0[0x18] = 0x7f00800;
                    puStack_c0[0x19] =
                         (long)(int)(fVar23 - fVar26) | (long)(int)(fVar25 - fVar24) << 0x10 |
                         0x100000000;
                    puStack_c0[0x1a] = 0x7f00ff0;
                    fVar20 = *(float *)(iVar7 + 0xa0);
                    puStack_c0[0x1b] =
                         (long)(int)(fVar22 - fVar26) | (long)(int)(fVar21 - fVar24) << 0x10 |
                         0x100000000;
                    fVar21 = (float)piVar2[0x11];
                    *(float *)(iVar7 + 0xa0) = fVar20 * fVar27;
                    fVar20 = *(float *)(iVar7 + 0xa4);
                    puStack_c0[0x1c] = 0xa400000000008001;
                    puStack_c0[0x1d] = 0x5353535310;
                    *(float *)(iVar7 + 0xa4) = fVar20 * fVar27;
                    puStack_c0[0x1e] = 0x154;
                    fVar24 = *(float *)(iVar7 + 0xe0) * fVar27;
                    fVar27 = *(float *)(iVar7 + 0xe4) * fVar27;
                    *(float *)(iVar7 + 0xe0) = fVar24;
                    *(float *)(iVar7 + 0xe4) = fVar27;
                    fVar23 = *(float *)(iVar7 + 0x60);
                    fVar22 = *(float *)(iVar7 + 0xa0);
                    fVar26 = fVar23 - fVar22;
                    puStack_c0[0x1f] =
                         (long)(int)*(float *)(iVar7 + 0x1c) | 0x3f80000000000000U |
                         (long)(int)*(float *)(iVar7 + 0x24) << 0x10 |
                         (long)(int)*(float *)(iVar7 + 0x20) << 8 |
                         (long)(int)(fVar21 * 128.0 * fVar28) << 0x18;
                    puStack_c0[0x20] = 0x8000000;
                    fVar20 = *(float *)(iVar7 + 100);
                    fVar21 = *(float *)(iVar7 + 0xa4);
                    fVar25 = fVar20 - fVar21;
                    fVar23 = fVar23 + fVar22;
                    puStack_c0[0x21] =
                         (long)(int)(fVar26 + fVar24) | (long)(int)(fVar25 + fVar27) << 0x10 |
                         0x100000000;
                    puStack_c0[0x22] = 0x80007f0;
                    fVar20 = fVar20 + fVar21;
                    puStack_c0[0x23] =
                         (long)(int)(fVar23 + fVar24) | (long)(int)(fVar20 + fVar27) << 0x10 |
                         0x100000000;
                    puStack_c0[0x24] = 0xff00000;
                    puStack_c0[0x25] =
                         (long)(int)(fVar26 - fVar24) | (long)(int)(fVar25 - fVar27) << 0x10 |
                         0x100000000;
                    puStack_c0[0x26] = 0xff007f0;
                    puStack_c0[0x27] =
                         (long)(int)(fVar23 - fVar24) | (long)(int)(fVar20 - fVar27) << 0x10 |
                         0x100000000;
                    puStack_c0 = puStack_c0 + 0x28;
                  }
                  iVar7 = iVar19 * 0x100;
                } while (iVar19 < iVar10);
              }
            }
            if (1 < iStack_ac) break;
            iVar10 = *(int *)(iVar17 + 0x1468);
            iVar18 = iStack_ac;
          }
          *puStack_c0 = 0x70000000;
          puStack_c0[1] = 0;
          return;
        }
        if (*(int *)(iVar17 + iVar10 * 4 + *(int *)(iVar17 + 0x28c) * 8 + 0x14b8) != 0) {
          bVar5 = true;
          goto LAB_001cde7c;
        }
        if (*piVar2 == 0) {
          iVar10 = iVar10 + 1;
        }
        else {
          if (*(int *)(iVar17 + iVar10 * 0x380 + *(int *)(iVar17 + 0x28c) * 0x700 + 0x3cd0) != 0) {
            bVar5 = true;
            goto LAB_001cde7c;
          }
          iVar10 = iVar10 + 1;
        }
      } while( true );
    }
  }
  *puVar1 = 0x70000000;
  puVar1[1] = 0;
  return;
}

