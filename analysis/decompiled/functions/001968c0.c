/* Ghidra pseudocode. PS2 address: 001968c0. Not validated source. */

undefined4 FUN_001968c0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = (int)param_1;
  iVar4 = 0;
  if (*(int *)(iVar5 + 0x394c + *(int *)(iVar5 + 0x1c) * 4) < 1) {
LAB_001969a4:
    uVar3 = 0;
  }
  else {
    iVar7 = iVar5 + 0x3e68;
    iVar1 = *(int *)(iVar5 + 0x1c);
    while( true ) {
      iVar6 = iVar4 * 4;
      piVar2 = *(int **)(iVar7 + iVar6 + iVar1 * 0x40);
      if (*(int *)(iVar5 + 0x2c) - *(int *)(*piVar2 + 0x38) <= piVar2[1]) break;
      iVar4 = iVar4 + 1;
      if (*(int *)(iVar5 + 0x394c + iVar1 * 4) <= iVar4) goto LAB_001969a4;
      iVar1 = *(int *)(iVar5 + 0x1c);
    }
    FUN_00198598(*(undefined4 *)(iVar1 * 4 + iVar5 + 0x392c),piVar2);
    FUN_001987d0(*(undefined4 *)(iVar7 + iVar6 + *(int *)(iVar5 + 0x1c) * 0x40));
    FUN_001963e0(param_1,*(int *)(iVar5 + 0x1c),
                 *(undefined4 *)(iVar7 + iVar6 + *(int *)(iVar5 + 0x1c) * 0x40));
    uVar3 = 1;
  }
  return uVar3;
}

