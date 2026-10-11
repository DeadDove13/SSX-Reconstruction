/* Ghidra pseudocode. PS2 address: 002050c0. Not validated source. */

undefined4 FUN_002050c0(undefined8 param_1)

{
  undefined4 auStack_30 [4];
  
  FUN_00204b20();
  FUN_00204f90(param_1);
  FUN_0025b6a8((int)param_1 + 0xc,0x2c5708,auStack_30);
  return auStack_30[0];
}

