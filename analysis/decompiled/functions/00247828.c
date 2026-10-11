/* Ghidra pseudocode. PS2 address: 00247828. Not validated source. */

undefined4 FUN_00247828(void)

{
  undefined4 uVar1;
  long lVar2;
  
  DAT_002d1e80 = 0xc;
  lVar2 = FUN_00267268(0x2d1800,1,0,0x2d1e80,0x80,0x2d1e80,0x80,0);
  uVar1 = DAT_002d1e8c;
  if (lVar2 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

