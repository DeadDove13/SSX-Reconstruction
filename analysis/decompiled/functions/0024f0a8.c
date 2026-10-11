/* Ghidra pseudocode. PS2 address: 0024f0a8. Not validated source. */

undefined8 FUN_0024f0a8(void)

{
  long lVar1;
  
  DAT_002a5500 = FUN_0024eec8(5);
  lVar1 = FUN_0024eec8(1);
  if (lVar1 == 0) {
    DAT_002a5b80 = 0;
  }
  else {
    DAT_002a5b80 = FUN_0024eec8(1);
    FUN_0024edc0(7);
    FUN_0024f5f8();
  }
  return 0;
}

