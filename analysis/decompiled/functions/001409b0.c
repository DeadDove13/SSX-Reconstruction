/* Ghidra pseudocode. PS2 address: 001409b0. Not validated source. */

void FUN_001409b0(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf09;
  *(undefined4 *)param_1 = 0xc;
  FUN_001973f0(param_2,param_1,0xc);
  return;
}

