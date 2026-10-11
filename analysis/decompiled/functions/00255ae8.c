/* Ghidra pseudocode. PS2 address: 00255ae8. Not validated source. */

void FUN_00255ae8(void)

{
  if (DAT_002d5480 == 0) {
    DAT_002d5480 = 1;
    FUN_00255a38();
    return;
  }
  return;
}

