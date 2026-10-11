/* Ghidra pseudocode. PS2 address: 00129510. Not validated source. */

void FUN_00129510(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  piVar3 = (int *)(param_1 + 0x1c);
  if (0 < iVar4) {
    do {
      iVar2 = *piVar3;
      iVar4 = iVar4 + -1;
      uVar1 = *param_2;
      piVar3 = piVar3 + 1;
      param_2 = param_2 + 2;
      *(undefined2 *)(iVar2 + 4) = uVar1;
    } while (iVar4 != 0);
  }
  return;
}

