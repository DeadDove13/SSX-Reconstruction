/* Ghidra pseudocode. PS2 address: 00132160. Not validated source. */

void FUN_00132160(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar9 = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  piVar6 = (int *)param_1;
  iVar10 = *piVar6;
  iVar8 = iVar1 + -1;
  iVar11 = iVar10 + -2;
  if (0 < iVar1) {
    do {
      FUN_00132a10(param_1,iVar9,iVar1);
      uVar2 = *(uint *)(iVar8 * 4 + piVar6[10]);
      if ((uVar2 & 7) == 7) {
        uVar3 = FUN_00131d38(piVar6 + 4,uVar2 >> 3 & 0x1fff);
        iVar10 = 4;
        if (*(int *)((int)uVar3 + 4) == param_2) {
          iVar10 = 0;
        }
        FUN_00132e08(*(undefined4 *)((int)uVar3 + iVar10),uVar3);
        uVar3 = FUN_00131d38(piVar6 + 4,*(uint *)(iVar8 * 4 + piVar6[10]) >> 3 & 0x1fff);
        FUN_001323f8(param_1,uVar3);
        iVar10 = piVar6[10];
      }
      else {
        iVar10 = piVar6[10];
      }
      iVar4 = iVar8 * 4;
      iVar8 = iVar8 + iVar11;
      puVar5 = (uint *)(iVar4 + iVar10);
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + -1;
      *puVar5 = *puVar5 & 0xfffffff8;
    } while (iVar9 < iVar1);
    iVar10 = *piVar6;
  }
  iVar9 = iVar1 + 1;
  if (iVar9 < iVar10) {
    iVar8 = iVar8 << 2;
    iVar10 = iVar8;
    do {
      iVar8 = iVar8 + 4;
      iVar10 = iVar10 + 4;
      FUN_00132a10(param_1,iVar1,iVar9);
      if ((*(uint *)(iVar10 + piVar6[10]) & 7) == 7) {
        uVar3 = FUN_00131d38(piVar6 + 4,*(uint *)(iVar10 + piVar6[10]) >> 3 & 0x1fff);
        iVar11 = 4;
        if (*(int *)((int)uVar3 + 4) == param_2) {
          iVar11 = 0;
        }
        FUN_00132e08(*(undefined4 *)((int)uVar3 + iVar11),uVar3);
        uVar3 = FUN_00131d38(piVar6 + 4,*(uint *)(iVar8 + piVar6[10]) >> 3 & 0x1fff);
        FUN_001323f8(param_1,uVar3);
        iVar11 = piVar6[10];
      }
      else {
        iVar11 = piVar6[10];
      }
      iVar9 = iVar9 + 1;
      *(uint *)(iVar10 + iVar11) = *(uint *)(iVar10 + iVar11) & 0xfffffff8;
    } while (iVar9 < *piVar6);
  }
  param_2 = param_2 + 8;
  piVar7 = piVar6 + 0xb;
  iVar10 = 2;
  do {
    FUN_00131db0(piVar7,param_2);
    iVar10 = iVar10 + -1;
    FUN_00131db0(piVar7,param_2 + 0x3c);
    param_2 = param_2 + 0x14;
    piVar7 = piVar7 + 2;
  } while (-1 < iVar10);
  FUN_00131f50(piVar6 + 1,iVar1);
  return;
}

