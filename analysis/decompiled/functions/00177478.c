/* Ghidra pseudocode. PS2 address: 00177478. Not validated source. */

undefined8 FUN_00177478(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[9] = &DAT_002b1028;
  *puVar1 = param_2;
  puVar1[7] = 1;
  puVar1[2] = 1;
  puVar1[4] = 1;
  puVar1[6] = 1;
  FUN_00177718();
  puVar1[0xd] = param_3;
  puVar1[9] = &DAT_002b0fb8;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return param_1;
}

