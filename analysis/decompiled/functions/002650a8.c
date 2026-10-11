/* Ghidra pseudocode. PS2 address: 002650a8. Not validated source. */

void FUN_002650a8(void)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  _EnableIntc();
  SYNC(0);
  if (uVar1 != 0) {
    EI();
  }
  return;
}

