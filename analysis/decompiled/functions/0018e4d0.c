/* Ghidra pseudocode. PS2 address: 0018e4d0. Not validated source. */

void FUN_0018e4d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *(int *)(param_2 + 4) = param_1;
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 4);
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x110);
  if (param_3 < iVar1) {
    puVar3 = (undefined4 *)(iVar1 * 4 + param_1 + 0x10);
    iVar4 = iVar1;
    do {
      iVar4 = iVar4 + -1;
      *puVar3 = puVar3[-1];
      puVar3 = puVar3 + -1;
    } while (param_3 < iVar4);
  }
  *(int *)(param_1 + 0x10 + param_3 * 4) = param_2;
  if (((iVar2 != 0) && (param_3 <= *(int *)(param_1 + 8))) && (iVar1 != 0)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  *(int *)(param_1 + 4) = iVar1 + 1;
  return;
}

