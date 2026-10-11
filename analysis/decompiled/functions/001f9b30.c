/* Ghidra pseudocode. PS2 address: 001f9b30. Not validated source. */

void FUN_001f9b30(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = 0;
  FUN_001f9c28();
  while( true ) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= iVar3) break;
    uVar4 = FUN_00189b78(DAT_002859e4,iVar3);
    iVar3 = iVar3 + 1;
    FUN_001f9ba8(param_1,uVar4);
  }
  iVar7 = (int)param_1;
  iVar6 = iVar7 + 0x30000;
  *(int *)(iVar7 + 0x3201c) = *(int *)(iVar7 + 0x3201c) + 1;
  iVar3 = *(int *)(iVar7 + 0x3201c) * 0x18 + iVar7;
  uVar4 = *(undefined8 *)(iVar7 + 0x3200c);
  uVar5 = *(undefined8 *)(iVar7 + 0x32014);
  *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar7 + 0x32004);
  *(undefined8 *)(iVar3 + 0x32028) = uVar4;
  *(undefined8 *)(iVar3 + 0x32030) = uVar5;
  iVar3 = *(int *)(iVar7 + 0x3201c);
  iVar1 = *(int *)(iVar7 + 0x3201c);
  iVar2 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x2080) = 0;
  *(undefined4 *)(iVar6 + iVar3 * 4 + 0x2090) = 0;
  *(int *)(iVar6 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar7 + 0x32020);
  iVar3 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar7 + 0x320b0 + *(int *)(iVar7 + 0x3201c) * 4) = 0;
  FUN_0025a60c(iVar7 + iVar3 * 8 + 0x320c0,0,8);
  iVar3 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x20f0) = 0;
  iVar1 = *(int *)(iVar7 + 0x3201c);
  iVar2 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x2100) = 0;
  *(undefined4 *)(iVar6 + iVar2 * 0x10 + 0x2124) = 0;
  *(undefined4 *)(iVar6 + iVar1 * 4 + 0x2110) = 0;
  uVar4 = DAT_002c5548;
  iVar1 = *(int *)(iVar7 + 0x3201c);
  *(undefined4 *)(iVar6 + iVar3 * 4 + 0x20e0) = 0;
  *(undefined4 *)(iVar7 + 0x8b6ec) = 0;
  *(undefined4 *)(iVar6 + iVar1 * 0x10 + 0x2120) = 100;
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 0x10 + 0x212c) = 0x32;
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x51d0) = 1;
  *(undefined4 *)(iVar6 + *(int *)(iVar7 + 0x3201c) * 4 + 0x51e0) = 0x70;
  iVar3 = *(int *)(iVar7 + 0x3201c);
  *(int *)(iVar7 + 0x320b0 + *(int *)(iVar7 + 0x3201c) * 4) = iVar7 + 0x8b6ec;
  *(undefined8 *)(iVar7 + iVar3 * 8 + 0x320c0) = uVar4;
  FUN_001f6420(param_1);
  return;
}

