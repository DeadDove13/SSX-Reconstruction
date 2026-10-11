/* Ghidra pseudocode. PS2 address: 00265790. Not validated source. */

int FUN_00265790(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = iVar3;
  if (0 < param_2) {
    do {
      iVar3 = iVar2 + 1;
      do {
      } while (*(int *)(DAT_002d5628 + 4) == 0);
      *(char *)(param_1 + iVar2) = **(char **)(DAT_002d5628 + 8);
      FUN_00265480(DAT_002d5628);
      cVar1 = *(char *)(param_1 + iVar2);
    } while (((cVar1 != '\n') && (cVar1 != '\r')) && (iVar2 = iVar3, iVar3 < param_2));
  }
  return iVar3;
}

