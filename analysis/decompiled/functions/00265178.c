/* Ghidra pseudocode. PS2 address: 00265178. Not validated source. */

void FUN_00265178(void)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  _EnableDmac();
  SYNC(0);
  if (uVar1 != 0) {
    EI();
  }
  return;
}

