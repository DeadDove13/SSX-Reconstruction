/* Ghidra pseudocode. PS2 address: 00160530. Not validated source. */

undefined8 FUN_00160530(undefined8 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = &DAT_002afd78;
  uVar1 = FUN_00160aa0();
  ((undefined4 *)param_1)[1] = uVar1;
  return param_1;
}

