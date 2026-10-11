/* Ghidra pseudocode. PS2 address: 001269b0. Not validated source. */

void FUN_001269b0(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0xc0) = 0x90;
  *(undefined4 *)(param_1 + 0xc4) = 0xdeadbf05;
  FUN_001973f0(param_2,param_1 + 0xc0,0x90);
  FUN_00136730(param_1 + 0x30,param_2);
  return;
}

