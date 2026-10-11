/* Ghidra pseudocode. PS2 address: 00248ec8. Not validated source. */

undefined4 FUN_00248ec8(void)

{
  long lVar1;
  
  lVar1 = FUN_00248330();
  if ((lVar1 != 6) && (lVar1 = FUN_002481b0(0xc), lVar1 != 0)) {
    DAT_002a5274 = 7;
    DAT_002a524c = 1;
    lVar1 = FUN_00267268(0x2d2180,8,1,0,0,0,0,0x247a10);
    if (-1 < lVar1) {
      SignalSema(DAT_002a5240);
      return 1;
    }
    DAT_002a5274 = 0;
    DAT_002a524c = 0;
    SignalSema(DAT_002a5240);
  }
  return 0;
}

