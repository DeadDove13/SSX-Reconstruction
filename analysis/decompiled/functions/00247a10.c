/* Ghidra pseudocode. PS2 address: 00247a10. Not validated source. */

void FUN_00247a10(undefined4 *param_1)

{
  DAT_002a5274 = *param_1;
  DAT_002a5278 = DAT_002a5274;
  iSignalSema(DAT_002a5240);
  if ((DAT_002a523c == 0) || (DAT_002a5270 == 0)) {
    DAT_002a524c = 0;
  }
  else {
    iSignalSema(DAT_002a5248);
  }
  DAT_002a5274 = 0;
  return;
}

