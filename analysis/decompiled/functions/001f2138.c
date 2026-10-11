/* Ghidra pseudocode. PS2 address: 001f2138. Not validated source. */

undefined4 FUN_001f2138(void)

{
  if (DAT_00285308 == 2) {
    return 1;
  }
  if (DAT_00285308 < 3) {
    if (DAT_00285308 == 0) {
      return 1;
    }
  }
  else if (DAT_00285308 == 3) {
    return 2;
  }
  return 1;
}

