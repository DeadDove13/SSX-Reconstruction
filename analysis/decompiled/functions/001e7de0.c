/* Ghidra pseudocode. PS2 address: 001e7de0. Not validated source. */

void FUN_001e7de0(int param_1,undefined8 param_2)

{
  FUN_001861f0();
  *(undefined4 *)(param_1 + 0x28) = 0x3c;
  *(undefined4 *)(param_1 + 0x2c) = 0xdeadbf1d;
  FUN_001973f0(param_2,param_1 + 0x28,0x3c);
  FUN_00197db8(param_2,*(undefined4 *)(param_1 + 0x7c),param_2);
  FUN_001973f0(param_2,*(undefined4 *)(param_1 + 0x80),*(int *)(param_1 + 0x30) << 5);
  FUN_00218e00(param_1 + 100,param_2);
  return;
}

