/* Ghidra pseudocode. PS2 address: 001eb900. Not validated source. */

ulong FUN_001eb900(float param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  float *pfVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  
  uVar12 = ZEXT48(param_2);
  bVar2 = false;
  uVar5 = *param_2;
  while( true ) {
    iVar13 = 0;
    iVar8 = (int)uVar12;
    iVar7 = *(int *)(iVar8 + 0x30);
    if (0 < iVar7) {
      piVar3 = (int *)(iVar8 + 0x40);
      do {
        iVar1 = *piVar3;
        iVar7 = iVar7 + -1;
        piVar3 = piVar3 + 4;
        iVar13 = iVar13 + iVar1;
      } while (iVar7 != 0);
    }
    puVar9 = (undefined8 *)(iVar8 + 0x10 + ((uint)uVar5 & 0xffff) * 0x10);
    uVar6 = *puVar9;
    pfVar4 = (float *)(puVar9 + 8);
    if (0 < iVar13) {
      do {
        iVar13 = iVar13 + -1;
        *pfVar4 = *pfVar4 * param_1;
        pfVar4[1] = pfVar4[1] * param_1;
        pfVar4[2] = pfVar4[2] * param_1;
        pfVar4 = pfVar4 + 3;
      } while (iVar13 != 0);
    }
    puVar10 = puVar9 + ((uint)uVar6 & 0xffff) * 2 + 2;
    *puVar10 = (long)((int)param_2 + (int)(*puVar10 >> 0x20)) << 0x20 | *puVar10 & 0xffffffff;
    puVar11 = puVar10 + 2;
    if (((long)(*puVar11 << 4) >> 0x20 & 7U) == 6) {
      puVar11 = puVar10 + ((uint)*puVar11 & 0xffff) * 2 + 4;
      bVar2 = true;
    }
    uVar12 = (ulong)(int)puVar11;
    if (bVar2) break;
    uVar5 = *puVar11;
  }
  return uVar12;
}

