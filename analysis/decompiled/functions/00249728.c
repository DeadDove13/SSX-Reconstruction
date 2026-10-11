/* Ghidra pseudocode. PS2 address: 00249728. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00249728(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00249098(2);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    lVar2 = FUN_00267268(0x2d32e0,0xc,0,0,0,0x2d2ec0,4,0);
    uVar1 = DAT_202d2ec0;
    if (lVar2 < 0) {
      SignalSema(DAT_002a5244);
      uVar1 = 0xffffffff;
    }
    else {
      SignalSema(DAT_002a5244);
      if (1 < ram0x002a5230) {
        FUN_0025a720(0x2befc8);
      }
    }
  }
  return uVar1;
}

