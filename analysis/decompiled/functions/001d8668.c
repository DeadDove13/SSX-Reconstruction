/* Ghidra pseudocode. PS2 address: 001d8668. Not validated source. */

void FUN_001d8668(undefined8 param_1,undefined8 param_2)

{
  ((undefined4 *)param_1)[1] = 0xdeadbef2;
  *(undefined4 *)param_1 = 0x2c;
  FUN_001973f0(param_2,param_1,0x2c);
  return;
}

