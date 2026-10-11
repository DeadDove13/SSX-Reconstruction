/* Ghidra pseudocode. PS2 address: 001e6620. Not validated source. */

void FUN_001e6620(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  undefined1 auStack_380 [16];
  int iStack_370;
  int iStack_36c;
  int iStack_368;
  int iStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  int iStack_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 auStack_320 [672];
  
  uVar3 = *(undefined8 *)(param_1 + 0x1c8);
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0011ed28(DAT_002c3838,0x295e90,0,0);
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed48(0x295e90,3);
  FUN_0011ed08(0x295e90,2,0);
  fStack_38c = (float)((ulong)uVar3 >> 0x20);
  fStack_388 = (float)uVar5;
  pfVar11 = (float *)(&DAT_00296b90 + (7 - *(int *)(param_1 + 0x1c4)) * 4);
  fStack_384 = (float)((ulong)uVar5 >> 0x20);
  iStack_36c = (int)(fStack_388 * 128.0);
  iStack_370 = (int)(fStack_38c * 128.0);
  iVar14 = 2;
  iVar2 = *(int *)(param_1 + 0x1c0);
  iStack_368 = (int)(fStack_384 * 128.0);
  iVar13 = 0;
  iStack_364 = (int)(*pfVar11 * 128.0);
  uStack_358 = *(undefined4 *)(param_2 + 1);
  uStack_354 = *(undefined4 *)((int)param_2 + 0xc);
  uStack_360 = (undefined4)*param_2;
  uStack_35c = (undefined4)((ulong)*param_2 >> 0x20);
  iStack_340 = (int)(*(float *)(param_1 + 0x1cc) * 128.0);
  iStack_33c = (int)(*(float *)(param_1 + 0x1d0) * 128.0);
  iStack_338 = (int)(*(float *)(param_1 + 0x1d4) * 128.0);
  iStack_334 = (int)(*(float *)(param_1 + 0x1c8) * 128.0);
  uStack_328 = *(undefined4 *)(param_2 + 3);
  uStack_324 = *(undefined4 *)((int)param_2 + 0x1c);
  uStack_330 = (undefined4)param_2[2];
  uStack_32c = (undefined4)((ulong)param_2[2] >> 0x20);
  if (0 < *(int *)(param_1 + 0x1c4)) {
    puVar12 = auStack_320;
    puVar10 = &uStack_330;
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        iVar2 = 6;
      }
      fVar15 = *pfVar11;
      *(int *)(puVar12 + 0x10) = (int)(fStack_38c * 128.0);
      puVar8 = (undefined8 *)(iVar2 * 0x40 + param_1);
      *(int *)(puVar12 + 0x14) = (int)(fStack_388 * 128.0);
      fVar16 = *(float *)(param_1 + 0x1c8);
      *(int *)(puVar12 + 0x18) = (int)(fStack_384 * 128.0);
      iVar13 = iVar13 + 1;
      *(int *)(puVar12 + 0x1c) = (int)(fVar15 * 128.0);
      uVar3 = *puVar8;
      uVar6 = *(undefined4 *)(puVar8 + 1);
      uVar7 = *(undefined4 *)((int)puVar8 + 0xc);
      *(int *)(puVar12 + 0x20) = (int)uVar3;
      *(int *)(puVar12 + 0x24) = (int)((ulong)uVar3 >> 0x20);
      *(undefined4 *)(puVar12 + 0x28) = uVar6;
      *(undefined4 *)(puVar12 + 0x2c) = uVar7;
      fVar15 = *(float *)(param_1 + 0x1d0);
      puVar12 = puVar12 + 0x60;
      fVar17 = *(float *)(param_1 + 0x1d4);
      iVar1 = *(int *)(param_1 + 0x1c4);
      iVar14 = iVar14 + 2;
      puVar10[0x14] = (int)(*(float *)(param_1 + 0x1cc) * 128.0);
      puVar10[0x15] = (int)(fVar15 * 128.0);
      puVar10[0x16] = (int)(fVar17 * 128.0);
      pfVar11 = pfVar11 + 1;
      puVar10[0x17] = (int)(fVar16 * 128.0);
      uVar6 = *(undefined4 *)((int)puVar8 + 0x14);
      uVar7 = *(undefined4 *)(puVar8 + 3);
      uVar4 = *(undefined4 *)((int)puVar8 + 0x1c);
      puVar10[0x18] = *(undefined4 *)(puVar8 + 2);
      puVar10[0x19] = uVar6;
      puVar10[0x1a] = uVar7;
      puVar10[0x1b] = uVar4;
      puVar10 = puVar10 + 0x18;
    } while (iVar13 < iVar1);
  }
  FUN_0011ed58(0x295e90,iVar14,auStack_380,0);
  pfVar11 = (float *)(&DAT_00296b90 + (7 - *(int *)(param_1 + 0x1c4)) * 4);
  iVar14 = 2;
  iVar2 = *(int *)(param_1 + 0x1c0);
  iStack_370 = (int)(fStack_38c * 128.0);
  iVar13 = 0;
  iStack_36c = (int)(fStack_388 * 128.0);
  iStack_368 = (int)(fStack_384 * 128.0);
  iStack_364 = (int)(*pfVar11 * 128.0);
  uStack_360 = *(undefined4 *)(param_2 + 4);
  uStack_35c = *(undefined4 *)((int)param_2 + 0x24);
  uStack_358 = *(undefined4 *)(param_2 + 5);
  uStack_354 = *(undefined4 *)((int)param_2 + 0x2c);
  iStack_334 = (int)(*(float *)(param_1 + 0x1c8) * 128.0);
  iStack_340 = (int)(*(float *)(param_1 + 0x1cc) * 128.0);
  iStack_33c = (int)(*(float *)(param_1 + 0x1d0) * 128.0);
  iStack_338 = (int)(*(float *)(param_1 + 0x1d4) * 128.0);
  uStack_328 = *(undefined4 *)(param_2 + 7);
  uStack_324 = *(undefined4 *)((int)param_2 + 0x3c);
  uStack_330 = (undefined4)param_2[6];
  uStack_32c = (undefined4)((ulong)param_2[6] >> 0x20);
  if (0 < *(int *)(param_1 + 0x1c4)) {
    puVar12 = auStack_320;
    puVar10 = &uStack_330;
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        iVar2 = 6;
      }
      fVar15 = *pfVar11;
      *(int *)(puVar12 + 0x10) = (int)(fStack_38c * 128.0);
      iVar9 = iVar2 * 0x40 + param_1;
      *(int *)(puVar12 + 0x14) = (int)(fStack_388 * 128.0);
      fVar16 = *(float *)(param_1 + 0x1c8);
      *(int *)(puVar12 + 0x18) = (int)(fStack_384 * 128.0);
      *(int *)(puVar12 + 0x1c) = (int)(fVar15 * 128.0);
      uVar6 = *(undefined4 *)(iVar9 + 0x24);
      uVar7 = *(undefined4 *)(iVar9 + 0x28);
      uVar4 = *(undefined4 *)(iVar9 + 0x2c);
      *(undefined4 *)(puVar12 + 0x20) = *(undefined4 *)(iVar9 + 0x20);
      *(undefined4 *)(puVar12 + 0x24) = uVar6;
      *(undefined4 *)(puVar12 + 0x28) = uVar7;
      *(undefined4 *)(puVar12 + 0x2c) = uVar4;
      fVar15 = *(float *)(param_1 + 0x1d0);
      iVar13 = iVar13 + 1;
      fVar17 = *(float *)(param_1 + 0x1d4);
      iVar1 = *(int *)(param_1 + 0x1c4);
      puVar12 = puVar12 + 0x60;
      puVar10[0x14] = (int)(*(float *)(param_1 + 0x1cc) * 128.0);
      puVar10[0x15] = (int)(fVar15 * 128.0);
      iVar14 = iVar14 + 2;
      puVar10[0x16] = (int)(fVar17 * 128.0);
      puVar10[0x17] = (int)(fVar16 * 128.0);
      pfVar11 = pfVar11 + 1;
      uVar6 = *(undefined4 *)(iVar9 + 0x34);
      uVar7 = *(undefined4 *)(iVar9 + 0x38);
      uVar4 = *(undefined4 *)(iVar9 + 0x3c);
      puVar10[0x18] = *(undefined4 *)(iVar9 + 0x30);
      puVar10[0x19] = uVar6;
      puVar10[0x1a] = uVar7;
      puVar10[0x1b] = uVar4;
      puVar10 = puVar10 + 0x18;
    } while (iVar13 < iVar1);
  }
  FUN_0011ed58(0x295e90,iVar14,auStack_380,0);
  FUN_0011ed28(DAT_002c383c,0x295e90,0,2);
  FUN_0011ed38(0x295e90,0);
  FUN_0011ed08(0x295e90,0,0);
  return;
}

