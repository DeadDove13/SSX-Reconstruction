/* Ghidra pseudocode. PS2 address: 0014bf30. Not validated source. */

void FUN_0014bf30(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0xdeadbef6;
  *puVar1 = 0x1c;
  FUN_001973f0(param_2,param_1,0x1c);
  FUN_001487c8(puVar1 + 8,param_2);
  return;
}

