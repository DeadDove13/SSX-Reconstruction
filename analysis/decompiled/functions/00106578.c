/* Ghidra pseudocode. PS2 address: 00106578. Not validated source. */

void FUN_00106578(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x334) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x82f4) = param_3;
  *(undefined4 *)(param_1 + 0x82f0) = param_2;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0xffffffff;
  return;
}

