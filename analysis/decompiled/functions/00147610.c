/* Ghidra pseudocode. PS2 address: 00147610. Not validated source. */

undefined8 FUN_00147610(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[0x2f] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  FUN_0023bbd0(puVar1 + 3,0,0x20);
  return param_1;
}

