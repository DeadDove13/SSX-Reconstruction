/* Ghidra pseudocode. PS2 address: 001ff988. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001ffde4) */
/* WARNING: Removing unreachable block (ram,0x001ffd54) */
/* WARNING: Removing unreachable block (ram,0x001ffcc8) */
/* WARNING: Removing unreachable block (ram,0x001ffc38) */
/* WARNING: Removing unreachable block (ram,0x001ffbac) */
/* WARNING: Removing unreachable block (ram,0x001ffb1c) */
/* WARNING: Removing unreachable block (ram,0x001ffa94) */
/* WARNING: Removing unreachable block (ram,0x001ffa04) */
/* WARNING: Removing unreachable block (ram,0x001ffa50) */
/* WARNING: Removing unreachable block (ram,0x001ffadc) */
/* WARNING: Removing unreachable block (ram,0x001ffb68) */
/* WARNING: Removing unreachable block (ram,0x001ffbf4) */
/* WARNING: Removing unreachable block (ram,0x001ffc84) */
/* WARNING: Removing unreachable block (ram,0x001ffd10) */
/* WARNING: Removing unreachable block (ram,0x001ffda0) */
/* WARNING: Removing unreachable block (ram,0x001ffe2c) */

void FUN_001ff988(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = (int)param_2;
  if (2.0 < *(float *)(iVar10 + 0x8344)) {
    FUN_001f2610();
  }
  if (*(int *)(iVar10 + 0x340) != 1) {
    return;
  }
  iVar3 = FUN_00202b28(param_2);
  if ((((int)(float)((iVar3 * 0x7f) / 1000) < 0x7f) &&
      (iVar3 = FUN_00202b28(param_2), (int)(float)((iVar3 * 0x7f) / 1000) < 0)) ||
     ((iVar3 = FUN_00202b28(param_2), (int)(float)((iVar3 * 0x7f) / 1000) < 0x7f &&
      (iVar3 = FUN_00202b28(param_2), (int)(float)((iVar3 * 0x7f) / 1000) < 0x7f)))) {
    iVar3 = FUN_00202b28(param_2);
    if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x7f) {
      iVar3 = FUN_00202b28(param_2);
      iVar13 = 0x40;
      if ((int)(float)((iVar3 * 0x7f) / 1000) < 0) goto LAB_001ffe5c;
    }
    iVar3 = FUN_00202b28(param_2);
    if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x7f) {
      iVar3 = FUN_00202b28(param_2);
      iVar13 = 0x40;
      if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x40) goto LAB_001ffe5c;
    }
  }
  iVar3 = FUN_00202b28(param_2);
  if ((0x7e < (int)(float)((iVar3 * 0x7f) / 1000)) ||
     (iVar3 = FUN_00202b28(param_2), -1 < (int)(float)((iVar3 * 0x7f) / 1000))) {
    iVar3 = FUN_00202b28(param_2);
    iVar13 = 0x7f;
    if (0x7e < (int)(float)((iVar3 * 0x7f) / 1000)) goto LAB_001ffe5c;
    iVar3 = FUN_00202b28(param_2);
    iVar13 = 0x7f;
    if (0x7e < (int)(float)((iVar3 * 0x7f) / 1000)) goto LAB_001ffe5c;
  }
  iVar3 = FUN_00202b28(param_2);
  if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x7f) {
    iVar3 = FUN_00202b28(param_2);
    iVar13 = 0;
    if ((int)(float)((iVar3 * 0x7f) / 1000) < 0) goto LAB_001ffe5c;
  }
  iVar3 = FUN_00202b28(param_2);
  iVar13 = 0x7f;
  if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x7f) {
    iVar3 = FUN_00202b28(param_2);
    iVar13 = (int)(float)((iVar3 * 0x7f) / 1000);
  }
LAB_001ffe5c:
  iVar12 = (int)param_1;
  iVar9 = iVar12 + 0x30000;
  iVar4 = FUN_001f8aa0(param_1,param_2);
  iVar11 = iVar12 + 0x320a0;
  *(int *)(iVar12 + 0x3201c) = *(int *)(iVar12 + 0x3201c) + 1;
  iVar3 = *(int *)(iVar12 + 0x3201c) * 0x18 + iVar12;
  uVar6 = *(undefined8 *)(iVar12 + 0x3200c);
  uVar7 = *(undefined8 *)(iVar12 + 0x32014);
  *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar12 + 0x32004);
  *(undefined8 *)(iVar3 + 0x32028) = uVar6;
  *(undefined8 *)(iVar3 + 0x32030) = uVar7;
  iVar3 = *(int *)(iVar12 + 0x3201c);
  iVar8 = *(int *)(iVar12 + 0x3201c);
  iVar1 = *(int *)(iVar12 + 0x3201c);
  *(undefined4 *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 4 + 0x2080) = 0;
  *(undefined4 *)(iVar9 + iVar3 * 4 + 0x2090) = 0;
  *(int *)(iVar11 + iVar8 * 4) = (int)*(char *)(iVar1 * 0x18 + iVar12 + 0x32020);
  iVar3 = *(int *)(iVar12 + 0x3201c);
  *(undefined4 *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 4 + 0x20b0) = 0;
  FUN_0025a60c(iVar12 + iVar3 * 8 + 0x320c0,0,8);
  iVar3 = *(int *)(iVar12 + 0x3201c);
  *(undefined4 *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 4 + 0x20e0) = 0;
  *(undefined4 *)(iVar9 + iVar3 * 4 + 0x20f0) = 0;
  iVar3 = *(int *)(iVar12 + 0x3201c);
  iVar8 = *(int *)(iVar12 + 0x3201c);
  *(undefined4 *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 4 + 0x2100) = 0;
  *(undefined4 *)(iVar9 + iVar8 * 0x10 + 0x2124) = 0;
  *(undefined4 *)(iVar9 + iVar3 * 4 + 0x2110) = 0;
  *(undefined4 *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 0x10 + 0x2120) = 100;
  *(undefined4 *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
  *(undefined4 *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 0x10 + 0x212c) = 0x32;
  *(undefined4 *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 4 + 0x51d0) = 1;
  *(int *)(iVar9 + *(int *)(iVar12 + 0x3201c) * 4 + 0x51e0) = iVar4 * 8 + 2;
  *(int *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4) = iVar13;
  if ((0x7e < *(int *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4)) ||
     (uVar2 = 0, -1 < *(int *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4))) {
    if (*(int *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4) < 0x7f) {
      uVar2 = *(undefined1 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4);
    }
    else {
      uVar2 = 0x7f;
    }
  }
  *(undefined1 *)(*(int *)(iVar12 + 0x3201c) * 0x18 + iVar12 + 0x32020) = uVar2;
  iVar8 = iVar12 + 0x30000;
  iVar3 = *(int *)(iVar12 + 0x3201c);
  iVar13 = *(int *)(iVar12 + 0x3201c);
  *(int *)(iVar8 + *(int *)(iVar12 + 0x3201c) * 4 + 0x2080) = iVar10 + 0xc0;
  *(int *)(iVar8 + iVar3 * 4 + 0x20b0) = iVar12 + 0x8b6e4;
  *(undefined1 *)(iVar13 * 0x18 + iVar12 + 0x32023) = 1;
  uVar5 = FUN_001f8df8(param_1,param_2);
  *(undefined4 *)(iVar8 + *(int *)(iVar12 + 0x3201c) * 4 + 0x20f0) = uVar5;
  FUN_001f6420(param_1);
  return;
}

