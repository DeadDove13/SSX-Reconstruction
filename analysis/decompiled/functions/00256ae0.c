/* Ghidra pseudocode. PS2 address: 00256ae0. Not validated source. */

ulong FUN_00256ae0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar7 = param_2 >> 0x20;
  uVar13 = param_1 >> 0x20;
  uVar8 = (uint)param_2;
  uVar11 = (ulong)(int)uVar8;
  uVar14 = (uint)param_1;
  uVar15 = (ulong)(int)uVar14;
  uVar6 = (uint)((ulong)param_1 >> 0x20);
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  if (uVar7 == 0) {
    if (uVar11 <= uVar13) {
      if (uVar11 == 0) {
        trap(7);
        uVar11 = (ulong)(1 / (int)uVar3);
      }
      if (uVar11 < 0x10000) {
        iVar2 = 8;
        if (uVar11 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar11 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar8 = (uint)uVar11;
      uVar3 = 0x20 - ((uint)(byte)(&DAT_002bfec8)[uVar8 >> iVar2] + iVar2);
      if (uVar3 == 0) {
        iVar12 = uVar6 - uVar8;
        uVar7 = 1;
        uVar6 = uVar8 >> 0x10;
        uVar8 = uVar8 & 0xffff;
      }
      else {
        uVar9 = uVar8 << (uVar3 & 0x1f);
        uVar11 = (ulong)(int)uVar9;
        uVar4 = uVar6 >> (0x20 - uVar3 & 0x1f);
        uVar15 = (ulong)(int)(uVar14 << (uVar3 & 0x1f));
        uVar3 = uVar6 << (uVar3 & 0x1f) | uVar14 >> (0x20 - uVar3 & 0x1f);
        uVar6 = uVar9 >> 0x10;
        iVar2 = (int)uVar4 / (int)uVar6;
        lVar16 = (long)iVar2;
        uVar8 = uVar9 & 0xffff;
        if (uVar6 == 0) {
          trap(7);
        }
        iVar12 = iVar2 * uVar8;
        uVar7 = ((long)((int)uVar4 % (int)uVar6) << 0x30) >> 0x20 | (long)(int)(uVar3 >> 0x10);
        iVar1 = (int)uVar7;
        if (uVar7 < (ulong)(long)iVar12) {
          iVar1 = iVar1 + uVar9;
          lVar16 = (long)(iVar2 + -1);
          if (uVar11 <= (ulong)(long)iVar1) {
            if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
              iVar1 = iVar1 - iVar12;
              goto LAB_00256d7c;
            }
            lVar16 = (long)(iVar2 + -2);
            iVar1 = iVar1 + uVar9;
          }
          iVar1 = iVar1 - iVar12;
        }
        else {
          iVar1 = iVar1 - iVar12;
        }
LAB_00256d7c:
        if (uVar6 == 0) {
          trap(7);
        }
        iVar2 = iVar1 / (int)uVar6;
        uVar7 = (ulong)iVar2;
        iVar12 = iVar2 * uVar8;
        uVar13 = ((long)(iVar1 % (int)uVar6) << 0x30) >> 0x20 | (long)(int)uVar3 & 0xffffU;
        if (uVar13 < (ulong)(long)iVar12) {
          iVar1 = (int)uVar13 + uVar9;
          uVar13 = (ulong)iVar1;
          uVar7 = (ulong)(iVar2 + -1);
          if ((uVar11 <= uVar13) && (uVar13 < (ulong)(long)iVar12)) {
            uVar7 = (ulong)(iVar2 + -2);
            uVar13 = (ulong)(int)(iVar1 + uVar9);
          }
        }
        iVar12 = (int)uVar13 - iVar12;
        uVar7 = (lVar16 << 0x30) >> 0x20 | uVar7;
      }
      iVar2 = iVar12 / (int)uVar6;
      lVar16 = (long)iVar2;
      if (uVar6 == 0) {
        trap(7);
      }
      iVar1 = iVar2 * uVar8;
      uVar13 = ((long)(iVar12 % (int)uVar6) << 0x30) >> 0x20 | (long)(int)((uint)uVar15 >> 0x10);
      iVar12 = (int)uVar13;
      iVar10 = (int)uVar11;
      if (uVar13 < (ulong)(long)iVar1) {
        iVar12 = iVar12 + iVar10;
        lVar16 = (long)(iVar2 + -1);
        if (uVar11 <= (ulong)(long)iVar12) {
          if ((ulong)(long)iVar1 <= (ulong)(long)iVar12) {
            iVar12 = iVar12 - iVar1;
            goto LAB_00256e5c;
          }
          lVar16 = (long)(iVar2 + -2);
          iVar12 = iVar12 + iVar10;
        }
        iVar12 = iVar12 - iVar1;
      }
      else {
        iVar12 = iVar12 - iVar1;
      }
LAB_00256e5c:
      if (uVar6 == 0) {
        trap(7);
      }
      iVar2 = iVar12 / (int)uVar6;
      uVar17 = (ulong)iVar2;
      uVar13 = ((long)(iVar12 % (int)uVar6) << 0x30) >> 0x20 | uVar15 & 0xffff;
      uVar15 = (ulong)((int)uVar13 + iVar10);
      if (((uVar13 < (ulong)(long)(int)(iVar2 * uVar8)) &&
          (uVar17 = (ulong)(iVar2 + -1), uVar11 <= uVar15)) &&
         (uVar15 < (ulong)(long)(int)(iVar2 * uVar8))) {
        uVar17 = (ulong)(iVar2 + -2);
      }
      uVar17 = (lVar16 << 0x30) >> 0x20 | uVar17;
      goto LAB_0025709c;
    }
    if (uVar11 < 0x10000) {
      iVar2 = 8;
      if (uVar11 < 0x100) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x18;
      if (uVar11 < 0x1000000) {
        iVar2 = 0x10;
      }
    }
    uVar3 = 0x20 - ((uint)(byte)(&DAT_002bfec8)[uVar8 >> iVar2] + iVar2);
    if (uVar3 != 0) {
      uVar11 = (ulong)(int)(uVar8 << (uVar3 & 0x1f));
      uVar13 = (ulong)(int)(uVar6 << (uVar3 & 0x1f) | uVar14 >> (0x20 - uVar3 & 0x1f));
      uVar15 = (ulong)(int)(uVar14 << (uVar3 & 0x1f));
    }
    uVar8 = (uint)uVar11;
    uVar3 = uVar8 >> 0x10;
    iVar2 = (int)uVar13 / (int)uVar3;
    lVar16 = (long)iVar2;
    if (uVar3 == 0) {
      trap(7);
    }
    iVar12 = iVar2 * (uVar8 & 0xffff);
    uVar7 = ((long)((int)uVar13 % (int)uVar3) << 0x30) >> 0x20 | (long)(int)((uint)uVar15 >> 0x10);
    iVar1 = (int)uVar7;
    if (uVar7 < (ulong)(long)iVar12) {
      iVar1 = iVar1 + uVar8;
      lVar16 = (long)(iVar2 + -1);
      if (uVar11 <= (ulong)(long)iVar1) {
        if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
          iVar1 = iVar1 - iVar12;
          goto LAB_00256bec;
        }
        lVar16 = (long)(iVar2 + -2);
        iVar1 = iVar1 + uVar8;
      }
      iVar1 = iVar1 - iVar12;
    }
    else {
      iVar1 = iVar1 - iVar12;
    }
LAB_00256bec:
    if (uVar3 == 0) {
      trap(7);
    }
    iVar2 = iVar1 / (int)uVar3;
    uVar17 = (ulong)iVar2;
    uVar7 = (ulong)(int)(iVar2 * (uVar8 & 0xffff));
    uVar13 = ((long)(iVar1 % (int)uVar3) << 0x30) >> 0x20 | uVar15 & 0xffff;
    uVar15 = (ulong)(int)((int)uVar13 + uVar8);
    if (((uVar13 < uVar7) && (uVar17 = (ulong)(iVar2 + -1), uVar11 <= uVar15)) && (uVar15 < uVar7))
    {
      uVar17 = (ulong)(iVar2 + -2);
    }
    uVar17 = (lVar16 << 0x30) >> 0x20 | uVar17;
  }
  else if (uVar13 < uVar7) {
    uVar17 = 0;
  }
  else {
    if (uVar7 < 0x10000) {
      iVar2 = 8;
      if (uVar7 < 0x100) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x18;
      if (uVar7 < 0x1000000) {
        iVar2 = 0x10;
      }
    }
    uVar4 = 0x20 - ((uint)(byte)(&DAT_002bfec8)[uVar3 >> iVar2] + iVar2);
    if (uVar4 == 0) {
      uVar17 = 1;
      if ((uVar13 <= uVar7) && (uVar17 = 0, uVar11 <= uVar15)) {
        uVar17 = 1;
      }
    }
    else {
      uVar9 = 0x20 - uVar4;
      uVar5 = uVar6 >> (uVar9 & 0x1f);
      uVar6 = uVar6 << (uVar4 & 0x1f) | uVar14 >> (uVar9 & 0x1f);
      uVar3 = uVar3 << (uVar4 & 0x1f) | uVar8 >> (uVar9 & 0x1f);
      uVar9 = uVar3 >> 0x10;
      iVar2 = (int)uVar5 / (int)uVar9;
      lVar16 = (long)iVar2;
      if (uVar9 == 0) {
        trap(7);
      }
      iVar12 = iVar2 * (uVar3 & 0xffff);
      uVar7 = ((long)((int)uVar5 % (int)uVar9) << 0x30) >> 0x20 | (long)(int)(uVar6 >> 0x10);
      iVar1 = (int)uVar7;
      if (uVar7 < (ulong)(long)iVar12) {
        iVar1 = iVar1 + uVar3;
        lVar16 = (long)(iVar2 + -1);
        if ((ulong)(long)(int)uVar3 <= (ulong)(long)iVar1) {
          if ((ulong)(long)iVar12 <= (ulong)(long)iVar1) {
            iVar1 = iVar1 - iVar12;
            goto LAB_00256fec;
          }
          lVar16 = (long)(iVar2 + -2);
          iVar1 = iVar1 + uVar3;
        }
        iVar1 = iVar1 - iVar12;
      }
      else {
        iVar1 = iVar1 - iVar12;
      }
LAB_00256fec:
      if (uVar9 == 0) {
        trap(7);
      }
      iVar2 = iVar1 / (int)uVar9;
      uVar17 = (ulong)iVar2;
      iVar12 = iVar2 * (uVar3 & 0xffff);
      uVar7 = ((long)(iVar1 % (int)uVar9) << 0x30) >> 0x20 | (long)(int)uVar6 & 0xffffU;
      if (uVar7 < (ulong)(long)iVar12) {
        iVar1 = (int)uVar7 + uVar3;
        uVar7 = (ulong)iVar1;
        uVar17 = (ulong)(iVar2 + -1);
        if (((ulong)(long)(int)uVar3 <= uVar7) && (uVar7 < (ulong)(long)iVar12)) {
          uVar7 = (ulong)(int)(iVar1 + uVar3);
          uVar17 = (ulong)(iVar2 + -2);
        }
      }
      uVar6 = (int)uVar7 - iVar12;
      uVar17 = (lVar16 << 0x30) >> 0x20 | uVar17;
      lVar16 = (uVar17 & 0xffffffff) * (ulong)(uVar8 << (uVar4 & 0x1f));
      uVar3 = (uint)((ulong)lVar16 >> 0x20);
      if (uVar6 < uVar3) {
        uVar17 = (ulong)((int)uVar17 + -1);
      }
      else {
        uVar7 = 0;
        if ((uVar3 != uVar6) || ((uint)lVar16 <= uVar14 << (uVar4 & 0x1f))) goto LAB_0025709c;
        uVar17 = (ulong)((int)uVar17 + -1);
      }
    }
  }
  uVar7 = 0;
LAB_0025709c:
  return uVar17 & 0xffffffff | uVar7 << 0x20;
}

