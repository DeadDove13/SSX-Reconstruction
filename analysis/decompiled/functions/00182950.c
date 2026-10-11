/* Ghidra pseudocode. PS2 address: 00182950. Not validated source. */

void FUN_00182950(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x34) = &DAT_002b32d8;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

