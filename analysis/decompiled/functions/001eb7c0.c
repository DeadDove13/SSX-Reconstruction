/* Ghidra pseudocode. PS2 address: 001eb7c0. Not validated source. */

ulong FUN_001eb7c0(float param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  
  uVar12 = ZEXT48(param_2);
  bVar3 = false;
  uVar6 = *param_2;
  while( true ) {
    iVar9 = (int)uVar12;
    iVar1 = *(int *)(iVar9 + 0x30);
    iVar8 = iVar9 + 0x40;
    iVar4 = 0;
    pfVar5 = (float *)(iVar8 + iVar1 * 0x10 + 0x30);
    if (0 < iVar1) {
      do {
        iVar7 = *(int *)(iVar8 + 4);
        iVar4 = iVar4 + 1;
        iVar2 = *(int *)(iVar8 + 8);
        if (0 < iVar7) {
          do {
            iVar7 = iVar7 + -1;
            *pfVar5 = *pfVar5 * param_1;
            pfVar5[1] = pfVar5[1] * param_1;
            pfVar5[2] = pfVar5[2] * param_1;
            pfVar5 = pfVar5 + 3;
          } while (iVar7 != 0);
        }
        pfVar5 = pfVar5 + iVar2 * 3;
        iVar8 = iVar8 + 0x10;
      } while (iVar4 < iVar1);
    }
    puVar10 = (ulong *)(iVar9 + 0x10 + ((uint)uVar6 & 0xffff) * 0x10);
    *puVar10 = (long)((int)param_2 + (int)(*puVar10 >> 0x20)) << 0x20 | *puVar10 & 0xffffffff;
    puVar11 = puVar10 + 2;
    if (((long)(*puVar11 << 4) >> 0x20 & 7U) == 6) {
      puVar11 = puVar10 + ((uint)*puVar11 & 0xffff) * 2 + 4;
      bVar3 = true;
    }
    uVar12 = (ulong)(int)puVar11;
    if (bVar3) break;
    uVar6 = *puVar11;
  }
  return uVar12;
}

