/* Ghidra pseudocode. PS2 address: 00247d38. Not validated source. */

void FUN_00247d38(void)

{
  if (DAT_002a523c != 0) {
    DAT_002a5274 = 0xffffffff;
    SignalSema(DAT_002a5248);
  }
  DeleteSema(DAT_002a5240);
  DeleteSema(DAT_002a5244);
  DeleteSema(DAT_002a5248);
  return;
}

