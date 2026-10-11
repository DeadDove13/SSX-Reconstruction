/* Ghidra pseudocode. PS2 address: 001990f8. Not validated source. */

void FUN_001990f8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5d84);
  if (*(int *)(param_1 + 0x5d88) <= iVar1) {
    *(undefined4 *)(param_1 + 0x5d74) = 0;
    *(undefined4 *)(param_1 + 0x5d78) = 0;
    *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x5d78) = 0xe24;
  *(int *)(param_1 + 0x5d84) = iVar1 + 1;
  *(int *)(param_1 + 0x5d74) = iVar1 * 0xe24 + param_1 + 0x50;
  return;
}

