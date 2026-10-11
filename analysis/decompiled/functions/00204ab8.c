/* Ghidra pseudocode. PS2 address: 00204ab8. Not validated source. */

void FUN_00204ab8(undefined8 param_1,ulong param_2)

{
  FUN_00103778(*(undefined4 *)((int)param_1 + 4));
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

