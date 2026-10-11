/* Ghidra pseudocode. PS2 address: 00102aa0. Not validated source. */

void FUN_00102aa0(int param_1)

{
  if (*(int *)(param_1 + 4) - 2U < 2) {
    FUN_00102908();
  }
  else {
    FUN_001989e0(*(undefined4 *)(DAT_002859e4 + 0x38));
  }
  *(undefined4 *)(param_1 + 4) = 4;
  return;
}

