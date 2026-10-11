/* Ghidra pseudocode. PS2 address: 001edeb0. Not validated source. */

void FUN_001edeb0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  if (0 < iVar3) {
    iVar2 = *(int *)(param_1 + 0xc);
    do {
      *(int *)(iVar2 + 0x10) = param_2;
      iVar3 = iVar3 + -1;
      piVar1 = (int *)(iVar2 + 0x18);
      iVar2 = iVar2 + 0x34;
      param_2 = param_2 + ((int)*(short *)(*piVar1 + 0x2a) + *(int *)(*piVar1 + 0x30)) * 0x40;
    } while (iVar3 != 0);
  }
  return;
}

