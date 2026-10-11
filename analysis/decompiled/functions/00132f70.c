/* Ghidra pseudocode. PS2 address: 00132f70. Not validated source. */

void FUN_00132f70(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1[1] != 0) {
    iVar4 = param_1[1];
    iVar3 = FUN_00111098(iVar4,param_1);
    iVar4 = *(int *)(iVar4 + iVar3 * 4 + 0x10);
joined_r0x00132fd4:
    iVar3 = iVar4;
    if (iVar3 != 0) {
      iVar4 = FUN_00111098(iVar3,param_1);
      iVar1 = *(int *)(iVar3 + (iVar4 + 2) * 4);
      iVar4 = FUN_00111098(iVar3,param_1);
      iVar4 = *(int *)(iVar3 + (iVar4 + 4) * 4);
      iVar5 = 4;
      if (*(int **)(iVar3 + 4) == param_1) {
        iVar5 = 0;
      }
      iVar5 = *(int *)(*(int *)(iVar3 + iVar5) + 0x84);
      iVar6 = *(int *)(iVar5 + 8);
      uVar8 = (**(code **)(iVar6 + 0x34))(iVar5 + *(short *)(iVar6 + 0x30));
      piVar2 = *(int **)(iVar1 + 4);
      iVar5 = iVar4;
      while( true ) {
        iVar6 = 4;
        if (piVar2 == param_1) {
          iVar6 = 0;
        }
        iVar6 = *(int *)(*(int *)(iVar1 + iVar6) + 0x84);
        iVar7 = *(int *)(iVar6 + 8);
        uVar9 = (**(code **)(iVar7 + 0x34))(iVar6 + *(short *)(iVar7 + 0x30));
        if (uVar8 <= uVar9) break;
        iVar6 = FUN_00111098(iVar1,param_1);
        iVar6 = *(int *)(iVar1 + (iVar6 + 2) * 4);
        if (iVar5 == 0) {
          *param_1 = iVar1;
        }
        else {
          iVar7 = FUN_00111098(iVar5,param_1);
          *(int *)(iVar5 + (iVar7 + 2) * 4) = iVar1;
        }
        if (iVar6 == 0) {
          param_1[1] = iVar3;
        }
        else {
          iVar7 = FUN_00111098(iVar6,param_1);
          *(int *)(iVar6 + (iVar7 + 4) * 4) = iVar3;
        }
        iVar7 = FUN_00111098(iVar3,param_1);
        *(int *)(iVar3 + (iVar7 + 2) * 4) = iVar6;
        iVar7 = FUN_00111098(iVar3,param_1);
        *(int *)(iVar3 + (iVar7 + 4) * 4) = iVar1;
        iVar7 = FUN_00111098(iVar1,param_1);
        *(int *)(iVar1 + (iVar7 + 2) * 4) = iVar3;
        iVar7 = FUN_00111098(iVar1,param_1);
        *(int *)(iVar1 + (iVar7 + 4) * 4) = iVar5;
        if (iVar6 == 0) break;
        piVar2 = *(int **)(iVar6 + 4);
        iVar5 = iVar1;
        iVar1 = iVar6;
      }
      goto joined_r0x00132fd4;
    }
  }
  return;
}

