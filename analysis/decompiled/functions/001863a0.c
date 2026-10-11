/* Ghidra pseudocode. PS2 address: 001863a0. Not validated source. */

void FUN_001863a0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  iVar1 = 0;
  if (0 < *piVar3) {
    do {
      FUN_00186a08(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *piVar3);
  }
  iVar1 = piVar3[1];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -0x10) * 0x34 + iVar1;
    if (iVar1 == iVar2) {
      iVar1 = piVar3[1];
    }
    else {
      do {
        iVar2 = iVar2 + -0x34;
        FUN_00186d20(iVar2,0);
      } while (piVar3[1] != iVar2);
      iVar1 = piVar3[1];
    }
    FUN_00103710(iVar1 + -0x10);
  }
  *piVar3 = 0;
  piVar3[1] = 0;
  return;
}

