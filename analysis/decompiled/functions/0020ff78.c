/* Ghidra pseudocode. PS2 address: 0020ff78. Not validated source. */

void FUN_0020ff78(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_002bd478;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

