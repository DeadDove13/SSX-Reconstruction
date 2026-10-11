/* Ghidra pseudocode. PS2 address: 0021db38. Not validated source. */

undefined8 FUN_0021db38(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[4] = &DAT_002bde10;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  return param_1;
}

