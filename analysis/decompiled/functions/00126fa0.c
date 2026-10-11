/* Ghidra pseudocode. PS2 address: 00126fa0. Not validated source. */

undefined8 FUN_00126fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00122180();
  *(undefined **)((int)param_1 + 8) = &DAT_002a9d80;
  FUN_001978a0(param_3,(int)param_1 + 0x2c,0x14);
  return param_1;
}

