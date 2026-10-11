/* Ghidra pseudocode. PS2 address: 00241d70. Not validated source. */

int FUN_00241d70(undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = 0;
  iVar5 = 0;
  iVar3 = param_2;
  for (uVar1 = (uint)(*(byte *)((int)param_1 + 3) >> 2); uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)(iVar3 + 6) = *(undefined1 *)(iVar3 + 4);
    iVar3 = iVar3 + 8;
  }
  while ((lVar4 == 0 && (iVar5 == 0))) {
    lVar2 = FUN_00241810(param_1,param_2);
    lVar4 = 1;
    if (lVar2 < param_3) {
      iVar5 = 1;
    }
    else {
      lVar4 = FUN_00241ce8(param_1,param_2);
    }
  }
  return iVar5;
}

