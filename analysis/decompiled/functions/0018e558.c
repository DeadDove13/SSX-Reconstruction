/* Ghidra pseudocode. PS2 address: 0018e558. Not validated source. */

void FUN_0018e558(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 <= param_2) {
      iVar1 = *(int *)(param_1 + 4);
    }
  }
  if (param_2 < iVar1 + -1) {
    puVar2 = (undefined4 *)(param_2 * 4 + 0x10 + param_1);
    iVar3 = param_2;
    do {
      iVar3 = iVar3 + 1;
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
    } while (iVar3 < iVar1 + -1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if (param_2 < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + -1;
    iVar1 = *(int *)(param_1 + 8);
  }
  if (param_2 != iVar1) {
    return;
  }
  FUN_0018de10();
  return;
}

