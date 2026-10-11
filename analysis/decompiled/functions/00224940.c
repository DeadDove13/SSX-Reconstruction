/* Ghidra pseudocode. PS2 address: 00224940. Not validated source. */

undefined8 FUN_00224940(void)

{
  undefined8 uVar1;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffffffffffff6;
  }
  else {
    FUN_00228b48(0,0,0,0xffffffffffffffff,0xffffffffffffffff);
    if (DAT_0029a8dc != (code *)0x0) {
      (*DAT_0029a8dc)();
    }
    if (DAT_0029a8e8 != (code *)0x0) {
      (*DAT_0029a8e8)();
    }
    if (DAT_0029a8ec != (code *)0x0) {
      (*DAT_0029a8ec)();
    }
    if (DAT_0029a8e4 != (code *)0x0) {
      (*DAT_0029a8e4)();
    }
    FUN_00228998();
    if (DAT_0029a8e0 != (code *)0x0) {
      (*DAT_0029a8e0)(0xffffffffffffffff);
    }
    FUN_0022c198();
    FUN_002253d0(DAT_0029a8f0);
    FUN_002253d0(DAT_0029a8f4);
    DAT_0029a888 = '\0';
    FUN_0022c060();
    uVar1 = FUN_002254c8();
  }
  return uVar1;
}

