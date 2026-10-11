/* Ghidra pseudocode. PS2 address: 0020a128. Not validated source. */

void FUN_0020a128(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0x32000) = &DAT_002bd3c0;
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x35340)) {
    iVar1 = *(int *)(iVar3 + 0x35344);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar3 + 0x35340);
      }
      else {
        FUN_00209b28(iVar1,3);
        iVar1 = *(int *)(iVar3 + 0x35340);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x35344);
    }
  }
  if (*(int *)(iVar3 + 0x35344) != 0) {
    FUN_00103710();
  }
  FUN_001f3440(param_1,param_2);
  return;
}

