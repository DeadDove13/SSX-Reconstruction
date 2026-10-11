/* Ghidra pseudocode. PS2 address: 001624b8. Not validated source. */

undefined8 FUN_001624b8(undefined8 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = &DAT_002afae0;
  uVar1 = FUN_00160aa0();
  ((undefined4 *)param_1)[9] = uVar1;
  return param_1;
}

