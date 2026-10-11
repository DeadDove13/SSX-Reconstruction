/* Ghidra pseudocode. PS2 address: 00121e30. Not validated source. */

void FUN_00121e30(int param_1,undefined8 param_2)

{
  FUN_00106178();
  *(undefined4 *)(param_1 + 0x890) = 0x40;
  *(undefined4 *)(param_1 + 0x894) = 0xdeadbefd;
  FUN_001973f0(param_2,param_1 + 0x890,0x40);
  return;
}

