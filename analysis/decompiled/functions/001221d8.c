/* Ghidra pseudocode. PS2 address: 001221d8. Not validated source. */

void FUN_001221d8(undefined8 param_1,undefined8 param_2)

{
  *(undefined **)((int)param_1 + 8) = &DAT_002a8c98;
  FUN_001223a8(param_1,*(undefined4 *)((int)param_1 + 0x28));
  FUN_00186140(param_1,param_2);
  return;
}

