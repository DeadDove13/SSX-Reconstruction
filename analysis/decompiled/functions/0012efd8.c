/* Ghidra pseudocode. PS2 address: 0012efd8. Not validated source. */

void FUN_0012efd8(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x2c) = &DAT_002a98b8;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

