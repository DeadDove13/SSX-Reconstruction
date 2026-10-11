/* Ghidra pseudocode. PS2 address: 00249030. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00249030(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2bef00);
    }
    do {
      lVar1 = FUN_00267420(0x2d32e0);
      uVar2 = 0;
    } while (lVar1 != 0);
  }
  else {
    uVar2 = FUN_00267420(0x2d32e0);
  }
  return uVar2;
}

