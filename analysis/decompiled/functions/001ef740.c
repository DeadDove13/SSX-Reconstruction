/* Ghidra pseudocode. PS2 address: 001ef740. Not validated source. */

void FUN_001ef740(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 4) = &DAT_002bbec8;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

