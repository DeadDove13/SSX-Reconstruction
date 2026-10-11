/* Ghidra pseudocode. PS2 address: 00248f88. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00248f88(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2beef0);
    }
    do {
      do {
      } while (DAT_002a524c != 0);
      lVar2 = FUN_00267420(0x2d2180);
      uVar1 = 0;
    } while (lVar2 != 0);
  }
  else {
    uVar1 = 1;
    if (DAT_002a524c == 0) {
      lVar2 = FUN_00267420(0x2d2180);
      uVar1 = 1;
      if (lVar2 == 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

