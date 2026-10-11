/* Ghidra pseudocode. PS2 address: 00170ad8. Not validated source. */

void FUN_00170ad8(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 4) = &DAT_002b05d0;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

