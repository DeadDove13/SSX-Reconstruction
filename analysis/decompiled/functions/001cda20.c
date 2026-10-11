/* Ghidra pseudocode. PS2 address: 001cda20. Not validated source. */

void FUN_001cda20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    iVar1 = *(int *)(param_1 + iVar3 * 4 + *(int *)(param_1 + 0x28c) * 8 + 0x14b8);
    if (iVar1 != 0) {
      iVar9 = 0;
      iVar3 = param_1 + *(int *)(param_1 + 0x28c) * 0x1400 + 0x14d0 + iVar3 * 0xa00;
      iVar6 = *(int *)(param_1 + 0x218) + *(int *)(param_1 + 0x214) * 0x94;
      if (0 < iVar1) {
        do {
          DAT_002cd740 = 0x1000000000008001;
          DAT_002cd758 = 0x61;
          DAT_002cd760 = 0x1000000000008004;
          iVar7 = iVar9 * 0x100;
          DAT_002cd748 = 0xe;
          DAT_002cd768 = 0xe;
          DAT_002cd750 = 0;
          iVar8 = iVar7 + iVar3;
          iVar9 = iVar9 + 1;
          uVar5 = (ulong)*(uint *)(iVar6 + 0x8c);
          DAT_002cd770 = (ulong)(uint)(*(int *)(param_1 + 0x12c0) << 5) | uVar5 << 0x38 |
                         uVar5 << 0x18 | ((long)*(int *)(iVar6 + 0x80) >> 6) << 0x10;
          DAT_002cd780 = (long)*(int *)(iVar8 + 0x28) | (long)*(int *)(iVar8 + 0x2c) << 0x10;
          DAT_002cd778 = 0x50;
          DAT_002cd788 = 0x51;
          DAT_002cd790 = 0x800000010;
          DAT_002cd798 = 0x52;
          DAT_002cd7a8 = 0x53;
          DAT_002cd7a0 = 1;
          FlushCache(0);
          do {
            uVar2 = REG_DMAC_1_VIF1_CHCR;
          } while ((uVar2 & 0x100) != 0);
          do {
            uVar2 = REG_DMAC_2_GIF_CHCR;
          } while ((uVar2 & 0x100) != 0);
          do {
            uVar2 = REG_VIF1_STAT;
          } while ((uVar2 & 0x1f000003) != 0);
          do {
            uVar5 = REG_GS_CSR;
          } while ((uVar5 & 0xc000) != 0x4000);
          REG_GS_CSR = 2;
          FUN_00243bb8(0,0);
          FUN_00216198(0x2cd740,2,6);
          do {
            uVar5 = REG_GS_CSR;
          } while ((uVar5 & 2) == 0);
          REG_GS_CSR = 2;
          FUN_00216198(0x2cd760,5,6);
          REG_VIF1_STAT = 0x800000;
          REG_GS_BUSDIR = 1;
          REG_DMAC_1_VIF1_MADR = *(undefined4 *)(iVar7 + iVar3 + 0x38);
          REG_DMAC_1_VIF1_QWC = 0x18;
          REG_DMAC_1_VIF1_CHCR = 0x100;
          do {
            uVar2 = REG_DMAC_1_VIF1_CHCR;
          } while ((uVar2 & 0x100) != 0);
          REG_VIF1_STAT = 0;
          REG_GS_BUSDIR = 0;
          FUN_00243bb8(0,0);
        } while (iVar9 < iVar1);
      }
    }
    iVar3 = iVar4;
  } while (iVar4 < 2);
  return;
}

