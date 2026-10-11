/* Ghidra pseudocode. PS2 address: 00128218. Not validated source. */

void FUN_00128218(int param_1,undefined8 param_2)

{
  FUN_001276a0();
  *(undefined4 *)(param_1 + 0x100) = 0x90;
  *(undefined4 *)(param_1 + 0x104) = 0xdeadbf16;
  FUN_001973f0(param_2,param_1 + 0x100,0x90);
  return;
}

