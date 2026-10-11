/* Ghidra pseudocode. PS2 address: 001fdfa0. Not validated source. */

void FUN_001fdfa0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  param_2 = param_2 + 0x50;
  iVar7 = (int)param_1;
  iVar6 = iVar7 + 0x30000;
  if (0x51 < param_2) {
    param_2 = 0x51;
  }
  *(int *)(iVar7 + 0x3201c) = *(int *)(iVar7 + 0x3201c) + 1;
  if (param_2 < 0x50) {
    param_2 = 0x50;
  }
  iVar4 = *(int *)(iVar7 + 0x3201c) * 0x18 + iVar7;
  uVar5 = *(undefined8 *)(iVar7 + 0x3200c);
  uVar3 = *(undefined8 *)(iVar7 + 0x32014);
  *(undefined8 *)(iVar4 + 0x32020) = *(undefined8 *)(iVar7 + 0x32004);
  *(undefined8 *)(iVar4 + 0x32028) = uVar5;
  *(undefined8 *)(iVar4 + 0x32030) = uVar3;
  iVar4 = *(int *)(iVar7 + 0x3201c);
  iVar1 = *(int *)(iVar7 + 0x3201c);
  iVar2 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x2090) = 0;
  *(undefined4 *)(iVar6 + iVar4 * 4 + 0x2080) = 0;
  *(int *)(iVar6 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar7 + 0x32020);
  iVar4 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar7 + 0x320b0 + *(int *)(iVar7 + 0x3201c) * 4) = 0;
  FUN_0025a60c(iVar7 + iVar4 * 8 + 0x320c0,0,8);
  iVar4 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x20e0) = 0;
  *(undefined4 *)(iVar6 + iVar4 * 4 + 0x20f0) = 0;
  iVar4 = *(int *)(iVar7 + 0x3201c);
  iVar1 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x2100) = 0;
  *(undefined4 *)(iVar6 + iVar1 * 0x10 + 0x2124) = 0;
  iVar1 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar6 + iVar4 * 4 + 0x2110) = 0;
  *(undefined4 *)(iVar6 + iVar1 * 0x10 + 0x2120) = 100;
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 0x10 + 0x212c) = 0x32;
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x51d0) = 2;
  *(int *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x51e0) = param_2;
  *(int *)(iVar7 + 0x320b0 + *(int *)(iVar7 + 0x3201c) * 4) = iVar7 + 0x8b6e4;
  FUN_001f6420(param_1);
  return;
}

