/* Ghidra pseudocode. PS2 address: 00231ef8. Not validated source. */

/* WARNING: Type propagation algorithm not settling */

void FUN_00231ef8(undefined8 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float afStack_310 [4];
  float afStack_300 [102];
  undefined4 auStack_168 [7];
  undefined4 auStack_14c [7];
  float afStack_130 [12];
  undefined1 auStack_100 [48];
  uint uStack_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  
  puVar16 = (undefined4 *)param_1;
  iVar10 = puVar16[2];
  uVar12 = (uint)puVar16[1] >> 6;
  uVar6 = puVar16[1] & DAT_002a2d48;
  uVar9 = iVar10 - 6;
  puVar16[1] = uVar12;
  puVar16[2] = uVar9;
  if ((int)uVar9 < 8) {
    bVar1 = *(byte *)*puVar16;
    puVar16[2] = iVar10 + 2;
    *puVar16 = (byte *)*puVar16 + 1;
    puVar16[1] = uVar12 | (uint)bVar1 << (uVar9 & 0x1f);
  }
  puStack_b8 = puVar16 + 0x1a0;
  puStack_cc = puVar16 + 4;
  uStack_d0 = (uint)((int)uVar6 < (int)puVar16[3]);
  puStack_c0 = puVar16 + 0x50;
  afStack_130[0] = (*(float *)(&DAT_002a2d58 + uVar6 * 4) - (float)puVar16[0x44]) * 0.25;
  puStack_bc = puVar16 + 0x20c;
  puStack_b4 = puVar16 + 0x1ac;
  puStack_c8 = puVar16 + 0x1b8;
  puStack_c4 = puVar16 + 0x1c4;
  pfVar5 = afStack_130;
  pfVar18 = (float *)(puVar16 + 0x44);
  pfVar4 = afStack_130;
  pfVar15 = (float *)(puVar16 + 0x45);
  iVar10 = 2;
  do {
    pfVar4 = pfVar4 + 1;
    iVar11 = puVar16[2];
    uVar9 = (uint)puVar16[1] >> 6;
    uVar12 = puVar16[1] & DAT_002a2d48;
    uVar6 = iVar11 - 6;
    puVar16[1] = uVar9;
    puVar16[2] = uVar6;
    if ((int)uVar6 < 8) {
      bVar1 = *(byte *)*puVar16;
      puVar16[2] = iVar11 + 2;
      *puVar16 = (byte *)*puVar16 + 1;
      puVar16[1] = uVar9 | (uint)bVar1 << (uVar6 & 0x1f);
    }
    fVar19 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    iVar10 = iVar10 + -1;
    *pfVar4 = (*(float *)(&DAT_002a2d58 + uVar12 * 4) - fVar19) * 0.25;
  } while (-1 < iVar10);
  pfVar15 = afStack_130 + 4;
  pfVar4 = (float *)(puVar16 + 0x48);
  iVar10 = 7;
  do {
    iVar11 = puVar16[2];
    uVar9 = (uint)puVar16[1] >> 5;
    uVar12 = puVar16[1] & DAT_002a2d44;
    uVar6 = iVar11 - 5;
    puVar16[1] = uVar9;
    puVar16[2] = uVar6;
    if ((int)uVar6 < 8) {
      bVar1 = *(byte *)*puVar16;
      puVar16[2] = iVar11 + 3;
      *puVar16 = (byte *)*puVar16 + 1;
      puVar16[1] = uVar9 | (uint)bVar1 << (uVar6 & 0x1f);
    }
    fVar19 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    iVar10 = iVar10 + -1;
    *pfVar15 = (*(float *)(&DAT_002a2d58 + (uVar12 + 0x10) * 4) - fVar19) * 0.25;
    pfVar15 = pfVar15 + 1;
  } while (-1 < iVar10);
  iVar10 = 0;
  do {
    uVar9 = DAT_002a2d50;
    uVar6 = puVar16[1];
    iVar11 = puVar16[2];
    uVar7 = uVar6 >> 8;
    uVar12 = iVar11 - 8;
    puVar16[1] = uVar7;
    puVar16[2] = uVar12;
    if ((int)uVar12 < 8) {
      bVar1 = *(byte *)*puVar16;
      puVar16[2] = iVar11;
      *puVar16 = (byte *)*puVar16 + 1;
      puVar16[1] = uVar7 | (uint)bVar1 << (uVar12 & 0x1f);
    }
    iVar11 = puVar16[2];
    uVar14 = (uint)puVar16[1] >> 4;
    uVar7 = puVar16[1] & DAT_002a2d40;
    puVar16[1] = uVar14;
    uVar12 = iVar11 - 4;
    puVar16[2] = uVar12;
    if ((int)uVar12 < 8) {
      bVar1 = *(byte *)*puVar16;
      puVar16[2] = iVar11 + 4;
      *puVar16 = (byte *)*puVar16 + 1;
      puVar16[1] = uVar14 | (uint)bVar1 << (uVar12 & 0x1f);
    }
    if ((int)uVar7 < 0) {
      uVar12 = puVar16[1];
    }
    else {
      uVar12 = puVar16[1];
    }
    iVar11 = puVar16[2];
    uVar14 = iVar11 - 6;
    uVar13 = uVar12 & DAT_002a2d48;
    puVar16[1] = uVar12 >> 6;
    fVar19 = (float)uVar7 * 0.06666667;
    puVar16[2] = uVar14;
    if ((int)uVar14 < 8) {
      bVar1 = *(byte *)*puVar16;
      puVar16[2] = iVar11 + 2;
      *puVar16 = (byte *)*puVar16 + 1;
      puVar16[1] = uVar12 >> 6 | (uint)bVar1 << (uVar14 & 0x1f);
    }
    iVar11 = puVar16[2];
    uVar7 = (uint)puVar16[1] >> 1;
    uVar12 = iVar11 - 1;
    fVar21 = (float)puStack_cc[uVar13];
    uVar14 = puVar16[1] & DAT_002a2d34;
    puVar16[1] = uVar7;
    puVar16[2] = uVar12;
    if ((int)uVar12 < 8) {
      bVar1 = *(byte *)*puVar16;
      puVar16[2] = iVar11 + 7;
      *puVar16 = (byte *)*puVar16 + 1;
      puVar16[1] = uVar7 | (uint)bVar1 << (uVar12 & 0x1f);
    }
    iVar11 = puVar16[2];
    uVar7 = (uint)puVar16[1] >> 1;
    uVar13 = puVar16[1] & DAT_002a2d34;
    uVar12 = iVar11 - 1;
    puVar16[1] = uVar7;
    puVar16[2] = uVar12;
    if ((int)uVar12 < 8) {
      bVar1 = *(byte *)*puVar16;
      puVar16[2] = iVar11 + 7;
      *puVar16 = (byte *)*puVar16 + 1;
      puVar16[1] = uVar7 | (uint)bVar1 << (uVar12 & 0x1f);
    }
    FUN_00231850(param_1,uStack_d0,afStack_300 + uVar14 + 1,2);
    if (uVar13 == 0) {
      iVar11 = 4;
      pfVar4 = afStack_300;
      do {
        *pfVar4 = 0.0;
        iVar11 = iVar11 + -1;
        pfVar4 = pfVar4 + -1;
      } while (-1 < iVar11);
      puVar2 = auStack_14c;
      iVar11 = 4;
      do {
        *puVar2 = 0;
        iVar11 = iVar11 + -1;
        puVar2 = puVar2 + 1;
      } while (-1 < iVar11);
      pfVar4 = (float *)((int)afStack_310 - (uVar14 * 4 + -0x18));
      iVar11 = 0x6a;
      do {
        iVar11 = iVar11 + -2;
        *pfVar4 = (pfVar4[-1] + pfVar4[1]) * 0.59738594 + (pfVar4[-3] + pfVar4[3]) * -0.11459156 +
                  (pfVar4[-5] + pfVar4[5]) * 0.01803268;
        pfVar4 = pfVar4 + 2;
      } while (-1 < iVar11);
      uVar3 = FUN_00258948(fVar21);
      uVar3 = FUN_00257580(uVar3,0x3fe0000000000000);
      fVar21 = (float)FUN_00257d50(uVar3);
    }
    else {
      iVar11 = 0x6a;
      puVar2 = auStack_168 + -(uVar14 - 6);
      do {
        *puVar2 = 0;
        iVar11 = iVar11 + -2;
        puVar2 = puVar2 + -2;
      } while (-1 < iVar11);
    }
    iVar17 = iVar10 + 1;
    pfVar8 = (float *)(puVar16 + 0x5c + ((iVar10 + 2) * 0x6c - (uVar6 & uVar9)));
    pfVar4 = afStack_300;
    iVar11 = 0x6b;
    pfVar15 = (float *)(puStack_b8 + iVar10 * 0x6c);
    do {
      pfVar4 = (float *)((int)pfVar4 + 4);
      fVar20 = *pfVar8;
      iVar11 = iVar11 + -1;
      pfVar8 = pfVar8 + 1;
      *pfVar15 = fVar19 * fVar20 + fVar21 * *pfVar4;
      pfVar15 = pfVar15 + 1;
    } while (-1 < iVar11);
    iVar10 = iVar17;
  } while (iVar17 < 4);
  FUN_0022d7d0(puVar16 + 0x5c,puStack_bc,0x510);
  iVar10 = 0xb;
  pfVar4 = pfVar5;
  pfVar15 = pfVar18;
  do {
    iVar10 = iVar10 + -1;
    fVar19 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    *pfVar15 = *pfVar15 + fVar19;
    pfVar15 = pfVar15 + 1;
  } while (-1 < iVar10);
  FUN_00231bc8(pfVar18,auStack_100);
  FUN_00232660(1,auStack_100,puStack_c0,puStack_b8);
  iVar10 = 0xb;
  pfVar4 = pfVar5;
  pfVar15 = pfVar18;
  do {
    iVar10 = iVar10 + -1;
    fVar19 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    *pfVar15 = *pfVar15 + fVar19;
    pfVar15 = pfVar15 + 1;
  } while (-1 < iVar10);
  FUN_00231bc8(pfVar18,auStack_100);
  FUN_00232660(1,auStack_100,puStack_c0,puStack_b4);
  iVar10 = 0xb;
  pfVar4 = pfVar5;
  pfVar15 = pfVar18;
  do {
    iVar10 = iVar10 + -1;
    fVar19 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    *pfVar15 = *pfVar15 + fVar19;
    pfVar15 = pfVar15 + 1;
  } while (-1 < iVar10);
  FUN_00231bc8(pfVar18,auStack_100);
  FUN_00232660(1,auStack_100,puStack_c0,puStack_c8);
  iVar10 = 0xb;
  pfVar4 = pfVar18;
  do {
    iVar10 = iVar10 + -1;
    fVar19 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *pfVar4 = *pfVar4 + fVar19;
    pfVar4 = pfVar4 + 1;
  } while (-1 < iVar10);
  FUN_00231bc8(pfVar18,auStack_100);
  FUN_00232660(0x21,auStack_100,puStack_c0,puStack_c4);
  return;
}

