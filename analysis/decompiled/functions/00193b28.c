/* Ghidra pseudocode. PS2 address: 00193b28. Not validated source. */

void FUN_00193b28(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  do {
    if (param_1[iVar2 + 0xe4b] != 0) {
      FUN_00198168();
    }
    iVar4 = 0;
    iVar5 = iVar2 + 1;
    if (0 < param_1[iVar2 + 0xe53]) {
      piVar3 = param_1 + iVar2 * 0x10 + 0xf9a;
      iVar1 = *piVar3;
      while( true ) {
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
        FUN_001987d0(iVar1);
        if (param_1[iVar2 + 0xe53] <= iVar4) break;
        iVar1 = *piVar3;
      }
    }
    param_1[iVar2 + 0xe53] = 0;
    iVar2 = iVar5;
  } while (iVar5 < 4);
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = 0;
  }
  else {
    do {
      FUN_00197fb0(iVar2);
      iVar2 = *(int *)(iVar2 + 0x28);
    } while (iVar2 != 0);
    *param_1 = 0;
  }
  return;
}

