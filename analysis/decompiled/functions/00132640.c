/* Ghidra pseudocode. PS2 address: 00132640. Not validated source. */

void FUN_00132640(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  iVar3 = param_3 + iVar5 * 0x14 + 0x44;
  iVar1 = *(int *)(iVar3 + 0xc);
  param_3 = param_3 + iVar5 * 0x14 + 8;
  iVar4 = (int)param_1;
  if ((iVar1 != 0) && (**(float **)(iVar1 + 4) < **(float **)(iVar3 + 4))) {
    iVar1 = *(int *)(iVar1 + 8);
    while( true ) {
      if (*(int *)(iVar3 + 8) != iVar1) {
        FUN_001328a8(param_1,param_2,iVar3);
      }
      FUN_00131de8(iVar4 + iVar5 * 8 + 0x2c,iVar3);
      iVar1 = *(int *)(iVar3 + 0xc);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_3 + 0x10);
        goto LAB_00132704;
      }
      if (**(float **)(iVar3 + 4) <= **(float **)(iVar1 + 4)) break;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  iVar1 = *(int *)(param_3 + 0x10);
LAB_00132704:
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar3 + 0x10);
  }
  else {
    if (**(float **)(param_3 + 4) < **(float **)(iVar1 + 4)) {
      iVar2 = *(int *)(param_3 + 8);
      while( true ) {
        if (iVar2 != *(int *)(iVar1 + 8)) {
          FUN_001328a8(param_1,param_2);
        }
        FUN_00131de8(iVar4 + iVar5 * 8 + 0x2c,*(undefined4 *)(param_3 + 0x10));
        iVar1 = *(int *)(param_3 + 0x10);
        if (iVar1 == 0) {
          iVar1 = *(int *)(iVar3 + 0x10);
          goto LAB_00132788;
        }
        if (**(float **)(iVar1 + 4) <= **(float **)(param_3 + 4)) break;
        iVar2 = *(int *)(param_3 + 8);
      }
    }
    iVar1 = *(int *)(iVar3 + 0x10);
  }
LAB_00132788:
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_3 + 0xc);
  }
  else {
    if (**(float **)(iVar3 + 4) < **(float **)(iVar1 + 4)) {
      iVar2 = *(int *)(iVar3 + 8);
      while( true ) {
        if (iVar2 != *(int *)(iVar1 + 8)) {
          FUN_001328a8(param_1,param_2);
        }
        FUN_00131de8(iVar4 + iVar5 * 8 + 0x2c,*(undefined4 *)(iVar3 + 0x10));
        iVar1 = *(int *)(iVar3 + 0x10);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_3 + 0xc);
          goto LAB_00132808;
        }
        if (**(float **)(iVar1 + 4) <= **(float **)(iVar3 + 4)) break;
        iVar2 = *(int *)(iVar3 + 8);
      }
    }
    iVar1 = *(int *)(param_3 + 0xc);
  }
LAB_00132808:
  if ((iVar1 != 0) && (**(float **)(iVar1 + 4) < **(float **)(param_3 + 4))) {
    iVar1 = *(int *)(iVar1 + 8);
    while( true ) {
      if (*(int *)(param_3 + 8) != iVar1) {
        FUN_001328a8(param_1,param_2,param_3);
      }
      FUN_00131de8(iVar4 + iVar5 * 8 + 0x2c,param_3);
      iVar1 = *(int *)(param_3 + 0xc);
      if ((iVar1 == 0) || (**(float **)(param_3 + 4) <= **(float **)(iVar1 + 4))) break;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  return;
}

