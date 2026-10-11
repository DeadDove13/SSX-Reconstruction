/* Ghidra pseudocode. PS2 address: 001770a8. Not validated source. */

void FUN_001770a8(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 0x40) = &DAT_002b0ec8;
  FUN_0016cb78(*(undefined4 *)((int)param_1 + 0x10));
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

