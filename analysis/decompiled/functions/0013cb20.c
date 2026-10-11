/* Ghidra pseudocode. PS2 address: 0013cb20. Not validated source. */

void FUN_0013cb20(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf1f;
  *(undefined4 *)param_1 = 0x30;
  FUN_001973f0(param_2,param_1,0x30);
  return;
}

