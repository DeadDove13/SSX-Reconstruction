/* Ghidra pseudocode. PS2 address: 0010dda8. Not validated source. */

void FUN_0010dda8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_002a8670;
  if ((param_2 & 1) != 0) {
    FUN_00103778();
    return;
  }
  return;
}

