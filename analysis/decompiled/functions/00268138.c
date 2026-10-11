/* Ghidra pseudocode. PS2 address: 00268138. Not validated source. */

undefined4 FUN_00268138(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  while( true ) {
    lVar3 = FUN_002670b8(0x2d7a40,0xffffffff80000003,0);
    if (lVar3 < 0) {
      return 0xffffffff;
    }
    if (DAT_002d7a64 != 0) break;
    iVar2 = 0xfffff;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  DAT_002a6ab0 = 0;
  return 0;
}

