/* Ghidra pseudocode. PS2 address: 00177758. Not validated source. */

void FUN_00177758(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 0x24) = &DAT_002b1028;
  FUN_00177710();
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

