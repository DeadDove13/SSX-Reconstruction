/* Ghidra pseudocode. PS2 address: 00265040. Not validated source. */

void FUN_00265040(void)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  _DisableIntc();
  SYNC(0);
  if (uVar1 != 0) {
    EI();
  }
  return;
}

