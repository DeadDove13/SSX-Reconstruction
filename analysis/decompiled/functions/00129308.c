/* Ghidra pseudocode. PS2 address: 00129308. Not validated source. */

void FUN_00129308(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = 8;
  piVar2 = param_2 + 8;
  do {
    *piVar2 = -1;
    iVar1 = DAT_00299ce8;
    iVar4 = iVar4 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar4);
  iVar4 = 0;
  iVar5 = 0;
  piVar2 = *(int **)(*(int *)(*param_1 + 0xcc) * 8 + DAT_00299ce0);
  piVar6 = piVar2 + 9;
  if (0 < *piVar2) {
    iVar3 = *piVar6;
    while( true ) {
      if (*(short *)(*(int *)(iVar3 + 0x24) * 0xc + iVar1 + 6) == -1) {
        iVar3 = *piVar2;
      }
      else {
        *param_2 = iVar4;
        iVar5 = iVar5 + 1;
        param_2 = param_2 + 1;
        iVar3 = *piVar2;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
      if ((iVar3 <= iVar4) || (8 < iVar5)) break;
      iVar3 = *piVar6;
    }
  }
  *param_3 = iVar5;
  return;
}

