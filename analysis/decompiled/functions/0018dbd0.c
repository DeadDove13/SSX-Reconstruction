/* Ghidra pseudocode. PS2 address: 0018dbd0. Not validated source. */

undefined8 FUN_0018dbd0(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = param_2;
  puVar1[3] = &DAT_002b4af8;
  puVar1[2] = 1;
  return param_1;
}

