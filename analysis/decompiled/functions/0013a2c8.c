/* Ghidra pseudocode. PS2 address: 0013a2c8. Not validated source. */

void FUN_0013a2c8(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf12;
  *(undefined4 *)param_1 = 0x10;
  FUN_001973f0(param_2,param_1,0x10);
  return;
}

