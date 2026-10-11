/* Ghidra pseudocode. PS2 address: 00247a90. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00247a90(void)

{
  do {
    WaitSema(DAT_002a5248);
    if (DAT_002a5274 == 1) {
      ExitThread();
    }
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2bed78,DAT_002a5270,DAT_002a5278);
    }
    if ((DAT_002a5270 != (code *)0x0) && (DAT_002a5278 != 0)) {
      (*DAT_002a5270)(DAT_002a5278);
    }
    DAT_002a524c = 0;
  } while( true );
}

