/* Ghidra pseudocode. PS2 address: 00122b30. Not validated source. */

void FUN_00122b30(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0x2c) = 0x10;
  *(undefined4 *)(param_1 + 0x30) = 0xdeadbefe;
  FUN_001973f0(param_2,param_1 + 0x2c,0x10);
  return;
}

