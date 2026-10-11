/* Ghidra pseudocode. PS2 address: 001f7b68. Not validated source. */

undefined8
FUN_001f7b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = FUN_0020a730(param_1,param_2,0,param_3,param_4);
  if (param_5 != 0) {
    iVar10 = (int)param_1;
    iVar9 = iVar10 + 0x30000;
    *(int *)(iVar10 + 0x3201c) = *(int *)(iVar10 + 0x3201c) + 1;
    iVar3 = *(int *)(iVar10 + 0x3201c) * 0x18 + iVar10;
    uVar8 = *(undefined8 *)(iVar10 + 0x3200c);
    uVar7 = *(undefined8 *)(iVar10 + 0x32014);
    *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(iVar10 + 0x32004);
    *(undefined8 *)(iVar3 + 0x32028) = uVar8;
    *(undefined8 *)(iVar3 + 0x32030) = uVar7;
    iVar3 = *(int *)(iVar10 + 0x3201c);
    iVar1 = *(int *)(iVar10 + 0x3201c);
    iVar2 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar10 + 0x32080 + *(int *)(iVar10 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar9 + iVar3 * 4 + 0x2090) = 0;
    *(int *)(iVar9 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + iVar10 + 0x32020);
    iVar3 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20b0) = 0;
    FUN_0025a60c(iVar10 + iVar3 * 8 + 0x320c0,0,8);
    iVar3 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20e0) = 0;
    *(undefined4 *)(iVar10 + 0x320f0 + iVar3 * 4) = 0;
    iVar3 = *(int *)(iVar10 + 0x3201c);
    iVar1 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar10 + 0x32100 + *(int *)(iVar10 + 0x3201c) * 4) = 0;
    *(undefined4 *)(iVar9 + iVar1 * 0x10 + 0x2124) = 0;
    *(undefined4 *)(iVar9 + iVar3 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    iVar3 = *(int *)(iVar10 + 0x3201c);
    *(int *)(iVar10 + 0x32080 + *(int *)(iVar10 + 0x3201c) * 4) = (int)param_5;
    *(undefined1 *)(iVar3 * 0x18 + iVar10 + 0x32023) = 1;
    *(undefined4 *)(iVar10 + 0x32100 + *(int *)(iVar10 + 0x3201c) * 4) = 0x42480000;
    uVar4 = FUN_001f8d30(param_1,param_5);
    *(undefined4 *)(iVar10 + 0x320f0 + *(int *)(iVar10 + 0x3201c) * 4) = uVar4;
    lVar6 = FUN_001f5a20(param_1,uVar5,0x7f,2);
    if (lVar6 != 0) {
      uVar7 = FUN_0020a9d0(param_1,param_2);
      FUN_001f5080(lVar6,uVar7,param_3,param_4);
    }
    *(int *)(iVar10 + 0x3201c) = *(int *)(iVar10 + 0x3201c) + -1;
  }
  return uVar5;
}

