/* Ghidra pseudocode. PS2 address: 001d25f8. Not validated source. */

undefined4 FUN_001d25f8(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 uVar20;
  
  iVar17 = (int)param_1;
  iVar6 = *(int *)(iVar17 + 0x28);
  iVar15 = iVar6 + param_2 * 0x58;
  *(float *)(iVar15 + 0x54) = *(float *)(iVar15 + 0x54) + 1.0;
  if (param_3 == 1) {
    if (param_2 == *(int *)(iVar17 + 0x88)) {
      return 0;
    }
    iVar7 = *(int *)(iVar17 + 0x8c);
    *(int *)(iVar17 + 0x88) = param_2;
  }
  else {
    if (param_2 == *(int *)(iVar17 + 0x8c)) {
      return 0;
    }
    iVar7 = *(int *)(iVar17 + 0x88);
    *(int *)(iVar17 + 0x8c) = param_2;
  }
  if (iVar7 < 0) {
    uVar11 = 0xffffffff;
    uVar18 = 0xffffffff;
  }
  else {
    iVar6 = iVar7 * 0x58 + iVar6;
    uVar18 = *(undefined4 *)(iVar6 + 0x30);
    uVar11 = *(undefined4 *)(iVar6 + 0x24);
  }
  piVar19 = (int *)param_4;
  puVar1 = (undefined8 *)*piVar19;
  iVar6 = *(int *)(iVar15 + 0x24);
  *puVar1 = 0x10000001;
  uVar20 = 1;
  puVar1[2] = 0x1100000000000000;
  *piVar19 = (int)(puVar1 + 4);
  puVar1[1] = 0;
  puVar1[3] = 0;
  if (iVar6 < 0) {
    uVar20 = 2;
    iVar7 = FUN_001d2428(param_1,*(undefined4 *)(iVar15 + 0xc),uVar11);
    iVar6 = *(int *)(iVar17 + 0x54);
    *(int *)(iVar15 + 0x24) = iVar7;
    *(int *)(iVar7 * 0x14 + iVar6 + 4) = param_2;
    FUN_001d2b88(param_1,param_2,param_4,*(undefined4 *)(*(int *)(iVar15 + 0x24) * 0x14 + iVar6));
  }
  if ((*(int *)(iVar15 + 0x20) == 0x13) || (lVar13 = 0, *(int *)(iVar15 + 0x20) == 0x1b)) {
    iVar6 = *(int *)(iVar15 + 0x30);
    if (iVar6 < 0) {
      iVar7 = FUN_001d2548(param_1,uVar18);
      iVar6 = *(int *)(iVar17 + 0x84);
      *(int *)(iVar15 + 0x30) = iVar7;
      *(int *)(iVar7 * 0x10 + iVar6 + 0xc) = param_2;
      FUN_001d2d88(param_1,param_2,param_4,*(undefined4 *)(*(int *)(iVar15 + 0x30) * 0x10 + iVar6));
      iVar6 = *(int *)(iVar15 + 0x30);
      iVar7 = *(int *)(iVar17 + 0x84);
    }
    else {
      iVar7 = *(int *)(iVar17 + 0x84);
    }
    lVar13 = (long)*(int *)(iVar6 * 0x10 + iVar7);
  }
  iVar6 = *(int *)(iVar15 + 0x3c);
  puVar1 = (undefined8 *)*piVar19;
  if (iVar6 == 0) {
    lVar12 = 0x50000003;
    *puVar1 = 0x10000004;
    uVar10 = 0x1000000000008002;
  }
  else {
    lVar12 = 0x50000004;
    uVar10 = 0x1000000000008003;
    *puVar1 = 0x10000005;
  }
  puVar1[2] = 0x1100000000000000;
  puVar1[3] = lVar12 << 0x20;
  puVar1[4] = uVar10;
  puVar1[5] = 0xe;
  *piVar19 = (int)(puVar1 + 6);
  puVar1[1] = 0;
  iVar7 = 7;
  if (param_3 == 1) {
    iVar7 = 6;
    iVar14 = 0x14;
    iVar16 = 0x34;
  }
  else {
    iVar14 = 0x15;
    iVar16 = 0x35;
  }
  iVar9 = *(int *)(iVar15 + 0x10);
  if (iVar9 < 0x40) {
    iVar9 = 0x40;
  }
  iVar8 = iVar9 + 0x3f;
  if (-1 < iVar9) {
    iVar8 = iVar9;
  }
  iVar9 = *(int *)(iVar15 + 0x14);
  iVar2 = *(int *)(iVar15 + 0x20);
  iVar3 = *(int *)(iVar15 + 0x1c);
  puVar4 = (ulong *)*piVar19;
  iVar5 = *(int *)(*(int *)(iVar15 + 0x24) * 0x14 + *(int *)(iVar17 + 0x54));
  *puVar4 = (long)*(int *)(iVar15 + 0x48) | (long)*(int *)(iVar15 + 0x50) << 0x20 |
            (long)*(int *)(iVar15 + 0x4c) << 0x13 | 0x160U | (long)*(int *)(iVar15 + 0x3c) << 2;
  puVar4[1] = (long)iVar14;
  puVar4[2] = (long)iVar5 | 0x2000000000000000U | (long)iVar9 << 0x1a | 0x400000000U |
              (long)(iVar8 >> 6) << 0xe | (long)iVar2 << 0x14 | (long)iVar3 << 0x1e | lVar13 << 0x25
  ;
  puVar4[3] = (long)iVar7;
  *piVar19 = (int)(puVar4 + 4);
  if (iVar6 != 0) {
    puVar4[4] = *(ulong *)(iVar17 + *(int *)(iVar15 + 0x40) * 8 + 0x68);
    *piVar19 = (int)(puVar4 + 6);
    puVar4[5] = (long)iVar16;
  }
  return uVar20;
}

