/* Ghidra pseudocode. PS2 address: 00249c18. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00249c18(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00249098(0xf);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2befd8);
    }
    lVar2 = FUN_00267268(0x2d32e0,1,0,0,0,0x2d2ec0,0x10,0);
    if (lVar2 < 0) {
      SignalSema(DAT_002a5244);
      uVar1 = 0;
    }
    else {
      *param_1 = _DAT_202d2ec4;
      if (0 < ram0x002a5230) {
        FUN_0025a720(0x2beff8);
      }
      uVar1 = DAT_202d2ec0;
      SignalSema(DAT_002a5244);
    }
  }
  return uVar1;
}

