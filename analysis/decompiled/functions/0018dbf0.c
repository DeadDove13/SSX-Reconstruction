/* Ghidra pseudocode. PS2 address: 0018dbf0. Not validated source. */

void FUN_0018dbf0(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0xc) = &DAT_002b4af8;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

