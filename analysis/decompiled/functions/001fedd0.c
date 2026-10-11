/* Ghidra pseudocode. PS2 address: 001fedd0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001feeb4) */

void FUN_001fedd0(undefined8 param_1,long param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  iVar12 = (int)param_3;
  if (-1 < *(short *)(iVar12 + 0xf6)) {
    lVar8 = FUN_001f8290();
    if (lVar8 == param_2) {
      FUN_001f2730(param_1,param_2);
    }
    lVar8 = FUN_001f8bc0(0x42340000,param_1);
    if ((lVar8 != 0) && (lVar8 = FUN_001fd470(param_1,param_3), lVar8 == 0)) {
      auVar16 = _lqc2(*(undefined1 (*) [16])((int)param_2 + 0xd0));
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vmul(auVar16,auVar16);
      _vaddabc(auVar16,auVar16);
      _vmaddabc(auVar17,auVar16);
      auVar16 = _vmaddbc(auVar17,auVar16);
      _vsqrt(auVar16);
      _vwaitq();
      uVar9 = _cfc2(in_vc6);
      iVar14 = (int)param_1;
      iVar13 = iVar14 + 0x30000;
      iVar15 = iVar14 + 0x320a0;
      lVar10 = FUN_001f7358(2,(int)(float)uVar9);
      sVar1 = *(short *)(iVar12 + 0xf6);
      lVar8 = 0x7f;
      if (lVar10 < 0x80) {
        lVar8 = lVar10;
      }
      *(int *)(iVar14 + 0x3201c) = *(int *)(iVar14 + 0x3201c) + 1;
      if (lVar8 < 0) {
        lVar8 = 0;
      }
      iVar6 = *(int *)(iVar14 + 0x3201c) * 0x18 + iVar14;
      uVar9 = *(undefined8 *)(iVar14 + 0x3200c);
      uVar11 = *(undefined8 *)(iVar14 + 0x32014);
      *(undefined8 *)(iVar6 + 0x32020) = *(undefined8 *)(iVar14 + 0x32004);
      *(undefined8 *)(iVar6 + 0x32028) = uVar9;
      *(undefined8 *)(iVar6 + 0x32030) = uVar11;
      iVar6 = *(int *)(iVar14 + 0x3201c);
      iVar2 = *(int *)(iVar14 + 0x3201c);
      iVar3 = *(int *)(iVar14 + 0x3201c);
      *(undefined4 *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 4 + 0x2080) = 0;
      *(undefined4 *)(iVar13 + iVar6 * 4 + 0x2090) = 0;
      *(int *)(iVar15 + iVar2 * 4) = (int)*(char *)(iVar3 * 0x18 + iVar14 + 0x32020);
      iVar6 = *(int *)(iVar14 + 0x3201c);
      *(undefined4 *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 4 + 0x20b0) = 0;
      FUN_0025a60c(iVar14 + iVar6 * 8 + 0x320c0,0,8);
      iVar6 = *(int *)(iVar14 + 0x3201c);
      *(undefined4 *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 4 + 0x20e0) = 0;
      *(undefined4 *)(iVar13 + iVar6 * 4 + 0x20f0) = 0;
      iVar6 = *(int *)(iVar14 + 0x3201c);
      iVar2 = *(int *)(iVar14 + 0x3201c);
      *(undefined4 *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 4 + 0x2100) = 0;
      *(undefined4 *)(iVar13 + iVar2 * 0x10 + 0x2124) = 0;
      *(undefined4 *)(iVar13 + iVar6 * 4 + 0x2110) = 0;
      *(undefined4 *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 0x10 + 0x2120) = 100;
      *(undefined4 *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
      *(undefined4 *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 0x10 + 0x212c) = 0x32;
      *(undefined4 *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 4 + 0x51d0) = 2;
      *(int *)(iVar13 + *(int *)(iVar14 + 0x3201c) * 4 + 0x51e0) = (int)sVar1 % 1000;
      *(int *)(iVar15 + *(int *)(iVar14 + 0x3201c) * 4) = (int)lVar8;
      if ((0x7e < *(int *)(iVar15 + *(int *)(iVar14 + 0x3201c) * 4)) ||
         (uVar5 = 0, -1 < *(int *)(iVar15 + *(int *)(iVar14 + 0x3201c) * 4))) {
        if (*(int *)(iVar15 + *(int *)(iVar14 + 0x3201c) * 4) < 0x7f) {
          uVar5 = *(undefined1 *)(iVar15 + *(int *)(iVar14 + 0x3201c) * 4);
        }
        else {
          uVar5 = 0x7f;
        }
      }
      *(undefined1 *)(*(int *)(iVar14 + 0x3201c) * 0x18 + iVar14 + 0x32020) = uVar5;
      iVar6 = iVar14 + 0x30000;
      iVar13 = *(int *)(iVar14 + 0x3201c);
      iVar15 = *(int *)(iVar14 + 0x3201c);
      *(int *)(iVar6 + *(int *)(iVar14 + 0x3201c) * 4 + 0x20b0) = iVar14 + 0x8b6e4;
      *(int *)(iVar6 + iVar13 * 4 + 0x2080) = (int)param_2 + 0xc0;
      *(undefined1 *)(iVar15 * 0x18 + iVar14 + 0x32023) = 1;
      uVar7 = FUN_001f8df8(param_1,param_2);
      *(undefined4 *)(iVar6 + *(int *)(iVar14 + 0x3201c) * 4 + 0x20f0) = uVar7;
      iVar13 = *(int *)(iVar14 + 0x3201c);
      *(undefined4 *)(iVar6 + *(int *)(iVar14 + 0x3201c) * 4 + 0x2090) = 1;
      *(undefined4 *)(iVar6 + iVar13 * 4 + 0x2100) = 0x42340000;
      if (1999 < *(short *)(iVar12 + 0xf6)) {
        *(undefined4 *)(iVar6 + *(int *)(iVar14 + 0x3201c) * 4 + 0x2110) = 0x42340000;
      }
      uVar9 = FUN_001f6420(param_1);
      bVar4 = 999 < *(short *)(iVar12 + 0xf6);
      iVar12 = *(int *)(iVar14 + 0x32160) + 0x32;
      if (bVar4) {
        iVar12 = *(int *)(iVar14 + 0x32160) + 0x41a;
      }
      FUN_001fd948(param_1,param_3,uVar9,iVar12,bVar4);
    }
  }
  return;
}

