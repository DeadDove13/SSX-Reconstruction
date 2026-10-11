/* Ghidra pseudocode. PS2 address: 0024b0d0. Not validated source. */

undefined4 FUN_0024b0d0(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0xc) = param_2 >> 4;
  *(int *)(param_1 + 0x10) = param_3 >> 4;
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  return 1;
}

