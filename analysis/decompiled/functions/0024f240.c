/* Ghidra pseudocode. PS2 address: 0024f240. Not validated source. */

void FUN_0024f240(void)

{
  DAT_002a5438 = FUN_0024eec8(10);
  DAT_002a543c = FUN_0024eec8(3);
  DAT_002a5440 = FUN_0024eec8(0x10);
  if (DAT_002a543c - 2U < 2) {
    DAT_002a5444 = FUN_0024eec8(1);
    DAT_002a5448 = FUN_0024eec8(3);
  }
  if (DAT_002a543c == 3) {
    DAT_002a544c = FUN_0024eec8(1);
    DAT_002a5450 = FUN_0024eec8(3);
  }
  FUN_0024f5f8();
  FUN_0024f308();
  FUN_0024f630();
  return;
}

