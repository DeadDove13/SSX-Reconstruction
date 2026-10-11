/* Ghidra pseudocode. PS2 address: 00147658. Not validated source. */

void FUN_00147658(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0xc) = param_3;
  return;
}

