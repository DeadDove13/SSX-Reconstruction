/* Ghidra pseudocode. PS2 address: 00156fe0. Not validated source. */

void FUN_00156fe0(int param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  ulong in_hi;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  
  iVar5 = DAT_002c4670;
  fVar3 = DAT_002c2460;
  iVar18 = 0;
  uVar17 = in_hi & 0xffffffff00000000;
  iVar8 = 0;
  while( true ) {
    iVar16 = iVar8 + 1;
    if (-1 < *(char *)(param_1 + iVar18 + 0x1508)) {
      piVar9 = *(int **)(param_1 + 0x1524 + iVar18);
      iVar18 = *piVar9;
      iVar7 = iVar8 * 4;
      piVar12 = (int *)(param_1 + 0x1970 + iVar7);
      piVar11 = (int *)(param_1 + 0x1980 + iVar7);
      *(int *)(param_1 + 0x1960 + iVar7) = iVar18;
      iVar6 = DAT_002c4670;
      iVar18 = (int)((float)iVar18 * fVar3 + 0.5);
      *piVar12 = iVar18;
      *piVar11 = iVar18;
      if (iVar5 != 0) {
        *piVar12 = 0;
        *piVar11 = 0;
      }
      fVar4 = DAT_002c2464;
      lVar2 = ((long)(param_1 + 0x1520) | uVar17) + (long)(iVar8 * 0x50);
      iVar8 = iVar8 * 0x10;
      puVar15 = (uint *)(iVar8 + param_1 + 0x1a10);
      puVar14 = (uint *)(iVar8 + param_1 + 0x19d0);
      puVar13 = (uint *)(iVar8 + param_1 + 0x1990);
      iVar8 = 0;
      iVar18 = 0;
      lVar2 = (long)(int)((uint)((ulong)lVar2 >> 0x20) | 0x27c398) +
              (long)(*(int *)*(undefined4 *)lVar2 * 0x3c);
      pbVar10 = (byte *)lVar2;
      uVar17 = (ulong)(int)((ulong)lVar2 >> 0x20);
      do {
        uVar19 = (uint)*(byte *)((int)piVar9 + iVar18 + 0x10);
        *puVar15 = uVar19;
        *puVar13 = uVar19;
        uVar19 = (uint)((float)*pbVar10 * fVar4 + 0.5);
        *puVar14 = uVar19;
        if (iVar6 != 0) {
          *puVar13 = uVar19;
          *puVar15 = *puVar14;
        }
        uVar19 = *puVar13;
        iVar18 = iVar18 + 1;
        uVar1 = *puVar14;
        pbVar10 = pbVar10 + 1;
        puVar14 = puVar14 + 1;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
        iVar8 = iVar8 + (uVar1 - uVar19);
      } while (iVar18 < 4);
      piVar9 = (int *)(param_1 + 0x1980 + iVar7);
      if (iVar8 < *piVar9) {
        *piVar9 = iVar8;
        *(int *)(param_1 + 0x1970 + iVar7) = iVar8;
      }
    }
    if (3 < iVar16) break;
    iVar18 = iVar16 * 0x50;
    uVar17 = CONCAT44((int)(uVar17 >> 0x20),iVar18 >> 0x1f);
    iVar8 = iVar16;
  }
  return;
}

