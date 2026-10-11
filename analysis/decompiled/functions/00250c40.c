/* Ghidra pseudocode. PS2 address: 00250c40. Not validated source. */

void FUN_00250c40(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1[7];
  iVar3 = (uVar1 >> 0x10 & 3) + (uVar1 >> 8 & 0xf);
  iVar4 = param_1[2] + iVar3;
  iVar3 = *param_1 + iVar3 * -0x10;
  if ((param_1[4] != 0) && (param_1[5] != 0)) {
    REG_DMAC_3_IPU_FROM_MADR = param_1[4];
    REG_DMAC_3_IPU_FROM_QWC = param_1[5];
    REG_DMAC_3_IPU_FROM_CHCR = param_1[6] | 0x100;
  }
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  REG_IPU_CMD = uVar1 & 0x7f;
  do {
    iVar2 = REG_IPU_CTRL;
  } while (iVar2 < 0);
  if ((iVar3 != 0) && (iVar4 != 0)) {
    REG_DMAC_4_IPU_TO_MADR = iVar3;
    REG_DMAC_4_IPU_TO_TADR = param_1[1];
    REG_DMAC_4_IPU_TO_QWC = iVar4;
    REG_DMAC_4_IPU_TO_CHCR = param_1[3] | 0x100;
  }
  return;
}

