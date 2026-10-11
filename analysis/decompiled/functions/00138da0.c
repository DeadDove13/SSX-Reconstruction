/* Ghidra pseudocode. PS2 address: 00138da0. Not validated source. */

void FUN_00138da0(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf07;
  *(undefined4 *)param_1 = 0x10;
  FUN_001973f0(param_2,param_1,0x10);
  return;
}

