/* Ghidra pseudocode. PS2 address: 001f7420. Not validated source. */

void FUN_001f7420(void)

{
  long lVar1;
  
  if (DAT_002c56e8 == 0) {
    lVar1 = FUN_0023a448(0x2bc960,0xa4aa0,0x40);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0,0xa4aa0);
    }
    DAT_002c56e8 = FUN_001f74d0(lVar1,7,4);
  }
  return;
}

