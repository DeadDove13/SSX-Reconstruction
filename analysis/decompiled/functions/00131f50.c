/* Ghidra pseudocode. PS2 address: 00131f50. Not validated source. */

void FUN_00131f50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 8)) = param_2;
  return;
}

