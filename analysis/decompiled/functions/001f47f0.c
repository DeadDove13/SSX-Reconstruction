/* Ghidra pseudocode. PS2 address: 001f47f0. Not validated source. */

void FUN_001f47f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0x32000) = &DAT_002bc818;
  iVar1 = *(int *)(iVar3 + 0x351c4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -0x10) * 0x1c + iVar1;
    if (iVar1 != iVar2) {
      do {
        iVar2 = iVar2 + -0x1c;
        FUN_001f44a8(iVar2,0);
      } while (*(int *)(iVar3 + 0x351c4) != iVar2);
    }
    FUN_00103710(*(int *)(iVar3 + 0x351c4) + -0x10);
  }
  FUN_001f58d8(param_1,param_2);
  return;
}

