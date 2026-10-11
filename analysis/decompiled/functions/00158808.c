/* Ghidra pseudocode. PS2 address: 00158808. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00158c1c) */

void FUN_00158808(undefined8 param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  undefined4 uVar23;
  undefined *puVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  byte bVar29;
  byte abStack_b0 [16];
  
  piVar3 = *(int **)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar25 = *piVar3;
  iVar5 = iVar25 * 0x3c;
  puVar21 = &DAT_0027c380 + iVar25 * 0xf;
  iVar25 = iVar25 * 0xdc + piVar3[5] * 0x14 + 0x27c920;
  if (*(int *)(iVar4 + 0x14) == 8) {
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar24 = &DAT_0027e0c0 + *(int *)(iVar4 + 0x14) * 0x10;
  }
  uVar23 = 8;
  FUN_0025bbe4(param_3 + 4,*(undefined4 *)(param_2 + 0xc));
  *(undefined4 *)(param_3 + 0x24) = *puVar21;
  *(undefined *)(param_3 + 0x1f) = (&DAT_0027c39d)[iVar5];
  *(undefined *)(param_3 + 0x20) = (&DAT_0027c39e)[iVar5];
  uVar9 = *(undefined4 *)(&DAT_0027c3b0 + iVar5);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(&DAT_0027c3a0 + iVar5);
  *(undefined4 *)(param_3 + 0x44) = uVar9;
  *(undefined *)(param_3 + 0x4c) = (&DAT_0027c3b8)[iVar5];
  *(char *)(param_3 + 0x1e) = (char)piVar3[1];
  uVar9 = *(undefined4 *)(iVar4 + 0x14);
  *(int *)(param_3 + 0x28) = piVar3[2];
  *(undefined4 *)(param_3 + 0x50) = uVar9;
  cVar2 = *param_2;
  *(undefined4 *)(param_3 + 0x5c) = 0;
  *(char *)(param_3 + 0x54) = cVar2;
  uVar9 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(undefined4 *)(iVar25 + 8);
  *(undefined1 *)(param_3 + 0x56) = 0xff;
  *(undefined1 *)(param_3 + 0x55) = 0xff;
  *(undefined4 *)(param_3 + 0x58) = uVar9;
  uVar14 = DAT_002c466c;
  uVar9 = DAT_002c4668;
  *(undefined4 *)(param_3 + 0x2c) = uVar8;
  *(undefined4 *)(param_3 + 0x60) = uVar9;
  *(undefined4 *)(param_3 + 100) = uVar14;
  lVar12 = FUN_001587f0(param_1);
  if (lVar12 != 0) {
    uVar23 = *(undefined4 *)(iVar4 + 0x14);
  }
  uVar8 = FUN_00159078(param_1,*puVar21,uVar23,piVar3[4]);
  uVar9 = *puVar21;
  iVar19 = piVar3[4];
  *(undefined4 *)(param_3 + 0x34) = uVar8;
  uVar8 = FUN_001590b8(param_1,uVar9,uVar23,iVar19);
  uVar9 = *puVar21;
  iVar19 = piVar3[4];
  *(undefined4 *)(param_3 + 0x38) = uVar8;
  uVar8 = FUN_001590f8(param_1,uVar9,uVar23,iVar19);
  uVar9 = *puVar21;
  iVar19 = piVar3[4];
  *(undefined4 *)(param_3 + 0x3c) = uVar8;
  uVar8 = FUN_00159138(param_1,uVar9,uVar23,iVar19);
  iVar19 = piVar3[5];
  uVar9 = *puVar21;
  *(undefined4 *)(param_3 + 0x40) = uVar8;
  uVar9 = FUN_00159028(param_1,uVar9,uVar23,iVar19);
  iVar19 = DAT_002c4678;
  bVar1 = DAT_002c4678 == 0;
  *(undefined4 *)(param_3 + 0x30) = uVar9;
  if ((bVar1) && (DAT_002c467c == 0)) goto LAB_00158a3c;
  if (iVar19 == 0) {
LAB_00158a10:
    uVar9 = 0x41;
    uVar8 = 0xf;
    uVar23 = 0x29;
    uVar14 = 0x23;
    uVar16 = 0x72;
  }
  else {
    if ((DAT_002c467c != 0) && (*param_2 == '\x01')) {
      iVar19 = 0;
    }
    uVar9 = 0x40;
    if (iVar19 == 0) goto LAB_00158a10;
    uVar8 = 0xe;
    uVar23 = 0x28;
    uVar14 = 0x22;
    uVar16 = 0x71;
  }
  *(undefined4 *)(param_3 + 0x34) = uVar9;
  *(undefined4 *)(param_3 + 0x38) = uVar8;
  *(undefined4 *)(param_3 + 0x3c) = uVar23;
  *(undefined4 *)(param_3 + 0x40) = uVar14;
  *(undefined4 *)(param_3 + 0x30) = uVar16;
LAB_00158a3c:
  if (DAT_002c4674 != 0) {
    *(undefined4 *)(param_3 + 0x30) = 0x70;
  }
  iVar19 = iVar5 + 0x27c388;
  pbVar20 = (byte *)(param_3 + 0xe);
  FUN_0023bac0(pbVar20,iVar19,0x10);
  FUN_00159178(param_1,abStack_b0,iVar19);
  fVar7 = DAT_002c247c;
  fVar6 = DAT_002c2478;
  pbVar22 = (byte *)(iVar25 + 0x10);
  pbVar11 = pbVar22;
  iVar25 = 0;
  do {
    fVar27 = (float)*pbVar11 * fVar6;
    if (puVar24 != (undefined *)0x0) {
      fVar27 = fVar27 + (float)(byte)puVar24[iVar25 + 0xc] * fVar7;
    }
    if (abStack_b0[iVar25] == 100) {
      fVar28 = 0.0;
    }
    else {
      uVar13 = (uint)abStack_b0[iVar25];
      fVar28 = (float)(int)(*(byte *)(iVar4 + 0xc + iVar25) - uVar13) / (float)(int)(100 - uVar13);
    }
    iVar15 = iVar25 * 0x10;
    iVar17 = 0;
    iVar18 = iVar25 + 1;
    if (0 < *(int *)(&DAT_0027e808 + iVar15)) {
      iVar10 = 0;
      do {
        fVar26 = (float)*(byte *)(iVar19 + *(int *)(&DAT_0027e80c + iVar10 + iVar15));
        if (DAT_002c4670 == 0) {
          bVar29 = (byte)(int)(fVar27 + (fVar26 + fVar28 * (100.0 - fVar26)) * 0.75);
        }
        else {
          bVar29 = (&DAT_0027c398)[iVar25 + iVar5];
        }
        pbVar20[*(int *)(&DAT_0027e80c + iVar10 + iVar15)] = bVar29;
        iVar17 = iVar17 + 1;
        iVar10 = iVar17 * 4;
      } while (iVar17 < *(int *)(&DAT_0027e808 + iVar15));
    }
    pbVar11 = pbVar22 + iVar18;
    iVar25 = iVar18;
  } while (iVar18 < 4);
  do {
    *pbVar20 = (byte)(((int)(float)*pbVar20 * 0xff) / 100);
    pbVar20 = pbVar20 + 1;
  } while ((int)pbVar20 < param_3 + 0x1e);
  return;
}

