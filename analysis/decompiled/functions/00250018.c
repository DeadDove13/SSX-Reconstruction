/* Ghidra pseudocode. PS2 address: 00250018. Not validated source. */

void FUN_00250018(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar1 = *(int *)(DAT_002a52a4 + 0x40);
  uVar4 = *param_1 & 0xfffffff;
  uVar7 = *(uint *)(iVar1 + 0xd8) & 0xfffffff;
  if ((DAT_002a546c == 3) || (*(int *)(iVar1 + 0xe0) == 0)) {
    iVar5 = param_1[4] * 0x180;
    iVar6 = iVar5;
    if (*(int *)(iVar1 + 0xe0) != 0) {
      iVar6 = (*(int *)(iVar1 + 0xe0) >> 4) * 0x180;
    }
    iVar11 = 1;
  }
  else {
    iVar6 = (*(int *)(iVar1 + 0xe0) >> 4) * 0xc0;
    iVar5 = ((int)param_1[4] >> 1) * 0x180;
    iVar11 = 2;
  }
  iVar8 = 0;
  if (iVar11 != 0) {
    do {
      iVar8 = iVar8 + 1;
      iVar9 = 0;
      uVar3 = uVar7;
      if (0 < (int)param_1[3]) {
        do {
          REG_DMAC_9_SPR_TO_SADR = 0;
          uVar10 = uVar4 + iVar5;
          REG_DMAC_9_SPR_TO_MADR = uVar4;
          iVar9 = iVar9 + 1;
          REG_DMAC_9_SPR_TO_QWC = iVar5 >> 4;
          REG_DMAC_9_SPR_TO_CHCR = 0x101;
          do {
            uVar4 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar4 & 0x100) != 0);
          REG_DMAC_8_SPR_FROM_SADR = 0;
          REG_DMAC_8_SPR_FROM_MADR = uVar3;
          REG_DMAC_8_SPR_FROM_QWC = iVar5 >> 4;
          REG_DMAC_8_SPR_FROM_CHCR = 0x100;
          do {
            uVar4 = REG_DMAC_8_SPR_FROM_CHCR;
          } while ((uVar4 & 0x100) != 0);
          do {
            iVar2 = REG_DMAC_8_SPR_FROM_QWC;
          } while (iVar2 != 0);
          uVar3 = uVar3 + iVar6;
          uVar4 = uVar10;
        } while (iVar9 < (int)param_1[3]);
      }
      uVar7 = *(int *)(iVar1 + 0xe4) * 0xc0 + uVar7;
    } while (iVar8 < iVar11);
  }
  return;
}

