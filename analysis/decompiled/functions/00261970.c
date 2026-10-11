/* Ghidra pseudocode. PS2 address: 00261970. Not validated source. */

undefined8 FUN_00261970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  
  lVar5 = FUN_00261908(param_2,param_3);
  if (lVar5 == 0) {
    uVar6 = FUN_00260fa8(param_1,0);
    *(undefined4 *)((int)uVar6 + 0x14) = 0;
    *(undefined4 *)((int)uVar6 + 0x10) = 1;
  }
  else {
    uVar6 = param_2;
    if (lVar5 < 0) {
      uVar6 = param_3;
      param_3 = param_2;
    }
    iVar13 = (int)uVar6;
    uVar6 = FUN_00260fa8(param_1,*(undefined4 *)(iVar13 + 4));
    puVar10 = (uint *)(iVar13 + 0x14);
    iVar12 = (int)uVar6;
    *(uint *)(iVar12 + 0xc) = (uint)(lVar5 < 0);
    puVar11 = (uint *)((int)param_3 + 0x14);
    iVar7 = 0;
    iVar13 = *(int *)(iVar13 + 0x10);
    puVar14 = puVar10 + iVar13;
    puVar8 = puVar11 + *(int *)((int)param_3 + 0x10);
    piVar4 = (int *)(iVar12 + 0x14);
    do {
      piVar9 = piVar4;
      uVar1 = *puVar10;
      uVar2 = *puVar11;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      iVar7 = ((uVar1 & 0xffff) - (uVar2 & 0xffff)) + iVar7;
      *(short *)piVar9 = (short)iVar7;
      iVar7 = ((uVar1 >> 0x10) - (uVar2 >> 0x10)) + (iVar7 >> 0x10);
      *(short *)((int)piVar9 + 2) = (short)iVar7;
      iVar7 = iVar7 >> 0x10;
      piVar4 = piVar9 + 1;
    } while (puVar11 < puVar8);
    for (; piVar3 = piVar4, puVar10 < puVar14; puVar10 = puVar10 + 1) {
      uVar1 = *puVar10;
      iVar7 = (uVar1 & 0xffff) + iVar7;
      *(short *)piVar3 = (short)iVar7;
      iVar7 = (uVar1 >> 0x10) + (iVar7 >> 0x10);
      *(short *)((int)piVar3 + 2) = (short)iVar7;
      iVar7 = iVar7 >> 0x10;
      piVar4 = piVar3 + 1;
      piVar9 = piVar3;
    }
    if (*piVar9 == 0) {
      do {
        piVar9 = piVar9 + -1;
        iVar13 = iVar13 + -1;
      } while (*piVar9 == 0);
      *(int *)(iVar12 + 0x10) = iVar13;
    }
    else {
      *(int *)(iVar12 + 0x10) = iVar13;
    }
  }
  return uVar6;
}

