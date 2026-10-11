/* Ghidra pseudocode. PS2 address: 00224560. Not validated source. */

void FUN_00224560(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 0x40) = &DAT_002be180;
  FUN_0020dd00((int)param_1 + 0x60,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

