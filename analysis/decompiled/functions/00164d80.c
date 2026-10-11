/* Ghidra pseudocode. PS2 address: 00164d80. Not validated source. */

undefined4 FUN_00164d80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 0;
  }
  return 1;
}

