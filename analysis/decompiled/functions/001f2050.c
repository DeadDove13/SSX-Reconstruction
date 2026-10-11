/* Ghidra pseudocode. PS2 address: 001f2050. Not validated source. */

void FUN_001f2050(void)

{
  if (((*(int *)(DAT_002859e4 + 0x38) == 0) || (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0)
      ) && ((DAT_0027ba88 == 3 || (DAT_0027ba88 == 5)))) {
    FUN_001f0060();
  }
  return;
}

