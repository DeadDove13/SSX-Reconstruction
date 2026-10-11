/* Ghidra pseudocode. PS2 address: 00201448. Not validated source. */

void FUN_00201448(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar5 = FUN_002042b8();
  if ((lVar5 == 0) && (*(int *)(param_2 + 0x340) == 1)) {
    iVar9 = 0x7a;
    FUN_00205878(param_1,DAT_002c5570);
    if (DAT_002c3948 < *(float *)(param_2 + 0x1c)) {
      iVar9 = 0x78;
    }
    else if (DAT_002c394c < *(float *)(param_2 + 0x1c)) {
      iVar9 = 0x79;
    }
    iVar10 = (int)param_1;
    if (*(int *)(iVar10 + 0x8bb74) == 0) {
      iVar8 = iVar10 + 0x30000;
      *(int *)(iVar10 + 0x3201c) = *(int *)(iVar10 + 0x3201c) + 1;
      iVar3 = *(int *)(iVar10 + 0x3201c) * 0x18 + iVar10;
      uVar7 = *(undefined8 *)(iVar10 + 0x3200c);
      uVar6 = *(undefined8 *)(iVar10 + 0x32014);
      *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar10 + 0x32004);
      *(undefined8 *)(iVar3 + 0x32028) = uVar7;
      *(undefined8 *)(iVar3 + 0x32030) = uVar6;
      iVar3 = *(int *)(iVar10 + 0x3201c);
      iVar1 = *(int *)(iVar10 + 0x3201c);
      iVar2 = *(int *)(iVar10 + 0x3201c);
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2080) = 0;
      *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2090) = 0;
      *(int *)(iVar8 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar10 + 0x32020);
      iVar3 = *(int *)(iVar10 + 0x3201c);
      *(undefined4 *)(iVar10 + 0x320b0 + *(int *)(iVar10 + 0x3201c) * 4) = 0;
      FUN_0025a60c(iVar10 + iVar3 * 8 + 0x320c0,0,8);
      iVar3 = *(int *)(iVar10 + 0x3201c);
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20e0) = 0;
      *(undefined4 *)(iVar8 + iVar3 * 4 + 0x20f0) = 0;
      iVar3 = *(int *)(iVar10 + 0x3201c);
      iVar1 = *(int *)(iVar10 + 0x3201c);
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2100) = 0;
      *(undefined4 *)(iVar8 + iVar1 * 0x10 + 0x2124) = 0;
      *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2110) = 0;
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2120) = 100;
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x212c) = 0x32;
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x51d0) = 1;
      *(int *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x51e0) = iVar9;
      *(int *)(iVar10 + 0x320b0 + *(int *)(iVar10 + 0x3201c) * 4) = iVar10 + 0x8b6e4;
      uVar4 = FUN_001f6420(param_1);
      *(undefined4 *)(iVar10 + 0x8bb70) = uVar4;
    }
    if (param_3 != 0) {
      iVar8 = iVar10 + 0x30000;
      *(int *)(iVar10 + 0x3201c) = *(int *)(iVar10 + 0x3201c) + 1;
      iVar3 = *(int *)(iVar10 + 0x3201c) * 0x18 + iVar10;
      uVar7 = *(undefined8 *)(iVar10 + 0x3200c);
      uVar6 = *(undefined8 *)(iVar10 + 0x32014);
      *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar10 + 0x32004);
      *(undefined8 *)(iVar3 + 0x32028) = uVar7;
      *(undefined8 *)(iVar3 + 0x32030) = uVar6;
      iVar3 = *(int *)(iVar10 + 0x3201c);
      iVar1 = *(int *)(iVar10 + 0x3201c);
      iVar2 = *(int *)(iVar10 + 0x3201c);
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2080) = 0;
      *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2090) = 0;
      *(int *)(iVar8 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar10 + 0x32020);
      iVar3 = *(int *)(iVar10 + 0x3201c);
      *(undefined4 *)(iVar10 + 0x320b0 + *(int *)(iVar10 + 0x3201c) * 4) = 0;
      FUN_0025a60c(iVar10 + iVar3 * 8 + 0x320c0,0,8);
      iVar3 = *(int *)(iVar10 + 0x3201c);
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20e0) = 0;
      *(undefined4 *)(iVar8 + iVar3 * 4 + 0x20f0) = 0;
      iVar3 = *(int *)(iVar10 + 0x3201c);
      iVar1 = *(int *)(iVar10 + 0x3201c);
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2100) = 0;
      *(undefined4 *)(iVar8 + iVar1 * 0x10 + 0x2124) = 0;
      *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2110) = 0;
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2120) = 100;
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x212c) = 0x32;
      *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x51d0) = 1;
      *(int *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x51e0) = iVar9 + -0x30;
      *(int *)(iVar10 + 0x320b0 + *(int *)(iVar10 + 0x3201c) * 4) = iVar10 + 0x8b6e4;
      FUN_001f6420(param_1);
    }
    *(int *)(iVar10 + 0x8bb74) = *(int *)(iVar10 + 0x8bb74) + 1;
  }
  return;
}

