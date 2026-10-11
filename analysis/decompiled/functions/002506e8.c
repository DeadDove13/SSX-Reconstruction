/* Ghidra pseudocode. PS2 address: 002506e8. Not validated source. */

void FUN_002506e8(uint param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 auStack_30 [8];
  
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  REG_DMAC_3_IPU_FROM_MADR = param_1 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = (int)param_2 << 6;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  FUN_0024e968(param_2 | 0x70000000);
  auStack_30[0] = 4;
  FUN_0024a768(DAT_002a52a4,auStack_30);
  do {
    uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  } while ((uVar2 >> 8 & 1) != 0);
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  return;
}

