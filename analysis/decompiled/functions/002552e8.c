/* Ghidra pseudocode. PS2 address: 002552e8. Not validated source. */

ulong FUN_002552e8(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar7 = (uint)param_1;
  uVar8 = (ulong)(int)uVar7;
  uVar5 = (long)param_1 >> 0x20;
  iVar4 = (int)(param_1 >> 0x20);
  uVar9 = iVar4 >> 0x14 & 0x7ff;
  uVar6 = uVar9 - 0x3ff;
  if ((int)uVar6 < 0x14) {
    if ((int)uVar6 < 0) {
      uVar1 = FUN_002574c0(param_1,DAT_002bfe68);
      lVar2 = FUN_00257aa8(uVar1,0);
      uVar3 = uVar8 << 0x20;
      if (lVar2 < 1) goto LAB_00255490;
      if ((long)uVar5 < 0) {
        uVar3 = uVar8 << 0x20;
        if ((uVar5 & 0x7fffffff) == 0 && uVar8 == 0) goto LAB_00255490;
        uVar5 = 0xffffffffbff00000;
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        uVar5 = 0;
      }
    }
    else {
      uVar10 = (ulong)(0xfffff >> (uVar6 & 0x1f));
      if ((uVar5 & uVar10) == 0 && uVar8 == 0) {
        return param_1;
      }
      uVar1 = FUN_002574c0(param_1,DAT_002bfe68);
      lVar2 = FUN_00257aa8(uVar1,0);
      uVar3 = uVar8 << 0x20;
      if (lVar2 < 1) goto LAB_00255490;
      if ((long)uVar5 < 0) {
        uVar5 = (ulong)(iVar4 + (0x100000 >> (uVar6 & 0x1f)));
      }
      uVar3 = 0;
      uVar5 = uVar5 & ~uVar10;
    }
  }
  else {
    if (0x33 < (int)uVar6) {
      if (uVar6 != 0x400) {
        return param_1;
      }
      uVar5 = FUN_002574c0(param_1);
      return uVar5;
    }
    uVar9 = 0xffffffff >> (uVar9 - 0x413 & 0x1f);
    if ((uVar7 & uVar9) == 0) {
      return param_1;
    }
    uVar1 = FUN_002574c0(param_1,DAT_002bfe68);
    lVar2 = FUN_00257aa8(uVar1,0);
    uVar3 = uVar8 << 0x20;
    if (lVar2 < 1) goto LAB_00255490;
    uVar3 = uVar8;
    if ((long)uVar5 < 0) {
      if (uVar6 == 0x14) {
        iVar4 = iVar4 + 1;
      }
      else {
        uVar3 = (ulong)(int)(uVar7 + (1 << (0x34 - uVar6 & 0x1f)));
        iVar4 = iVar4 + (uint)(uVar3 < uVar8);
      }
      uVar5 = (ulong)iVar4;
    }
    uVar3 = uVar3 & ~(long)(int)uVar9;
  }
  uVar3 = uVar3 << 0x20;
LAB_00255490:
  return uVar5 << 0x20 | uVar3 >> 0x20;
}

