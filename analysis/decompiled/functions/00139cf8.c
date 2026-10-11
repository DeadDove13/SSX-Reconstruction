/* Ghidra pseudocode. PS2 address: 00139cf8. Not validated source. */

void FUN_00139cf8(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbf0c;
  *(undefined4 *)param_1 = 0xc;
  FUN_001973f0(param_2,param_1,0xc);
  return;
}

