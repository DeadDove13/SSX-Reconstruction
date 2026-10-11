/* Ghidra pseudocode. PS2 address: 00127dc8. Not validated source. */

void FUN_00127dc8(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0x30) = 0x40;
  *(undefined4 *)(param_1 + 0x34) = 0xdeadbf0d;
  FUN_001973f0(param_2,param_1 + 0x30,0x40);
  return;
}

