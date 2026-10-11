/* Ghidra pseudocode. PS2 address: 0013a800. Not validated source. */

void FUN_0013a800(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf08;
  *(undefined4 *)param_1 = 0x14;
  FUN_001973f0(param_2,param_1,0x14);
  return;
}

