/* Ghidra pseudocode. PS2 address: 00265250. Not validated source. */

void FUN_00265250(void)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  FUN_00264370();
  SYNC(0);
  if (uVar1 != 0) {
    EI();
  }
  return;
}

