/* Ghidra pseudocode. PS2 address: 00132f40. Not validated source. */

void FUN_00132f40(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x70) = param_3 + 8;
  *(int *)(param_1 + 0x20) = param_2 + 4;
  *(int *)(param_1 + 0x5c) = param_3 + 4;
  *(int *)(param_1 + 0x34) = param_2 + 8;
  *(int *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x48) = param_3;
  return;
}

