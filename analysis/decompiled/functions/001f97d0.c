/* Ghidra pseudocode. PS2 address: 001f97d0. Not validated source. */

void FUN_001f97d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = (int)param_2;
  if (*(int *)(iVar11 + 0x340) == 1) {
    iVar9 = (int)param_1;
    iVar8 = iVar9 + 0x30000;
    iVar10 = iVar9 + 0x320a0;
    *(int *)(iVar9 + 0x3201c) = *(int *)(iVar9 + 0x3201c) + 1;
    iVar3 = *(int *)(iVar9 + 0x3201c) * 0x18 + iVar9;
    uVar5 = *(undefined8 *)(iVar9 + 0x3200c);
    uVar6 = *(undefined8 *)(iVar9 + 0x32014);
    *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar9 + 0x32004);
    *(undefined8 *)(iVar3 + 0x32028) = uVar5;
    *(undefined8 *)(iVar3 + 0x32030) = uVar6;
    iVar3 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    iVar7 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x2080) = 0;
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2090) = 0;
    *(int *)(iVar10 + iVar1 * 4) = (int)*(char *)(iVar7 * 0x18 + iVar9 + 0x32020);
    iVar3 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x20b0) = 0;
    FUN_0025a60c(iVar9 + iVar3 * 8 + 0x320c0,0,8);
    iVar3 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x20e0) = 0;
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x20f0) = 0;
    iVar3 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x2100) = 0;
    *(undefined4 *)(iVar8 + iVar1 * 0x10 + 0x2124) = 0;
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51d0) = 1;
    *(int *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51e0) = param_3 * 8 + 3;
    *(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    if ((0x7e < *(int *)(iVar10 + *(int *)(iVar9 + 0x3201c) * 4)) ||
       (uVar2 = 0, -1 < *(int *)(iVar10 + *(int *)(iVar9 + 0x3201c) * 4))) {
      if (*(int *)(iVar10 + *(int *)(iVar9 + 0x3201c) * 4) < 0x7f) {
        uVar2 = *(undefined1 *)(iVar10 + *(int *)(iVar9 + 0x3201c) * 4);
      }
      else {
        uVar2 = 0x7f;
      }
    }
    *(undefined1 *)(*(int *)(iVar9 + 0x3201c) * 0x18 + iVar9 + 0x32020) = uVar2;
    iVar7 = iVar9 + 0x30000;
    iVar3 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    *(int *)(iVar7 + *(int *)(iVar9 + 0x3201c) * 4 + 0x20b0) = iVar9 + 0x8b6e4;
    *(int *)(iVar7 + iVar3 * 4 + 0x2080) = iVar11 + 0xc0;
    uVar5 = DAT_002c5568;
    *(undefined1 *)(iVar1 * 0x18 + iVar9 + 0x32023) = 1;
    *(undefined8 *)(iVar9 + *(int *)(iVar9 + 0x3201c) * 8 + 0x320c0) = uVar5;
    *(int *)(iVar7 + *(int *)(iVar9 + 0x3201c) * 4 + 0x20e0) = iVar11;
    uVar4 = FUN_001f8df8(param_1,param_2);
    *(undefined4 *)(iVar7 + *(int *)(iVar9 + 0x3201c) * 4 + 0x20f0) = uVar4;
    iVar11 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar7 + *(int *)(iVar9 + 0x3201c) * 4 + 0x2100) = 0x42340000;
    *(undefined4 *)(iVar7 + iVar11 * 4 + 0x2110) = 0x42340000;
    FUN_001f6420(param_1);
  }
  return;
}

