/* Ghidra pseudocode. PS2 address: 00138460. Not validated source. */

void FUN_00138460(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf20;
  *(undefined4 *)param_1 = 0x1a0;
  FUN_001973f0(param_2,param_1,0x1a0);
  return;
}

