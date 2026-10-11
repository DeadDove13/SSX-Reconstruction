/* Ghidra pseudocode. PS2 address: 00116a28. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00116b48) */

void FUN_00116a28(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined4 uStack_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 uStack_c78;
  undefined4 uStack_c74;
  undefined1 auStack_c70 [4];
  undefined1 auStack_c6c [8];
  float fStack_c64;
  undefined1 auStack_c60 [16];
  undefined8 uStack_c50;
  undefined4 auStack_c48 [98];
  float afStack_ac0 [8];
  undefined4 auStack_aa0 [12];
  undefined4 auStack_a70 [580];
  int iStack_160;
  undefined4 *puStack_15c;
  undefined1 *puStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  int iStack_148;
  int iStack_144;
  float *pfStack_140;
  undefined4 *puStack_13c;
  int iStack_130;
  int iStack_12c;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_110;
  undefined4 uStack_10c;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iStack_160 = param_1;
    FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + 0xc),1);
    FUN_0011ecf8(0x295e90,0);
    FUN_0011ed48(0x295e90,3);
    FUN_0011ed38(0x295e90,1);
    FUN_0011ed28(DAT_002c1660,0x295e90,0,0);
    FUN_0011ed08(0x295e90,2,0);
    fVar2 = DAT_002c1668;
    if (0 < *(int *)(iStack_160 + 0x18)) {
      puStack_15c = &uStack_c80;
      puStack_158 = auStack_c70;
      uVar27 = 0x447a0000;
      fVar28 = 0.0;
      fVar29 = DAT_002c1664;
      iVar4 = 0;
      do {
        iStack_144 = iVar4 + 1;
        iVar16 = iStack_160 + ((*(int *)(iStack_160 + 0x1c) + iVar4) % 5) * 0x3c0 + 0x20;
        if (*(float *)(iVar16 + 0x3b8) <= *(float *)(iVar16 + 0x3bc)) {
          puStack_15c[1] = uVar27;
          puStack_15c[2] = uVar27;
          auVar30 = _lqc2(*(undefined1 (*) [16])(iVar16 + 800));
          auVar31._4_4_ = uStack_c7c;
          auVar31._0_4_ = uVar27;
          auVar31._8_4_ = uStack_c78;
          auVar31._12_4_ = 0;
          auVar31 = _lqc2(auVar31);
          auVar31 = _vsub(auVar30,auVar31);
          auVar31 = _sqc2(auVar31);
          auStack_c6c._4_4_ = auVar31._8_4_;
          fStack_c64 = auVar31._12_4_;
          uStack_c90 = auVar31._0_4_;
          uStack_c8c = auVar31._4_4_;
          uStack_c88 = auStack_c6c._4_4_;
          uStack_c84 = fStack_c64;
          _auStack_c6c = auVar31._4_12_;
          auStack_c70 = (undefined1  [4])uVar27;
          *(undefined4 *)(puStack_158 + 4) = uVar27;
          *(undefined4 *)(puStack_158 + 8) = uVar27;
          fStack_c64 = 0.0;
          auVar31 = _lqc2(*(undefined1 (*) [16])(iVar16 + 800));
          auVar30 = _lqc2(_auStack_c70);
          auVar31 = _vadd(auVar31,auVar30);
          auStack_c60 = _sqc2(auVar31);
          uStack_c80 = auStack_c60._0_4_;
          uStack_c7c = auStack_c60._4_4_;
          uStack_c78 = auStack_c60._8_4_;
          uStack_c74 = auStack_c60._12_4_;
          lVar5 = FUN_001be110(0x295e90,&uStack_c90,puStack_15c);
          if (lVar5 != 1) {
            auStack_c6c._0_4_ = (undefined4)((ulong)*(undefined8 *)(iVar16 + 0x3a4) >> 0x20);
            auStack_c6c._4_4_ = (undefined4)*(undefined8 *)(iVar16 + 0x3ac);
            fStack_c64 = (float)((ulong)*(undefined8 *)(iVar16 + 0x3ac) >> 0x20);
            fVar20 = ((float)auStack_c6c._0_4_ + (float)auStack_c6c._4_4_ + fStack_c64) *
                     DAT_002c166c;
            auStack_c6c._0_4_ =
                 (float)auStack_c6c._0_4_ + (fVar20 - (float)auStack_c6c._0_4_) * fVar29;
            fStack_c64 = fStack_c64 + (fVar20 - fStack_c64) * fVar29;
            auStack_c6c._4_4_ =
                 (float)auStack_c6c._4_4_ + (fVar20 - (float)auStack_c6c._4_4_) * fVar29;
            fVar20 = (float)auStack_c6c._0_4_ + fVar2;
            auStack_c70 = SUB84(*(undefined8 *)(iVar16 + 0x3a4),0);
            if (fVar20 < fVar28) {
              fVar20 = 0.0;
            }
            else if (DAT_002c1670 < fVar20) {
              fVar20 = DAT_002c1670;
            }
            fVar21 = (float)auStack_c6c._4_4_ + fVar2;
            fStack_154 = (float)(int)(fVar20 * 128.0);
            if (fVar21 < fVar28) {
              fVar20 = 0.0;
            }
            else {
              fVar20 = DAT_002c1674;
              if (fVar21 <= DAT_002c1674) {
                fVar20 = fVar21;
              }
            }
            fVar21 = fStack_c64 + fVar2;
            fStack_150 = (float)(int)(fVar20 * 128.0);
            if (fVar21 < fVar28) {
              fVar21 = 0.0;
            }
            else {
              if (DAT_002c1678 < fVar21) {
                fVar21 = DAT_002c1678;
              }
              fVar21 = fVar21 * 128.0;
            }
            pfStack_140 = afStack_ac0;
            iStack_144 = iVar4 + 1;
            iVar4 = 0x18;
            fStack_14c = (float)(int)fVar21;
            fVar20 = 0.0;
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != -1);
            if (0 < *(int *)(iVar16 + 0x3b4)) {
              puVar12 = &uStack_c50;
              iVar4 = 0;
              do {
                iVar11 = iVar4 + 1;
                FUN_001168a0(0,auStack_c60,iStack_160,iVar16,iVar4);
                iVar15 = *(int *)(iVar16 + 0x3b4);
                *(int *)puVar12 = auStack_c60._0_4_;
                *(int *)((int)puVar12 + 4) = auStack_c60._4_4_;
                *(undefined4 *)(puVar12 + 1) = auStack_c60._8_4_;
                *(undefined4 *)((int)puVar12 + 0xc) = auStack_c60._12_4_;
                puVar12 = puVar12 + 2;
                iVar4 = iVar11;
              } while (iVar11 < iVar15);
            }
            puStack_13c = auStack_aa0;
            uVar9 = 1;
            do {
              fVar21 = DAT_002c167c;
              iStack_148 = (int)uVar9 + 1;
              uVar10 = 0;
              fVar24 = (float)(int)uVar9 * 0.25;
              iVar4 = 0x31;
              fVar26 = 1.0 - fVar24;
              do {
                iVar4 = iVar4 + -1;
              } while (iVar4 != -1);
              if (0 < *(int *)(iVar16 + 0x3b4)) {
                puVar19 = auStack_a70;
                pfVar13 = pfStack_140 + 0xc;
                fVar25 = 1.0;
                uVar9 = uVar9 ^ 1;
                puVar12 = &uStack_c50;
                pfVar17 = (float *)(iVar16 + 0x340);
                pfVar14 = pfStack_140;
                puVar18 = puStack_13c;
                iVar15 = 0;
                iVar4 = 0x30;
                uVar3 = 0;
                do {
                  uStack_10c = uVar3;
                  iStack_110 = iVar4;
                  fVar23 = *pfVar17;
                  iStack_130 = (int)uVar10 + 2;
                  iStack_12c = iStack_130 >> 0x1f;
                  iVar11 = iVar15 + 1;
                  uStack_120 = (undefined4)uVar9;
                  uStack_11c = (undefined4)(uVar9 >> 0x20);
                  pfVar17 = pfVar17 + 1;
                  fVar22 = (float)(int)((*(float *)(iVar16 + 0x3bc) - *(float *)(iVar16 + 0x3b8)) *
                                       ((fVar23 * 128.0) / fVar21));
                  FUN_001168a0(fVar24,auStack_c60,iStack_160,iVar16,iVar15);
                  uVar3 = uStack_10c;
                  iVar4 = iStack_110;
                  uVar9 = CONCAT44(uStack_11c,uStack_120);
                  fVar23 = 0.0;
                  if (uVar9 != 0) {
                    fVar23 = fVar22;
                  }
                  pfVar14[4] = fStack_154;
                  pfVar14[7] = fVar23;
                  iVar8 = iStack_110 * 2;
                  fVar23 = (float)iVar15 * 0.25 * 3.0;
                  pfVar14[5] = fStack_150;
                  *pfVar14 = fVar23;
                  pfVar14[6] = fStack_14c;
                  pfVar14[1] = fVar20;
                  pfVar14[2] = fVar25;
                  uVar10 = *puVar12;
                  uVar6 = *(undefined4 *)(puVar12 + 1);
                  uVar7 = *(undefined4 *)((int)puVar12 + 0xc);
                  *puVar18 = (int)uVar10;
                  puVar18[1] = (int)((ulong)uVar10 >> 0x20);
                  puVar18[2] = uVar6;
                  puVar18[3] = uVar7;
                  pfVar14 = pfVar14 + 0x18;
                  iVar1 = *(int *)(iVar16 + 0x3b4);
                  puVar18 = puVar18 + 0x18;
                  *pfVar13 = fVar23;
                  pfVar13[7] = fVar22;
                  pfVar13[1] = fVar26;
                  pfVar13[2] = fVar25;
                  pfVar13[5] = fStack_150;
                  pfVar13[4] = fStack_154;
                  pfVar13[6] = fStack_14c;
                  *puVar19 = auStack_c60._0_4_;
                  puVar19[1] = auStack_c60._4_4_;
                  puVar19[2] = auStack_c60._8_4_;
                  puVar19[3] = auStack_c60._12_4_;
                  pfVar13 = (float *)((int)pfVar13 + iVar8);
                  *(int *)puVar12 = auStack_c60._0_4_;
                  *(int *)((int)puVar12 + 4) = auStack_c60._4_4_;
                  *(undefined4 *)(puVar12 + 1) = auStack_c60._8_4_;
                  *(undefined4 *)((int)puVar12 + 0xc) = auStack_c60._12_4_;
                  puVar19 = (undefined4 *)((int)puVar19 + iVar8);
                  puVar12 = puVar12 + 2;
                  uVar10 = CONCAT44(iStack_12c,iStack_130);
                  iVar15 = iVar11;
                } while (iVar11 < iVar1);
              }
              FUN_0011ed58(0x295e90,uVar10,pfStack_140,0);
              uVar9 = (ulong)iStack_148;
              fVar20 = fVar26;
            } while ((long)uVar9 < 5);
          }
        }
        iVar4 = iStack_144;
      } while (iStack_144 < *(int *)(iStack_160 + 0x18));
    }
    FUN_0011ed38(0x295e90,0);
    FUN_0011ed28(DAT_002c1680,0x295e90,0,2);
    FUN_0011ed08(0x295e90,0,0);
    FUN_0011ed48(0x295e90,3);
  }
  return;
}

