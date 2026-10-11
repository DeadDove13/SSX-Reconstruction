/* Ghidra pseudocode. PS2 address: 0010ddf0. Not validated source. */

void FUN_0010ddf0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x70) = param_2 + 0x18;
  *(int *)(param_1 + 0x20) = param_2 + 4;
  *(int *)(param_1 + 0x5c) = param_2 + 0x14;
  *(int *)(param_1 + 0x34) = param_2 + 8;
  *(int *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x48) = param_2 + 0x10;
  return;
}

