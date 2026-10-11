/* Ghidra pseudocode. PS2 address: 0019d0f8. Not validated source. */

void FUN_0019d0f8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0x38) = &DAT_002b5598;
  if (*(int *)(iVar3 + 100) != 0) {
    FUN_00132160(*(undefined4 *)(DAT_002859e4 + 0x28),*(int *)(iVar3 + 100) + 0x40);
    FUN_00103778(*(undefined4 *)(iVar3 + 100));
  }
  iVar1 = *(int *)(iVar3 + 0x60);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -0x10) * 0x70 + iVar1;
    if (iVar1 == iVar2) {
      iVar1 = *(int *)(iVar3 + 0x60);
    }
    else {
      do {
        iVar2 = iVar2 + -0x70;
        FUN_0016a558(iVar2,0);
      } while (*(int *)(iVar3 + 0x60) != iVar2);
      iVar1 = *(int *)(iVar3 + 0x60);
    }
    FUN_00103710(iVar1 + -0x10);
  }
  FUN_001221d8(iVar3 + 0x30,0);
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_00103778(param_1);
  return;
}

