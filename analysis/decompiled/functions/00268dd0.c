/* Ghidra pseudocode. PS2 address: 00268dd0. Not validated source. */

ulong FUN_00268dd0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar16 = 0;
  if (param_1 < 0) {
    uVar16 = 0xffffffff;
    param_1 = CONCAT44(-(uint)(-(int)param_1 != 0) - (int)((ulong)param_1 >> 0x20),-(int)param_1);
  }
  if (param_2 >> 0x20 < 0) {
    uVar16 = ~uVar16;
    param_2 = CONCAT44(-(uint)(-(int)param_2 != 0) - (int)((ulong)param_2 >> 0x20),-(int)param_2);
  }
  uVar14 = (uint)param_1;
  uVar15 = (ulong)(int)uVar14;
  uVar3 = param_2 >> 0x20;
  uVar11 = (uint)((ulong)param_1 >> 0x20);
  uVar13 = (ulong)(int)uVar11;
  uVar7 = (uint)param_2;
  uVar10 = (ulong)(int)uVar7;
  uVar4 = (uint)((ulong)param_2 >> 0x20);
  if (uVar3 == 0) {
    if (uVar10 <= uVar13) {
      if (uVar10 == 0) {
        trap(7);
        uVar10 = (ulong)(1 / (int)uVar4);
      }
      if (uVar10 < 0x10000) {
        iVar2 = 8;
        if (uVar10 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar10 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar7 = (uint)uVar10;
      uVar4 = 0x20 - ((uint)(byte)(&DAT_002c0ce0)[uVar7 >> iVar2] + iVar2);
      if (uVar4 == 0) {
        iVar12 = uVar11 - uVar7;
        uVar3 = 1;
        uVar4 = uVar7 >> 0x10;
        uVar7 = uVar7 & 0xffff;
      }
      else {
        uVar8 = uVar7 << (uVar4 & 0x1f);
        uVar10 = (ulong)(int)uVar8;
        uVar5 = uVar11 >> (0x20 - uVar4 & 0x1f);
        uVar15 = (ulong)(int)(uVar14 << (uVar4 & 0x1f));
        uVar11 = uVar11 << (uVar4 & 0x1f) | uVar14 >> (0x20 - uVar4 & 0x1f);
        uVar4 = uVar8 >> 0x10;
        iVar2 = (int)uVar5 / (int)uVar4;
        lVar17 = (long)iVar2;
        uVar7 = uVar8 & 0xffff;
        if (uVar4 == 0) {
          trap(7);
        }
        iVar12 = iVar2 * uVar7;
        uVar3 = ((long)((int)uVar5 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)(uVar11 >> 0x10);
        iVar1 = (int)uVar3;
        if (uVar3 < (ulong)(long)iVar12) {
          iVar1 = iVar1 + uVar8;
          lVar17 = (long)(iVar2 + -1);
          if (uVar10 <= (ulong)(long)iVar1) {
            if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
              iVar1 = iVar1 - iVar12;
              goto LAB_0026913c;
            }
            lVar17 = (long)(iVar2 + -2);
            iVar1 = iVar1 + uVar8;
          }
          iVar1 = iVar1 - iVar12;
        }
        else {
          iVar1 = iVar1 - iVar12;
        }
LAB_0026913c:
        if (uVar4 == 0) {
          trap(7);
        }
        iVar2 = iVar1 / (int)uVar4;
        uVar3 = (ulong)iVar2;
        iVar12 = iVar2 * uVar7;
        uVar13 = ((long)(iVar1 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)uVar11 & 0xffffU;
        if (uVar13 < (ulong)(long)iVar12) {
          iVar1 = (int)uVar13 + uVar8;
          uVar13 = (ulong)iVar1;
          uVar3 = (ulong)(iVar2 + -1);
          if ((uVar10 <= uVar13) && (uVar13 < (ulong)(long)iVar12)) {
            uVar3 = (ulong)(iVar2 + -2);
            uVar13 = (ulong)(int)(iVar1 + uVar8);
          }
        }
        iVar12 = (int)uVar13 - iVar12;
        uVar3 = (lVar17 << 0x30) >> 0x20 | uVar3;
      }
      iVar2 = iVar12 / (int)uVar4;
      lVar17 = (long)iVar2;
      if (uVar4 == 0) {
        trap(7);
      }
      iVar1 = iVar2 * uVar7;
      uVar13 = ((long)(iVar12 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)((uint)uVar15 >> 0x10);
      iVar12 = (int)uVar13;
      iVar9 = (int)uVar10;
      if (uVar13 < (ulong)(long)iVar1) {
        iVar12 = iVar12 + iVar9;
        lVar17 = (long)(iVar2 + -1);
        if (uVar10 <= (ulong)(long)iVar12) {
          if ((ulong)(long)iVar1 <= (ulong)(long)iVar12) {
            iVar12 = iVar12 - iVar1;
            goto LAB_0026921c;
          }
          lVar17 = (long)(iVar2 + -2);
          iVar12 = iVar12 + iVar9;
        }
        iVar12 = iVar12 - iVar1;
      }
      else {
        iVar12 = iVar12 - iVar1;
      }
LAB_0026921c:
      if (uVar4 == 0) {
        trap(7);
      }
      iVar2 = iVar12 / (int)uVar4;
      uVar18 = (ulong)iVar2;
      uVar13 = ((long)(iVar12 % (int)uVar4) << 0x30) >> 0x20 | uVar15 & 0xffff;
      uVar15 = (ulong)((int)uVar13 + iVar9);
      if (((uVar13 < (ulong)(long)(int)(iVar2 * uVar7)) &&
          (uVar18 = (ulong)(iVar2 + -1), uVar10 <= uVar15)) &&
         (uVar15 < (ulong)(long)(int)(iVar2 * uVar7))) {
        uVar18 = (ulong)(iVar2 + -2);
      }
      uVar18 = (lVar17 << 0x30) >> 0x20 | uVar18;
      goto LAB_00269454;
    }
    if (uVar10 < 0x10000) {
      iVar2 = 8;
      if (uVar10 < 0x100) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x18;
      if (uVar10 < 0x1000000) {
        iVar2 = 0x10;
      }
    }
    uVar4 = 0x20 - ((uint)(byte)(&DAT_002c0ce0)[uVar7 >> iVar2] + iVar2);
    if (uVar4 != 0) {
      uVar10 = (ulong)(int)(uVar7 << (uVar4 & 0x1f));
      uVar11 = uVar11 << (uVar4 & 0x1f) | uVar14 >> (0x20 - uVar4 & 0x1f);
      uVar15 = (ulong)(int)(uVar14 << (uVar4 & 0x1f));
    }
    uVar7 = (uint)uVar10;
    uVar4 = uVar7 >> 0x10;
    iVar2 = (int)uVar11 / (int)uVar4;
    lVar17 = (long)iVar2;
    if (uVar4 == 0) {
      trap(7);
    }
    iVar12 = iVar2 * (uVar7 & 0xffff);
    uVar3 = ((long)((int)uVar11 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)((uint)uVar15 >> 0x10);
    iVar1 = (int)uVar3;
    if (uVar3 < (ulong)(long)iVar12) {
      iVar1 = iVar1 + uVar7;
      lVar17 = (long)(iVar2 + -1);
      if (uVar10 <= (ulong)(long)iVar1) {
        if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
          iVar1 = iVar1 - iVar12;
          goto LAB_00268fac;
        }
        lVar17 = (long)(iVar2 + -2);
        iVar1 = iVar1 + uVar7;
      }
      iVar1 = iVar1 - iVar12;
    }
    else {
      iVar1 = iVar1 - iVar12;
    }
LAB_00268fac:
    if (uVar4 == 0) {
      trap(7);
    }
    iVar2 = iVar1 / (int)uVar4;
    uVar18 = (ulong)iVar2;
    uVar3 = (ulong)(int)(iVar2 * (uVar7 & 0xffff));
    uVar13 = ((long)(iVar1 % (int)uVar4) << 0x30) >> 0x20 | uVar15 & 0xffff;
    uVar15 = (ulong)(int)((int)uVar13 + uVar7);
    if (((uVar13 < uVar3) && (uVar18 = (ulong)(iVar2 + -1), uVar10 <= uVar15)) && (uVar15 < uVar3))
    {
      uVar18 = (ulong)(iVar2 + -2);
    }
    uVar18 = (lVar17 << 0x30) >> 0x20 | uVar18;
  }
  else if (uVar13 < uVar3) {
    uVar18 = 0;
  }
  else {
    if (uVar3 < 0x10000) {
      iVar2 = 8;
      if (uVar3 < 0x100) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x18;
      if (uVar3 < 0x1000000) {
        iVar2 = 0x10;
      }
    }
    uVar5 = 0x20 - ((uint)(byte)(&DAT_002c0ce0)[uVar4 >> iVar2] + iVar2);
    if (uVar5 == 0) {
      uVar18 = 1;
      if ((uVar13 <= uVar3) && (uVar18 = 0, uVar10 <= uVar15)) {
        uVar18 = 1;
      }
    }
    else {
      uVar8 = 0x20 - uVar5;
      uVar6 = uVar11 >> (uVar8 & 0x1f);
      uVar11 = uVar11 << (uVar5 & 0x1f) | uVar14 >> (uVar8 & 0x1f);
      uVar4 = uVar4 << (uVar5 & 0x1f) | uVar7 >> (uVar8 & 0x1f);
      uVar8 = uVar4 >> 0x10;
      iVar2 = (int)uVar6 / (int)uVar8;
      lVar17 = (long)iVar2;
      if (uVar8 == 0) {
        trap(7);
      }
      iVar12 = iVar2 * (uVar4 & 0xffff);
      uVar3 = ((long)((int)uVar6 % (int)uVar8) << 0x30) >> 0x20 | (long)(int)(uVar11 >> 0x10);
      iVar1 = (int)uVar3;
      if (uVar3 < (ulong)(long)iVar12) {
        iVar1 = iVar1 + uVar4;
        lVar17 = (long)(iVar2 + -1);
        if ((ulong)(long)(int)uVar4 <= (ulong)(long)iVar1) {
          if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
            iVar1 = iVar1 - iVar12;
            goto LAB_002693a4;
          }
          lVar17 = (long)(iVar2 + -2);
          iVar1 = iVar1 + uVar4;
        }
        iVar1 = iVar1 - iVar12;
      }
      else {
        iVar1 = iVar1 - iVar12;
      }
LAB_002693a4:
      if (uVar8 == 0) {
        trap(7);
      }
      iVar2 = iVar1 / (int)uVar8;
      uVar18 = (ulong)iVar2;
      iVar12 = iVar2 * (uVar4 & 0xffff);
      uVar3 = ((long)(iVar1 % (int)uVar8) << 0x30) >> 0x20 | (long)(int)uVar11 & 0xffffU;
      if (uVar3 < (ulong)(long)iVar12) {
        iVar1 = (int)uVar3 + uVar4;
        uVar3 = (ulong)iVar1;
        uVar18 = (ulong)(iVar2 + -1);
        if (((ulong)(long)(int)uVar4 <= uVar3) && (uVar3 < (ulong)(long)iVar12)) {
          uVar3 = (ulong)(int)(iVar1 + uVar4);
          uVar18 = (ulong)(iVar2 + -2);
        }
      }
      uVar4 = (int)uVar3 - iVar12;
      uVar18 = (lVar17 << 0x30) >> 0x20 | uVar18;
      lVar17 = (uVar18 & 0xffffffff) * (ulong)(uVar7 << (uVar5 & 0x1f));
      uVar11 = (uint)((ulong)lVar17 >> 0x20);
      if (uVar4 < uVar11) {
        uVar18 = (ulong)((int)uVar18 + -1);
      }
      else {
        uVar3 = 0;
        if ((uVar11 != uVar4) || ((uint)lVar17 <= uVar14 << (uVar5 & 0x1f))) goto LAB_00269454;
        uVar18 = (ulong)((int)uVar18 + -1);
      }
    }
  }
  uVar3 = 0;
LAB_00269454:
  uVar10 = uVar18 & 0xffffffff | uVar3 << 0x20;
  if (uVar16 != 0) {
    uVar10 = CONCAT44(-(uint)(-(int)uVar18 != 0) - (int)uVar3,-(int)uVar18);
  }
  return uVar10;
}

