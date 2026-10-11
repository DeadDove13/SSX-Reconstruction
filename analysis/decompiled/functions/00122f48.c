/* Ghidra pseudocode. PS2 address: 00122f48. Not validated source. */

void FUN_00122f48(long param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = (int)param_1;
  if (0.0 < *(float *)(iVar6 + 0x40)) {
    fVar7 = *(float *)(iVar6 + 0x40) - DAT_002c1ad0;
    *(float *)(iVar6 + 0x40) = fVar7;
    if (0.0 <= fVar7) {
      return;
    }
    *(undefined4 *)(iVar6 + 0x40) = 0;
    piVar2 = *(int **)(iVar6 + 0xe0);
  }
  else {
    piVar2 = *(int **)(iVar6 + 0xe0);
  }
  if ((piVar2 == (int *)0x0) || (iVar5 = *piVar2, iVar5 <= *(int *)(iVar6 + 0x38))) {
LAB_00122fc0:
    if (param_1 != 0) {
      (**(code **)(*(int *)(iVar6 + 8) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 8) + 8),3);
    }
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x38);
    while (iVar3 < iVar5) {
      lVar4 = FUN_00123098(param_1);
      if (lVar4 == 0) {
        uVar1 = *(ushort *)((*(int **)(iVar6 + 0xe0))[1] + *(int *)(iVar6 + 0x3c) + 2);
        iVar5 = *(int *)(iVar6 + 0x38) + 1;
        *(int *)(iVar6 + 0x38) = iVar5;
        *(uint *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + (uint)uVar1;
        if (iVar5 < **(int **)(iVar6 + 0xe0)) {
          return;
        }
        break;
      }
      if (lVar4 == -1) goto LAB_00122fc0;
      uVar1 = *(ushort *)((*(int **)(iVar6 + 0xe0))[1] + *(int *)(iVar6 + 0x3c) + 2);
      *(int *)(iVar6 + 0x38) = *(int *)(iVar6 + 0x38) + 1;
      *(uint *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + (uint)uVar1;
      iVar5 = **(int **)(iVar6 + 0xe0);
      iVar3 = *(int *)(iVar6 + 0x38);
    }
    if (param_1 != 0) {
      (**(code **)(*(int *)(iVar6 + 8) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 8) + 8),3);
    }
  }
  return;
}

