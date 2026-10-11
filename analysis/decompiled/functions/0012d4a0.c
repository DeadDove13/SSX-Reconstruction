/* Ghidra pseudocode. PS2 address: 0012d4a0. Not validated source. */

void FUN_0012d4a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  FUN_001290e8(puVar1 + 6);
  *puVar1 = 0x18;
  puVar1[1] = 0xdeadbf24;
  FUN_001973f0(param_2,param_1,0x18);
  return;
}

