/* Ghidra pseudocode. PS2 address: 001d8780. Not validated source. */

void FUN_001d8780(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x170) = &DAT_002b7a00;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

