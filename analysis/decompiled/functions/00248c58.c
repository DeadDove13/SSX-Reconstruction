/* Ghidra pseudocode. PS2 address: 00248c58. Not validated source. */

undefined4 FUN_00248c58(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00248330();
  if ((lVar1 != 6) && (lVar1 = FUN_002481b0(9), lVar1 != 0)) {
    DAT_002d2e90 = param_1;
    FUN_002669d0(0x2d2e90,4);
    DAT_002a5274 = 4;
    DAT_002a524c = 1;
    lVar1 = FUN_00267268(0x2d2180,5,1,0x2d2e90,4,0,0,0x247a10);
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

