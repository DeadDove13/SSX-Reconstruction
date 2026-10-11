/* Ghidra pseudocode. PS2 address: 001198d8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00119bac) */

void FUN_001198d8(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  float fVar15;
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
  undefined4 uVar26;
  undefined4 uVar27;
  float afStack_1e60 [12];
  float afStack_1e30 [84];
  undefined1 auStack_1ce0 [32];
  undefined4 auStack_1cc0 [4];
  undefined4 auStack_1cb0 [8];
  undefined4 auStack_1c90 [1780];
  
  pfVar8 = afStack_1e60;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + 0xc),1);
    FUN_0011ecf8(0x295e90,0);
    FUN_0011ed48(0x295e90,5);
    FUN_0011ed38(0x295e90,1);
    FUN_0011ed28(DAT_002c17a0,0x295e90,0,0);
    FUN_0011ed08(0x295e90,2,0);
    iVar7 = 0;
    iVar5 = 7;
    puVar6 = (undefined8 *)(param_1 + *(int *)(param_1 + 0x54) * 0xa0 + 0x60);
    fVar20 = *(float *)((int)puVar6 + 0x94);
    fVar24 = *(float *)(puVar6 + 0x10);
    fVar21 = *(float *)(puVar6 + 0x11);
    fVar25 = (float)(int)(*(float *)((int)puVar6 + 0x84) * 128.0);
    fVar22 = (float)(int)(*(float *)((int)puVar6 + 0x8c) * 128.0);
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
    fVar15 = *(float *)(puVar6 + 0x12);
    pfVar9 = afStack_1e30;
    iVar5 = 0;
    do {
      fVar23 = (float)iVar5;
      pfVar8[4] = fVar25;
      pfVar8[5] = (float)(int)(fVar21 * 128.0);
      pfVar8[6] = fVar22;
      iVar5 = iVar5 + 1;
      pfVar8[7] = 0.0;
      *pfVar8 = fVar15 + 1.0;
      iVar7 = iVar7 + 2;
      pfVar8[1] = 0.5;
      pfVar8[2] = 1.0;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      fVar2 = *(float *)(param_1 + 0x28);
      fVar3 = *(float *)(param_1 + 0x2c);
      pfVar8[8] = (float)uVar1;
      pfVar8[9] = (float)((ulong)uVar1 >> 0x20);
      pfVar8[10] = fVar2;
      pfVar8[0xb] = fVar3;
      *pfVar9 = fVar15;
      pfVar8 = pfVar8 + 0x18;
      pfVar9[1] = DAT_002c17b0 - fVar23 * DAT_002c17ac;
      pfVar9[2] = 1.0;
      pfVar9[4] = fVar25;
      pfVar9[5] = (float)(int)(fVar21 * 128.0);
      pfVar9[6] = fVar22;
      pfVar9[7] = (float)(int)(fVar24 * (DAT_002c17a4 - fVar20) * DAT_002c17a8 * 128.0);
      uVar1 = *puVar6;
      fVar2 = *(float *)(puVar6 + 1);
      fVar3 = *(float *)((int)puVar6 + 0xc);
      pfVar9[8] = (float)uVar1;
      pfVar9[9] = (float)((ulong)uVar1 >> 0x20);
      pfVar9[10] = fVar2;
      pfVar9[0xb] = fVar3;
      pfVar9 = pfVar9 + 0x18;
      puVar6 = puVar6 + 2;
    } while (iVar5 < 4);
    FUN_0011ed58(0x295e90,iVar7,afStack_1e60,0);
    fVar20 = DAT_002c17b8;
    iVar5 = 0x95;
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
    iVar5 = *(int *)(param_1 + 0x50);
    fVar21 = DAT_002c17b4;
    iVar7 = 1;
    while( true ) {
      iVar14 = 0;
      iVar12 = 0;
      if (0 < iVar5 + -1) {
        uVar27 = 0x3f800000;
        fVar22 = (float)(iVar7 + -1) * fVar21;
        puVar10 = auStack_1cc0;
        fVar24 = fVar20 - (float)iVar7 * fVar21;
        puVar13 = auStack_1c90;
        puVar11 = auStack_1cb0;
        iVar5 = *(int *)(param_1 + 0x54);
        while( true ) {
          iVar12 = iVar12 + 2;
          iVar5 = param_1 + ((iVar5 + iVar14) % 0x4b) * 0xa0 + 0x60;
          puVar6 = (undefined8 *)(iVar7 * 0x10 + iVar5);
          fVar15 = *(float *)(iVar5 + 0x80);
          fVar2 = *(float *)(iVar5 + 0x84);
          fVar3 = *(float *)(iVar5 + 0x88);
          fVar23 = *(float *)(iVar5 + 0x8c);
          fVar25 = (DAT_002c17bc - *(float *)(iVar5 + 0x94)) * DAT_002c17c0;
          uVar26 = *(undefined4 *)(iVar5 + 0x90);
          puVar10[-7] = fVar20 - fVar22;
          puVar10[-8] = uVar26;
          puVar10[-6] = uVar27;
          iVar16 = (int)(fVar2 * 128.0);
          iVar17 = (int)(fVar3 * 128.0);
          iVar18 = (int)(fVar23 * 128.0);
          puVar10[-4] = iVar16;
          puVar10[-3] = iVar17;
          iVar19 = (int)(fVar15 * fVar25 * 128.0);
          puVar10[-2] = iVar18;
          puVar10[-1] = iVar19;
          uVar1 = puVar6[-2];
          uVar26 = *(undefined4 *)(puVar6 + -1);
          uVar4 = *(undefined4 *)((int)puVar6 + -4);
          *puVar10 = (int)uVar1;
          puVar10[1] = (int)((ulong)uVar1 >> 0x20);
          puVar10[2] = uVar26;
          puVar10[3] = uVar4;
          uVar26 = *(undefined4 *)(iVar5 + 0x90);
          puVar10 = puVar10 + 0x18;
          puVar11[4] = iVar16;
          *puVar11 = uVar26;
          puVar11[5] = iVar17;
          puVar11[6] = iVar18;
          puVar11[7] = iVar19;
          puVar11[1] = fVar24;
          puVar11[2] = uVar27;
          uVar1 = *puVar6;
          uVar26 = *(undefined4 *)(puVar6 + 1);
          uVar4 = *(undefined4 *)((int)puVar6 + 0xc);
          *puVar13 = (int)uVar1;
          puVar13[1] = (int)((ulong)uVar1 >> 0x20);
          puVar13[2] = uVar26;
          puVar13[3] = uVar4;
          puVar11 = puVar11 + 0x18;
          puVar13 = puVar13 + 0x18;
          if (*(int *)(iVar5 + 0x9c) != 0) {
            if (2 < iVar12) {
              FUN_0011ed58(0x295e90,iVar12,auStack_1ce0,0);
            }
            puVar10 = auStack_1cc0;
            puVar11 = auStack_1cb0;
            puVar13 = auStack_1c90;
            iVar12 = 0;
          }
          iVar14 = iVar14 + 1;
          if (*(int *)(param_1 + 0x50) + -1 <= iVar14) break;
          iVar5 = *(int *)(param_1 + 0x54);
        }
      }
      if (2 < iVar12) {
        FUN_0011ed58(0x295e90,iVar12,auStack_1ce0,0);
      }
      if (3 < iVar7 + 1) break;
      iVar5 = *(int *)(param_1 + 0x50);
      iVar7 = iVar7 + 1;
    }
    FUN_0011ed38(0x295e90,0);
    FUN_0011ed28(DAT_002c17c4,0x295e90,0,2);
    FUN_0011ed08(0x295e90,0,0);
    FUN_0011ed48(0x295e90,3);
  }
  return;
}

