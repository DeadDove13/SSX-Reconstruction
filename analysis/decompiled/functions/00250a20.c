/* Ghidra pseudocode. PS2 address: 00250a20. Not validated source. */

void FUN_00250a20(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 auStack_80 [8];
  
  iVar1 = *(int *)(DAT_002a52a4 + 0x40);
  auStack_80[0] = 2;
  iVar3 = param_1[3] * param_1[4];
  FUN_0024a768(DAT_002a52a4,auStack_80);
  uVar4 = REG_IPU_CTRL;
  if ((uVar4 & 0x4000) != 0) {
    REG_IPU_CTRL = 0x40000000;
  }
  do {
    iVar5 = REG_IPU_CTRL;
  } while (iVar5 < 0);
  FUN_0024e968(0);
  do {
    iVar5 = REG_IPU_CTRL;
  } while (iVar5 < 0);
  REG_DMAC_4_IPU_TO_MADR = *param_1 & 0xfffffff;
  REG_DMAC_4_IPU_TO_QWC = iVar3 * 0x18;
  REG_DMAC_4_IPU_TO_CHCR = 0x101;
  uVar2 = *(undefined4 *)(iVar1 + 0xd8);
  if (iVar3 < 0x400) {
    FUN_002506e8(uVar2,iVar3);
  }
  else {
    FUN_00250878(uVar2,iVar3);
  }
  auStack_80[0] = 3;
  FUN_0024a768(DAT_002a52a4,auStack_80);
  return;
}

