/* Ghidra pseudocode. PS2 address: 00124338. Not validated source. */

void FUN_00124338(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c4080,0,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0de,0xf0);
  }
  FUN_00122ca8(lVar1,3,param_1,param_2,0,0,0);
  return;
}

