/* Ghidra pseudocode. PS2 address: 0024f3c8. Not validated source. */

void FUN_0024f3c8(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(DAT_002a52a4 + 0x40);
  DAT_002a5458 = FUN_0024eec8(4);
  DAT_002a545c = FUN_0024eec8(4);
  DAT_002a5460 = FUN_0024eec8(4);
  DAT_002a5464 = FUN_0024eec8(4);
  DAT_002a5468 = FUN_0024eec8(2);
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xfffcffff | DAT_002a5468 << 0x10;
  DAT_002a546c = FUN_0024eec8(2);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    *(undefined4 *)(iVar1 + 0xd4) = DAT_002a546c;
  }
  DAT_002a5470 = FUN_0024eec8(1);
  DAT_002a5474 = FUN_0024eec8(1);
  DAT_002a5478 = FUN_0024eec8(1);
  DAT_002a5b74 = FUN_0024eec8(1);
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xffbfffff | DAT_002a5b74 << 0x16;
  DAT_002a547c = FUN_0024eec8(1);
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xffdfffff | DAT_002a547c << 0x15;
  DAT_002a5b78 = FUN_0024eec8(1);
  uVar2 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar2 & 0xffefffff | DAT_002a5b78 << 0x14;
  DAT_002a5480 = FUN_0024eec8(1);
  DAT_002a5484 = FUN_0024eec8(1);
  DAT_002a5488 = FUN_0024eec8(1);
  lVar3 = FUN_0024eec8(1);
  DAT_002a548c = (undefined4)lVar3;
  if (lVar3 != 0) {
    DAT_002a5490 = FUN_0024eec8(1);
    DAT_002a5494 = FUN_0024eec8(3);
    DAT_002a5498 = FUN_0024eec8(1);
    DAT_002a549c = FUN_0024eec8(7);
    DAT_002a54a0 = FUN_0024eec8(8);
  }
  return;
}

