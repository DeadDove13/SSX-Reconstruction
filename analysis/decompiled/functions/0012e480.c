/* Ghidra pseudocode. PS2 address: 0012e480. Not validated source. */

void FUN_0012e480(int param_1,undefined8 param_2)

{
  FUN_00122680();
  *(undefined4 *)(param_1 + 0x2c) = 0xc;
  *(undefined4 *)(param_1 + 0x30) = 0xdeadbf10;
  FUN_001973f0(param_2,param_1 + 0x2c,0xc);
  return;
}

