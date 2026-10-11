/* Ghidra pseudocode. PS2 address: 00252a88. Not validated source. */

ulong FUN_00252a88(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar10 = (long)param_1 >> 0x20;
  uVar11 = (uint)param_1;
  if ((uVar10 & 0x7ff00000) == 0x7ff00000) {
    uVar5 = FUN_00257580(param_1,param_1);
    uVar10 = FUN_002574c0(uVar5,param_1);
    return uVar10;
  }
  iVar8 = (int)((long)param_1 >> 0x34);
  if ((long)uVar10 < 1) {
    if ((uVar10 & 0x7fffffff) == 0 && uVar11 == 0) {
      return param_1;
    }
    if ((long)uVar10 < 0) {
      uVar5 = FUN_00257518(param_1,param_1);
      uVar10 = FUN_00257828(uVar5,uVar5);
      return uVar10;
    }
  }
  if (iVar8 == 0) {
    iVar8 = 0;
    while (uVar10 == 0) {
      uVar2 = uVar11 >> 0xb;
      iVar8 = iVar8 + -0x15;
      uVar11 = uVar11 << 0x15;
      uVar10 = (ulong)(int)uVar2;
    }
    uVar2 = 0;
    if ((uVar10 & 0x100000) == 0) {
      do {
        uVar10 = (ulong)((int)uVar10 << 1);
        uVar2 = uVar2 + 1;
      } while ((uVar10 & 0x100000) == 0);
      uVar12 = -uVar2;
    }
    else {
      uVar12 = 0;
    }
    iVar8 = (iVar8 + 1) - uVar2;
    uVar10 = uVar10 | (long)(int)(uVar11 >> (uVar12 & 0x1f));
    uVar11 = uVar11 << (uVar2 & 0x1f);
  }
  uVar2 = (uint)uVar10 & 0xfffff | 0x100000;
  if ((iVar8 - 0x3ffU & 1) != 0) {
    iVar13 = (int)uVar11 >> 0x1f;
    uVar11 = uVar11 << 1;
    uVar2 = uVar2 * 2 - iVar13;
  }
  iVar3 = uVar2 * 2 - ((int)uVar11 >> 0x1f);
  uVar11 = uVar11 << 1;
  uVar14 = 0;
  iVar13 = 0;
  uVar15 = 0;
  uVar2 = 0;
  uVar12 = 0x200000;
  do {
    iVar7 = iVar13 + uVar12;
    if (iVar7 <= iVar3) {
      iVar3 = iVar3 - iVar7;
      iVar13 = iVar7 + uVar12;
      uVar2 = uVar2 + uVar12;
    }
    uVar12 = uVar12 >> 1;
    iVar7 = (int)uVar11 >> 0x1f;
    uVar11 = uVar11 << 1;
    iVar3 = iVar3 * 2 - iVar7;
  } while (uVar12 != 0);
  uVar12 = 0x80000000;
  do {
    uVar9 = uVar14 + uVar12;
    if ((iVar13 < iVar3) || ((uVar4 = uVar11 & 0x80000000, iVar13 == iVar3 && (uVar9 <= uVar11)))) {
      bVar1 = uVar11 < uVar9;
      uVar14 = uVar9 + uVar12;
      iVar3 = iVar3 - iVar13;
      if (((uVar9 & 0x80000000) == 0x80000000) && ((uVar14 & 0x80000000) == 0)) {
        iVar13 = iVar13 + 1;
      }
      uVar11 = uVar11 - uVar9;
      iVar3 = iVar3 - (uint)bVar1;
      uVar15 = uVar15 + uVar12;
      uVar4 = uVar11 & 0x80000000;
    }
    uVar12 = uVar12 >> 1;
    uVar11 = uVar11 << 1;
    iVar3 = iVar3 * 2 - ((int)uVar4 >> 0x1f);
  } while (uVar12 != 0);
  uVar10 = (ulong)(int)(uVar15 >> 1);
  if (iVar3 != 0 || uVar11 != 0) {
    lVar6 = FUN_00257aa8(0x3ff0000000000000,0x3ff0000000000000);
    uVar10 = (ulong)(int)(uVar15 >> 1);
    if (-1 < lVar6) {
      if (uVar15 == 0xffffffff) {
        uVar15 = 0;
        uVar2 = uVar2 + 1;
      }
      else {
        lVar6 = FUN_00257aa8(0x3ff0000000000000,0x3ff0000000000000);
        if (lVar6 < 1) {
          uVar15 = uVar15 + (uVar15 & 1);
        }
        else {
          if (uVar15 == 0xfffffffe) {
            uVar2 = uVar2 + 1;
          }
          uVar15 = uVar15 + 2;
        }
      }
      uVar10 = (ulong)(int)(uVar15 >> 1);
    }
  }
  if ((uVar2 & 1) != 0) {
    uVar10 = uVar10 | 0xffffffff80000000;
  }
  return (long)(((int)uVar2 >> 1) + 0x3fe00000 + ((int)(iVar8 - 0x3ffU) >> 1) * 0x100000) << 0x20 |
         uVar10 & 0xffffffff;
}

