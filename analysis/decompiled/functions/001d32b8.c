/* Ghidra pseudocode. PS2 address: 001d32b8. Not validated source. */

void FUN_001d32b8(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  
  iVar14 = (int)param_1;
  if (*(int *)(iVar14 + 0xd07c) == 0) {
    iVar8 = *(int *)(iVar14 + 0xd080);
    iVar1 = *(int *)(*(int *)(iVar14 + 0xd078) + 8);
    iVar2 = iVar1;
    while (iVar2 != 0) {
      lVar6 = FUN_001d5a98(iVar2,iVar14 + 0xd028);
      if (lVar6 == 0) {
        iVar2 = *(int *)(iVar2 + 100);
      }
      else if (*(int *)(iVar2 + 0x5c) == 0) {
        if (*(int *)(iVar2 + 0x44) == *(int *)(iVar14 + 0xd084)) {
          if (*(int *)(iVar2 + 0x48) == *(int *)(iVar14 + 0xd088)) {
            *(int *)(iVar14 + 0xd080) = iVar2;
            *(undefined4 *)(iVar14 + 0xd07c) = 1;
            return;
          }
          iVar2 = *(int *)(iVar2 + 100);
        }
        else {
          iVar2 = *(int *)(iVar2 + 100);
        }
      }
      else {
        iVar2 = *(int *)(iVar2 + 100);
      }
    }
    iVar2 = *(int *)(iVar14 + 8);
    *(int *)(iVar14 + 8) = iVar2 + 1;
    puVar10 = (undefined8 *)(iVar14 + 0xd028);
    puVar13 = (undefined8 *)(*(int *)(iVar14 + 0xc) + iVar2 * 0x68);
    *(int *)((int)puVar13 + 100) = iVar1;
    *(undefined8 **)(*(int *)(iVar14 + 0xd078) + 8) = puVar13;
    puVar7 = puVar13;
    if ((((uint)puVar10 | (uint)puVar13) & 7) == 0) {
      do {
        uVar9 = puVar10[1];
        uVar11 = puVar10[2];
        uVar12 = puVar10[3];
        *puVar7 = *puVar10;
        puVar7[1] = uVar9;
        puVar7[2] = uVar11;
        puVar7[3] = uVar12;
        puVar10 = puVar10 + 4;
        puVar7 = puVar7 + 4;
      } while (puVar10 != (undefined8 *)(iVar14 + 0xd068));
    }
    else {
      do {
        uVar9 = puVar10[1];
        uVar11 = puVar10[2];
        uVar12 = puVar10[3];
        *puVar7 = *puVar10;
        puVar7[1] = uVar9;
        puVar7[2] = uVar11;
        puVar7[3] = uVar12;
        puVar10 = puVar10 + 4;
        puVar7 = puVar7 + 4;
      } while (puVar10 != (undefined8 *)(iVar14 + 0xd068));
    }
    *(undefined4 *)puVar7 = *(undefined4 *)puVar10;
    uVar3 = *(undefined4 *)(iVar14 + 0xd078);
    *(undefined4 *)((int)puVar13 + 0x44) = *(undefined4 *)(iVar14 + 0xd084);
    *(int *)((int)puVar13 + 0x5c) = (int)param_2;
    uVar4 = *(undefined4 *)(iVar14 + 0xd088);
    *(undefined4 *)(puVar13 + 0xc) = 0;
    *(undefined4 *)((int)puVar13 + 0x4c) = uVar3;
    *(undefined4 *)(puVar13 + 9) = uVar4;
    *(undefined4 *)((int)puVar13 + 0x54) = 0;
    *(undefined4 *)(puVar13 + 0xb) = 0;
    *(undefined8 **)(iVar14 + 0xd080) = puVar13;
    *(undefined4 *)(iVar14 + 0xd07c) = 1;
    if ((param_2 == 0) || (iVar8 == 0)) {
      uVar5 = FUN_001d5be8(param_1);
      *(uint *)(puVar13 + 10) = uVar5;
      iVar8 = iVar14 + *(int *)(iVar14 + 0x1024) * 4;
      *(uint *)(iVar8 + 0x5028) = *(int *)(iVar14 + 0x1024) << 0x10 | uVar5 & 0xffff;
      *(undefined8 **)(iVar8 + 0x1028) = puVar13;
      *(int *)(iVar14 + 0x1024) = *(int *)(iVar14 + 0x1024) + 1;
    }
    else {
      *(undefined4 *)(iVar8 + 0x5c) = 1;
      *(undefined8 **)(iVar8 + 0x60) = puVar13;
    }
  }
  return;
}

