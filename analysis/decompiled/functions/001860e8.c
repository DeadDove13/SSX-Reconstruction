/* Ghidra pseudocode. PS2 address: 001860e8. Not validated source. */

undefined8 FUN_001860e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00186018();
  *(undefined **)((int)param_1 + 8) = &DAT_002b36a0;
  FUN_001978a0(param_3,(int)param_1 + 0x18,0x10);
  return param_1;
}

