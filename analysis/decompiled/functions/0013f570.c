/* Ghidra pseudocode. PS2 address: 0013f570. Not validated source. */

void FUN_0013f570(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbef0;
  *(undefined4 *)param_1 = 0x20;
  FUN_001973f0(param_2,param_1,0x20);
  return;
}

