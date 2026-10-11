/* Ghidra pseudocode. PS2 address: 00218e00. Not validated source. */

void FUN_00218e00(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int aiStack_40 [4];
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0xdeadbf1b;
  *puVar1 = 0xc;
  FUN_001973f0(param_2,param_1,0xc);
  aiStack_40[0] = puVar1[3] - DAT_00299ccc;
  FUN_001973f0(param_2,aiStack_40,4);
  return;
}

