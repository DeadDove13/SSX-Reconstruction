/* Ghidra pseudocode. PS2 address: 001276a0. Not validated source. */

void FUN_001276a0(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0x30) = 0x40;
  *(undefined4 *)(param_1 + 0x34) = 0xdeadbefa;
  FUN_001973f0(param_2,param_1 + 0x30,0x40);
  return;
}

