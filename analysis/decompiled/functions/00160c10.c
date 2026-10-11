/* Ghidra pseudocode. PS2 address: 00160c10. Not validated source. */

undefined8 FUN_00160c10(undefined8 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = &DAT_002afdb8;
  uVar1 = FUN_00160aa0();
  ((undefined4 *)param_1)[1] = uVar1;
  return param_1;
}

