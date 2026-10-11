/* Ghidra pseudocode. PS2 address: 002463c8. Not validated source. */

undefined4 FUN_002463c8(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  FUN_00266a80(0);
  do {
    lVar3 = FUN_002670b8(0x2a5188,0xffffffff80000701,0);
    if (lVar3 < 0) {
      FUN_0025a720(0x2bec08);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = 9999;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  } while (DAT_002a51ac == 0);
  FlushCache(0);
  return 1;
}

