/* Ghidra pseudocode. PS2 address: 00211370. Not validated source. */

void FUN_00211370(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)param_1 + 0x38) = param_2;
  *(undefined4 *)((int)param_1 + 0x20) = param_3;
  FUN_00211470(param_1,0x12);
  return;
}

