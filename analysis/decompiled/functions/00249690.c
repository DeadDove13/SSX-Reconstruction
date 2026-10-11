/* Ghidra pseudocode. PS2 address: 00249690. Not validated source. */

undefined4 FUN_00249690(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00249098(1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_00267268(0x2d32e0,3,0,0,0,0x2d2ec0,4,0);
    if (lVar2 < 0) {
      SignalSema(DAT_002a5244);
      uVar1 = 0;
    }
    else {
      SignalSema(DAT_002a5244);
      uVar1 = DAT_202d2ec0;
    }
  }
  return uVar1;
}

