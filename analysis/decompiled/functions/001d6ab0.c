/* Ghidra pseudocode. PS2 address: 001d6ab0. Not validated source. */

void FUN_001d6ab0(undefined8 param_1)

{
  undefined8 *puVar1;
  short sVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  short sVar13;
  float fVar14;
  int iStack_c0;
  
  uVar5 = DAT_002913b8;
  iVar11 = (int)param_1;
  sVar13 = -1;
  piVar12 = (int *)(iVar11 + 0x57c);
  *(undefined4 **)(iVar11 + 0x588) = &DAT_002cfbf8;
  *(undefined4 *)(iVar11 + 0x57c) = *(undefined4 *)(iVar11 + 0x55c);
  *(undefined4 *)(iVar11 + 0x584) = 3;
  *(undefined4 *)(iVar11 + 0x580) = *(undefined4 *)(iVar11 + 0x560);
  *(undefined4 *)(iVar11 + 0x58c) = *(undefined4 *)(iVar11 + 0x564);
  sVar2 = -1;
  *(undefined4 *)(iVar11 + 0x590) = *(undefined4 *)(iVar11 + 0x568);
  *(undefined4 *)(iVar11 + 0x594) = 2;
  *(undefined4 **)(iVar11 + 0x598) = &DAT_002cfbe0;
  iStack_c0 = 2;
  *(undefined4 *)(iVar11 + 0x59c) = *(undefined4 *)(iVar11 + 0x56c);
  *(undefined4 *)(iVar11 + 0x5a0) = *(undefined4 *)(iVar11 + 0x570);
  *(undefined4 *)(iVar11 + 0x5a4) = 1;
  uVar7 = DAT_002c3664;
  *(undefined4 **)(iVar11 + 0x5a8) = &DAT_002cfbc8;
  *(undefined4 *)(iVar11 + 0x5ac) = *(undefined4 *)(iVar11 + 0x574);
  *(undefined4 *)(iVar11 + 0x5b0) = *(undefined4 *)(iVar11 + 0x578);
  *(undefined4 *)(iVar11 + 0x5b4) = 4;
  *(undefined4 **)(iVar11 + 0x5b8) = &DAT_002cfbb0;
  FUN_0011ed28(uVar7,0x295e90,1,0);
  FUN_001d7030(param_1);
  FUN_001c5148(0x2913b0,3,1);
  FUN_001c5148(0x2913b0,6,2);
  FUN_001c5198(0x2913b0,0,1);
  FUN_001c5198(0x2913b0,1,2);
  do {
    if (*piVar12 != 0) {
      FUN_001cb238(0x2913b0,piVar12[2],0);
      iVar10 = piVar12[1];
      if (iVar10 != 0) {
        iVar8 = *(int *)(iVar10 + 4);
        while( true ) {
          if (*(short *)(iVar10 + 0xc) != sVar2) {
            FUN_001c5048(0x2913b0,*(short *)(iVar10 + 0xc),1);
            sVar2 = *(short *)(iVar10 + 0xc);
          }
          if (*(short *)(iVar10 + 0xe) != sVar13) {
            FUN_001c5048(0x2913b0,*(short *)(iVar10 + 0xe),2);
            sVar13 = *(short *)(iVar10 + 0xe);
          }
          puVar6 = DAT_00292808;
          pfVar3 = *(float **)(iVar10 + 0x10);
          DAT_00292808[3] = 0x6c15800000000000;
          *DAT_00292808 = 0x10000001;
          DAT_00292808[1] = 0;
          DAT_00292808[2] = 0;
          fVar14 = *pfVar3;
          uVar4 = *(uint *)(iVar10 + 0x10);
          DAT_00292808[6] = 0x10000004;
          DAT_00292808[8] = 0x1000000000000000;
          DAT_00292808[9] = 0x5000000200000000;
          DAT_00292808[4] = (ulong)uVar4 << 0x20 | 0x30000015;
          DAT_00292808[10] = 0x1000000000008001;
          DAT_00292808[0xb] = 0xe;
          DAT_00292808[5] = 0;
          DAT_00292808[7] = 0;
          iVar8 = *(int *)((iVar8 + 1) * 4 + piVar12[3]);
          DAT_00292808[0xc] =
               (long)(int)(fVar14 * 128.0) << 4 |
               (long)((int)(pfVar3[1] * 128.0) + (int)(pfVar3[2] * 128.0) + -1) << 0x22 |
               (long)((int)(fVar14 * 128.0) + (int)(pfVar3[2] * 128.0) + -1) << 0xe | 10U |
               (long)(int)(pfVar3[1] * 128.0) << 0x18;
          DAT_00292808[0xd] = 9;
          DAT_00292808[0xf] = ((long)iVar8 | 0x14000000U) << 0x20;
          puVar9 = DAT_00292808 + 0x10;
          puVar1 = DAT_00292808 + 0xe;
          DAT_00292808 = DAT_00292808 + 0x12;
          *puVar1 = 0;
          FUN_001d39e8(uVar5,puVar6,puVar9,0);
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) break;
          iVar8 = *(int *)(iVar10 + 4);
        }
      }
    }
    piVar12 = piVar12 + 4;
    iStack_c0 = iStack_c0 + -1;
  } while (-1 < iStack_c0);
  if (*(int *)(iVar11 + 0x5ac) != 0) {
    FUN_001cb238(0x2913b0,*(undefined4 *)(iVar11 + 0x5b4),0);
    iVar10 = *(int *)(iVar11 + 0x5b0);
    if (iVar10 != 0) {
      iVar8 = *(int *)(iVar10 + 4);
      while( true ) {
        if (*(short *)(iVar10 + 0xc) != sVar2) {
          FUN_001c5048(0x2913b0,*(short *)(iVar10 + 0xc),1);
          sVar2 = *(short *)(iVar10 + 0xc);
        }
        if (*(short *)(iVar10 + 0xe) != sVar13) {
          FUN_001c5048(0x2913b0,*(short *)(iVar10 + 0xe),2);
          sVar13 = *(short *)(iVar10 + 0xe);
        }
        puVar6 = DAT_00292808;
        pfVar3 = *(float **)(iVar10 + 0x10);
        *DAT_00292808 = 0x10000002;
        DAT_00292808[3] = 0x6c16800000000000;
        DAT_00292808[1] = 0;
        DAT_00292808[2] = 0;
        fVar14 = *pfVar3;
        *(uint *)(DAT_00292808 + 4) = (uint)*(byte *)(iVar10 + 8);
        *(uint *)((int)DAT_00292808 + 0x24) = (uint)*(byte *)(iVar10 + 9);
        *(uint *)(DAT_00292808 + 5) = (uint)*(byte *)(iVar10 + 10);
        *(uint *)((int)DAT_00292808 + 0x2c) = (uint)*(byte *)(iVar10 + 0xb);
        uVar4 = *(uint *)(iVar10 + 0x10);
        DAT_00292808[8] = 0x10000004;
        DAT_00292808[10] = 0x1000000000000000;
        DAT_00292808[0xb] = 0x5000000200000000;
        DAT_00292808[6] = (ulong)uVar4 << 0x20 | 0x30000015;
        DAT_00292808[0xc] = 0x1000000000008001;
        DAT_00292808[0xd] = 0xe;
        DAT_00292808[7] = 0;
        DAT_00292808[9] = 0;
        iVar8 = *(int *)((iVar8 + 1) * 4 + *(int *)(iVar11 + 0x5b8));
        DAT_00292808[0xe] =
             (long)(int)(fVar14 * 128.0) << 4 |
             (long)((int)(pfVar3[1] * 128.0) + (int)(pfVar3[2] * 128.0) + -1) << 0x22 |
             (long)((int)(fVar14 * 128.0) + (int)(pfVar3[2] * 128.0) + -1) << 0xe | 10U |
             (long)(int)(pfVar3[1] * 128.0) << 0x18;
        DAT_00292808[0xf] = 9;
        puVar9 = DAT_00292808 + 0x12;
        DAT_00292808[0x11] = ((long)iVar8 | 0x14000000U) << 0x20;
        puVar1 = DAT_00292808 + 0x10;
        DAT_00292808 = DAT_00292808 + 0x14;
        *puVar1 = 0;
        FUN_001d39e8(uVar5,puVar6,puVar9,0);
        iVar10 = *(int *)(iVar10 + 0x14);
        if (iVar10 == 0) break;
        iVar8 = *(int *)(iVar10 + 4);
      }
    }
  }
  FUN_0011ed28(DAT_002c3668,0x295e90,0,2);
  FUN_001c5198(0x2913b0,0,2);
  FUN_001cb238(0x2913b0,0,0);
  return;
}

