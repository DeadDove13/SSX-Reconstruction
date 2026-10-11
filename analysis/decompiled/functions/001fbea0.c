/* Ghidra pseudocode. PS2 address: 001fbea0. Not validated source. */

void FUN_001fbea0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  iVar7 = iVar8 + 0x30000;
  *(int *)(iVar8 + 0x3201c) = *(int *)(iVar8 + 0x3201c) + 1;
  iVar3 = *(int *)(iVar8 + 0x3201c) * 0x18 + iVar8;
  uVar6 = *(undefined8 *)(iVar8 + 0x3200c);
  uVar5 = *(undefined8 *)(iVar8 + 0x32014);
  *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar8 + 0x32004);
  *(undefined8 *)(iVar3 + 0x32028) = uVar6;
  *(undefined8 *)(iVar3 + 0x32030) = uVar5;
  iVar3 = *(int *)(iVar8 + 0x3201c);
  iVar1 = *(int *)(iVar8 + 0x3201c);
  iVar2 = *(int *)(iVar8 + 0x3201c);
  *(undefined4 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4 + 0x2080) = 0;
  *(undefined4 *)(iVar7 + iVar3 * 4 + 0x2090) = 0;
  *(int *)(iVar7 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar8 + 0x32020);
  iVar3 = *(int *)(iVar8 + 0x3201c);
  *(undefined4 *)(iVar8 + 0x320b0 + *(int *)(iVar8 + 0x3201c) * 4) = 0;
  FUN_0025a60c(iVar8 + iVar3 * 8 + 0x320c0,0,8);
  iVar3 = *(int *)(iVar8 + 0x3201c);
  *(undefined4 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4 + 0x20e0) = 0;
  *(undefined4 *)(iVar7 + iVar3 * 4 + 0x20f0) = 0;
  iVar3 = *(int *)(iVar8 + 0x3201c);
  iVar1 = *(int *)(iVar8 + 0x3201c);
  *(undefined4 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4 + 0x2100) = 0;
  *(undefined4 *)(iVar7 + iVar1 * 0x10 + 0x2124) = 0;
  *(undefined4 *)(iVar7 + iVar3 * 4 + 0x2110) = 0;
  *(undefined4 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 0x10 + 0x2120) = 100;
  *(undefined4 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
  *(undefined4 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 0x10 + 0x212c) = 0x32;
  *(undefined4 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4 + 0x51d0) = 1;
  *(undefined4 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4 + 0x51e0) = 0x7c;
  *(int *)(iVar8 + 0x320b0 + *(int *)(iVar8 + 0x3201c) * 4) = iVar8 + 0x8b6e4;
  uVar4 = FUN_001f6420(param_1);
  *(undefined4 *)(iVar8 + 0xa4220) = uVar4;
  return;
}

