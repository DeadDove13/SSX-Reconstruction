/* Ghidra pseudocode. PS2 address: 00261b98. Not validated source. */

ulong FUN_00261b98(int param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar9 = (uint *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x10);
  puVar7 = puVar9 + iVar1 + -1;
  uVar8 = *puVar7;
  lVar2 = FUN_002612e0((long)(int)uVar8);
  iVar5 = (int)lVar2;
  *param_2 = 0x20 - iVar5;
  if (lVar2 < 0xb) {
    uVar3 = (long)(int)(uVar8 >> (0xbU - iVar5 & 0x1f)) | 0x3ff00000;
    uVar4 = 0;
    if (puVar9 < puVar7) {
      uVar4 = puVar9[iVar1 + -2];
    }
    uVar8 = uVar8 << (iVar5 + 0x15U & 0x1f) | uVar4 >> (0xbU - iVar5 & 0x1f);
  }
  else {
    uVar4 = 0;
    if (puVar9 < puVar7) {
      puVar7 = puVar9 + iVar1 + -2;
      uVar4 = *puVar7;
    }
    uVar6 = iVar5 - 0xb;
    if (uVar6 == 0) {
      return ((long)(int)uVar8 | 0x3ff00000U) << 0x20 | (ulong)uVar4;
    }
    uVar3 = (long)(int)(uVar8 << (uVar6 & 0x1f)) |
            (long)(int)(uVar4 >> (-uVar6 & 0x1f)) | 0x3ff00000U;
    uVar8 = 0;
    if (puVar9 < puVar7) {
      uVar8 = puVar7[-1];
    }
    uVar8 = uVar4 << (uVar6 & 0x1f) | uVar8 >> (-uVar6 & 0x1f);
  }
  return uVar3 << 0x20 | (ulong)uVar8;
}

