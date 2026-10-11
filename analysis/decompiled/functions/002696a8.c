/* Ghidra pseudocode. PS2 address: 002696a8. Not validated source. */

ulong FUN_002696a8(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uStack_40;
  
  iVar16 = 0;
  if ((long)param_1 < 0) {
    iVar16 = -1;
    param_1 = CONCAT44(-(uint)(-(int)param_1 != 0) - (int)(param_1 >> 0x20),-(int)param_1);
  }
  if (param_2 >> 0x20 < 0) {
    param_2 = CONCAT44(-(uint)(-(int)param_2 != 0) - (int)((ulong)param_2 >> 0x20),-(int)param_2);
  }
  uVar13 = (uint)param_1;
  uVar14 = (ulong)(int)uVar13;
  uVar10 = param_2 >> 0x20;
  uVar11 = (uint)(param_1 >> 0x20);
  uVar12 = (ulong)(int)uVar11;
  uVar7 = (uint)param_2;
  uVar9 = (ulong)(int)uVar7;
  uVar15 = (uint)((ulong)param_2 >> 0x20);
  if (uVar10 == 0) {
    if (uVar12 < uVar9) {
      if (uVar9 < 0x10000) {
        iVar2 = 8;
        if (uVar9 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar9 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar15 = 0x20 - ((uint)(byte)(&DAT_002c0de0)[uVar7 >> iVar2] + iVar2);
      if (uVar15 != 0) {
        uVar9 = (ulong)(int)(uVar7 << (uVar15 & 0x1f));
        uVar11 = uVar11 << (uVar15 & 0x1f) | uVar13 >> (0x20 - uVar15 & 0x1f);
        uVar14 = (ulong)(int)(uVar13 << (uVar15 & 0x1f));
      }
      uVar13 = (uint)uVar9 >> 0x10;
      uVar7 = (uint)uVar9 & 0xffff;
      iVar1 = (int)uVar11 / (int)uVar13;
      iVar2 = (int)uVar11 % (int)uVar13;
    }
    else {
      if (uVar9 == 0) {
        trap(7);
        uVar9 = (ulong)(1 / (int)uVar15);
      }
      if (uVar9 < 0x10000) {
        iVar2 = 8;
        if (uVar9 < 0x100) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x18;
        if (uVar9 < 0x1000000) {
          iVar2 = 0x10;
        }
      }
      uVar7 = (uint)uVar9;
      uVar15 = 0x20 - ((uint)(byte)(&DAT_002c0de0)[uVar7 >> iVar2] + iVar2);
      if (uVar15 == 0) {
        iVar2 = uVar11 - uVar7;
        uVar13 = uVar7 >> 0x10;
        uVar7 = uVar7 & 0xffff;
      }
      else {
        uVar5 = uVar11 >> (0x20 - uVar15 & 0x1f);
        uVar11 = uVar11 << (uVar15 & 0x1f) | uVar13 >> (0x20 - uVar15 & 0x1f);
        uVar8 = uVar7 << (uVar15 & 0x1f);
        uVar9 = (ulong)(int)uVar8;
        uVar14 = (ulong)(int)(uVar13 << (uVar15 & 0x1f));
        uVar13 = uVar8 >> 0x10;
        uVar7 = uVar8 & 0xffff;
        if (uVar13 == 0) {
          trap(7);
        }
        iVar2 = ((int)uVar5 / (int)uVar13) * uVar7;
        uVar10 = ((long)((int)uVar5 % (int)uVar13) << 0x30) >> 0x20 | (long)(int)(uVar11 >> 0x10);
        iVar1 = (int)uVar10;
        if (uVar10 < (ulong)(long)iVar2) {
          iVar1 = iVar1 + uVar8;
          if ((ulong)(long)iVar1 < uVar9) {
            iVar1 = iVar1 - iVar2;
          }
          else {
            if ((ulong)(long)iVar1 < (ulong)(long)iVar2) {
              iVar1 = iVar1 + uVar8;
            }
            iVar1 = iVar1 - iVar2;
          }
        }
        else {
          iVar1 = iVar1 - iVar2;
        }
        if (uVar13 == 0) {
          trap(7);
        }
        iVar3 = (iVar1 / (int)uVar13) * uVar7;
        uVar10 = ((long)(iVar1 % (int)uVar13) << 0x30) >> 0x20 | (long)(int)uVar11 & 0xffffU;
        iVar2 = (int)uVar10;
        if (uVar10 < (ulong)(long)iVar3) {
          iVar1 = iVar2 + uVar8;
          iVar2 = iVar1 - iVar3;
          if (uVar9 <= (ulong)(long)iVar1) {
            if ((ulong)(long)iVar1 < (ulong)(long)iVar3) {
              iVar1 = iVar1 + uVar8;
            }
            iVar2 = iVar1 - iVar3;
          }
        }
        else {
          iVar2 = iVar2 - iVar3;
        }
      }
      iVar1 = iVar2 / (int)uVar13;
      iVar2 = iVar2 % (int)uVar13;
    }
    if (uVar13 == 0) {
      trap(7);
    }
    iVar1 = iVar1 * uVar7;
    uVar10 = ((long)iVar2 << 0x30) >> 0x20 | (long)(int)((uint)uVar14 >> 0x10);
    iVar2 = (int)uVar10;
    iVar3 = (int)uVar9;
    if (uVar10 < (ulong)(long)iVar1) {
      iVar2 = iVar2 + iVar3;
      if ((ulong)(long)iVar2 < uVar9) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        if ((ulong)(long)iVar2 < (ulong)(long)iVar1) {
          iVar2 = iVar2 + iVar3;
        }
        iVar2 = iVar2 - iVar1;
      }
    }
    else {
      iVar2 = iVar2 - iVar1;
    }
    if (uVar13 == 0) {
      trap(7);
    }
    iVar1 = (iVar2 / (int)uVar13) * uVar7;
    uVar14 = ((long)(iVar2 % (int)uVar13) << 0x30) >> 0x20 | uVar14 & 0xffff;
    if (uVar14 < (ulong)(long)iVar1) {
      iVar2 = (int)uVar14 + iVar3;
      uVar14 = (ulong)iVar2;
      if ((uVar9 <= uVar14) && (uVar14 < (ulong)(long)iVar1)) {
        uVar14 = (ulong)(iVar2 + iVar3);
      }
    }
    if (&stack0x00000000 != (undefined1 *)0x40) {
      uStack_40 = (ulong)((uint)((int)uVar14 - iVar1) >> (uVar15 & 0x1f));
    }
    goto LAB_00269ca4;
  }
  if (uVar12 < uVar10) {
    uStack_40 = param_1 & 0xffffffff | uVar12 << 0x20;
    goto LAB_00269ca4;
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
  uVar5 = 0x20 - ((uint)(byte)(&DAT_002c0de0)[uVar15 >> iVar2] + iVar2);
  uVar8 = 0x20 - uVar5;
  if (uVar5 == 0) {
    if ((uVar10 < uVar12) || (uVar9 <= uVar14)) {
      uVar12 = (ulong)(int)((uVar11 - uVar15) - (uint)(uVar14 < (ulong)(long)(int)(uVar13 - uVar7)))
      ;
      uVar14 = (long)(int)(uVar13 - uVar7);
    }
    if (&stack0x00000000 != (undefined1 *)0x40) {
      uStack_40 = uVar14 & 0xffffffff | uVar12 << 0x20;
    }
    goto LAB_00269ca4;
  }
  uVar6 = uVar11 >> (uVar8 & 0x1f);
  uVar11 = uVar11 << (uVar5 & 0x1f) | uVar13 >> (uVar8 & 0x1f);
  uVar15 = uVar15 << (uVar5 & 0x1f) | uVar7 >> (uVar8 & 0x1f);
  uVar7 = uVar7 << (uVar5 & 0x1f);
  uVar13 = uVar13 << (uVar5 & 0x1f);
  uVar4 = uVar15 >> 0x10;
  iVar2 = (int)uVar6 / (int)uVar4;
  lVar17 = (long)iVar2;
  if (uVar4 == 0) {
    trap(7);
  }
  iVar1 = iVar2 * (uVar15 & 0xffff);
  uVar14 = ((long)((int)uVar6 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)(uVar11 >> 0x10);
  iVar3 = (int)uVar14;
  if (uVar14 < (ulong)(long)iVar1) {
    iVar3 = iVar3 + uVar15;
    lVar17 = (long)(iVar2 + -1);
    if ((ulong)(long)(int)uVar15 <= (ulong)(long)iVar3) {
      if ((ulong)(long)iVar1 <= (ulong)(long)iVar3) {
        iVar3 = iVar3 - iVar1;
        goto LAB_00269bb4;
      }
      lVar17 = (long)(iVar2 + -2);
      iVar3 = iVar3 + uVar15;
    }
    iVar3 = iVar3 - iVar1;
  }
  else {
    iVar3 = iVar3 - iVar1;
  }
LAB_00269bb4:
  if (uVar4 == 0) {
    trap(7);
  }
  iVar2 = iVar3 / (int)uVar4;
  uVar9 = (ulong)iVar2;
  iVar1 = iVar2 * (uVar15 & 0xffff);
  uVar14 = ((long)(iVar3 % (int)uVar4) << 0x30) >> 0x20 | (long)(int)uVar11 & 0xffffU;
  if (uVar14 < (ulong)(long)iVar1) {
    iVar3 = (int)uVar14 + uVar15;
    uVar14 = (ulong)iVar3;
    uVar9 = (ulong)(iVar2 + -1);
    if (((ulong)(long)(int)uVar15 <= uVar14) && (uVar14 < (ulong)(long)iVar1)) {
      uVar9 = (ulong)(iVar2 + -2);
      uVar14 = (ulong)(int)(iVar3 + uVar15);
    }
  }
  uVar6 = (int)uVar14 - iVar1;
  lVar17 = (((lVar17 << 0x30) >> 0x20 | uVar9) & 0xffffffff) * (ulong)uVar7;
  uVar11 = (uint)lVar17;
  uVar4 = (uint)((ulong)lVar17 >> 0x20);
  uVar7 = uVar11 - uVar7;
  if ((uVar6 < uVar4) || ((uVar4 == uVar6 && (uVar13 < uVar11)))) {
    lVar17 = CONCAT44((uVar4 - uVar15) - (uint)(uVar11 < uVar7),uVar7);
  }
  uVar11 = uVar13 - (int)lVar17;
  if (&stack0x00000000 != (undefined1 *)0x40) {
    uVar7 = (uVar6 - (int)((ulong)lVar17 >> 0x20)) - (uint)(uVar13 < uVar11);
    uStack_40 = CONCAT44(uVar7 >> (uVar5 & 0x1f),uVar7 << (uVar8 & 0x1f) | uVar11 >> (uVar5 & 0x1f))
    ;
  }
LAB_00269ca4:
  if (iVar16 != 0) {
    uStack_40 = CONCAT44(-(uint)(-(int)uStack_40 != 0) - (int)(uStack_40 >> 0x20),-(int)uStack_40);
  }
  return uStack_40;
}

