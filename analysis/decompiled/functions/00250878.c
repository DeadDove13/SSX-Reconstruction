/* Ghidra pseudocode. PS2 address: 00250878. Not validated source. */

void FUN_00250878(uint param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 auStack_80 [8];
  
  uVar3 = param_2 - 0x3ff;
  DAT_002a5c84 = param_1 + uVar3 * 0x400 & 0xfffffff;
  DAT_002a5c8c = 0x3ff;
  DAT_002a5c80 = 0;
  DAT_002a5c88 = 0xffc0;
  DAT_002a5c78 = 0;
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  uVar2 = AddDmacHandler(3,0x2507c8,0);
  REG_DMAC_STAT = 8;
  FUN_00265178(3);
  REG_DMAC_3_IPU_FROM_MADR = param_1 & 0xfffffff;
  REG_DMAC_3_IPU_FROM_QWC = uVar3 * 0x40;
  REG_DMAC_3_IPU_FROM_CHCR = 0x100;
  REG_IPU_CMD = uVar3 | 0x70000000;
  auStack_80[0] = 4;
  FUN_0024a768(DAT_002a52a4,auStack_80);
  do {
  } while (DAT_002a5c80 < 2);
  if (DAT_002a5c78 != 0) {
    FUN_0024af98(0x2bf5b8);
  }
  do {
    iVar1 = REG_IPU_CTRL;
  } while (iVar1 < 0);
  FUN_00265110(3);
  RemoveDmacHandler(3,uVar2);
  return;
}

