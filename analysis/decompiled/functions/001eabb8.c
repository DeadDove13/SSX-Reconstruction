/* Ghidra pseudocode. PS2 address: 001eabb8. Not validated source. */

void FUN_001eabb8(int param_1,int param_2)

{
  *(int *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(int *)(*(int *)(param_1 + 0x34) + 0x30) = param_2;
  *(int *)(param_1 + 0x34) = param_2;
  return;
}

