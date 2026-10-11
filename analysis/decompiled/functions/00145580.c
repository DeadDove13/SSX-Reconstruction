/* Ghidra pseudocode. PS2 address: 00145580. Not validated source. */

void FUN_00145580(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0xdeadbf25;
  *puVar1 = 0x60;
  FUN_001973f0(param_2,param_1,0x60);
  FUN_00136730(puVar1 + 0x1c,param_2);
  return;
}

