/* Ghidra pseudocode. PS2 address: 0024f630. Not validated source. */

void FUN_0024f630(void)

{
  if ((DAT_002a543c != 3) && (DAT_002a5438 != DAT_002a5c30)) {
    if (DAT_002a5c2c != 0) {
      DAT_002a5c2c = 0;
      DAT_002a5bf0 = DAT_002a5bf0 + 0x400;
    }
    if ((DAT_002a5438 < DAT_002a5c30) && (DAT_002a5bf8 == 0)) {
      DAT_002a5c2c = 1;
    }
    DAT_002a5bf8 = 0;
    DAT_002a5c30 = DAT_002a5438;
  }
  DAT_002a54f8 = DAT_002a5bf0 + DAT_002a5438;
  if ((DAT_002a5c2c != 0) && (DAT_002a5438 <= DAT_002a5c30)) {
    DAT_002a54f8 = DAT_002a54f8 + 0x400;
  }
  if (DAT_002a5bf4 < DAT_002a54f8) {
    DAT_002a5bf4 = DAT_002a54f8;
  }
  return;
}

