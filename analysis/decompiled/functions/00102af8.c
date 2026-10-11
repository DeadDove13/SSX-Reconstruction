/* Ghidra pseudocode. PS2 address: 00102af8. Not validated source. */

void FUN_00102af8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 6;
  FUN_001989e0(*(undefined4 *)(DAT_002859e4 + 0x38));
  FUN_0015dac8(*(undefined4 *)(DAT_002859e4 + 0xa0));
  FUN_00154518(0x27a598);
  if (DAT_0027bc08 == 4) {
    FUN_00189730();
    return;
  }
  *(undefined4 *)(DAT_002859e4 + 0x44) = 1;
  return;
}

