/* Ghidra pseudocode. PS2 address: 0019f3b8. Not validated source. */

void FUN_0019f3b8(int param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x58) + 0xcc) * 8 + DAT_00299ce0);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  piVar3 = piVar1 + 9;
  if (0 < *piVar1) {
    do {
      if (*(int *)(*piVar3 + 0x1c) == 0) {
        iVar5 = *piVar1;
      }
      else {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        iVar5 = *piVar1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar5);
  }
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    iVar5 = iVar4 * 0x70 + 0x10;
    lVar2 = FUN_002107c8(0x298590,iVar5,0x50000000,0x2b5280,0,0);
    if (lVar2 != 0) {
      FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar5);
    }
    piVar3 = (int *)lVar2 + 4;
    *(int *)lVar2 = iVar4;
    iVar5 = iVar4 + -1;
    piVar1 = piVar3;
    if (iVar4 != 0) {
      do {
        iVar5 = iVar5 + -1;
        FUN_001d7df0(piVar1);
        piVar1 = piVar1 + 0x1c;
      } while (iVar5 != -1);
    }
    *(int **)(param_1 + 0x60) = piVar3;
  }
  return;
}

