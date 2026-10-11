/* Ghidra pseudocode. PS2 address: 001ff1f0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001ff620) */
/* WARNING: Removing unreachable block (ram,0x001ff590) */
/* WARNING: Removing unreachable block (ram,0x001ff504) */
/* WARNING: Removing unreachable block (ram,0x001ff474) */
/* WARNING: Removing unreachable block (ram,0x001ff3e8) */
/* WARNING: Removing unreachable block (ram,0x001ff358) */
/* WARNING: Removing unreachable block (ram,0x001ff2d0) */
/* WARNING: Removing unreachable block (ram,0x001ff240) */
/* WARNING: Removing unreachable block (ram,0x001ff28c) */
/* WARNING: Removing unreachable block (ram,0x001ff318) */
/* WARNING: Removing unreachable block (ram,0x001ff3a4) */
/* WARNING: Removing unreachable block (ram,0x001ff430) */
/* WARNING: Removing unreachable block (ram,0x001ff4c0) */
/* WARNING: Removing unreachable block (ram,0x001ff54c) */
/* WARNING: Removing unreachable block (ram,0x001ff5dc) */
/* WARNING: Removing unreachable block (ram,0x001ff668) */

void FUN_001ff1f0(undefined8 param_1,undefined8 param_2)

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
  
  if (*(int *)((int)param_2 + 0x340) != 1) {
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
      iVar12 = 0x40;
      if ((int)(float)((iVar3 * 0x7f) / 1000) < 0) goto LAB_001ff698;
    }
    iVar3 = FUN_00202b28(param_2);
    if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x7f) {
      iVar3 = FUN_00202b28(param_2);
      iVar12 = 0x40;
      if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x40) goto LAB_001ff698;
    }
  }
  iVar3 = FUN_00202b28(param_2);
  if ((0x7e < (int)(float)((iVar3 * 0x7f) / 1000)) ||
     (iVar3 = FUN_00202b28(param_2), -1 < (int)(float)((iVar3 * 0x7f) / 1000))) {
    iVar3 = FUN_00202b28(param_2);
    iVar12 = 0x7f;
    if (0x7e < (int)(float)((iVar3 * 0x7f) / 1000)) goto LAB_001ff698;
    iVar3 = FUN_00202b28(param_2);
    iVar12 = 0x7f;
    if (0x7e < (int)(float)((iVar3 * 0x7f) / 1000)) goto LAB_001ff698;
  }
  iVar3 = FUN_00202b28(param_2);
  if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x7f) {
    iVar3 = FUN_00202b28(param_2);
    iVar12 = 0;
    if ((int)(float)((iVar3 * 0x7f) / 1000) < 0) goto LAB_001ff698;
  }
  iVar3 = FUN_00202b28(param_2);
  iVar12 = 0x7f;
  if ((int)(float)((iVar3 * 0x7f) / 1000) < 0x7f) {
    iVar3 = FUN_00202b28(param_2);
    iVar12 = (int)(float)((iVar3 * 0x7f) / 1000);
  }
LAB_001ff698:
  iVar11 = (int)param_1;
  iVar9 = iVar11 + 0x30000;
  iVar4 = FUN_001f8aa0(param_1,param_2);
  iVar10 = iVar11 + 0x320a0;
  *(int *)(iVar11 + 0x3201c) = *(int *)(iVar11 + 0x3201c) + 1;
  iVar3 = *(int *)(iVar11 + 0x3201c) * 0x18 + iVar11;
  uVar6 = *(undefined8 *)(iVar11 + 0x3200c);
  uVar7 = *(undefined8 *)(iVar11 + 0x32014);
  *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar11 + 0x32004);
  *(undefined8 *)(iVar3 + 0x32028) = uVar6;
  *(undefined8 *)(iVar3 + 0x32030) = uVar7;
  iVar3 = *(int *)(iVar11 + 0x3201c);
  iVar8 = *(int *)(iVar11 + 0x3201c);
  iVar1 = *(int *)(iVar11 + 0x3201c);
  *(undefined4 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2080) = 0;
  *(undefined4 *)(iVar9 + iVar3 * 4 + 0x2090) = 0;
  *(int *)(iVar10 + iVar8 * 4) = (int)*(char *)(iVar1 * 0x18 + iVar11 + 0x32020);
  iVar3 = *(int *)(iVar11 + 0x3201c);
  *(undefined4 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4 + 0x20b0) = 0;
  FUN_0025a60c(iVar11 + iVar3 * 8 + 0x320c0,0,8);
  iVar3 = *(int *)(iVar11 + 0x3201c);
  *(undefined4 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4 + 0x20e0) = 0;
  *(undefined4 *)(iVar9 + iVar3 * 4 + 0x20f0) = 0;
  iVar3 = *(int *)(iVar11 + 0x3201c);
  iVar8 = *(int *)(iVar11 + 0x3201c);
  *(undefined4 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2100) = 0;
  *(undefined4 *)(iVar9 + iVar8 * 0x10 + 0x2124) = 0;
  *(undefined4 *)(iVar9 + iVar3 * 4 + 0x2110) = 0;
  *(undefined4 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x2120) = 100;
  *(undefined4 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
  *(undefined4 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x212c) = 0x32;
  *(undefined4 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4 + 0x51d0) = 1;
  *(int *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4 + 0x51e0) = iVar4 * 8 + 2;
  *(int *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4) = iVar12;
  if ((0x7e < *(int *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4)) ||
     (uVar2 = 0, -1 < *(int *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4))) {
    if (*(int *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4) < 0x7f) {
      uVar2 = *(undefined1 *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4);
    }
    else {
      uVar2 = 0x7f;
    }
  }
  *(undefined1 *)(*(int *)(iVar11 + 0x3201c) * 0x18 + iVar11 + 0x32020) = uVar2;
  iVar8 = iVar11 + 0x30000;
  iVar3 = *(int *)(iVar11 + 0x3201c);
  iVar12 = *(int *)(iVar11 + 0x3201c);
  *(int *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2080) = (int)param_2 + 0xc0;
  *(int *)(iVar8 + iVar3 * 4 + 0x20b0) = iVar11 + 0x8b6e4;
  *(undefined1 *)(iVar12 * 0x18 + iVar11 + 0x32023) = 1;
  uVar5 = FUN_001f8df8(param_1,param_2);
  *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 4 + 0x20f0) = uVar5;
  FUN_001f6420(param_1);
  return;
}

