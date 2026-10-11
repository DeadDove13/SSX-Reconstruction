/* Ghidra pseudocode. PS2 address: 0019e638. Not validated source. */

undefined8 FUN_0019e638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0019cef8();
  *(undefined **)((int)param_1 + 0x38) = &DAT_002b54a0;
  FUN_001978a0(param_3,(int)param_1 + 0x68,4);
  return param_1;
}

