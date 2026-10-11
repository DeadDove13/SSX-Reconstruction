/* Ghidra pseudocode. PS2 address: 0014c020. Not validated source. */

void FUN_0014c020(undefined4 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  lVar3 = FUN_001eac78(iVar5 + 0x20);
  if (lVar3 == 0) {
    return;
  }
  iVar4 = *(int *)(iVar5 + 0x54);
  if (iVar4 != iVar5 + 500) {
    iVar2 = *(int *)(iVar4 + 0x200);
    while( true ) {
      if (iVar2 == 0) {
        FUN_00148120(param_1,iVar4);
      }
      else {
        piVar1 = *(int **)(iVar4 + 0x238);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),iVar4);
        }
      }
      FUN_001eaaf0(iVar4);
      iVar4 = *(int *)(iVar4 + 0x34);
      if (iVar4 == iVar5 + 500) break;
      iVar2 = *(int *)(iVar4 + 0x200);
    }
  }
  FUN_0014cb38(param_2);
  return;
}

