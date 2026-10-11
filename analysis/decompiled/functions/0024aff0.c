/* Ghidra pseudocode. PS2 address: 0024aff0. Not validated source. */

void FUN_0024aff0(uint param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  
  puVar5 = &DAT_202d3640;
  if (0 < param_2) {
    do {
      iVar4 = 0xfff40;
      if (param_2 < 0xfff41) {
        iVar4 = param_2;
      }
      param_2 = param_2 - iVar4;
      iVar1 = iVar4 + 0x1e;
      if (-1 < iVar4 + 0xf) {
        iVar1 = iVar4 + 0xf;
      }
      uVar3 = param_1 & 0xfffffff;
      lVar2 = 0;
      if (param_2 != 0) {
        lVar2 = 3;
      }
      param_1 = param_1 + iVar4;
      *puVar5 = (ulong)uVar3 << 0x20 | lVar2 << 0x1c | (ulong)(uint)(iVar1 >> 4);
      puVar5 = puVar5 + 2;
    } while (0 < param_2);
  }
  REG_DMAC_4_IPU_TO_TADR = 0x2d3640;
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_4_IPU_TO_CHCR = 0x105;
  return;
}

