/* Ghidra pseudocode. PS2 address: 001bfdd8. Not validated source. */

void FUN_001bfdd8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + -0x10) * 0x60 + iVar2;
    if (iVar2 == iVar1) {
      iVar2 = *(int *)(iVar3 + 4);
    }
    else {
      do {
        iVar2 = iVar1 + -0x60;
        (**(code **)(*(int *)(iVar1 + -0x10) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar1 + -0x10) + 8),0);
        iVar1 = iVar2;
      } while (*(int *)(iVar3 + 4) != iVar2);
      iVar2 = *(int *)(iVar3 + 4);
    }
    FUN_00103710(iVar2 + -0x10);
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_00103778(param_1);
  return;
}

