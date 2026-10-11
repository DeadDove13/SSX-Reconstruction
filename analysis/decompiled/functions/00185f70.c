/* Ghidra pseudocode. PS2 address: 00185f70. Not validated source. */

void FUN_00185f70(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 8) = &DAT_002b3760;
  FUN_00186648(0x2c4dd8,param_1);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

