/* Ghidra pseudocode. PS2 address: 001d7030. Not validated source. */

void FUN_001d7030(int param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int aiStack_f0 [8];
  int iStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int *piStack_bc;
  
  uStack_c4 = DAT_002913b8;
  if (*(int *)(param_1 + 0x30) != 0) {
    uStack_cc = 0xffff;
    FUN_001c5148(0x2913b0,3,1);
    piStack_bc = (int *)(param_1 + 0x5ac);
    uStack_c8 = 0xffff;
    FUN_001c5198(0x2913b0,0,1);
    FUN_001c5198(0x2913b0,1,2);
    iStack_c0 = 0;
    iVar4 = 0;
    do {
      iStack_c0 = iStack_c0 + 1;
      piVar14 = (int *)(param_1 + iVar4 + 0x57c);
      if (*piVar14 != 0) {
        iStack_d0 = 0;
        FUN_001cb238(0x2913b0,piVar14[2],0);
        iVar4 = piVar14[1];
        if (iVar4 != 0) {
          iVar9 = *(int *)(param_1 + 0x30);
          while( true ) {
            iVar12 = 0;
            iVar13 = 0;
            if (0 < iVar9) {
              iVar9 = param_1 + 0x50;
              piVar11 = aiStack_f0;
              do {
                lVar5 = FUN_001c5b68(0x2913b0,*(int *)(iVar4 + 0x10) + 400,
                                     *(int *)(iVar4 + 0x10) + 0x1a0,iVar9);
                if (lVar5 == 1) {
                  iVar8 = *(int *)(param_1 + 0x30);
                }
                else {
                  *piVar11 = iVar12;
                  iVar13 = iVar13 + 1;
                  piVar11 = piVar11 + 1;
                  iVar8 = *(int *)(param_1 + 0x30);
                }
                iVar12 = iVar12 + 1;
                iVar9 = iVar9 + 0xa0;
              } while (iVar12 < iVar8);
            }
            iVar9 = iVar4;
            if (0 < iVar13) {
              iVar9 = *(int *)(iVar4 + 4);
              if (*(ushort *)(iVar4 + 0xc) != uStack_cc) {
                FUN_001c5048(0x2913b0,(uint)*(ushort *)(iVar4 + 0xc),1);
                uStack_cc = (uint)*(ushort *)(iVar4 + 0xc);
              }
              if (*(ushort *)(iVar4 + 0xe) != uStack_c8) {
                FUN_001c5048(0x2913b0,(uint)*(ushort *)(iVar4 + 0xe),2);
                uStack_c8 = (uint)*(ushort *)(iVar4 + 0xe);
              }
              puVar1 = DAT_00292808;
              pfVar2 = *(float **)(iVar4 + 0x10);
              fVar15 = *pfVar2;
              DAT_00292808[3] = 0x6c15800000000000;
              *DAT_00292808 = 0x10000001;
              DAT_00292808[1] = 0;
              DAT_00292808[2] = 0;
              uVar3 = *(uint *)(iVar4 + 0x10);
              DAT_00292808[6] = 0x10000004;
              DAT_00292808[8] = 0x1000000000000000;
              DAT_00292808[9] = 0x5000000200000000;
              DAT_00292808[4] = (ulong)uVar3 << 0x20 | 0x30000015;
              DAT_00292808[10] = 0x1000000000008001;
              DAT_00292808[0xb] = 0xe;
              DAT_00292808[5] = 0;
              DAT_00292808[7] = 0;
              fVar17 = pfVar2[1];
              fVar16 = pfVar2[2];
              DAT_00292808[0xf] =
                   ((long)*(int *)((iVar9 + 1) * 4 + piVar14[3]) | 0x14000000U) << 0x20;
              DAT_00292808[0xe] = 0;
              DAT_00292808[0xc] =
                   (long)(int)(fVar15 * 128.0) << 4 |
                   (long)((int)(fVar17 * 128.0) + (int)(fVar16 * 128.0) + -1) << 0x22 |
                   (long)((int)(fVar15 * 128.0) + (int)(fVar16 * 128.0) + -1) << 0xe | 10U |
                   (long)(int)(fVar17 * 128.0) << 0x18;
              DAT_00292808[0xd] = 9;
              DAT_00292808 = DAT_00292808 + 0x12;
              FUN_001c5148(0x2913b0,6,2);
              FUN_001d39e8(uStack_c4,puVar1,puVar1 + 0x10,0);
              FUN_001c5148(0x2913b0,7,2);
              iVar9 = *(int *)(iVar4 + 4);
              piVar11 = aiStack_f0;
              if (0 < iVar13) {
                do {
                  puVar10 = DAT_00292808;
                  iVar12 = *piVar11;
                  iVar8 = piVar14[3];
                  *DAT_00292808 = 0x10000009;
                  DAT_00292808[3] = 0x6c04800000000000;
                  DAT_00292808[1] = 0;
                  DAT_00292808[2] = 0;
                  iVar7 = param_1 + iVar12 * 0xa0 + 0x40;
                  iVar8 = *(int *)((iVar9 + 2) * 4 + iVar8);
                  DAT_00292808[4] = *(undefined8 *)(iVar7 + 0x50);
                  uVar3 = *(uint *)(param_1 + iVar12 * 0xa0 + 0xd4);
                  DAT_00292808[5] = *(undefined8 *)(iVar7 + 0x58);
                  puVar1 = DAT_00292808 + 6;
                  DAT_00292808 = DAT_00292808 + 0x16;
                  *puVar1 = *(undefined8 *)(iVar7 + 0x60);
                  puVar10[7] = *(undefined8 *)(iVar7 + 0x68);
                  puVar10[8] = *(undefined8 *)(iVar7 + 0x70);
                  puVar10[9] = *(undefined8 *)(iVar7 + 0x78);
                  puVar10[10] = *(undefined8 *)(iVar7 + 0x80);
                  uVar6 = *(undefined8 *)(iVar7 + 0x88);
                  puVar10[0xc] = 0x1000000000000000;
                  puVar10[0xb] = uVar6;
                  puVar10[0xd] = 0x5000000200000000;
                  puVar10[0xe] = 0x1000000000008001;
                  puVar10[0xf] = 0xe;
                  puVar10[0x10] = 5;
                  puVar10[0x11] = 9;
                  puVar10[0x12] = ((long)iVar8 | 0x15000000U) << 0x20;
                  puVar10[0x13] = 0;
                  if (uVar3 != uStack_c8) {
                    FUN_001c5048(0x2913b0,uVar3,2);
                    uStack_c8 = (uint)*(ushort *)(*piVar11 * 0xa0 + param_1 + 0xd4);
                  }
                  FUN_001d39e8(uStack_c4,puVar10,puVar10 + 0x14,1);
                  iVar13 = iVar13 + -1;
                  piVar11 = piVar11 + 1;
                } while (iVar13 != 0);
              }
              *piVar14 = *piVar14 + -1;
              iVar9 = iStack_d0;
              if (iVar4 == piVar14[1]) {
                piVar14[1] = *(int *)(iVar4 + 0x14);
              }
              else {
                *(undefined4 *)(iStack_d0 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
              }
            }
            iStack_d0 = iVar9;
            iVar4 = *(int *)(iVar4 + 0x14);
            if (iVar4 == 0) break;
            iVar9 = *(int *)(param_1 + 0x30);
          }
        }
      }
      iVar4 = iStack_c0 << 4;
    } while (iStack_c0 < 3);
    if (*(int *)(param_1 + 0x5ac) != 0) {
      FUN_001cb238(0x2913b0,piStack_bc[2],0);
      iStack_d0 = 0;
      iVar4 = piStack_bc[1];
      if (iVar4 != 0) {
        iVar9 = *(int *)(param_1 + 0x30);
        while( true ) {
          iVar12 = 0;
          iVar13 = 0;
          if (0 < iVar9) {
            iVar9 = param_1 + 0x50;
            piVar14 = aiStack_f0;
            do {
              lVar5 = FUN_001c5b68(0x2913b0,*(int *)(iVar4 + 0x10) + 400,
                                   *(int *)(iVar4 + 0x10) + 0x1a0,iVar9);
              if (lVar5 == 1) {
                iVar8 = *(int *)(param_1 + 0x30);
              }
              else {
                *piVar14 = iVar12;
                iVar13 = iVar13 + 1;
                piVar14 = piVar14 + 1;
                iVar8 = *(int *)(param_1 + 0x30);
              }
              iVar12 = iVar12 + 1;
              iVar9 = iVar9 + 0xa0;
            } while (iVar12 < iVar8);
          }
          iVar9 = iVar4;
          if (0 < iVar13) {
            iVar9 = *(int *)(iVar4 + 4);
            if (*(ushort *)(iVar4 + 0xc) != uStack_cc) {
              FUN_001c5048(0x2913b0,(uint)*(ushort *)(iVar4 + 0xc),1);
              uStack_cc = (uint)*(ushort *)(iVar4 + 0xc);
            }
            if (*(ushort *)(iVar4 + 0xe) != uStack_c8) {
              FUN_001c5048(0x2913b0,(uint)*(ushort *)(iVar4 + 0xe),2);
              uStack_c8 = (uint)*(ushort *)(iVar4 + 0xe);
            }
            puVar1 = DAT_00292808;
            pfVar2 = *(float **)(iVar4 + 0x10);
            *DAT_00292808 = 0x10000002;
            DAT_00292808[3] = 0x6c16800000000000;
            DAT_00292808[1] = 0;
            DAT_00292808[2] = 0;
            fVar15 = *pfVar2;
            *(uint *)(DAT_00292808 + 4) = (uint)*(byte *)(iVar4 + 8);
            *(uint *)((int)DAT_00292808 + 0x24) = (uint)*(byte *)(iVar4 + 9);
            *(uint *)(DAT_00292808 + 5) = (uint)*(byte *)(iVar4 + 10);
            *(uint *)((int)DAT_00292808 + 0x2c) = (uint)*(byte *)(iVar4 + 0xb);
            uVar3 = *(uint *)(iVar4 + 0x10);
            DAT_00292808[8] = 0x10000004;
            DAT_00292808[10] = 0x1000000000000000;
            DAT_00292808[0xb] = 0x5000000200000000;
            DAT_00292808[6] = (ulong)uVar3 << 0x20 | 0x30000015;
            DAT_00292808[0xc] = 0x1000000000008001;
            DAT_00292808[0xd] = 0xe;
            DAT_00292808[7] = 0;
            DAT_00292808[9] = 0;
            fVar17 = pfVar2[1];
            fVar16 = pfVar2[2];
            DAT_00292808[0x10] = 0;
            puVar10 = DAT_00292808 + 0x12;
            iVar9 = *(int *)((iVar9 + 1) * 4 + piStack_bc[3]);
            DAT_00292808[0xe] =
                 (long)(int)(fVar15 * 128.0) << 4 |
                 (long)((int)(fVar17 * 128.0) + (int)(fVar16 * 128.0) + -1) << 0x22 |
                 (long)((int)(fVar15 * 128.0) + (int)(fVar16 * 128.0) + -1) << 0xe | 10U |
                 (long)(int)(fVar17 * 128.0) << 0x18;
            DAT_00292808[0xf] = 9;
            DAT_00292808[0x11] = ((long)iVar9 | 0x14000000U) << 0x20;
            DAT_00292808 = DAT_00292808 + 0x14;
            FUN_001c5148(0x2913b0,6,2);
            FUN_001d39e8(uStack_c4,puVar1,puVar10,0);
            FUN_001c5148(0x2913b0,7,2);
            iVar9 = *(int *)(iVar4 + 4);
            piVar14 = aiStack_f0;
            if (0 < iVar13) {
              do {
                puVar10 = DAT_00292808;
                DAT_00292808[3] = 0x6c05800000000000;
                *DAT_00292808 = 0x1000000a;
                DAT_00292808[1] = 0;
                DAT_00292808[2] = 0;
                *(uint *)(DAT_00292808 + 4) = (uint)*(byte *)(iVar4 + 8);
                *(uint *)((int)DAT_00292808 + 0x24) = (uint)*(byte *)(iVar4 + 9);
                *(uint *)(DAT_00292808 + 5) = (uint)*(byte *)(iVar4 + 10);
                *(uint *)((int)DAT_00292808 + 0x2c) = (uint)*(byte *)(iVar4 + 0xb);
                iVar12 = *piVar14;
                iVar8 = param_1 + iVar12 * 0xa0 + 0x40;
                DAT_00292808[6] = *(undefined8 *)(iVar8 + 0x50);
                DAT_00292808[7] = *(undefined8 *)(iVar8 + 0x58);
                DAT_00292808[8] = *(undefined8 *)(iVar8 + 0x60);
                DAT_00292808[9] = *(undefined8 *)(iVar8 + 0x68);
                DAT_00292808[10] = *(undefined8 *)(iVar8 + 0x70);
                DAT_00292808[0xb] = *(undefined8 *)(iVar8 + 0x78);
                DAT_00292808[0xc] = *(undefined8 *)(iVar8 + 0x80);
                uVar6 = *(undefined8 *)(iVar8 + 0x88);
                DAT_00292808[0xf] = 0x5000000200000000;
                DAT_00292808[0xd] = uVar6;
                DAT_00292808[0xe] = 0x1000000000000000;
                DAT_00292808[0x10] = 0x1000000000008001;
                DAT_00292808[0x11] = 0xe;
                iVar8 = piStack_bc[3];
                DAT_00292808[0x12] = 5;
                DAT_00292808[0x13] = 9;
                iVar8 = *(int *)((iVar9 + 2) * 4 + iVar8);
                puVar1 = DAT_00292808 + 0x15;
                DAT_00292808 = DAT_00292808 + 0x18;
                *puVar1 = 0x1000000000000000;
                uVar3 = *(uint *)(param_1 + iVar12 * 0xa0 + 0xd4);
                puVar10[0x14] = ((long)iVar8 | 0x15000000U) << 0x20;
                if (uVar3 != uStack_c8) {
                  FUN_001c5048(0x2913b0,uVar3,2);
                  uStack_c8 = (uint)*(ushort *)(*piVar14 * 0xa0 + param_1 + 0xd4);
                }
                FUN_001d39e8(uStack_c4,puVar10,puVar10 + 0x16,1);
                iVar13 = iVar13 + -1;
                piVar14 = piVar14 + 1;
              } while (iVar13 != 0);
            }
            *piStack_bc = *piStack_bc + -1;
            iVar9 = iStack_d0;
            if (iVar4 == piStack_bc[1]) {
              piStack_bc[1] = *(int *)(iVar4 + 0x14);
            }
            else {
              *(undefined4 *)(iStack_d0 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
            }
          }
          iStack_d0 = iVar9;
          iVar4 = *(int *)(iVar4 + 0x14);
          if (iVar4 == 0) break;
          iVar9 = *(int *)(param_1 + 0x30);
        }
      }
    }
    FUN_001c5198(0x2913b0,0,2);
    FUN_001cb238(0x2913b0,0,0);
  }
  return;
}

