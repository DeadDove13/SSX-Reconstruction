/* Ghidra pseudocode. PS2 address: 00267978. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00267a00) */

undefined4 FUN_00267978(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_00266a80(0);
  while( true ) {
    lVar3 = FUN_002670b8(0x2d7a10,0xffffffff80000001,0);
    if (lVar3 < 0) {
      return 0xffffffff;
    }
    if (DAT_002d7a34 != 0) break;
    iVar2 = 0xfffff;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  DAT_002d7914 = 0;
  puVar4 = (undefined *)0x2d7910;
  while (puVar4 + 0x10 < &DAT_002d7a10) {
    *(undefined4 *)(puVar4 + 0x14) = 0;
    puVar4 = puVar4 + 0x10;
  }
  FUN_002669d0(0x2d7880,0x40);
  DAT_002a6aac = 1;
  return 0;
}

