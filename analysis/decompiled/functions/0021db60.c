/* Ghidra pseudocode. PS2 address: 0021db60. Not validated source. */

void FUN_0021db60(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 0x10) = &DAT_002bde10;
  FUN_0021dca8();
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

