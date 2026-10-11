/* Ghidra pseudocode. PS2 address: 001601e0. Not validated source. */

undefined8 FUN_001601e0(undefined8 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = &DAT_002afaf0;
  uVar1 = FUN_00160aa0();
  ((undefined4 *)param_1)[1] = uVar1;
  return param_1;
}

