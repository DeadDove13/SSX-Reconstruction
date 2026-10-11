/* Ghidra pseudocode. PS2 address: 00219328. Not validated source. */

undefined8 FUN_00219328(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[3] = 1;
  puVar1[4] = &DAT_002bdce8;
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return param_1;
}

