/* Ghidra pseudocode. PS2 address: 0022c198. Not validated source. */

undefined8 FUN_0022c198(void)

{
  if (DAT_0029e8c8 != (code *)0x0) {
    (*DAT_0029e8c8)(0x60,0);
  }
  DAT_0029a888 = 0;
  while (DAT_0029a88b != '\0') {
    FUN_002250a0();
  }
  FUN_00246510(1,0x8010,0xf81,0);
  FUN_00246510(1,0x8010,0x1081,0);
  FUN_0022f1d0();
  if (DAT_0029e8d8 != 0) {
    FUN_00268238();
    DAT_0029e8d8 = 0;
  }
  return 0;
}

