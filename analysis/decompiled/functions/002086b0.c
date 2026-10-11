/* Ghidra pseudocode. PS2 address: 002086b0. Not validated source. */

void FUN_002086b0(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 0x32000) = &DAT_002bd1a8;
  FUN_00224940();
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

