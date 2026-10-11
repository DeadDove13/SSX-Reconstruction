/* Ghidra pseudocode. PS2 address: 001f6140. Not validated source. */

undefined8 FUN_001f6140(undefined8 param_1)

{
  FUN_001f4718();
  *(undefined **)((int)param_1 + 0x32000) = &DAT_002bc908;
  DAT_002c5bc0 = (int)param_1;
  return param_1;
}

