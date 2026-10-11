/* Ghidra pseudocode. PS2 address: 00198d58. Not validated source. */

undefined4 FUN_00198d58(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x5d74) != 0) && (iVar1 = *(int *)(param_1 + 0x5d78), 0 < iVar1)) {
    iVar2 = 0x3ff8 - *(int *)(param_1 + 0x5d80);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    if (0 < iVar2) {
      FUN_0023bac0(*(undefined4 *)(param_1 + 0x5d6c),*(int *)(param_1 + 0x5d74),iVar2);
      *(int *)(param_1 + 0x5d6c) = *(int *)(param_1 + 0x5d6c) + iVar2;
      *(int *)(param_1 + 0x5d74) = *(int *)(param_1 + 0x5d74) + iVar2;
      *(int *)(param_1 + 0x5d78) = *(int *)(param_1 + 0x5d78) - iVar2;
      *(int *)(param_1 + 0x5d80) = *(int *)(param_1 + 0x5d80) + iVar2;
    }
  }
  return *(undefined4 *)(param_1 + 0x5d78);
}

