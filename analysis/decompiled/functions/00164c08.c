/* Ghidra pseudocode. PS2 address: 00164c08. Not validated source. */

void FUN_00164c08(undefined8 param_1,undefined8 param_2)

{
  *(undefined **)((int)param_1 + 8) = &DAT_002aff78;
  FUN_00164c88();
  FUN_00185f70(param_1,param_2);
  return;
}

