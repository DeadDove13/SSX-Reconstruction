/* Ghidra pseudocode. PS2 address: 001504a8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001504e4) */
/* WARNING: Removing unreachable block (ram,0x001504ec) */
/* WARNING: Removing unreachable block (ram,0x00150540) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001504a8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  float fVar15;
  undefined *puVar16;
  float fVar17;
  undefined8 auStack_120 [2];
  undefined4 uStack_10c;
  undefined8 auStack_108 [3];
  undefined4 auStack_f0 [8];
  undefined4 auStack_d0 [5];
  undefined4 auStack_bc [5];
  undefined4 auStack_a8 [5];
  undefined4 auStack_94 [5];
  undefined4 auStack_80 [8];
  
  iVar1 = *(int *)((int)param_1 + 0x1c);
  puVar5 = auStack_120;
  puVar6 = &DAT_002ae678;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar10 = puVar8[1];
    uVar11 = puVar8[2];
    uVar12 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar10;
    puVar7[2] = uVar11;
    puVar7[3] = uVar12;
    puVar5 = puVar7 + 4;
    puVar6 = puVar8 + 4;
  } while (puVar8 + 4 != (undefined8 *)&UNK_002ae718);
  uVar10 = puVar8[5];
  uVar9 = *(undefined4 *)(puVar8 + 6);
  puVar7[4] = _UNK_002ae718;
  puVar7[5] = uVar10;
  *(undefined4 *)(puVar7 + 6) = uVar9;
  iVar2 = *(int *)(iVar1 + 0x16c);
  puVar16 = *(undefined **)(iVar1 + 0x1bc);
  fVar17 = *(float *)(iVar1 + 0x1b0);
  if (*(int *)(iVar1 + 0x144) == 0) {
    puVar14 = puVar16;
    if (fVar17 == 0.0) goto joined_r0x0015064c;
    puVar13 = (undefined *)FUN_00218510((float)puVar16 / fVar17);
    puVar4 = puVar16;
    fVar15 = fVar17;
  }
  else {
    fVar15 = -fVar17;
    puVar14 = (undefined *)-(float)puVar16;
    if (fVar15 == 0.0) {
joined_r0x0015064c:
      if (((float)puVar14 != 0.0) && (bVar3 = (float)puVar14 < 0.0, puVar14 = DAT_002c241c, bVar3))
      {
        puVar14 = PTR_DAT_002c2418;
      }
      goto LAB_001506ac;
    }
    puVar13 = (undefined *)FUN_00218510((float)puVar14 / fVar15);
    puVar4 = puVar14;
  }
  puVar14 = puVar13;
  if (fVar15 < 0.0) {
    if (0.0 < (float)puVar4) {
      puVar14 = (undefined *)((float)puVar14 + DAT_002c2420);
    }
    else {
      puVar14 = (undefined *)((float)puVar14 - DAT_002c2424);
    }
  }
LAB_001506ac:
  if (((float)puVar16 == 0.0) && (fVar17 == 0.0)) {
    uVar9 = *(undefined4 *)((int)auStack_120 + iVar2 * 4);
  }
  else if (DAT_002c2428 < ABS((float)puVar14)) {
    uVar9 = (&uStack_10c)[iVar2];
  }
  else if (DAT_002c242c < (float)puVar14) {
    uVar9 = auStack_f0[iVar2 + -2];
  }
  else if (DAT_002c2430 < (float)puVar14) {
    uVar9 = auStack_f0[iVar2 + 3];
  }
  else if (DAT_002c2434 < (float)puVar14) {
    uVar9 = auStack_d0[iVar2];
  }
  else if ((float)puVar14 < DAT_002c2438) {
    uVar9 = auStack_bc[iVar2];
  }
  else if ((float)puVar14 < DAT_002c243c) {
    uVar9 = auStack_a8[iVar2];
  }
  else {
    if (DAT_002c2440 <= (float)puVar14) {
      FUN_0014cd18(param_1,auStack_80[iVar2],0,5);
      return;
    }
    uVar9 = auStack_94[iVar2];
  }
  FUN_0014cd18(param_1,uVar9,0,5);
  return;
}

