/* Ghidra pseudocode. PS2 address: 001eb5d8. Not validated source. */

ulong * FUN_001eb5d8(float param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong *puVar10;
  uint uVar11;
  
  bVar1 = false;
  uVar8 = *param_2;
  puVar10 = param_2;
  while( true ) {
    uVar11 = 0;
    iVar9 = (int)puVar10[6];
    if (0 < iVar9) {
      puVar6 = puVar10 + 8;
      do {
        uVar2 = *puVar6;
        iVar9 = iVar9 + -1;
        puVar6 = puVar6 + 2;
        uVar11 = uVar11 + (int)uVar2;
      } while (iVar9 != 0);
    }
    puVar10 = puVar10 + ((uint)uVar8 & 0xffff) * 2 + 2;
    uVar8 = *puVar10;
    uVar3 = uVar11;
    if (0 < (int)uVar11) {
      do {
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar3 = uVar11 + 3;
    if (-1 < (int)uVar11) {
      uVar3 = uVar11;
    }
    if ((uVar11 & 3) == 0) {
      iVar9 = ((int)uVar3 >> 2) * 0x10 + 0x30;
    }
    else {
      iVar9 = ((int)uVar3 >> 2) * 0x10 + 0x40;
    }
    uVar3 = uVar11 * 6;
    uVar7 = uVar3 + 0xf;
    if (-1 < (int)uVar3) {
      uVar7 = uVar3;
    }
    if ((uVar3 & 0xf) == 0) {
      iVar4 = ((int)uVar7 >> 4) * 0x10 + 0x30;
    }
    else {
      iVar4 = ((int)uVar7 >> 4) * 0x10 + 0x40;
    }
    pfVar5 = (float *)((int)puVar10 + iVar4 + iVar9 + 0x40);
    if (0 < (int)uVar11) {
      do {
        uVar11 = uVar11 - 1;
        *pfVar5 = *pfVar5 * param_1;
        pfVar5[1] = pfVar5[1] * param_1;
        pfVar5[2] = pfVar5[2] * param_1;
        pfVar5 = pfVar5 + 3;
      } while (uVar11 != 0);
    }
    puVar6 = puVar10 + ((uint)uVar8 & 0xffff) * 2 + 2;
    *puVar6 = (long)((int)param_2 + (int)(*puVar6 >> 0x20)) << 0x20 | *puVar6 & 0xffffffff;
    puVar10 = puVar6 + 2;
    if (((long)(*puVar10 << 4) >> 0x20 & 7U) == 6) {
      puVar10 = puVar6 + ((uint)*puVar10 & 0xffff) * 2 + 4;
      bVar1 = true;
    }
    if (bVar1) break;
    uVar8 = *puVar10;
  }
  return puVar10;
}

