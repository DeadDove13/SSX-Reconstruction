/* Ghidra pseudocode. PS2 address: 00263738. Not validated source. */

undefined4 FUN_00263738(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = (int *)param_1[0xc];
  if (piVar1 == param_1 + 0x10) {
    lVar4 = FUN_00259d50(param_1[0x15],0x400);
    uVar2 = 0xffffffff;
    if (lVar4 != 0) {
      param_1[0xc] = (int)lVar4;
      param_1[0xd] = 0x400;
      iVar7 = (int)lVar4 + 0x3fd;
      iVar6 = 2;
      do {
        puVar3 = (undefined1 *)((int)piVar1 + iVar6);
        puVar5 = (undefined1 *)(iVar7 + iVar6);
        iVar6 = iVar6 + -1;
        *puVar5 = *puVar3;
      } while (-1 < iVar6);
      *param_1 = iVar7;
      uVar2 = 0;
    }
  }
  else {
    iVar7 = param_1[0xd];
    lVar4 = FUN_00263c48(param_1[0x15],piVar1,iVar7 << 1);
    iVar6 = (int)lVar4 + iVar7;
    if (lVar4 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      FUN_0025a55c(iVar6,lVar4,iVar7);
      param_1[0xd] = iVar7 << 1;
      uVar2 = 0;
      *param_1 = iVar6;
      param_1[0xc] = (int)lVar4;
    }
  }
  return uVar2;
}

