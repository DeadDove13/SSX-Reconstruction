/* Ghidra pseudocode. PS2 address: 001ce890. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001cecdc) */
/* WARNING: Removing unreachable block (ram,0x001ced30) */

void FUN_001ce890(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint3 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint3 *puVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  
  iVar10 = *(int *)(param_1 + 0x218) + *(int *)(param_1 + 0x214) * 0x94;
  piVar17 = (int *)(param_1 + *(int *)(param_1 + 0x28c) * 0x700 + 0x3cd0 + param_3 * 0x380);
  iVar1 = *(int *)(DAT_002859e4 + 0x24);
  if (*piVar17 != 0) {
    DAT_002cd740 = 0x1000000000008001;
    DAT_002cd758 = 0x61;
    DAT_002cd768 = 0xe;
    DAT_002cd748 = 0xe;
    DAT_002cd760 = 0x1000000000008004;
    DAT_002cd750 = 0;
    uVar7 = (ulong)*(uint *)(iVar10 + 0x8c);
    DAT_002cd770 = (ulong)(uint)(*(int *)(param_1 + 0x12c0) << 5) | uVar7 << 0x38 |
                   uVar7 << 0x18 | ((long)*(int *)(iVar10 + 0x80) >> 6) << 0x10;
    DAT_002cd780 = (long)piVar17[4] | (long)piVar17[5] << 0x10;
    DAT_002cd7a8 = 0x53;
    DAT_002cd778 = 0x50;
    DAT_002cd788 = 0x51;
    DAT_002cd790 = 0x1000000010;
    DAT_002cd798 = 0x52;
    DAT_002cd7a0 = 1;
    FlushCache(0);
    do {
      uVar3 = REG_DMAC_1_VIF1_CHCR;
    } while ((uVar3 & 0x100) != 0);
    do {
      uVar3 = REG_DMAC_2_GIF_CHCR;
    } while ((uVar3 & 0x100) != 0);
    do {
      uVar3 = REG_VIF1_STAT;
    } while ((uVar3 & 0x1f000003) != 0);
    do {
      uVar7 = REG_GS_CSR;
    } while ((uVar7 & 0xc000) != 0x4000);
    REG_GS_CSR = 2;
    FUN_00243bb8(0,0);
    FUN_00216198(0x2cd740,2,6);
    do {
      uVar7 = REG_GS_CSR;
    } while ((uVar7 & 2) == 0);
    REG_GS_CSR = 2;
    FUN_00216198(0x2cd760,5,6);
    REG_VIF1_STAT = 0x800000;
    REG_GS_BUSDIR = 1;
    REG_DMAC_1_VIF1_MADR = piVar17[8];
    REG_DMAC_1_VIF1_QWC = 0x30;
    REG_DMAC_1_VIF1_CHCR = 0x100;
    do {
      uVar3 = REG_DMAC_1_VIF1_CHCR;
    } while ((uVar3 & 0x100) != 0);
    REG_VIF1_STAT = 0;
    REG_GS_BUSDIR = 0;
    FUN_00243bb8(0,0);
    iVar15 = piVar17[6] + -8;
    iVar13 = piVar17[7] + -8;
    iVar4 = piVar17[6] + 8;
    iVar10 = piVar17[7] + 8;
    if (0xf < iVar10) {
      iVar10 = 0xf;
    }
    if (0xf < iVar4) {
      iVar4 = 0xf;
    }
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    iVar11 = 0;
    iVar16 = (iVar10 - iVar13) + 1;
    iVar4 = (iVar4 - iVar15) + 1;
    iVar10 = 0;
    if (0 < iVar16) {
      do {
        iVar14 = iVar10 + 1;
        if (0 < iVar4) {
          puVar8 = (uint3 *)((iVar15 + (iVar13 + iVar10) * 0x10) * 3 + piVar17[8]);
          iVar10 = iVar4;
          do {
            iVar10 = iVar10 + -1;
            uVar2 = *puVar8;
            puVar8 = (uint3 *)((int)puVar8 + 3);
            if ((uint)uVar2 <= (uint)piVar17[3]) {
              iVar11 = iVar11 + 1;
            }
          } while (iVar10 != 0);
        }
        iVar10 = iVar14;
      } while (iVar14 < iVar16);
    }
    if (iVar11 != 0) {
      if ((iVar4 == 0x10) && (iVar16 == 0x10)) {
        fVar24 = (float)iVar11 * 0.00390625;
      }
      else {
        fVar24 = ((float)iVar11 - 128.0) * 0.0078125;
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
      }
      iVar25 = (int)(2048.0 - (float)(*(uint *)(param_1 + 0x240) >> 1));
      iVar26 = (int)(2048.0 - (float)(*(uint *)(param_1 + 0x244) >> 1));
      iVar10 = *(int *)(iVar1 + 0x1c);
      pfVar9 = (float *)(piVar17 + 10);
      iVar14 = 0;
      iVar4 = piVar17[9];
      fVar19 = *(float *)(iVar1 + 0x10);
      iVar13 = piVar17[1];
      fVar22 = *(float *)(param_1 + 0x1470);
      iVar15 = piVar17[2];
      fVar28 = *(float *)(iVar1 + 0x24);
      fVar27 = (float)piVar17[0xd8];
      iVar11 = *(int *)(iVar1 + 0x18);
      iVar16 = *(int *)(iVar1 + 0x20);
      if (0 < iVar4 + -1) {
        uVar7 = (long)*(int *)(iVar1 + 4) | 0x3f80000000000000U |
                (long)*(int *)(iVar1 + 0xc) << 0x10 | (long)*(int *)(iVar1 + 8) << 8;
        pfVar12 = (float *)(piVar17 + 0x71);
        puVar5 = (undefined8 *)*param_2;
        do {
          *puVar5 = 0x10000006;
          iVar1 = iVar14 * 2;
          iVar14 = iVar14 + 1;
          fVar20 = pfVar12[-2];
          fVar21 = *pfVar12;
          fVar23 = (float)piVar17[iVar1 + 0x6e] * fVar19 * 128.0 * fVar24 * fVar22;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0x5000000500000000;
          puVar5[4] = 0x7400000000008001;
          puVar5[5] = 0x5151510;
          puVar5[6] = 0x14d;
          puVar5[8] = (long)((iVar25 + iVar13) * 0x10) | (long)((iVar26 + iVar15) * 0x10) << 0x10 |
                      0x100000000;
          puVar5[7] = uVar7 | (long)(int)fVar23 << 0x18;
          fVar18 = *pfVar9;
          puVar5[9] = uVar7 | (long)(int)(fVar23 * fVar20) << 0x18;
          puVar5[10] = (long)((iVar25 + (int)fVar18) * 0x10) |
                       (long)((iVar26 + (int)pfVar9[1]) * 0x10) << 0x10 | 0x100000000;
          fVar18 = pfVar9[2];
          puVar5[0xb] = uVar7 | (long)(int)(fVar23 * fVar21) << 0x18;
          puVar6 = puVar5 + 0xe;
          puVar5[0xc] = (long)((iVar25 + (int)fVar18) * 0x10) |
                        (long)((iVar26 + (int)pfVar9[3]) * 0x10) << 0x10 | 0x100000000;
          pfVar9 = pfVar9 + 2;
          puVar5[0xd] = 0;
          pfVar12 = pfVar12 + 2;
          puVar5 = puVar6;
        } while (iVar14 < iVar4 + -1);
        *param_2 = puVar6;
      }
      piVar17[0xd8] = (int)(fVar27 * fVar24);
      puVar5 = (undefined8 *)*param_2;
      piVar17[0xd9] = (int)((float)piVar17[0xd9] * fVar24);
      *puVar5 = 0x10000007;
      fVar19 = (float)piVar17[0xdc];
      puVar5[3] = 0x5000000600000000;
      puVar5[4] = 0xa400000000008001;
      puVar5[5] = 0x5353535310;
      piVar17[0xdc] = (int)(fVar19 * fVar24);
      puVar5[6] = 0x154;
      fVar19 = (float)piVar17[0xdd];
      puVar5[7] = (long)iVar11 | 0x3f80000000000000U | (long)iVar16 << 0x10 | (long)iVar10 << 8 |
                  (long)(int)(fVar28 * 128.0 * fVar22) << 0x18;
      fVar19 = fVar19 * fVar24;
      puVar5[8] = 0x800;
      puVar5[1] = 0;
      puVar5[2] = 0;
      piVar17[0xdd] = (int)fVar19;
      fVar20 = (float)piVar17[0xdc];
      fVar28 = (float)piVar17[0xd4] - (float)piVar17[0xd8];
      fVar18 = (float)piVar17[0xd9];
      fVar24 = (float)piVar17[0xd5];
      fVar27 = fVar24 - fVar18;
      fVar22 = (float)piVar17[0xd4] + (float)piVar17[0xd8];
      puVar5[10] = 0xff0;
      puVar5[9] = (long)(int)(fVar28 + fVar20) | (long)(int)(fVar27 + fVar19) << 0x10 | 0x100000000;
      fVar24 = fVar24 + fVar18;
      puVar5[0xc] = 0x7f00800;
      puVar5[0xb] = (long)(int)(fVar22 + fVar20) | (long)(int)(fVar24 + fVar19) << 0x10 |
                    0x100000000;
      puVar5[0xe] = 0x7f00ff0;
      puVar5[0xd] = (long)(int)(fVar28 - fVar20) | (long)(int)(fVar27 - fVar19) << 0x10 |
                    0x100000000;
      *param_2 = puVar5 + 0x10;
      puVar5[0xf] = (long)(int)(fVar22 - fVar20) | (long)(int)(fVar24 - fVar19) << 0x10 |
                    0x100000000;
    }
  }
  return;
}

