/* Ghidra pseudocode. PS2 address: 00136730. Not validated source. */

void FUN_00136730(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf17;
  *(undefined4 *)param_1 = 0x90;
  FUN_001973f0(param_2,param_1,0x90);
  return;
}

