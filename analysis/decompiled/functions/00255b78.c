/* Ghidra pseudocode. PS2 address: 00255b78. Not validated source. */

long FUN_00255b78(void)

{
  long lVar1;
  
  lVar1 = FUN_00259ac0(0x18);
  if (lVar1 == 0) {
    FUN_00255b18(0);
  }
  FUN_0025a60c(lVar1,0,0x18);
  *(int *)((int)lVar1 + 4) = (int)lVar1 + 0x10;
  return lVar1;
}

