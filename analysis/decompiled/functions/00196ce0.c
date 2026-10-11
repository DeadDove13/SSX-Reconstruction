/* Ghidra pseudocode. PS2 address: 00196ce0. Not validated source. */

void FUN_00196ce0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00210840(0x28ac20,0x3ec,0x8000000,0x2b5168,0,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0x3ec);
  }
  FUN_001971d8(lVar1,param_1);
  return;
}

