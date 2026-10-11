/* Ghidra pseudocode. PS2 address: 002045f8. Not validated source. */

undefined8 FUN_002045f8(undefined8 param_1)

{
  FUN_00209318();
  *(undefined **)((int)param_1 + 0x32000) = &DAT_002bcf00;
  return param_1;
}

