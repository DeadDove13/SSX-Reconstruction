/* Ghidra pseudocode. PS2 address: 00264e78. Not validated source. */

void FUN_00264e78(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  FUN_00264dd0(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  if (uVar1 != 0) {
    EI();
  }
  return;
}

