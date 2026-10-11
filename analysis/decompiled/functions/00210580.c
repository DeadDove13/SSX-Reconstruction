/* Ghidra pseudocode. PS2 address: 00210580. Not validated source. */

undefined8 FUN_00210580(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return param_1;
}

