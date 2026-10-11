/* Ghidra pseudocode. PS2 address: 0012b800. Not validated source. */

void FUN_0012b800(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0x2c) = 0x14;
  *(undefined4 *)(param_1 + 0x30) = 0xdeadbeff;
  FUN_001973f0(param_2,param_1 + 0x2c,0x14);
  return;
}

