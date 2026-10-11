/* Ghidra pseudocode. PS2 address: 00197248. Not validated source. */

long FUN_00197248(void)

{
  long lVar1;
  
  lVar1 = FUN_00210840(0x28ac20,0x400,0x28000000,0x2b5178,0,0);
  if (lVar1 == 0) {
    FUN_00193838(*(undefined4 *)(DAT_002859e4 + 0x38));
    lVar1 = FUN_00210840(0x28ac20,0x400,0x8000000,0x2b5178,0,0);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x400);
    }
  }
  else {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x400);
  }
  *(undefined4 *)lVar1 = 0;
  return lVar1;
}

