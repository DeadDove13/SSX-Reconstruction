/* Ghidra pseudocode. PS2 address: 00261460. Not validated source. */

undefined8 FUN_00261460(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  
  iVar13 = *(int *)(param_2 + 0x10);
  iVar15 = *(int *)(param_3 + 0x10);
  iVar12 = param_2;
  if (iVar13 < iVar15) {
    iVar13 = *(int *)(param_3 + 0x10);
    iVar15 = *(int *)(param_2 + 0x10);
    iVar12 = param_3;
    param_3 = param_2;
  }
  iVar16 = iVar13 + iVar15;
  uVar5 = FUN_00260fa8(param_1,*(int *)(iVar12 + 4) + (uint)(*(int *)(iVar12 + 8) < iVar16));
  iVar18 = (int)uVar5;
  puVar17 = (uint *)(iVar18 + 0x14);
  for (puVar10 = puVar17; puVar10 < puVar17 + iVar16; puVar10 = puVar10 + 1) {
    *puVar10 = 0;
  }
  puVar10 = (uint *)(param_3 + 0x14);
  puVar11 = (uint *)(iVar12 + 0x14);
  puVar14 = puVar10 + iVar15;
  puVar7 = puVar17;
  while (puVar8 = puVar7, puVar10 < puVar14) {
    uVar2 = *puVar10;
    uVar6 = uVar2 & 0xffff;
    if (uVar6 != 0) {
      uVar2 = 0;
      puVar7 = puVar8;
      puVar9 = puVar11;
      do {
        uVar3 = *puVar9;
        uVar4 = *puVar7;
        puVar9 = puVar9 + 1;
        uVar2 = (uVar3 & 0xffff) * uVar6 + (uVar4 & 0xffff) + uVar2;
        *(short *)puVar7 = (short)uVar2;
        uVar2 = (uVar3 >> 0x10) * uVar6 + (uVar4 >> 0x10) + (uVar2 >> 0x10);
        *(short *)((int)puVar7 + 2) = (short)uVar2;
        uVar2 = uVar2 >> 0x10;
        puVar7 = puVar7 + 1;
      } while (puVar9 < puVar11 + iVar13);
      *puVar7 = uVar2;
      uVar2 = *puVar10;
    }
    puVar10 = puVar10 + 1;
    puVar7 = puVar8 + 1;
    uVar2 = uVar2 >> 0x10;
    if (uVar2 != 0) {
      uVar6 = *puVar8;
      uVar4 = 0;
      puVar9 = puVar11;
      uVar3 = uVar6;
      do {
        uVar1 = *puVar9;
        *(short *)puVar8 = (short)uVar6;
        puVar9 = puVar9 + 1;
        uVar4 = (uVar1 & 0xffff) * uVar2 + (uVar3 >> 0x10) + uVar4;
        *(short *)((int)puVar8 + 2) = (short)uVar4;
        puVar8 = puVar8 + 1;
        uVar3 = *puVar8;
        uVar6 = (uVar1 >> 0x10) * uVar2 + (uVar3 & 0xffff) + (uVar4 >> 0x10);
        uVar4 = uVar6 >> 0x10;
      } while (puVar9 < puVar11 + iVar13);
      *puVar8 = uVar6;
    }
  }
  puVar17 = puVar17 + iVar16;
  while( true ) {
    if (iVar16 < 1) {
      *(int *)(iVar18 + 0x10) = iVar16;
      return uVar5;
    }
    puVar17 = puVar17 + -1;
    if (*puVar17 != 0) break;
    iVar16 = iVar16 + -1;
  }
  *(int *)(iVar18 + 0x10) = iVar16;
  return uVar5;
}

