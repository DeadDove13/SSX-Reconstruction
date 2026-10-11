/* Ghidra pseudocode. PS2 address: 001357a0. Not validated source. */

void FUN_001357a0(int param_1,undefined8 param_2)

{
  FUN_00106178();
  *(undefined4 *)(param_1 + 0x890) = 0xc;
  *(undefined4 *)(param_1 + 0x894) = 0xdeadbf11;
  FUN_001973f0(param_2,param_1 + 0x890,0xc);
  return;
}

