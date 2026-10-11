/* Ghidra pseudocode. PS2 address: 0019f238. Not validated source. */

void FUN_0019f238(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  FUN_0019e170(puVar1 + 6);
  *puVar1 = 0x18;
  puVar1[1] = 0xdeadbef5;
  FUN_001973f0(param_2,param_1,0x18);
  return;
}

