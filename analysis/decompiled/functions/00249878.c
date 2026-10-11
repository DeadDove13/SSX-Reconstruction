/* Ghidra pseudocode. PS2 address: 00249878. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00249878(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00249098(4);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_00267268(0x2d32e0,6,0,0,0,0x2d2ec0,0x10,0);
    if (lVar2 < 0) {
      SignalSema(DAT_002a5244);
      uVar1 = 0;
    }
    else {
      *param_1 = _DAT_202d2ec8;
      *param_2 = DAT_202d2ec4;
      uVar1 = DAT_202d2ec0;
      SignalSema(DAT_002a5244);
    }
  }
  return uVar1;
}

