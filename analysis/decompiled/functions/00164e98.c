/* Ghidra pseudocode. PS2 address: 00164e98. Not validated source. */

void FUN_00164e98(undefined8 param_1,undefined8 param_2)

{
  *(undefined **)((int)param_1 + 8) = &DAT_002afea8;
  FUN_00164c88();
  FUN_00164c08(param_1,param_2);
  return;
}

