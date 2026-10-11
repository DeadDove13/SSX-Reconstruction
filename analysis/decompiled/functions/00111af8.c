/* Ghidra pseudocode. PS2 address: 00111af8. Not validated source. */

void FUN_00111af8(int param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x170) - 2U < 2) {
    return;
  }
  if (*(int *)(param_1 + 0x170) == 0) {
    iVar2 = *(int *)(param_1 + 0x6cf4);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x6cf4);
    uVar1 = FUN_001486c8(iVar2 + 0x20);
    *(undefined4 *)(iVar2 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0x170) = 0;
    iVar2 = *(int *)(param_1 + 0x6cf4);
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x1ffe;
  if (param_2 == 0) {
    if (param_3 == 0) goto LAB_00111bec;
    if (*(int *)(param_1 + 0x144) == 0) {
      FUN_0014cd18(iVar2,0x3a,0,5);
      uVar1 = 3;
    }
    else {
      FUN_0014cd18(iVar2,0x3b,0,5);
      uVar1 = 3;
    }
  }
  else if (*(int *)(param_1 + 0x144) == 0) {
    FUN_0014cd18(iVar2,0x3b,0,5);
    uVar1 = 2;
  }
  else {
    FUN_0014cd18(iVar2,0x3a,0,5);
    uVar1 = 2;
  }
  iVar2 = *(int *)(param_1 + 0x6cf4);
  *(undefined4 *)(param_1 + 0x170) = uVar1;
LAB_00111bec:
  *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
  return;
}

