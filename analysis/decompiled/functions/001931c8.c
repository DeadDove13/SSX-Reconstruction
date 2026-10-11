/* Ghidra pseudocode. PS2 address: 001931c8. Not validated source. */

void thunk_FUN_0018dde8(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x114) = &DAT_002b4ab8;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

