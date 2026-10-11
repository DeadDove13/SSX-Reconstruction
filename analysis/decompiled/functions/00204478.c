/* Ghidra pseudocode. PS2 address: 00204478. Not validated source. */

void FUN_00204478(undefined8 param_1,ulong param_2)

{
  FUN_00103778(*(undefined4 *)param_1);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

