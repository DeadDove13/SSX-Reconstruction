/* Ghidra pseudocode. PS2 address: 002227f8. Not validated source. */

void FUN_002227f8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined *apuStack_50 [4];
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  else {
    FUN_00103710();
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar1 = *(int *)(param_1 + 0x34);
  }
  if (iVar1 != 0) {
    iVar3 = iVar1 + *(int *)(iVar1 + -0x10) * 8;
    if (iVar1 == iVar3) {
      iVar1 = *(int *)(param_1 + 0x34);
    }
    else {
      do {
        iVar3 = iVar3 + -8;
        FUN_00223ab8(iVar3,0);
      } while (*(int *)(param_1 + 0x34) != iVar3);
      iVar1 = *(int *)(param_1 + 0x34);
    }
    FUN_00103710(iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
  }
  else {
    iVar3 = iVar1 + *(int *)(iVar1 + -0x10) * 8;
    if (iVar1 == iVar3) {
      iVar1 = *(int *)(param_1 + 0x2c);
    }
    else {
      do {
        iVar3 = iVar3 + -8;
        FUN_00223ad8(iVar3,0);
      } while (*(int *)(param_1 + 0x2c) != iVar3);
      iVar1 = *(int *)(param_1 + 0x2c);
    }
    FUN_00103710(iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar1 = *(int *)(param_1 + 0x38);
  }
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_1 + 0x30);
  }
  else {
    FUN_00103710();
    *(undefined4 *)(param_1 + 0x38) = 0;
    piVar2 = *(int **)(param_1 + 0x30);
  }
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2 + piVar2[-4] * 0x54;
    if (piVar2 == piVar4) {
      iVar1 = *(int *)(param_1 + 0x30);
    }
    else {
      do {
        piVar4 = piVar4 + -0x54;
        (**(code **)(*piVar4 + 0xc))((int)piVar4 + (int)*(short *)(*piVar4 + 8),0);
      } while (*(int **)(param_1 + 0x30) != piVar4);
      iVar1 = *(int *)(param_1 + 0x30);
    }
    FUN_00103710(iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  apuStack_50[0] = &DAT_002bd478;
  FUN_0020d9b8(apuStack_50);
  FUN_0020ff78(apuStack_50,2);
  return;
}

