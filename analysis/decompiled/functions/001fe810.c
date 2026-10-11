/* Ghidra pseudocode. PS2 address: 001fe810. Not validated source. */

void FUN_001fe810(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  uStack_b0 = param_3;
  lVar4 = FUN_001fd470();
  if (lVar4 == 0) {
    iVar9 = (int)param_1;
    iVar8 = iVar9 + 0x30000;
    iVar5 = (int)param_2;
    uStack_c0 = *(undefined4 *)(iVar5 + 0x30);
    uStack_bc = *(undefined4 *)(iVar5 + 0x34);
    uStack_b8 = *(undefined4 *)(iVar5 + 0x38);
    *(int *)(iVar9 + 0x3201c) = *(int *)(iVar9 + 0x3201c) + 1;
    uStack_b4 = *(undefined4 *)(iVar5 + 0x3c);
    iVar5 = *(int *)(iVar9 + 0x3201c) * 0x18 + iVar9;
    uVar6 = *(undefined8 *)(iVar9 + 0x3200c);
    uVar7 = *(undefined8 *)(iVar9 + 0x32014);
    *(undefined8 *)(iVar5 + 0x32020) = *(undefined8 *)(iVar9 + 0x32004);
    *(undefined8 *)(iVar5 + 0x32028) = uVar6;
    *(undefined8 *)(iVar5 + 0x32030) = uVar7;
    iVar5 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    iVar2 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x32090 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar9 + 0x32080 + iVar5 * 4) = 0;
    *(int *)(iVar8 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar9 + 0x32020);
    iVar5 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x320b0 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    FUN_0025a60c(iVar9 + iVar5 * 8 + 0x320c0,0,8);
    iVar5 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x320f0 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar8 + iVar5 * 4 + 0x20e0) = 0;
    iVar5 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x32100 + *(int *)(iVar9 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar8 + iVar1 * 0x10 + 0x2124) = 0;
    *(undefined4 *)(iVar8 + iVar5 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51d0) = 2;
    *(undefined4 *)(iVar8 + *(int *)(iVar9 + 0x3201c) * 4 + 0x51e0) = uStack_b0;
    iVar5 = *(int *)(iVar9 + 0x3201c);
    iVar1 = *(int *)(iVar9 + 0x3201c);
    *(int *)(iVar9 + 0x320b0 + *(int *)(iVar9 + 0x3201c) * 4) = iVar9 + 0x8b6e4;
    *(undefined4 **)(iVar9 + 0x32080 + iVar5 * 4) = &uStack_c0;
    *(undefined1 *)(iVar1 * 0x18 + iVar9 + 0x32023) = 1;
    iVar5 = *(int *)(iVar9 + 0x3201c);
    *(undefined4 *)(iVar9 + 0x32090 + *(int *)(iVar9 + 0x3201c) * 4) = 1;
    *(undefined4 *)(iVar9 + 0x32100 + iVar5 * 4) = 0x42c80000;
    uVar3 = FUN_001f8d30(param_1,&uStack_c0);
    *(undefined4 *)(iVar9 + 0x320f0 + *(int *)(iVar9 + 0x3201c) * 4) = uVar3;
    uVar6 = FUN_001f6420(param_1);
    FUN_001fd948(param_1,param_2,uVar6,*(int *)(iVar9 + 0x32160) + 0x32,0);
  }
  return;
}

