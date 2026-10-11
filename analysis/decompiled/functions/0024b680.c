/* Ghidra pseudocode. PS2 address: 0024b680. Not validated source. */

void FUN_0024b680(undefined8 param_1,uint param_2)

{
  undefined4 auStack_60 [8];
  
  auStack_60[0] = 2;
  FUN_0024a768(DAT_002a52a4,auStack_60);
  FUN_0024e998();
  REG_IPU_CMD = 0;
  FUN_0024e998();
  REG_DMAC_4_IPU_TO_MADR = param_2 & 0xfffffff;
  REG_DMAC_4_IPU_TO_QWC = 4;
  REG_DMAC_4_IPU_TO_CHCR = 0x101;
  FUN_0024e968(param_1);
  FUN_0024e998();
  auStack_60[0] = 3;
  FUN_0024a768(DAT_002a52a4,auStack_60);
  return;
}

