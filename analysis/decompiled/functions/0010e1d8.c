/* Ghidra pseudocode. PS2 address: 0010e1d8. Not validated source. */

undefined8 FUN_0010e1d8(undefined8 param_1)

{
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  FUN_0010e208();
  return param_1;
}

