/* Ghidra pseudocode. PS2 address: 001fe538. Not validated source. */

void FUN_001fe538(undefined8 param_1,undefined8 param_2)

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
  
  lVar5 = FUN_001fd470();
  if (lVar5 == 0) {
    iVar10 = (int)param_1;
    iVar8 = iVar10 + 0x30000;
    *(int *)(iVar10 + 0x3201c) = *(int *)(iVar10 + 0x3201c) + 1;
    iVar9 = (int)param_2 + 0xc0;
    iVar3 = *(int *)(iVar10 + 0x3201c) * 0x18 + iVar10;
    uVar7 = *(undefined8 *)(iVar10 + 0x3200c);
    uVar6 = *(undefined8 *)(iVar10 + 0x32014);
    *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar10 + 0x32004);
    *(undefined8 *)(iVar3 + 0x32028) = uVar7;
    *(undefined8 *)(iVar3 + 0x32030) = uVar6;
    iVar3 = *(int *)(iVar10 + 0x3201c);
    iVar1 = *(int *)(iVar10 + 0x3201c);
    iVar2 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar10 + 0x32080 + *(int *)(iVar10 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2090) = 0;
    *(int *)(iVar8 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar10 + 0x32020);
    iVar3 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar10 + 0x320b0 + *(int *)(iVar10 + 0x3201c) * 4) = 0;
    FUN_0025a60c(iVar10 + iVar3 * 8 + 0x320c0,0,8);
    iVar3 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar10 + 0x320f0 + *(int *)(iVar10 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x20e0) = 0;
    iVar3 = *(int *)(iVar10 + 0x3201c);
    iVar1 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar10 + 0x32100 + *(int *)(iVar10 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar8 + iVar1 * 0x10 + 0x2124) = 0;
    iVar1 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar8 + iVar3 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar8 + iVar1 * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x51d0) = 1;
    *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x51e0) = 0x51;
    iVar3 = *(int *)(iVar10 + 0x3201c);
    *(int *)(iVar10 + 0x320b0 + *(int *)(iVar10 + 0x3201c) * 4) = iVar10 + 0x8b6e4;
    *(undefined4 *)(iVar10 + 0x32100 + iVar3 * 4) = 0x42340000;
    uVar4 = FUN_001f8d30(param_1,iVar9);
    *(undefined4 *)(iVar10 + 0x320f0 + *(int *)(iVar10 + 0x3201c) * 4) = uVar4;
    iVar3 = *(int *)(iVar10 + 0x3201c);
    *(int *)(iVar10 + 0x32080 + *(int *)(iVar10 + 0x3201c) * 4) = iVar9;
    *(undefined1 *)(iVar3 * 0x18 + iVar10 + 0x32023) = 1;
    uVar6 = FUN_001f6420(param_1);
    FUN_001fd948(param_1,param_2,uVar6,*(int *)(iVar10 + 0x32160) + 0x32,0);
    return;
  }
  return;
}

