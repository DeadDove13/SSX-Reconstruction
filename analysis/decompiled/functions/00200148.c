/* Ghidra pseudocode. PS2 address: 00200148. Not validated source. */

void FUN_00200148(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = (int)param_2;
  if ((*(int *)(iVar13 + 0x340) != 1) &&
     (lVar6 = FUN_001f8bc0(0x42340000,param_1,iVar13 + 0xc0), lVar6 == 0)) {
    return;
  }
  lVar7 = FUN_001f7358(*(int *)(iVar13 + 0x340) != 1,(int)*(float *)(iVar13 + 0x6c8));
  lVar6 = 0x7f;
  if (lVar7 < 0x80) {
    lVar6 = lVar7;
  }
  if (lVar6 < 0) {
    lVar6 = 0;
  }
  if (*(int *)(iVar13 + 0x340) == 1) {
    iVar3 = FUN_001f8aa0(param_1,param_2);
    iVar3 = iVar3 * 8 + 1;
  }
  else {
    iVar3 = FUN_001f8aa0(param_1,param_2);
    iVar3 = iVar3 * 8 + 5;
  }
  iVar12 = (int)param_1;
  iVar11 = iVar12 + 0x30000;
  iVar14 = iVar12 + 0x320a0;
  *(int *)(iVar12 + 0x3201c) = *(int *)(iVar12 + 0x3201c) + 1;
  iVar4 = *(int *)(iVar12 + 0x3201c) * 0x18 + iVar12;
  uVar9 = *(undefined8 *)(iVar12 + 0x3200c);
  uVar8 = *(undefined8 *)(iVar12 + 0x32014);
  *(undefined8 *)(iVar4 + 0x32020) = *(undefined8 *)(iVar12 + 0x32004);
  *(undefined8 *)(iVar4 + 0x32028) = uVar9;
  *(undefined8 *)(iVar4 + 0x32030) = uVar8;
  iVar4 = *(int *)(iVar12 + 0x3201c);
  iVar10 = *(int *)(iVar12 + 0x3201c);
  iVar1 = *(int *)(iVar12 + 0x3201c);
  *(undefined4 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4 + 0x2080) = 0;
  *(undefined4 *)(iVar11 + iVar4 * 4 + 0x2090) = 0;
  *(int *)(iVar14 + iVar10 * 4) = (int)*(char *)(iVar1 * 0x18 + iVar12 + 0x32020);
  iVar4 = *(int *)(iVar12 + 0x3201c);
  *(undefined4 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4 + 0x20b0) = 0;
  FUN_0025a60c(iVar12 + iVar4 * 8 + 0x320c0,0,8);
  iVar4 = *(int *)(iVar12 + 0x3201c);
  *(undefined4 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4 + 0x20e0) = 0;
  *(undefined4 *)(iVar11 + iVar4 * 4 + 0x20f0) = 0;
  iVar4 = *(int *)(iVar12 + 0x3201c);
  iVar10 = *(int *)(iVar12 + 0x3201c);
  *(undefined4 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4 + 0x2100) = 0;
  *(undefined4 *)(iVar11 + iVar10 * 0x10 + 0x2124) = 0;
  *(undefined4 *)(iVar11 + iVar4 * 4 + 0x2110) = 0;
  *(undefined4 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 0x10 + 0x2120) = 100;
  *(undefined4 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
  *(undefined4 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 0x10 + 0x212c) = 0x32;
  *(undefined4 *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4 + 0x51d0) = 1;
  *(int *)(iVar11 + *(int *)(iVar12 + 0x3201c) * 4 + 0x51e0) = iVar3;
  *(int *)(iVar14 + *(int *)(iVar12 + 0x3201c) * 4) = (int)lVar6;
  if ((0x7e < *(int *)(iVar14 + *(int *)(iVar12 + 0x3201c) * 4)) ||
     (uVar2 = 0, -1 < *(int *)(iVar14 + *(int *)(iVar12 + 0x3201c) * 4))) {
    if (*(int *)(iVar14 + *(int *)(iVar12 + 0x3201c) * 4) < 0x7f) {
      uVar2 = *(undefined1 *)(iVar14 + *(int *)(iVar12 + 0x3201c) * 4);
    }
    else {
      uVar2 = 0x7f;
    }
  }
  *(undefined1 *)(*(int *)(iVar12 + 0x3201c) * 0x18 + iVar12 + 0x32020) = uVar2;
  iVar10 = iVar12 + 0x30000;
  iVar3 = *(int *)(iVar12 + 0x3201c);
  iVar4 = *(int *)(iVar12 + 0x3201c);
  *(int *)(iVar10 + *(int *)(iVar12 + 0x3201c) * 4 + 0x2080) = iVar13 + 0xc0;
  *(int *)(iVar10 + iVar3 * 4 + 0x20b0) = iVar12 + 0x8b6e4;
  *(undefined1 *)(iVar4 * 0x18 + iVar12 + 0x32023) = 1;
  uVar5 = FUN_001f8df8(param_1,param_2);
  *(undefined4 *)(iVar10 + *(int *)(iVar12 + 0x3201c) * 4 + 0x20f0) = uVar5;
  FUN_001f6420(param_1);
  return;
}

