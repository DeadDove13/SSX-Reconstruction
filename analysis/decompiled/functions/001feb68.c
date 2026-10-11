/* Ghidra pseudocode. PS2 address: 001feb68. Not validated source. */

void FUN_001feb68(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  lVar5 = FUN_001f8290();
  iVar3 = DAT_002859d4;
  if ((lVar5 == param_2) && (0x78 < DAT_002859d4 - DAT_002c5628)) {
    iVar9 = (int)param_1;
    iVar8 = iVar9 + 0x30000;
    *(int *)(iVar9 + 0x3201c) = *(int *)(iVar9 + 0x3201c) + 1;
    iVar4 = *(int *)(iVar9 + 0x3201c) * 0x18 + iVar9;
    uVar7 = *(undefined8 *)(iVar9 + 0x3200c);
    uVar6 = *(undefined8 *)(iVar9 + 0x32014);
    *(undefined8 *)(iVar4 + 0x32020) = *(undefined8 *)(iVar9 + 0x32004);
    *(undefined8 *)(iVar4 + 0x32028) = uVar7;
    *(undefined8 *)(iVar4 + 0x32030) = uVar6;
    iVar4 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    iVar2 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x2080) = 0;
    *(undefined4 *)(iVar8 + iVar4 * 4 + 0x2090) = 0;
    *(int *)(iVar8 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar9 + 0x32020);
    iVar4 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x320b0 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    FUN_0025a60c(iVar9 + iVar4 * 8 + 0x320c0,0,8);
    iVar4 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x20e0) = 0;
    *(undefined4 *)(iVar8 + iVar4 * 4 + 0x20f0) = 0;
    iVar4 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x2100) = 0;
    *(undefined4 *)(iVar8 + iVar1 * 0x10 + 0x2124) = 0;
    *(undefined4 *)(iVar8 + iVar4 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51d0) = 1;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51e0) = 0x5b;
    *(int *)(iVar9 + 0x320b0 + *(int *)(iVar9 + 0x3201c) * 4) = iVar9 + 0x8b6e4;
    FUN_001f6420(param_1);
    DAT_002c5628 = iVar3;
    FUN_001f2550(0x40000000,param_1,param_3);
    return;
  }
  return;
}

