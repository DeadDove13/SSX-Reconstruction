/* Ghidra pseudocode. PS2 address: 00131d18. Not validated source. */

void FUN_00131d18(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

