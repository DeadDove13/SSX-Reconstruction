/* Ghidra pseudocode. PS2 address: 00265868. Not validated source. */

bool FUN_00265868(void)

{
  bool bVar1;
  
  FlushCache(0);
  DAT_002d5610 = FUN_00268bf0(0x210,0x2d5610,0x2654c0);
  bVar1 = -1 < DAT_002d5610;
  if (bVar1) {
    DAT_002d561c = 0;
    DAT_002d5614 = 0;
    DAT_002d5618 = 0;
    DAT_002d5624 = &DAT_202d5780;
    DAT_002d5620 = &DAT_202d5640;
    DAT_202d5644 = 0x210;
    DAT_202d5646 = 0x45;
    DAT_202d5647 = 0x48;
    DAT_202d5648 = 0;
    DAT_202d5642 = 0;
    DAT_002d5628 = FUN_00265418(0x100);
  }
  return bVar1;
}

