/* Ghidra pseudocode. PS2 address: 001bff50. Not validated source. */

void FUN_001bff50(undefined8 param_1,undefined8 param_2)

{
  *(undefined **)((int)param_1 + 0x50) = &DAT_002b6d50;
  FUN_0021a718();
  FUN_001c0a78(param_1,param_2);
  return;
}

