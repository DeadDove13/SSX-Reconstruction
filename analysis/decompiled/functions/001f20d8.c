/* Ghidra pseudocode. PS2 address: 001f20d8. Not validated source. */

void FUN_001f20d8(void)

{
  if ((*(int *)(DAT_002859e4 + 0x38) != 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) != 0))
  {
    return;
  }
  FUN_001f0138();
  return;
}

