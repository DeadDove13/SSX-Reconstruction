/* Ghidra pseudocode. PS2 address: 0019ed00. Not validated source. */

void FUN_0019ed00(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  FUN_0019e170(puVar1 + 7);
  *puVar1 = 0x1c;
  puVar1[1] = 0xdeadbef4;
  FUN_001973f0(param_2,param_1,0x1c);
  FUN_001973f0(param_2,puVar1[0x21],puVar1[0x1e] << 6);
  return;
}

