/* Ghidra pseudocode. PS2 address: 00132540. Not validated source. */

void FUN_00132540(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_2 * 8;
  iVar4 = *(int *)((int)param_1 + iVar2 + 0x30);
  if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x10), iVar4 != 0)) {
    iVar3 = *(int *)(iVar4 + 0xc);
    while( true ) {
      iVar1 = *(int *)(iVar4 + 0x10);
      if ((iVar3 != 0) && (**(float **)(iVar3 + 4) < **(float **)(iVar4 + 4))) {
        iVar3 = *(int *)(iVar3 + 8);
        while( true ) {
          if (*(int *)(iVar4 + 8) != iVar3) {
            FUN_001328a8(param_1,param_2,iVar4);
          }
          FUN_00131de8((int)param_1 + iVar2 + 0x2c,iVar4);
          iVar3 = *(int *)(iVar4 + 0xc);
          if ((iVar3 == 0) || (**(float **)(iVar4 + 4) <= **(float **)(iVar3 + 4))) break;
          iVar3 = *(int *)(iVar3 + 8);
        }
      }
      if (iVar1 == 0) break;
      iVar3 = *(int *)(iVar1 + 0xc);
      iVar4 = iVar1;
    }
  }
  return;
}

