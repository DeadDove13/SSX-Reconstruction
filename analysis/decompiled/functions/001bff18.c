/* Ghidra pseudocode. PS2 address: 001bff18. Not validated source. */

undefined8 FUN_001bff18(undefined8 param_1)

{
  FUN_0021a378();
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined **)((int)param_1 + 0x50) = &DAT_002b6d50;
  return param_1;
}

