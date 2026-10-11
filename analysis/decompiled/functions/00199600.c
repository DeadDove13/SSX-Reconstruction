/* Ghidra pseudocode. PS2 address: 00199600. Not validated source. */

void FUN_00199600(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x5d94)) {
    *(int *)(param_1 + 0x5d78) = *(int *)(param_1 + 0x5d94);
    *(undefined4 *)(param_1 + 0x5d74) = *(undefined4 *)(param_1 + 0x5d70);
    *(undefined4 *)(param_1 + 0x5d94) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x5d90);
  if (iVar1 < 1) {
    *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
    return;
  }
  iVar2 = 0x3ff8;
  if (iVar1 < 0x3ff9) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x5d78) = iVar2;
  *(int *)(param_1 + 0x5d90) = iVar1 - iVar2;
  *(undefined4 *)(param_1 + 0x5d74) = *(undefined4 *)(param_1 + 0x5d70);
  return;
}

