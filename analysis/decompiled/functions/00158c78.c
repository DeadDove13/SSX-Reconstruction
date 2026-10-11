/* Ghidra pseudocode. PS2 address: 00158c78. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00158fdc) */

void FUN_00158c78(undefined8 param_1,int *param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  byte bVar21;
  byte abStack_80 [16];
  
  FUN_0025bbe4(param_4 + 4,param_2[1]);
  *(int *)(param_4 + 0x24) = *param_2;
  *(char *)(param_4 + 0x1e) = (char)param_2[7];
  *(undefined1 *)(param_4 + 0x1f) = *(undefined1 *)((int)param_2 + 0x1d);
  *(undefined1 *)(param_4 + 0x20) = *(undefined1 *)((int)param_2 + 0x1e);
  iVar14 = param_2[10];
  iVar13 = param_2[0xc];
  iVar18 = param_2[8];
  *(int *)(param_4 + 0x28) = param_2[9];
  *(int *)(param_4 + 0x2c) = iVar14;
  *(int *)(param_4 + 0x44) = iVar13;
  *(int *)(param_4 + 0x48) = iVar18;
  *(char *)(param_4 + 0x4c) = (char)param_2[0xe];
  if (param_3 == 0) {
    uVar7 = 8;
  }
  else {
    uVar7 = (uint)*(ushort *)param_3;
  }
  *(uint *)(param_4 + 0x50) = uVar7;
  *(undefined4 *)(param_4 + 0x5c) = 0;
  *(undefined4 *)(param_4 + 0x60) = 0;
  *(undefined4 *)(param_4 + 100) = 0;
  *(undefined1 *)(param_4 + 0x56) = 0xff;
  *(undefined4 *)(param_4 + 0x58) = 0xffffffff;
  *(undefined1 *)(param_4 + 0x54) = 0xff;
  *(undefined1 *)(param_4 + 0x55) = 0xff;
  lVar9 = FUN_001587f0(param_1);
  if ((lVar9 == 0) || (iVar14 = *(int *)(param_4 + 0x50), iVar14 == 8)) {
    iVar14 = *param_2;
    *(int *)(param_4 + 0x30) = param_2[0xb];
    uVar1 = (&DAT_002c7394)[iVar14 * 0x10];
    uVar2 = (&DAT_002c7390)[iVar14 * 0x10];
    uVar3 = (&DAT_002c738c)[iVar14 * 0x10];
    *(undefined4 *)(param_4 + 0x34) = (&DAT_002c7388)[iVar14 * 0x10];
    *(undefined4 *)(param_4 + 0x38) = uVar2;
    *(undefined4 *)(param_4 + 0x3c) = uVar3;
    *(undefined4 *)(param_4 + 0x40) = uVar1;
  }
  else {
    puVar10 = &DAT_002c6788 + iVar14 * 4 + *param_2 * 0x20;
    uVar1 = *(undefined4 *)(&DAT_0027e7e8 + iVar14 * 4);
    uVar2 = puVar10[3];
    uVar3 = puVar10[2];
    uVar4 = puVar10[1];
    *(undefined4 *)(param_4 + 0x34) = *puVar10;
    *(undefined4 *)(param_4 + 0x38) = uVar3;
    *(undefined4 *)(param_4 + 0x3c) = uVar4;
    *(undefined4 *)(param_4 + 0x40) = uVar2;
    *(undefined4 *)(param_4 + 0x30) = uVar1;
  }
  pbVar11 = (byte *)(param_4 + 0xe);
  piVar12 = param_2 + 2;
  FUN_0023bac0(pbVar11,piVar12,0x10);
  if (param_3 != 0) {
    if (*(int *)(param_4 + 0x50) == 8) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = &DAT_0027e0c0 + *(int *)(param_4 + 0x50) * 0x10;
    }
    FUN_00159178(param_1,abStack_80,piVar12);
    fVar5 = DAT_002c2480;
    iVar14 = 0;
    do {
      fVar6 = DAT_002c2484;
      fVar19 = 0.0;
      if (puVar16 != (undefined *)0x0) {
        fVar19 = (float)(byte)puVar16[iVar14 + 0xc] * fVar5 + 0.0;
      }
      if (abStack_80[iVar14] == 100) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = ((float)(int)(short)((ushort *)param_3)[1] * 0.25) /
                 (float)(int)(100 - (uint)abStack_80[iVar14]);
      }
      iVar13 = iVar14 * 0x10;
      if (1.0 < fVar20) {
        fVar20 = 1.0;
      }
      iVar18 = 0;
      iVar15 = iVar14 + 1;
      if (0 < *(int *)(&DAT_0027e808 + iVar13)) {
        iVar8 = 0;
        do {
          fVar17 = (float)*(byte *)((int)piVar12 + *(int *)(&DAT_0027e80c + iVar8 + iVar13));
          if (DAT_002c4670 == 0) {
            bVar21 = (byte)(int)(fVar19 + (fVar17 + fVar20 * (100.0 - fVar17)) * fVar6);
          }
          else {
            bVar21 = *(byte *)((int)param_2 + iVar14 + 0x18);
          }
          pbVar11[*(int *)(&DAT_0027e80c + iVar8 + iVar13)] = bVar21;
          iVar18 = iVar18 + 1;
          iVar8 = iVar18 * 4;
        } while (iVar18 < *(int *)(&DAT_0027e808 + iVar13));
      }
      iVar14 = iVar15;
    } while (iVar15 < 4);
  }
  do {
    *pbVar11 = (byte)(((int)(float)*pbVar11 * 0xff) / 100);
    pbVar11 = pbVar11 + 1;
  } while ((int)pbVar11 < param_4 + 0x1e);
  return;
}

