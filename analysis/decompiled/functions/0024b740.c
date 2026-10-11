/* Ghidra pseudocode. PS2 address: 0024b740. Not validated source. */

void FUN_0024b740(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_002a5b70 = 1;
  FUN_0024d748(0);
  uVar1 = FUN_0024eec8(0x1c);
  DAT_002a540c = uVar1 >> 0x11 & 3;
  if (DAT_002a540c != 1) {
    FUN_0024af98(0x2bf220);
  }
  DAT_002a5404 = uVar1 >> 0x14;
  DAT_002a5408 = uVar1 >> 0x13 & 1;
  uVar2 = FUN_0024eec8(0x10);
  DAT_002a5418 = uVar2 & 0x1f;
  DAT_002a5414 = uVar2 >> 5 & 3;
  DAT_002a5410 = uVar2 >> 7 & 1;
  if ((DAT_002a5404 != 0x48) && (DAT_002a5404 != 0x58)) {
    FUN_0024af98(0x2bf248);
  }
  DAT_002a53e0 = (uVar1 >> 0xf & 3) << 0xc | DAT_002a53e0 & 0xfff;
  DAT_002a53e4 = (uVar1 >> 0xd & 3) << 0xc | DAT_002a53e4 & 0xfff;
  DAT_002a53f8 = DAT_002a53f8 + (uVar1 >> 1 & 0xfff) * 0x40000;
  DAT_002a53fc = DAT_002a53fc + (uVar2 >> 8) * 0x400;
  return;
}

