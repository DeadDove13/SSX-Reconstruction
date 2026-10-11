/* Ghidra pseudocode. PS2 address: 0019cef8. Not validated source. */

undefined8 FUN_0019cef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_80 [4];
  
  iVar6 = (int)param_1;
  FUN_00122180(iVar6 + 0x30);
  *(undefined **)(iVar6 + 0x38) = &DAT_002b5598;
  FUN_001978a0(param_3,param_1,0x30);
  *(undefined4 *)(iVar6 + 100) = 0;
  FUN_001978a0(param_3,aiStack_80,4);
  if (aiStack_80[0] == 0) {
    iVar5 = *(int *)(iVar6 + 0x58);
  }
  else {
    FUN_0019e260(param_1);
    FUN_001978a0(param_3,*(undefined4 *)(iVar6 + 100),0x10);
    FUN_001978a0(param_3,*(int *)(iVar6 + 100) + 200,0xc);
    iVar5 = *(int *)(iVar6 + 0x58);
  }
  iVar4 = 0;
  piVar1 = *(int **)(*(int *)(iVar5 + 0xcc) * 8 + DAT_00299ce0);
  *(undefined4 *)(iVar6 + 0x5c) = 0;
  piVar3 = piVar1 + 9;
  if (0 < *piVar1) {
    do {
      if (*(int *)(*piVar3 + 0x1c) == 0) {
        iVar5 = *piVar1;
      }
      else {
        *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
        iVar5 = *piVar1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar5);
  }
  iVar5 = *(int *)(iVar6 + 0x5c);
  if (iVar5 == 0) {
    *(undefined4 *)(iVar6 + 0x60) = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = iVar5 * 0x70 + 0x10;
    lVar2 = FUN_002107c8(0x298590,iVar4,0x50000000,0x2b5280,0,0);
    if (lVar2 != 0) {
      FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar4);
    }
    piVar3 = (int *)lVar2 + 4;
    *(int *)lVar2 = iVar5;
    iVar4 = iVar5 + -1;
    piVar1 = piVar3;
    if (iVar5 != 0) {
      do {
        iVar4 = iVar4 + -1;
        FUN_001d7df0(piVar1);
        piVar1 = piVar1 + 0x1c;
      } while (iVar4 != -1);
    }
    *(int **)(iVar6 + 0x60) = piVar3;
    iVar5 = *(int *)(iVar6 + 0x5c);
  }
  if ((iVar5 != 0) && (iVar4 = 0, 0 < iVar5)) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      FUN_001d8690(*(int *)(iVar6 + 0x60) + iVar5,param_3);
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < *(int *)(iVar6 + 0x5c));
  }
  FUN_0019d570(param_1);
  return param_1;
}

