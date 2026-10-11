/* Ghidra pseudocode. PS2 address: 0014abc8. Not validated source. */

/* WARNING: Type propagation algorithm not settling */

bool FUN_0014abc8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  
  fVar9 = 0.0;
  iVar7 = (int)param_2;
  iVar4 = *(int *)(iVar7 + 0x220);
  fVar13 = *(float *)(iVar4 + 0x1b0);
  iVar1 = *(int *)(iVar4 + 0x16c);
  fVar12 = *(float *)(iVar4 + 0x198);
  puVar14 = *(undefined **)(iVar4 + 0x1bc);
  if ((fVar13 == 0.0) && ((float)puVar14 == 0.0)) {
    FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad790 + iVar1 * 4));
    uVar2 = *(undefined4 *)(&DAT_002ad7a4 + iVar1 * 4);
    *(float *)(iVar7 + 500) = 1.0 - fVar12;
    FUN_001478c8(param_2,1,uVar2);
    *(float *)(iVar7 + 0x1f8) = fVar12;
    fVar12 = fVar12 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + 0x228) + 8) + 0xc) >> 7 &
                                   0xff) - 1);
    if (fVar12 < fVar9) {
      *(float *)(iVar7 + 0x1ec) = fVar9;
    }
    else {
      *(float *)(iVar7 + 0x1ec) = fVar12;
    }
    *(undefined4 *)(iVar7 + 0x1e4) = 2;
    return (bool)2;
  }
  if (*(int *)(iVar4 + 0x144) == 0) {
    puVar10 = puVar14;
    if (fVar13 != 0.0) {
      puVar10 = (undefined *)FUN_00218510((float)puVar14 / fVar13);
      puVar11 = puVar14;
      fVar12 = fVar13;
      goto joined_r0x0014ad7c;
    }
  }
  else {
    fVar12 = -fVar13;
    puVar10 = (undefined *)-(float)puVar14;
    if (fVar12 != 0.0) {
      puVar8 = (undefined *)FUN_00218510((float)puVar10 / fVar12);
      puVar11 = puVar10;
      puVar10 = puVar8;
joined_r0x0014ad7c:
      if (fVar12 < 0.0) {
        if ((float)puVar11 <= 0.0) {
          puVar10 = (undefined *)((float)puVar10 - DAT_002c2384);
        }
        else {
          puVar10 = (undefined *)((float)puVar10 + DAT_002c2380);
        }
      }
      goto LAB_0014adb0;
    }
  }
  if (((float)puVar10 != 0.0) && (bVar3 = (float)puVar10 < 0.0, puVar10 = DAT_002c237c, bVar3)) {
    puVar10 = PTR_DAT_002c2378;
  }
LAB_0014adb0:
  fVar12 = ABS(fVar13);
  puVar11 = (undefined *)ABS((float)puVar14);
  if (fVar12 == 0.0) {
    if (((float)puVar11 != 0.0) && (bVar3 = (float)puVar11 < 0.0, puVar11 = DAT_002c238c, bVar3)) {
      puVar11 = PTR_DAT_002c2388;
    }
  }
  else {
    puVar8 = puVar11;
    puVar11 = (undefined *)FUN_00218510((float)puVar11 / fVar12);
    if (fVar12 < 0.0) {
      if (0.0 < (float)puVar8) {
        puVar11 = (undefined *)((float)puVar11 + DAT_002c2390);
      }
      else {
        puVar11 = (undefined *)((float)puVar11 - DAT_002c2394);
      }
    }
  }
  if (DAT_002c2398 < (float)puVar11) {
    fVar12 = (float)FUN_00218328(DAT_002c239c - (float)puVar11);
  }
  else {
    fVar12 = (float)FUN_00218328(puVar11);
  }
  fVar9 = 0.0;
  if (0.0 < fVar12) {
    fVar9 = SQRT((float)puVar14 * (float)puVar14 + fVar13 * fVar13) * fVar12;
  }
  uVar6 = 0;
  if (DAT_002c23a0 < (float)puVar10) {
    FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad7b8 + iVar1 * 4));
    fVar13 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + 0x224) + 8) + 0xc) >> 7 &
                                  0xff) - 1);
    if (fVar13 < 0.0) {
      *(undefined4 *)(iVar7 + 0x1e8) = 0;
    }
    else {
      *(float *)(iVar7 + 0x1e8) = fVar13;
    }
    uVar6 = 1;
    *(float *)(iVar7 + 500) = (DAT_002c23a8 - ABS((float)puVar10 - DAT_002c23a4)) / DAT_002c23a8;
  }
  if ((float)puVar10 < DAT_002c23ac) {
    FUN_001478c8(param_2,uVar6,*(undefined4 *)(&UNK_002ad7b8 + iVar1 * 4));
    fVar13 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + uVar6 * 4 + 0x224) + 8) + 0xc
                                            ) >> 7 & 0xff) - 1);
    pfVar5 = (float *)(iVar7 + 0x1e8 + uVar6 * 4);
    if (fVar13 < 0.0) {
      *pfVar5 = 0.0;
    }
    else {
      *pfVar5 = fVar13;
    }
    iVar4 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(float *)(iVar7 + iVar4 + 500) =
         (DAT_002c23b4 - ABS((float)puVar10 + DAT_002c23b0)) / DAT_002c23b4;
  }
  if ((DAT_002c23b8 < (float)puVar10) && ((float)puVar10 < DAT_002c23bc)) {
    FUN_001478c8(param_2,uVar6,*(undefined4 *)(&UNK_002ad7cc + iVar1 * 4));
    fVar13 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + uVar6 * 4 + 0x224) + 8) + 0xc
                                            ) >> 7 & 0xff) - 1);
    pfVar5 = (float *)(iVar7 + 0x1e8 + uVar6 * 4);
    if (fVar13 < 0.0) {
      *pfVar5 = 0.0;
    }
    else {
      *pfVar5 = fVar13;
    }
    iVar4 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(float *)(iVar7 + iVar4 + 500) =
         (DAT_002c23c4 - ABS((float)puVar10 - DAT_002c23c0)) / DAT_002c23c4;
  }
  if ((DAT_002c23c8 < (float)puVar10) && ((float)puVar10 < DAT_002c23cc)) {
    FUN_001478c8(param_2,uVar6,*(undefined4 *)(&UNK_002ad7e0 + iVar1 * 4));
    fVar13 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + uVar6 * 4 + 0x224) + 8) + 0xc
                                            ) >> 7 & 0xff) - 1);
    pfVar5 = (float *)(iVar7 + 0x1e8 + uVar6 * 4);
    if (fVar13 < 0.0) {
      *pfVar5 = 0.0;
    }
    else {
      *pfVar5 = fVar13;
    }
    iVar4 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(float *)(iVar7 + iVar4 + 500) =
         (DAT_002c23d4 - ABS((float)puVar10 - DAT_002c23d0)) / DAT_002c23d4;
  }
  if ((0.0 < (float)puVar10) && ((float)puVar10 < DAT_002c23d8)) {
    FUN_001478c8(param_2,uVar6,*(undefined4 *)(&UNK_002ad7f4 + iVar1 * 4));
    pfVar5 = (float *)(iVar7 + 0x1e8 + uVar6 * 4);
    fVar13 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + uVar6 * 4 + 0x224) + 8) + 0xc
                                            ) >> 7 & 0xff) - 1);
    if (fVar13 < 0.0) {
      *pfVar5 = 0.0;
    }
    else {
      *pfVar5 = fVar13;
    }
    iVar4 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(float *)(iVar7 + iVar4 + 500) =
         (DAT_002c23dc - ABS((float)puVar10 - DAT_002c23dc)) / DAT_002c23dc;
  }
  if ((DAT_002c23e0 < (float)puVar10) && ((float)puVar10 < DAT_002c23e4)) {
    FUN_001478c8(param_2,uVar6,*(undefined4 *)(&UNK_002ad808 + iVar1 * 4));
    fVar13 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + uVar6 * 4 + 0x224) + 8) + 0xc
                                            ) >> 7 & 0xff) - 1);
    pfVar5 = (float *)(iVar7 + 0x1e8 + uVar6 * 4);
    if (fVar13 < 0.0) {
      *pfVar5 = 0.0;
    }
    else {
      *pfVar5 = fVar13;
    }
    iVar4 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(float *)(iVar7 + iVar4 + 500) = (DAT_002c23e8 - ABS((float)puVar10)) / DAT_002c23e8;
  }
  if (((float)PTR_DAT_002c23ec < (float)puVar10) && ((float)puVar10 < 0.0)) {
    FUN_001478c8(param_2,uVar6,*(undefined4 *)(&UNK_002ad81c + iVar1 * 4));
    pfVar5 = (float *)(iVar7 + 0x1e8 + uVar6 * 4);
    fVar13 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + uVar6 * 4 + 0x224) + 8) + 0xc
                                            ) >> 7 & 0xff) - 1);
    if (fVar13 < 0.0) {
      *pfVar5 = 0.0;
    }
    else {
      *pfVar5 = fVar13;
    }
    iVar4 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(float *)(iVar7 + iVar4 + 500) =
         (DAT_002c23f0 - ABS((float)puVar10 + DAT_002c23f0)) / DAT_002c23f0;
  }
  if ((DAT_002c23f4 < (float)puVar10) && ((float)puVar10 < DAT_002c23f8)) {
    FUN_001478c8(param_2,uVar6,*(undefined4 *)(&UNK_002ad830 + iVar1 * 4));
    fVar13 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + uVar6 * 4 + 0x224) + 8) + 0xc
                                            ) >> 7 & 0xff) - 1);
    pfVar5 = (float *)(iVar7 + 0x1e8 + uVar6 * 4);
    if (fVar13 < 0.0) {
      *pfVar5 = 0.0;
    }
    else {
      *pfVar5 = fVar13;
    }
    iVar4 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(float *)(iVar7 + iVar4 + 500) =
         (DAT_002c2400 - ABS((float)puVar10 + DAT_002c23fc)) / DAT_002c2400;
  }
  if ((DAT_002c2404 < (float)puVar10) && ((float)puVar10 < (float)PTR_DAT_002c2408)) {
    FUN_001478c8(param_2,uVar6,*(undefined4 *)(&UNK_002ad844 + iVar1 * 4));
    fVar9 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar7 + uVar6 * 4 + 0x224) + 8) + 0xc)
                                  >> 7 & 0xff) - 1);
    pfVar5 = (float *)(iVar7 + 0x1e8 + uVar6 * 4);
    if (fVar9 < 0.0) {
      *pfVar5 = 0.0;
    }
    else {
      *pfVar5 = fVar9;
    }
    iVar4 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(float *)(iVar7 + iVar4 + 500) =
         (DAT_002c2410 - ABS((float)puVar10 + DAT_002c240c)) / DAT_002c2410;
  }
  *(uint *)(iVar7 + 0x1e4) = uVar6;
  return uVar6 < 4;
}

