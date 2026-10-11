/* Ghidra pseudocode. PS2 address: 0021a870. Not validated source. */

int FUN_0021a870(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 9;
  if ((*param_1 != 0) && (iVar3 = 0, 0 < *param_1)) {
    iVar1 = *piVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + (int)param_1;
      *piVar2 = iVar1;
      piVar2 = piVar2 + 1;
      FUN_0021a950(iVar1);
      FUN_0021a998(iVar1);
      if (*param_1 <= iVar3) break;
      iVar1 = *piVar2;
    }
  }
  return (int)param_1 + param_1[2];
}

