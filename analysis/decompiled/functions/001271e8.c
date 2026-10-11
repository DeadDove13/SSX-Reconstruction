/* Ghidra pseudocode. PS2 address: 001271e8. Not validated source. */

void FUN_001271e8(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0x2c) = 0x14;
  *(undefined4 *)(param_1 + 0x30) = 0xdeadbf13;
  FUN_001973f0(param_2,param_1 + 0x2c,0x14);
  return;
}

