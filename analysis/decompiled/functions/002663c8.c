/* Ghidra pseudocode. PS2 address: 002663c8. Not validated source. */

void FUN_002663c8(void)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  puVar2 = &DAT_002d5a40;
  DAT_002d5a18 = &DAT_202d5940;
  DAT_002d5a34 = &DAT_002d5b40;
  DAT_002d5a1c = &DAT_202d59c0;
  DAT_002d5a28 = 0x20;
  DAT_002d5a20 = 0;
  iVar6 = 0x1f;
  DAT_002d5a24 = &DAT_002d5a40;
  DAT_002d5a2c = 0;
  DAT_002d5a30 = 0;
  do {
    *puVar2 = 0;
    iVar6 = iVar6 + -1;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (-1 < iVar6);
  iVar6 = 0x1f;
  puVar2 = &DAT_002d5bbc;
  do {
    *puVar2 = 0;
    iVar6 = iVar6 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar6);
  DAT_002d5a40 = &LAB_00266370;
  DAT_002d5a48 = &LAB_00266350;
  DAT_002d5a4c = &DAT_002d5a18;
  DAT_002d5a44 = &DAT_002d5a18;
  EI();
  FlushCache(0);
  uVar1 = REG_DMAC_STAT;
  if ((uVar1 & 0x20) != 0) {
    REG_DMAC_STAT = 0x20;
  }
  uVar1 = REG_DMAC_5_SIF0_CHCR;
  if ((uVar1 & 0x100) == 0) {
    sceSifSetDChain();
  }
  DAT_002d5a14 = AddDmacHandler(5,0x2668b0,0);
  FUN_00265178(5);
  lVar3 = sceSifGetReg(0xffffffff80000000);
  DAT_002d5a20 = (undefined4)lVar3;
  if (lVar3 != 0) {
    DAT_002d5a10 = &DAT_002d5940;
    FUN_00266830(0xffffffff80000000,0x2d5a00,0x14,0,0,0);
    return;
  }
  DAT_002d5a20 = 0;
  do {
    uVar4 = sceSifGetReg(4);
  } while ((uVar4 & 0x20000) == 0);
  uVar5 = sceSifGetReg(2);
  DAT_002d5a20 = (undefined4)uVar5;
  sceSifSetReg(0xffffffff80000000,uVar5);
  sceSifSetReg(0xffffffff80000001,0x2d5a18);
  DAT_002d5a10 = &DAT_002d5940;
  DAT_002d5a0c = 0;
  FUN_00266830(0xffffffff80000002,0x2d5a00,0x14,0,0,0);
  return;
}

