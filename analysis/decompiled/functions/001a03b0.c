/* Ghidra pseudocode. PS2 address: 001a03b0. Not validated source. */

undefined8 FUN_001a03b0(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[0xc] = 0xffffffff;
  puVar1[7] = 0x3f800000;
  puVar1[2] = 0;
  puVar1[6] = 0x3f800000;
  *puVar1 = 0;
  return param_1;
}

