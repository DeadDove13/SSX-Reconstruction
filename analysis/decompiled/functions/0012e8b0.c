/* Ghidra pseudocode. PS2 address: 0012e8b0. Not validated source. */

void FUN_0012e8b0(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0x2c) = 0x20;
  *(undefined4 *)(param_1 + 0x30) = 0xdeadbf21;
  FUN_001973f0(param_2,param_1 + 0x2c,0x20);
  return;
}

