/* Ghidra pseudocode. PS2 address: 001290e8. Not validated source. */

void FUN_001290e8(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0x2c) = 0x20;
  *(undefined4 *)(param_1 + 0x30) = 0xdeadbf23;
  FUN_001973f0(param_2,param_1 + 0x2c,0x20);
  FUN_00197ea0(param_2,*(undefined4 *)(param_1 + 0x4c),param_2);
  return;
}

