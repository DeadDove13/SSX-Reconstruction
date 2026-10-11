/* Ghidra pseudocode. PS2 address: 0025e9e0. Not validated source. */

int FUN_0025e9e0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  
  iVar11 = *(int *)((int)param_2 + 0x10);
  iVar15 = (int)param_1;
  iVar13 = 0;
  if (iVar11 <= *(int *)(iVar15 + 0x10)) {
    iVar11 = iVar11 + -1;
    puVar9 = (uint *)((int)param_2 + 0x14);
    puVar12 = (uint *)(iVar15 + 0x14);
    puVar14 = puVar9 + iVar11;
    puVar6 = puVar12 + iVar11;
    uVar1 = *puVar6;
    iVar13 = (int)uVar1 / (int)(*puVar14 + 1);
    if (*puVar14 + 1 == 0) {
      trap(7);
    }
    if (iVar13 != 0) {
      iVar4 = 0;
      uVar2 = 0;
      puVar10 = puVar9;
      puVar8 = puVar12;
      do {
        uVar7 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar2 = (uVar7 & 0xffff) * iVar13 + uVar2;
        uVar7 = (uVar7 >> 0x10) * iVar13 + (uVar2 >> 0x10);
        iVar4 = ((*puVar8 & 0xffff) - (uVar2 & 0xffff)) + iVar4;
        iVar5 = ((*puVar8 >> 0x10) - (uVar7 & 0xffff)) + (iVar4 >> 0x10);
        *(short *)puVar8 = (short)iVar4;
        *(short *)((int)puVar8 + 2) = (short)iVar5;
        uVar2 = uVar7 >> 0x10;
        iVar4 = iVar5 >> 0x10;
        puVar8 = puVar8 + 1;
      } while (puVar10 <= puVar14);
      if (uVar1 == 0) {
        while (puVar6 = puVar6 + -1, puVar12 < puVar6) {
          if (*puVar6 != 0) {
            *(int *)(iVar15 + 0x10) = iVar11;
            goto LAB_0025eb0c;
          }
          iVar11 = iVar11 + -1;
        }
        *(int *)(iVar15 + 0x10) = iVar11;
      }
    }
LAB_0025eb0c:
    lVar3 = FUN_00261908(param_1,param_2);
    if (-1 < lVar3) {
      iVar13 = iVar13 + 1;
      iVar4 = 0;
      puVar6 = puVar12;
      do {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        iVar4 = ((*puVar6 & 0xffff) - (uVar1 & 0xffff)) + iVar4;
        iVar5 = ((*puVar6 >> 0x10) - (uVar1 >> 0x10)) + (iVar4 >> 0x10);
        *(short *)puVar6 = (short)iVar4;
        *(short *)((int)puVar6 + 2) = (short)iVar5;
        iVar4 = iVar5 >> 0x10;
        puVar6 = puVar6 + 1;
      } while (puVar9 <= puVar14);
      puVar6 = puVar12 + iVar11;
      if (*puVar6 == 0) {
        while (puVar6 = puVar6 + -1, puVar12 < puVar6) {
          if (*puVar6 != 0) {
            *(int *)(iVar15 + 0x10) = iVar11;
            return iVar13;
          }
          iVar11 = iVar11 + -1;
        }
        *(int *)(iVar15 + 0x10) = iVar11;
      }
    }
  }
  return iVar13;
}

