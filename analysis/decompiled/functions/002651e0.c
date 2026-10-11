/* Ghidra pseudocode. PS2 address: 002651e0. Not validated source. */

void FUN_002651e0(undefined2 param_1)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  FUN_00264360(param_1);
  SYNC(0);
  if (uVar1 != 0) {
    EI();
  }
  return;
}

