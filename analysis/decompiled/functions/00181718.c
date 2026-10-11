/* Ghidra pseudocode. PS2 address: 00181718. Not validated source. */

void FUN_00181718(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  param_1 = param_1 + param_2 * 8;
  *(undefined4 *)(param_1 + 0x188) = param_4;
  *(undefined4 *)(param_1 + 0x184) = param_3;
  return;
}

