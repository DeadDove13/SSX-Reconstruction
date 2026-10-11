/* Ghidra pseudocode. PS2 address: 00211210. Not validated source. */

void FUN_00211210(undefined8 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)param_1 + 0x1c) = param_2;
  FUN_00211c98(param_1);
  FUN_00211470(param_1,0x10);
  return;
}

