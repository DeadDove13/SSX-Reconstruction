/* Ghidra pseudocode. PS2 address: 001ef168. Not validated source. */

void FUN_001ef168(int param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = 0;
  if (*(short *)(*(int *)(param_1 + 4) + 4) < 1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  while( true ) {
    iVar4 = (int)lVar3 * 0x40;
    iVar2 = iVar4 + iVar2;
    if (*(char *)(iVar2 + 0x2c) == param_3) {
      lVar1 = FUN_0025be30(iVar2,param_2,0xf);
      if (lVar1 == 0) {
        iVar4 = *(int *)(param_1 + 8) + iVar4;
        FUN_001ebc68(param_4,iVar4,*(int *)(param_1 + 0xc) + *(int *)(iVar4 + 0x10));
        return;
      }
      iVar2 = *(int *)(param_1 + 4);
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
    }
    lVar3 = (long)((int)lVar3 + 1);
    if (*(short *)(iVar2 + 4) <= lVar3) break;
    iVar2 = *(int *)(param_1 + 8);
  }
  return;
}

