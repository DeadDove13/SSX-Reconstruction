/* Ghidra pseudocode. PS2 address: 001f5080. Not validated source. */

void FUN_001f5080(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_0025bbe4(param_1 + 0x10,param_3);
  *(undefined4 *)(param_1 + 0x50) = param_4;
  return;
}

