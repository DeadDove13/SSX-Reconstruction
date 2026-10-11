/* Ghidra pseudocode. PS2 address: 00129498. Not validated source. */

void FUN_00129498(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar4 = (int *)(param_1 + 0x1c);
    do {
      iVar2 = *piVar4;
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      *param_2 = (int)*(short *)(iVar2 + 4);
      param_2 = param_2 + 1;
    } while (iVar5 < *(int *)(param_1 + 8));
  }
  iVar5 = *(int *)(param_1 + 8);
  piVar4 = (int *)(param_1 + 0xc);
  if (0 < iVar5) {
    iVar2 = *(int *)(param_1 + 4);
    do {
      iVar3 = *piVar4;
      iVar5 = iVar5 + -1;
      piVar1 = piVar4 + 4;
      piVar4 = piVar4 + 1;
      *(undefined2 *)(*piVar1 + 4) = *(undefined2 *)(iVar3 + iVar2 * 2 + 4);
    } while (iVar5 != 0);
  }
  return;
}

