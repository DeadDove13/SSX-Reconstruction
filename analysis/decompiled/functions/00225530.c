/* Ghidra pseudocode. PS2 address: 00225530. Not validated source. */

undefined4 FUN_00225530(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 auStack_70 [4];
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    DAT_0029a8e0 = FUN_00225790;
    iVar2 = FUN_0022dd50();
    *param_1 = iVar2;
    iVar8 = *(int *)(param_2 + 0xc);
    piVar9 = (int *)(DAT_0029a8f4 + iVar2 * 0xc);
    *piVar9 = param_2;
    if (iVar8 == 0) {
      piVar9[1] = 0;
    }
    else {
      lVar3 = FUN_0022d4c0(iVar8 + 0x30);
      piVar9[1] = (int)lVar3;
      if (lVar3 == 0) {
        *piVar9 = 0;
        return 0xfffffffa;
      }
    }
    iVar8 = *(int *)(param_2 + 0xc);
    iVar2 = 0;
    if (0 < iVar8) {
      iVar6 = *(int *)(param_2 + 8);
      while( true ) {
        iVar7 = iVar8 - iVar2;
        if (0x3000 < iVar8 - iVar2) {
          iVar7 = 0x3000;
        }
        uVar4 = FUN_0022cfb0(param_2 + iVar6 + iVar2,piVar9[1] + iVar2,iVar7);
        iVar2 = iVar2 + 0x3000;
        do {
          lVar3 = FUN_0022cfd0(uVar4);
        } while (lVar3 == 0);
        iVar8 = *(int *)(param_2 + 0xc);
        if (iVar8 <= iVar2) break;
        iVar6 = *(int *)(param_2 + 8);
      }
    }
    uVar5 = (uint)*(ushort *)(param_2 + 6);
    iVar8 = 0;
    auStack_70[0] = 0;
    if (uVar5 != 0) {
      iVar2 = 0;
      do {
        iVar6 = *(int *)(param_2 + 0x14 + iVar2);
        if (iVar6 != 0) {
          FUN_00225b30(param_2 + iVar2 + 0x14 + iVar6,piVar9[1],auStack_70);
          uVar5 = (uint)*(ushort *)(param_2 + 6);
        }
        iVar8 = iVar8 + 1;
        iVar2 = iVar8 * 4;
      } while (iVar8 < (int)uVar5);
    }
    *(undefined1 *)(piVar9 + 2) = 0;
    uVar1 = 7;
    if (*(int *)(param_2 + 0xc) == 0) {
      uVar1 = 8;
    }
  }
  return uVar1;
}

