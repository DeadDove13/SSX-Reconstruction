/* Ghidra pseudocode. PS2 address: 00174100. Not validated source. */

void FUN_00174100(int param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if ((param_2 & 0x18000c) == 0) {
      piVar1 = *(int **)(param_1 + 0x2c);
      goto LAB_00174148;
    }
    FUN_001fafe0(DAT_002c56e8);
  }
  piVar1 = *(int **)(param_1 + 0x2c);
LAB_00174148:
  iVar2 = *(int *)(param_1 + 0x34);
  do {
    if (((param_2 & 0x100008) != 0) && (iVar3 = *piVar1, *piVar1 = iVar3 + -1, iVar3 + -1 < 0)) {
      *piVar1 = *(int *)(param_1 + 0x30) + -1;
    }
    iVar3 = *piVar1;
    if ((param_2 & 0x80004) != 0) {
      *piVar1 = iVar3 + 1;
      if (*(int *)(param_1 + 0x30) <= iVar3 + 1) {
        *piVar1 = 0;
      }
      iVar3 = *piVar1;
    }
  } while (*(int *)(iVar3 * 4 + iVar2) == 0);
  return;
}

