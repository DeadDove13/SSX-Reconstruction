/* Ghidra pseudocode. PS2 address: 001eb3b8. Not validated source. */

void FUN_001eb3b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)param_1;
  iVar4 = 0;
  if (0 < iVar1) {
    piVar5 = (int *)param_1 + 1;
    do {
      lVar2 = FUN_001eb530(param_1,iVar4);
      lVar3 = FUN_0023c088(param_2,piVar5);
      if ((lVar3 != 0) && (-1 < lVar2)) {
        FUN_001be3c0(0x295e90,lVar3,lVar2);
      }
      iVar4 = iVar4 + 1;
      piVar5 = (int *)((int)piVar5 + 5);
    } while (iVar4 < iVar1);
  }
  return;
}

