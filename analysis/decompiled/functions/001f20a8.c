/* Ghidra pseudocode. PS2 address: 001f20a8. Not validated source. */

void FUN_001f20a8(void)

{
  if ((*(int *)(DAT_002859e4 + 0x38) != 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) != 0))
  {
    return;
  }
  FUN_001f00f0();
  return;
}

