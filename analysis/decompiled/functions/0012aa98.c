/* Ghidra pseudocode. PS2 address: 0012aa98. Not validated source. */

void FUN_0012aa98(int param_1,undefined8 param_2)

{
  FUN_00122680();
  FUN_00197ea0(param_2,*(undefined4 *)(param_1 + 0x50),param_2);
  *(undefined4 *)(param_1 + 0x2c) = 0x1c;
  *(undefined4 *)(param_1 + 0x30) = 0xdeadbf03;
  FUN_001973f0(param_2,param_1 + 0x2c,0x1c);
  return;
}

