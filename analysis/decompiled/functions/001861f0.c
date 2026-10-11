/* Ghidra pseudocode. PS2 address: 001861f0. Not validated source. */

void FUN_001861f0(int param_1,undefined8 param_2)

{
  FUN_001861c0();
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  *(undefined4 *)(param_1 + 0x1c) = 0xdeadbefb;
  FUN_001973f0(param_2,param_1 + 0x18,0x10);
  return;
}

