/* Ghidra pseudocode. PS2 address: 001fcec0. Not validated source. */

void FUN_001fcec0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar7 = param_3 & 0xff;
  iVar9 = (int)param_1;
  if (-1 < (int)(param_3 << 0x18)) {
    iVar8 = iVar9 + 0x30000;
    *(int *)(iVar9 + 0x3201c) = *(int *)(iVar9 + 0x3201c) + 1;
    iVar3 = *(int *)(iVar9 + 0x3201c) * 0x18 + iVar9;
    uVar5 = *(undefined8 *)(iVar9 + 0x3200c);
    uVar6 = *(undefined8 *)(iVar9 + 0x32014);
    *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar9 + 0x32004);
    *(undefined8 *)(iVar3 + 0x32028) = uVar5;
    *(undefined8 *)(iVar3 + 0x32030) = uVar6;
    iVar3 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    iVar2 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x32080 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2090) = 0;
    *(int *)(iVar8 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar9 + 0x32020);
    iVar3 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x320b0 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    FUN_0025a60c(iVar9 + iVar3 * 8 + 0x320c0,0,8);
    iVar3 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x20e0) = 0;
    *(undefined4 *)(iVar9 + 0x320f0 + iVar3 * 4) = 0;
    iVar3 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x32100 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar8 + iVar1 * 0x10 + 0x2124) = 0;
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51d0) = 1;
    *(uint *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51e0) = uVar7;
    iVar3 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    *(int *)(iVar9 + 0x320b0 + *(int *)(iVar9 + 0x3201c) * 4) = iVar9 + 0x8b6e4;
    *(int *)(iVar9 + 0x32080 + iVar3 * 4) = (int)param_2 + 0xc0;
    *(undefined1 *)(iVar1 * 0x18 + iVar9 + 0x32023) = 1;
    uVar4 = FUN_001f8df8(param_1,param_2);
    *(undefined4 *)(iVar9 + 0x320f0 + *(int *)(iVar9 + 0x3201c) * 4) = uVar4;
    *(undefined4 *)(iVar9 + 0x32100 + *(int *)(iVar9 + 0x3201c) * 4) = 0x42340000;
    FUN_001f6420(param_1);
    return;
  }
  if (uVar7 < 0xff) {
    iVar8 = iVar9 + 0x30000;
    *(int *)(iVar9 + 0x3201c) = *(int *)(iVar9 + 0x3201c) + 1;
    iVar3 = *(int *)(iVar9 + 0x3201c) * 0x18 + iVar9;
    uVar6 = *(undefined8 *)(iVar9 + 0x3200c);
    uVar5 = *(undefined8 *)(iVar9 + 0x32014);
    *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar9 + 0x32004);
    *(undefined8 *)(iVar3 + 0x32028) = uVar6;
    *(undefined8 *)(iVar3 + 0x32030) = uVar5;
    iVar3 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    iVar2 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x2080) = 0;
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2090) = 0;
    *(int *)(iVar8 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar9 + 0x32020);
    iVar3 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x320b0 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
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
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51d0) = 5;
    *(uint *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51e0) = uVar7 - 0x80;
    *(int *)(iVar9 + 0x320b0 + *(int *)(iVar9 + 0x3201c) * 4) = iVar9 + 0x8b6e0;
    uVar4 = FUN_001f6420(param_1);
    *(undefined4 *)(iVar9 + 0x8bb40) = uVar4;
  }
  return;
}

