/* Ghidra pseudocode. PS2 address: 001eba48. Not validated source. */

ulong FUN_001eba48(float param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  
  uVar11 = ZEXT48(param_2);
  bVar2 = false;
  uVar5 = *param_2;
  while( true ) {
    iVar8 = (int)uVar11;
    iVar1 = *(int *)(iVar8 + 0x30);
    iVar3 = 0;
    pfVar4 = (float *)(iVar8 + 0x40 + iVar1 * 0x10 + 0x30);
    if (0 < iVar1) {
      iVar6 = *(int *)(iVar8 + 0x44);
      iVar7 = iVar8 + 0x40;
      while( true ) {
        iVar3 = iVar3 + 1;
        if (0 < iVar6) {
          do {
            iVar6 = iVar6 + -1;
            *pfVar4 = *pfVar4 * param_1;
            pfVar4[1] = pfVar4[1] * param_1;
            pfVar4[2] = pfVar4[2] * param_1;
            pfVar4 = pfVar4 + 3;
          } while (iVar6 != 0);
        }
        if (iVar1 <= iVar3) break;
        iVar6 = *(int *)(iVar7 + 0x14);
        iVar7 = iVar7 + 0x10;
      }
    }
    puVar9 = (ulong *)(iVar8 + 0x10 + ((uint)uVar5 & 0xffff) * 0x10);
    *puVar9 = (long)((int)param_2 + (int)(*puVar9 >> 0x20)) << 0x20 | *puVar9 & 0xffffffff;
    puVar10 = puVar9 + 2;
    if (((long)(*puVar10 << 4) >> 0x20 & 7U) == 6) {
      puVar10 = puVar9 + ((uint)*puVar10 & 0xffff) * 2 + 4;
      bVar2 = true;
    }
    uVar11 = (ulong)(int)puVar10;
    if (bVar2) break;
    uVar5 = *puVar10;
  }
  return uVar11;
}

