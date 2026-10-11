/* Ghidra pseudocode. PS2 address: 001cb4e8. Not validated source. */

undefined4 FUN_001cb4e8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_002859e4 != 0) {
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
      if (0 < *(int *)(param_1 + 0x14b8 + iVar2 * 4 + *(int *)(param_1 + 0x1468) * 8)) {
        return 1;
      }
      iVar1 = *(int *)(param_1 + 0x1468) * 0x700 + iVar3;
      iVar3 = iVar3 + 0x380;
      if (*(int *)(param_1 + iVar1 + 0x3cd0) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

