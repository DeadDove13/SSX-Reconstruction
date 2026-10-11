/* Ghidra pseudocode. PS2 address: 001029f0. Not validated source. */

void FUN_001029f0(int param_1)

{
  if (*(int *)(param_1 + 4) - 2U < 2) {
    FUN_00102908();
  }
  else {
    FUN_001989e0(*(undefined4 *)(DAT_002859e4 + 0x38));
  }
  *(undefined4 *)(param_1 + 4) = 5;
  return;
}

