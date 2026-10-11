/* Ghidra pseudocode. PS2 address: 00186018. Not validated source. */

undefined8 FUN_00186018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00185f30();
  *(undefined **)((int)param_1 + 8) = &DAT_002b3700;
  FUN_001978a0(param_3,(int)param_1 + 0xc,0xc);
  return param_1;
}

