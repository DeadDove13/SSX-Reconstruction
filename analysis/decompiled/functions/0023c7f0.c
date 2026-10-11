/* Ghidra pseudocode. PS2 address: 0023c7f0. Not validated source. */

void FUN_0023c7f0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = (int)param_1;
  while (piVar1 = *(int **)(iVar12 + 0x40), piVar1 != *(int **)(iVar12 + 0x44)) {
    if (*piVar1 == -1) {
      *(undefined4 *)(iVar12 + 0x40) = *(undefined4 *)(iVar12 + 0x20);
    }
    else {
      if (*piVar1 != -2) break;
      *(int *)(iVar12 + 0x40) = (int)piVar1 + piVar1[1];
    }
  }
  FUN_0023ee58(*(undefined4 *)(iVar12 + 4));
  iVar8 = *(int *)(iVar12 + 0x4c);
  iVar11 = *(int *)(iVar8 + 0xc);
  if ((iVar11 != 0) && (*(int *)(iVar11 + 4) != 1)) {
    uVar2 = *(uint *)(iVar12 + 0x40);
    uVar3 = *(uint *)(iVar12 + 0x48);
    iVar6 = *(int *)(iVar11 + 0x60);
    while( true ) {
      uVar10 = iVar6 - 1;
      if (uVar3 < uVar2) {
        if ((uVar2 <= uVar10) || (bVar5 = false, uVar10 < uVar3)) {
          bVar5 = true;
        }
      }
      else {
        bVar5 = false;
        if (uVar2 <= uVar10) {
          bVar5 = uVar10 < uVar3;
        }
      }
      if (bVar5) break;
      *(int *)(iVar12 + 0x4c) = iVar11;
      if (iVar8 == *(int *)(iVar12 + 0x54)) {
        *(undefined4 *)(iVar12 + 0x54) = *(undefined4 *)(iVar8 + 8);
      }
      else {
        *(undefined4 *)(*(int *)(iVar8 + 0xc) + 8) = *(undefined4 *)(iVar8 + 8);
      }
      if (iVar8 == *(int *)(iVar12 + 0x50)) {
        iVar11 = *(int *)(iVar8 + 0xc);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar8 + 8);
        }
        *(int *)(iVar12 + 0x50) = iVar11;
        uVar7 = *(undefined4 *)(iVar12 + 0x58);
      }
      else {
        uVar7 = *(undefined4 *)(iVar12 + 0x58);
      }
      *(undefined4 *)(iVar8 + 4) = 0;
      *(undefined4 *)(iVar8 + 0xc) = uVar7;
      *(int *)(iVar12 + 0x58) = iVar8;
      iVar8 = *(int *)(iVar12 + 0x4c);
      iVar11 = *(int *)(iVar8 + 0xc);
      if ((iVar11 == 0) || (*(int *)(iVar11 + 4) == 1)) break;
      iVar6 = *(int *)(iVar11 + 0x60);
    }
  }
  FUN_0023ea60(*(undefined4 *)(iVar12 + 4));
  uVar2 = *(uint *)(iVar12 + 0x40);
  uVar3 = *(uint *)(iVar12 + 0x48);
  iVar8 = uVar2 - uVar3;
  if (uVar2 <= uVar3) {
    iVar8 = (*(int *)(iVar12 + 0x24) - uVar3) + -8;
    if (0x7fff < iVar8) {
      iVar11 = *(int *)(iVar12 + 0x50);
      goto LAB_0023c9f4;
    }
    iVar11 = uVar3 - *(int *)(iVar12 + 0x44);
    if ((int)(uVar2 - *(int *)(iVar12 + 0x20)) < iVar11 + 1) goto LAB_0023c9ec;
    FUN_0025a55c(*(int *)(iVar12 + 0x20),*(int *)(iVar12 + 0x44),iVar11);
    puVar4 = *(undefined4 **)(iVar12 + 0x44);
    iVar11 = *(int *)(iVar12 + 0x20) + iVar11;
    *(int *)(iVar12 + 0x44) = *(int *)(iVar12 + 0x20);
    iVar8 = *(int *)(iVar12 + 0x40) - iVar11;
    puVar4[1] = 8;
    *puVar4 = 0xffffffff;
    *(int *)(iVar12 + 0x48) = iVar11;
  }
  iVar8 = iVar8 + -1;
  if (iVar8 < 0x8000) {
LAB_0023c9ec:
    *(undefined4 *)(iVar12 + 0x28) = 2;
    return;
  }
  iVar11 = *(int *)(iVar12 + 0x50);
LAB_0023c9f4:
  if (*(int *)(iVar11 + 0x10) == 1) {
    if (*(int *)(iVar11 + 0x58) < *(int *)(iVar12 + 0xa0) + iVar8) {
      *(int *)(iVar12 + 0xa8) = *(int *)(iVar11 + 0x58) - *(int *)(iVar12 + 0xa0);
    }
    else {
      *(int *)(iVar12 + 0xa8) = iVar8;
    }
    FUN_0025a55c(*(undefined4 *)(iVar12 + 0x48),*(undefined4 *)(iVar11 + 0x54),
                 *(undefined4 *)(iVar12 + 0xa8));
    *(int *)(iVar11 + 0x54) = *(int *)(iVar11 + 0x54) + *(int *)(iVar12 + 0xa8);
    FUN_0023c538(0,0,param_1);
    return;
  }
  *(undefined4 *)(iVar12 + 0xa8) = 0x8000;
  lVar9 = FUN_00239330(*(undefined4 *)(iVar12 + 0x9c),*(undefined4 *)(iVar12 + 0xa0),
                       *(undefined4 *)(iVar12 + 0x48),0x8000,param_2,param_1);
  *(int *)(iVar12 + 0xa4) = (int)lVar9;
  if (lVar9 == 0) {
    return;
  }
  FUN_00238ea0(lVar9,0x23c538);
  return;
}

