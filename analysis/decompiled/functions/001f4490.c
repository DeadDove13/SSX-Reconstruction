/* Ghidra pseudocode. PS2 address: 001f4490. Not validated source. */

undefined8 FUN_001f4490(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[1] = 0xffffffff;
  puVar1[3] = 0;
  return param_1;
}

