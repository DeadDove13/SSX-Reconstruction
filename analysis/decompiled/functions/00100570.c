/* Ghidra pseudocode. PS2 address: 00100570. Not validated source. */

void FUN_00100570(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  iVar7 = (int)param_1;
  piVar6 = *(int **)(iVar7 + 0x68);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x14))((int)piVar6 + (int)*(short *)(*piVar6 + 0x10),param_1);
  }
  iVar8 = 0;
  piVar6 = (int *)(iVar7 + 200);
  puVar5 = (undefined4 *)(iVar7 + 0x90);
  puVar4 = (undefined4 *)(iVar7 + 0xa0);
  puVar3 = (undefined4 *)(iVar7 + 0xb8);
  piVar9 = (int *)(iVar7 + 0x70);
  if (0 < *(int *)(iVar7 + 0x8c)) {
    do {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      }
      iVar2 = *(int *)(iVar7 + 0x8c);
      iVar8 = iVar8 + 1;
      *puVar5 = 0;
      *puVar4 = 0;
      *puVar3 = 0;
      puVar4 = puVar4 + 1;
      *piVar6 = 0;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar8 < iVar2);
  }
  iVar8 = 3;
  do {
    if (*piVar9 == 0) {
      *piVar9 = 0;
    }
    else {
      FUN_00103778();
      *piVar9 = 0;
    }
    iVar8 = iVar8 + -1;
    piVar9 = piVar9 + 1;
  } while (-1 < iVar8);
  if (*(int *)(iVar7 + 0x444) != 0) {
    FUN_001f4ae8(DAT_002c56e8,5);
    if (*(int *)(iVar7 + 0x444) == 0) {
      *(undefined4 *)(iVar7 + 0x444) = 0;
    }
    else {
      FUN_00103710();
      *(undefined4 *)(iVar7 + 0x444) = 0;
    }
  }
  FUN_002193f8(iVar7 + 0x114);
  FUN_002193f8(iVar7 + 0x100);
  FUN_00146b60(0x2795b8,0);
  return;
}

