/* Ghidra pseudocode. PS2 address: 001eab58. Not validated source. */

void FUN_001eab58(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf19;
  *(undefined4 *)param_1 = 0x30;
  FUN_001973f0(param_2,param_1,0x30);
  return;
}

