/* Ghidra pseudocode. PS2 address: 00137ea0. Not validated source. */

void FUN_00137ea0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  if (param_3 - 7U < 2) {
    iVar2 = 0;
    for (piVar1 = (int *)(param_2 + 0x100);
        ((iVar5 = -1, iVar2 < 10 && (iVar5 = iVar2, *piVar1 != 7)) && (*piVar1 != 8));
        piVar1 = piVar1 + 4) {
      iVar2 = iVar2 + 1;
    }
  }
  iVar2 = iVar5;
  if (param_3 == 0xc) {
    if (*(int *)(param_2 + 0x100) == 0xc) {
      iVar2 = 0;
    }
    else {
      iVar3 = 1;
      while ((iVar2 = iVar5, iVar3 < 10 &&
             (iVar2 = iVar3, *(int *)(iVar3 * 0x10 + param_2 + 0x100) != 0xc))) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  iVar5 = iVar2;
  if (iVar2 < 0) {
    iVar4 = 0;
    iVar3 = param_2;
    if (*(int *)(param_2 + 0x100) == 0) {
      iVar5 = 0;
    }
    else {
      do {
        if (*(float *)(iVar3 + 0x10c) / *(float *)(iVar3 + 0x108) < 1.0) {
          iVar2 = iVar4;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar2;
      } while ((iVar4 < 10) &&
              (iVar3 = iVar4 * 0x10 + param_2, iVar5 = iVar4,
              *(int *)(iVar4 * 0x10 + param_2 + 0x100) != 0));
    }
  }
  param_2 = iVar5 * 0x10 + param_2;
  *(int *)(param_2 + 0x100) = param_3;
  *(undefined4 *)(param_2 + 0x104) = param_4;
  *(undefined4 *)(param_2 + 0x108) = param_1;
  *(undefined4 *)(param_2 + 0x10c) = 0;
  return;
}

