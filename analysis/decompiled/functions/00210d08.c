/* Ghidra pseudocode. PS2 address: 00210d08. Not validated source. */

void FUN_00210d08(undefined8 param_1,ulong param_2)

{
  FUN_00213078(param_1);
  if (*(int *)((int)param_1 + 0x3c) != 0) {
    FUN_0023a998();
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

