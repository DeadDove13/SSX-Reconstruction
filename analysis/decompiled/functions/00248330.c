/* Ghidra pseudocode. PS2 address: 00248330. Not validated source. */

undefined4 FUN_00248330(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_002481b0(2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_00267268(0x2d2180,0xe,0,0,0,0x2d1f80,4,0);
    if (lVar2 < 0) {
      SignalSema(DAT_002a5240);
      uVar1 = 0;
    }
    else {
      SignalSema(DAT_002a5240);
      uVar1 = DAT_202d1f80;
    }
  }
  return uVar1;
}

