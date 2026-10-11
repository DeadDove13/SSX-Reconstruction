/* Ghidra pseudocode. PS2 address: 001b7158. Not validated source. */

void FUN_001b7158(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x18) = &DAT_002b6168;
  *(undefined **)(param_1 + 0x18) = &DAT_002b6228;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

