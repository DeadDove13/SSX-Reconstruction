/* Ghidra pseudocode. PS2 address: 002167f0. Not validated source. */

void FUN_002167f0(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_002bda18;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

