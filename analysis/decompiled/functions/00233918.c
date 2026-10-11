/* Ghidra pseudocode. PS2 address: 00233918. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x002339d4) */

void FUN_00233918(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  
  iVar5 = 0;
  FUN_00233be8();
  iVar13 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_2 + 4 + iVar13);
    iVar11 = 0;
    *(uint *)(&DAT_002a3348 + iVar13 * 4) = (uint)bVar1;
    if (bVar1 != 0) break;
LAB_00233ba8:
    iVar13 = iVar13 + 1;
    if (2 < iVar13) {
      FUN_0022f9c8();
      return;
    }
  }
  iVar12 = iVar5;
LAB_002339c0:
  iVar15 = iVar12 * 0x24;
  iVar10 = iVar12 * 4 + param_2 + 8;
  piVar8 = (int *)(iVar15 + 0x2a31d4);
  iVar5 = ((int)*(char *)(iVar10 + 3) << 7) / 0x7f;
  piVar9 = (int *)(iVar15 + 0x2a31d8);
  *piVar8 = iVar5;
  *piVar9 = 0x80 - iVar5;
  *piVar8 = (int)(*piVar8 * (*(byte *)(param_2 + 7) + 100)) / 0x15e;
  *piVar9 = (int)(*piVar9 * (*(byte *)(param_2 + 7) + 100)) / 0x15e;
  iVar4 = (int)*(char *)(iVar10 + 2) << 7;
  iVar5 = iVar4 / 0x7f;
  uVar14 = (ulong)(iVar4 % 0x7f);
  *(int *)(iVar15 + 0x2a31c8) = iVar5;
  *(int *)(iVar15 + 0x2a31cc) = -iVar5;
  iVar5 = FUN_00229740(iVar10,2);
  iVar15 = (int)(((float)iVar5 / 1000.0) * (float)param_1);
  iVar5 = iVar12 + 1;
  iVar11 = iVar11 + 1;
  do {
    iVar4 = 2;
    bVar2 = iVar15 < 2;
    while (!bVar2) {
      uVar14 = (ulong)(iVar15 % iVar4);
      if (iVar4 == 0) {
        trap(7);
      }
      if (uVar14 == 0) break;
      iVar4 = iVar4 + 1;
      bVar2 = iVar15 < iVar4;
    }
    if (iVar4 == iVar15) break;
    iVar15 = iVar15 + 1;
  } while( true );
  uVar6 = FUN_00225218(iVar15 << 2);
  lVar3 = (uVar14 | 0x2a31c4) + (long)(iVar12 * 0x24);
  *(undefined4 *)lVar3 = uVar6;
  if (0 < iVar15) {
    puVar7 = *(undefined4 **)(((uint)((ulong)lVar3 >> 0x20) | 0x2a31c4) + iVar12 * 0x24);
    iVar4 = iVar15;
    do {
      *puVar7 = 0;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar4 != 0);
  }
  iVar12 = iVar12 * 0x24;
  iVar4 = *(int *)(&DAT_002a3348 + iVar13 * 4);
  *(int *)(&DAT_002a31c0 + iVar12) = iVar15;
  *(int *)(&DAT_002a31bc + iVar12) = iVar15;
  *(undefined4 *)(&DAT_002a31b8 + iVar12) = 0;
  *(undefined4 *)(iVar12 + 0x2a31d0) = 0;
  iVar12 = iVar5;
  if (iVar4 <= iVar11) goto LAB_00233ba8;
  goto LAB_002339c0;
}

