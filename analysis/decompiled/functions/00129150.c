/* Ghidra pseudocode. PS2 address: 00129150. Not validated source. */

undefined8 FUN_00129150(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[0xb] = &DAT_002a98b8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return param_1;
}

