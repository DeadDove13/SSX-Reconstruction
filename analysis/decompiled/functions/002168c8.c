/* Ghidra pseudocode. PS2 address: 002168c8. Not validated source. */

void FUN_002168c8(void)

{
  if (DAT_002c58b4 != (int *)0x0) {
    (**(code **)(*DAT_002c58b4 + 0x14))((int)DAT_002c58b4 + (int)*(short *)(*DAT_002c58b4 + 0x10));
  }
  return;
}

