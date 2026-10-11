/* Ghidra pseudocode. PS2 address: 001fe1a8. Not validated source. */

void FUN_001fe1a8(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = (int)param_2;
  lVar5 = FUN_001f8bc0(0x42340000,param_1,iVar12 + 0xc0);
  if (((lVar5 != 0) && (lVar5 = FUN_001f8c70(0x42340000,param_1,iVar12 + 0xc0), lVar5 != 0)) &&
     (lVar5 = FUN_001fd470(param_1,param_2), lVar5 == 0)) {
    iVar10 = (int)param_1;
    iVar9 = iVar10 + 0x30000;
    iVar11 = iVar10 + 0x320a0;
    uVar3 = FUN_001f7358(3,(int)(*(float *)(iVar12 + 0xe0) + *(float *)(param_3 + 0xe0)));
    *(int *)(iVar10 + 0x3201c) = *(int *)(iVar10 + 0x3201c) + 1;
    iVar4 = *(int *)(iVar10 + 0x3201c) * 0x18 + iVar10;
    uVar6 = *(undefined8 *)(iVar10 + 0x3200c);
    uVar7 = *(undefined8 *)(iVar10 + 0x32014);
    *(undefined8 *)(iVar4 + 0x32020) = *(undefined8 *)(iVar10 + 0x32004);
    *(undefined8 *)(iVar4 + 0x32028) = uVar6;
    *(undefined8 *)(iVar4 + 0x32030) = uVar7;
    iVar4 = *(int *)(iVar10 + 0x3201c);
    iVar8 = *(int *)(iVar10 + 0x3201c);
    iVar1 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2080) = 0;
    *(undefined4 *)(iVar9 + iVar4 * 4 + 0x2090) = 0;
    *(int *)(iVar11 + iVar8 * 4) = (int)*(char *)(iVar1 * 0x18 + iVar10 + 0x32020);
    iVar4 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20b0) = 0;
    FUN_0025a60c(iVar10 + iVar4 * 8 + 0x320c0,0,8);
    iVar4 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20e0) = 0;
    *(undefined4 *)(iVar9 + iVar4 * 4 + 0x20f0) = 0;
    iVar4 = *(int *)(iVar10 + 0x3201c);
    iVar8 = *(int *)(iVar10 + 0x3201c);
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2100) = 0;
    *(undefined4 *)(iVar9 + iVar8 * 0x10 + 0x2124) = 0;
    *(undefined4 *)(iVar9 + iVar4 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 4 + 0x51d0) = 1;
    *(undefined4 *)(iVar9 + *(int *)(iVar10 + 0x3201c) * 4 + 0x51e0) = 0x52;
    *(undefined4 *)(iVar11 + *(int *)(iVar10 + 0x3201c) * 4) = uVar3;
    if ((0x7e < *(int *)(iVar11 + *(int *)(iVar10 + 0x3201c) * 4)) ||
       (uVar2 = 0, -1 < *(int *)(iVar11 + *(int *)(iVar10 + 0x3201c) * 4))) {
      if (*(int *)(iVar11 + *(int *)(iVar10 + 0x3201c) * 4) < 0x7f) {
        uVar2 = *(undefined1 *)(iVar11 + *(int *)(iVar10 + 0x3201c) * 4);
      }
      else {
        uVar2 = 0x7f;
      }
    }
    *(undefined1 *)(*(int *)(iVar10 + 0x3201c) * 0x18 + iVar10 + 0x32020) = uVar2;
    iVar8 = iVar10 + 0x30000;
    iVar4 = *(int *)(iVar10 + 0x3201c);
    *(int *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20b0) = iVar10 + 0x8b6e4;
    *(undefined4 *)(iVar8 + iVar4 * 4 + 0x2100) = 0x42340000;
    uVar3 = FUN_001f8d30(param_1,iVar12 + 0xc0);
    *(undefined4 *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x20f0) = uVar3;
    iVar4 = *(int *)(iVar10 + 0x3201c);
    *(int *)(iVar8 + *(int *)(iVar10 + 0x3201c) * 4 + 0x2080) = iVar12 + 0xc0;
    *(undefined1 *)(iVar4 * 0x18 + iVar10 + 0x32023) = 1;
    uVar6 = FUN_001f6420(param_1);
    FUN_001fd948(param_1,param_2,uVar6,*(int *)(iVar10 + 0x32160) + 0x32,0);
  }
  return;
}

