/* Ghidra pseudocode. PS2 address: 0024dc00. Not validated source. */

bool FUN_0024dc00(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  DAT_002a5b3c = 0;
  DAT_002a5b38 = 0;
  iVar4 = DAT_002a53e8 * DAT_002a53ec;
  if (DAT_002a546c != 3) {
    iVar4 = DAT_002a53e8 * DAT_002a53ec >> 1;
  }
  do {
    do {
      lVar2 = FUN_0024de48(param_1,iVar4);
    } while (lVar2 == 1);
  } while (lVar2 == 3);
  FUN_0024e998();
  lVar3 = FUN_0024d770();
  if (lVar3 == 0) {
    lVar2 = 2;
  }
  do {
    uVar1 = REG_DMAC_9_SPR_TO_CHCR;
  } while ((uVar1 >> 8 & 1) != 0);
  if (lVar2 == 0) {
    FUN_0024c7d0(DAT_002a5b38 == 0);
  }
  if ((int)lVar2 - 1U < 2) {
    FUN_0024af98(0x2bf418);
  }
  return lVar2 == 0;
}

