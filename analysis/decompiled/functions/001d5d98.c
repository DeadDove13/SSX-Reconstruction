/* Ghidra pseudocode. PS2 address: 001d5d98. Not validated source. */

void FUN_001d5d98(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  bool bVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 uVar17;
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
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  uint uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  iVar7 = DAT_002859d0;
  uStack_fc = *(undefined4 *)(DAT_002859d0 + 0x5bc);
  fVar36 = 3.0;
  fStack_104 = DAT_00296264[0xf];
  fStack_110 = DAT_00296264[0xc];
  fStack_10c = DAT_00296264[0xd];
  fStack_108 = DAT_00296264[0xe];
  piStack_100 = param_1;
  FUN_001110c0(0xbf800000,&fStack_120,&fStack_110);
  fVar8 = DAT_002c3644;
  fVar20 = fStack_120 * *DAT_00296264 + fStack_11c * DAT_00296264[1] + fStack_118 * DAT_00296264[2]
           + fStack_114 * DAT_00296264[3];
  fVar23 = fStack_120 * DAT_00296264[4] + fStack_11c * DAT_00296264[5] +
           fStack_118 * DAT_00296264[6] + fStack_114 * DAT_00296264[7];
  fVar21 = fStack_120 * DAT_00296264[8] + fStack_11c * DAT_00296264[9] +
           fStack_118 * DAT_00296264[10] + fStack_114 * DAT_00296264[0xb];
  fStack_114 = fStack_120 * DAT_00296264[0xc] + fStack_11c * DAT_00296264[0xd] +
               fStack_118 * DAT_00296264[0xe] + fStack_114 * DAT_00296264[0xf];
  fVar35 = DAT_002c3640;
  fStack_120 = fVar20;
  fStack_11c = fVar23;
  fStack_118 = fVar21;
  fStack_110 = fVar20;
  fStack_10c = fVar23;
  fStack_108 = fVar21;
  fStack_104 = fStack_114;
  FUN_001d6508(iVar7);
  FUN_001d6998(iVar7);
  bVar6 = true;
  iVar18 = 0;
  while ((bVar6 && (lVar11 = FUN_00221a60(piStack_100 + 0x14,iVar18), lVar11 != 0))) {
    iVar19 = (int)lVar11;
    iStack_f4 = iVar18 + 1;
    if (*(int *)(iVar19 + 0x24) != 0) {
      uVar9 = 0;
      while (uVar14 = uVar9,
            (int)uVar14 <
            (int)*(short *)(*piStack_100 + 0x42) * (int)*(short *)(*piStack_100 + 0x42)) {
        uStack_f0 = uVar14 + 1;
        psVar12 = (short *)(*(int *)(iVar19 + 4) + uVar14 * 0x30);
        sVar4 = *psVar12;
        uVar9 = uStack_f0;
        if ((*psVar12 != 0) && ((*(uint *)(iVar19 + 0x20) & 1 << (uVar14 & 0x1f)) != 0)) {
          lVar11 = 0;
          iStack_f8 = *(int *)(iVar19 + 8) + psVar12[7] * 4;
          if (0 < (long)sVar4) {
            lVar16 = 1;
            uVar17 = 0x2913b0;
            do {
              uStack_e0 = (undefined4)lVar16;
              uStack_dc = (undefined4)((ulong)lVar16 >> 0x20);
              uStack_d0 = (undefined4)uVar17;
              uStack_cc = (undefined4)((ulong)uVar17 >> 0x20);
              iVar18 = *(int *)(iVar19 + 0x10) +
                       (uint)*(ushort *)((int)lVar11 * 4 + iStack_f8 + 2) * 0x1c0;
              lVar10 = FUN_001c5b08(uVar17,iVar18 + 400,iVar18 + 0x1a0);
              lVar16 = CONCAT44(uStack_dc,uStack_e0);
              uVar17 = CONCAT44(uStack_cc,uStack_d0);
              if (lVar10 != lVar16) {
                if (lVar10 == 2) {
                  lVar10 = FUN_001c5bc0(uVar17,iVar18 + 400,iVar18 + 0x1a0);
                  uVar17 = CONCAT44(uStack_cc,uStack_d0);
                  lVar16 = CONCAT44(uStack_dc,uStack_e0);
                  iVar13 = *(int *)(iVar7 + 0x558);
                }
                else {
                  iVar13 = *(int *)(iVar7 + 0x558);
                }
                *(int *)(iVar7 + 0x558) = iVar13 + 1;
                puVar15 = (undefined4 *)(*(int *)(iVar7 + 0x554) + iVar13 * 0x18);
                iVar13 = DAT_00299ce8 + *(int *)(iVar18 + 0x1b0) * 0xc;
                if (lVar10 == 0) {
                  puVar15[1] = 0;
                }
                else {
                  puVar15[1] = 3;
                }
                fVar32 = fVar20 - *(float *)(iVar18 + 0x150);
                fVar27 = fVar23 - *(float *)(iVar18 + 0x154);
                fVar30 = fVar21 - *(float *)(iVar18 + 0x158);
                fVar33 = fVar20 - *(float *)(iVar18 + 0x160);
                fVar28 = fVar23 - *(float *)(iVar18 + 0x164);
                fVar22 = *(float *)(iVar18 + 0x178);
                fVar31 = fVar21 - *(float *)(iVar18 + 0x168);
                fVar25 = *(float *)(iVar18 + 0x180);
                fVar24 = *(float *)(iVar18 + 0x184);
                fVar26 = *(float *)(iVar18 + 0x188);
                fVar34 = fVar20 - *(float *)(iVar18 + 0x170);
                uVar5 = *(undefined2 *)(iVar13 + 4);
                fVar29 = fVar23 - *(float *)(iVar18 + 0x174);
                puVar15[4] = iVar18;
                *(undefined2 *)(puVar15 + 3) = uVar5;
                fVar22 = fVar21 - fVar22;
                fVar25 = fVar20 - fVar25;
                fVar24 = fVar23 - fVar24;
                *(short *)((int)puVar15 + 0xe) = *(short *)(iVar18 + 0x1b4) + (short)uStack_fc;
                fVar26 = fVar21 - fVar26;
                fVar30 = fVar32 * fVar32 + fVar27 * fVar27 + fVar30 * fVar30;
                fVar28 = fVar33 * fVar33 + fVar28 * fVar28 + fVar31 * fVar31;
                fVar27 = fVar34 * fVar34 + fVar29 * fVar29 + fVar22 * fVar22;
                fVar25 = fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26;
                fVar22 = fVar8 + fVar35 * (fVar30 + fVar28);
                fVar24 = fVar8 + fVar35 * (fVar27 + fVar25);
                fVar27 = fVar8 + fVar35 * (fVar30 + fVar27);
                fVar25 = fVar8 + fVar35 * (fVar28 + fVar25);
                if (fVar22 < 1.0) {
                  fVar22 = 1.0;
                }
                else if (fVar36 < fVar22) {
                  fVar22 = 3.0;
                }
                if (fVar24 < 1.0) {
                  fVar24 = 1.0;
                }
                else if (fVar36 < fVar24) {
                  fVar24 = 3.0;
                }
                if (fVar27 < 1.0) {
                  fVar27 = 1.0;
                }
                else if (fVar36 < fVar27) {
                  fVar27 = 3.0;
                }
                if (fVar25 < 1.0) {
                  fVar25 = 1.0;
                }
                else if (fVar36 < fVar25) {
                  fVar25 = 3.0;
                }
                iVar18 = (int)fVar24;
                iVar13 = (int)fVar27;
                lVar10 = (long)(int)fVar25;
                if ((((long)(int)fVar22 == (long)iVar18) && ((long)iVar18 == (long)iVar13)) &&
                   (iVar13 == lVar10)) {
                  if (lVar10 == 2) {
                    iVar18 = *(int *)(iVar7 + 0x564);
                    puVar15[5] = *(undefined4 *)(iVar7 + 0x568);
                    *(undefined4 **)(iVar7 + 0x568) = puVar15;
                    *(int *)(iVar7 + 0x564) = iVar18 + 1;
                    *puVar15 = (int)lVar16;
                  }
                  else if (lVar10 < 3) {
                    if (lVar10 == lVar16) {
                      iVar18 = *(int *)(iVar7 + 0x55c);
                      puVar15[5] = *(undefined4 *)(iVar7 + 0x560);
                      *(undefined4 **)(iVar7 + 0x560) = puVar15;
                      *(int *)(iVar7 + 0x55c) = iVar18 + 1;
                      *puVar15 = 0;
                    }
                  }
                  else if (lVar10 == 3) {
                    iVar18 = *(int *)(iVar7 + 0x56c);
                    puVar15[5] = *(undefined4 *)(iVar7 + 0x570);
                    *puVar15 = 2;
                    *(undefined4 **)(iVar7 + 0x570) = puVar15;
                    *(int *)(iVar7 + 0x56c) = iVar18 + 1;
                  }
                }
                else {
                  uVar1 = (&DAT_002b7790)[iVar18 * 4];
                  uVar2 = (&DAT_002b7790)[iVar13 * 4];
                  uVar3 = (&DAT_002b7790)[(int)fVar25 * 4];
                  *(undefined *)(puVar15 + 2) = (&DAT_002b7790)[(int)fVar22 * 4];
                  *(undefined1 *)((int)puVar15 + 9) = uVar1;
                  *(undefined1 *)((int)puVar15 + 10) = uVar2;
                  *(undefined1 *)((int)puVar15 + 0xb) = uVar3;
                  *puVar15 = 3;
                  iVar18 = *(int *)(iVar7 + 0x574);
                  puVar15[5] = *(undefined4 *)(iVar7 + 0x578);
                  *(undefined4 **)(iVar7 + 0x578) = puVar15;
                  *(int *)(iVar7 + 0x574) = iVar18 + 1;
                }
              }
              lVar11 = lVar11 + 1;
              uVar9 = uStack_f0;
            } while (lVar11 < sVar4);
          }
        }
      }
    }
    bVar6 = iStack_f4 < 0xa2;
    iVar18 = iStack_f4;
  }
  return;
}

