/* Ghidra pseudocode. PS2 address: 00131958. Not validated source. */

void FUN_00131958(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_4 + 0xc0) * 0x30 + param_4);
  *puVar1 = 0;
  puVar1[5] = param_2;
  puVar1[6] = param_3;
  puVar1[7] = param_1;
  FUN_001c5358(puVar1[1],puVar1[2],puVar1[3],puVar1[4],param_2,param_3,param_1,0x2913b0);
  return;
}

