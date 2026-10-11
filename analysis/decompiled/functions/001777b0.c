/* Ghidra pseudocode. PS2 address: 001777b0. Not validated source. */

undefined8 FUN_001777b0(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[9] = &DAT_002b1028;
  puVar1[1] = param_2;
  puVar1[7] = 1;
  puVar1[2] = 1;
  puVar1[4] = 1;
  puVar1[6] = 1;
  FUN_00177718();
  return param_1;
}

