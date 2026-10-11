/* Ghidra pseudocode. PS2 address: 001bfae8. Not validated source. */

void FUN_001bfae8(undefined8 param_1,undefined8 param_2)

{
  *(undefined **)((int)param_1 + 0x38) = &DAT_002b6db0;
  FUN_0021a718();
  FUN_00185f70((int)param_1 + 0x30,0);
  FUN_001c0a78(param_1,param_2);
  return;
}

