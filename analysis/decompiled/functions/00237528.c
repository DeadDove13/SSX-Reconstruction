/* Ghidra pseudocode. PS2 address: 00237528. Not validated source. */

undefined * FUN_00237528(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if (DAT_002c5be8 != 0) {
    FUN_0023a2f8(DAT_002c5be8,100);
    DAT_002c5be8 = 0;
  }
  if (param_1 != 0) {
    FUN_0025bbe4(0x2d03c0,param_1);
    lVar2 = FUN_0025b910(0x2d03c0,0x2e);
    if (lVar2 == 0) {
      FUN_0025b7e4(0x2d03c0,0x2c59b0);
    }
    FUN_0023a288(0x2d03c0,DAT_002c5ac0 ^ 0x10,100,0x2c5be8);
  }
  if (DAT_002c5be8 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_002d03c0;
  }
  return puVar1;
}

