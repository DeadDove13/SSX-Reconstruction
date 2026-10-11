/* Ghidra pseudocode. PS2 address: 00202518. Not validated source. */

undefined8 FUN_00202518(undefined8 param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  sVar1 = *(short *)(param_2 + 0x38);
  iVar11 = (int)param_1;
  if (sVar1 < 0x80) {
    sVar2 = *(short *)(param_2 + 0x3a);
    iVar10 = iVar11 + 0x30000;
    iVar9 = iVar11 + 0x320a0;
    *(int *)(iVar11 + 0x3201c) = *(int *)(iVar11 + 0x3201c) + 1;
    iVar7 = *(int *)(iVar11 + 0x3201c) * 0x18 + iVar11;
    uVar6 = *(undefined8 *)(iVar11 + 0x3200c);
    uVar5 = *(undefined8 *)(iVar11 + 0x32014);
    *(undefined8 *)(iVar7 + 0x32020) = *(undefined8 *)(iVar11 + 0x32004);
    *(undefined8 *)(iVar7 + 0x32028) = uVar6;
    *(undefined8 *)(iVar7 + 0x32030) = uVar5;
    iVar7 = *(int *)(iVar11 + 0x3201c);
    iVar3 = *(int *)(iVar11 + 0x3201c);
    iVar8 = *(int *)(iVar11 + 0x3201c);
    *(undefined4 *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2080) = 0;
    *(undefined4 *)(iVar10 + iVar7 * 4 + 0x2090) = 0;
    *(int *)(iVar9 + iVar3 * 4) = (int)*(char *)(iVar8 * 0x18 + iVar11 + 0x32020);
    iVar7 = *(int *)(iVar11 + 0x3201c);
    *(undefined4 *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4 + 0x20b0) = 0;
    FUN_0025a60c(iVar11 + iVar7 * 8 + 0x320c0,0,8);
    iVar7 = *(int *)(iVar11 + 0x3201c);
    *(undefined4 *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4 + 0x20e0) = 0;
    *(undefined4 *)(iVar10 + iVar7 * 4 + 0x20f0) = 0;
    iVar7 = *(int *)(iVar11 + 0x3201c);
    iVar3 = *(int *)(iVar11 + 0x3201c);
    *(undefined4 *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2100) = 0;
    *(undefined4 *)(iVar10 + iVar3 * 0x10 + 0x2124) = 0;
    *(undefined4 *)(iVar10 + iVar7 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    *(int *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4 + 0x51d0) = (int)sVar1;
    *(int *)(iVar10 + *(int *)(iVar11 + 0x3201c) * 4 + 0x51e0) = (int)sVar2;
    *(uint *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4) = (uint)*(byte *)(param_2 + 0x55);
    iVar7 = *(int *)(iVar11 + 0x3201c) * 0x18 + iVar11 + 0x30000;
    if ((0x7e < *(int *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4)) ||
       (uVar4 = 0, -1 < *(int *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4))) {
      if (*(int *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4) < 0x7f) {
        uVar4 = *(undefined1 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4);
      }
      else {
        uVar4 = 0x7f;
      }
    }
LAB_00202a5c:
    *(undefined1 *)(iVar7 + 0x2020) = uVar4;
    if (*(char *)(param_2 + 0x58) == '\x01') {
      iVar7 = *(int *)(iVar11 + 0x3201c);
      *(int *)(iVar11 + 0x30000 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2080) = param_2;
      *(undefined1 *)(iVar7 * 0x18 + iVar11 + 0x32023) = 1;
      *(float *)(iVar11 + 0x30000 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2100) =
           *(float *)(param_2 + 0x50) / 100.0;
    }
    *(int *)(iVar11 + *(int *)(iVar11 + 0x3201c) * 4 + 0x320b0) = iVar11 + 0x8b6e4;
    uVar5 = FUN_001f6420(param_1);
  }
  else {
    iVar7 = sVar1 + -0x84;
    if (*(int *)(iVar11 + 0x8baf8 + iVar7 * 4) == 0) {
      iVar3 = *(int *)(*(int *)(iVar11 + 0x351c4) + 0x70);
      if (iVar3 < 0) goto LAB_002025c4;
      if (iVar3 < 2) {
        FUN_002023f8(param_1);
        FUN_001f4ae8(param_1,4);
        goto LAB_002025c4;
      }
      if (iVar3 != 2) goto LAB_002025c4;
    }
    else {
LAB_002025c4:
      iVar8 = iVar11 + 0x30000;
      iVar3 = *(int *)(*(int *)(iVar11 + 0x351c4) + 0x70);
      if (iVar3 == 1) {
        sVar1 = *(short *)(param_2 + 0x3a);
        *(int *)(iVar11 + 0x3201c) = *(int *)(iVar11 + 0x3201c) + 1;
        iVar9 = iVar11 + 0x320a0;
        iVar7 = *(int *)(iVar11 + 0x3201c) * 0x18 + iVar11;
        uVar6 = *(undefined8 *)(iVar11 + 0x3200c);
        uVar5 = *(undefined8 *)(iVar11 + 0x32014);
        *(undefined8 *)(iVar7 + 0x32020) = *(undefined8 *)(iVar11 + 0x32004);
        *(undefined8 *)(iVar7 + 0x32028) = uVar6;
        *(undefined8 *)(iVar7 + 0x32030) = uVar5;
        iVar7 = *(int *)(iVar11 + 0x3201c);
        iVar3 = *(int *)(iVar11 + 0x3201c);
        iVar10 = *(int *)(iVar11 + 0x3201c);
        *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2080) = 0;
        *(undefined4 *)(iVar8 + iVar7 * 4 + 0x2090) = 0;
        *(int *)(iVar9 + iVar3 * 4) = (int)*(char *)(iVar10 * 0x18 + iVar11 + 0x32020);
        iVar7 = *(int *)(iVar11 + 0x3201c);
        *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 4 + 0x20b0) = 0;
        FUN_0025a60c(iVar11 + iVar7 * 8 + 0x320c0,0,8);
        iVar7 = *(int *)(iVar11 + 0x3201c);
        *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 4 + 0x20e0) = 0;
        *(undefined4 *)(iVar8 + iVar7 * 4 + 0x20f0) = 0;
        iVar7 = *(int *)(iVar11 + 0x3201c);
        iVar3 = *(int *)(iVar11 + 0x3201c);
        *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 4 + 0x2100) = 0;
        *(undefined4 *)(iVar8 + iVar3 * 0x10 + 0x2124) = 0;
        *(undefined4 *)(iVar8 + iVar7 * 4 + 0x2110) = 0;
        *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x2120) = 100;
        *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
        *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 0x10 + 0x212c) = 0x32;
        *(undefined4 *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 4 + 0x51d0) = 4;
        *(int *)(iVar8 + *(int *)(iVar11 + 0x3201c) * 4 + 0x51e0) = (int)sVar1;
        *(uint *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4) = (uint)*(byte *)(param_2 + 0x55);
        iVar7 = *(int *)(iVar11 + 0x3201c) * 0x18 + iVar11 + 0x30000;
        if ((0x7e < *(int *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4)) ||
           (uVar4 = 0, -1 < *(int *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4))) {
          if (*(int *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4) < 0x7f) {
            uVar4 = *(undefined1 *)(iVar9 + *(int *)(iVar11 + 0x3201c) * 4);
          }
          else {
            uVar4 = 0x7f;
          }
        }
        goto LAB_00202a5c;
      }
      if (iVar3 < 2) {
        if (iVar3 != 0) {
          return 0xffffffffffffffff;
        }
        *(undefined4 *)(iVar11 + 0x8baf8 + iVar7 * 4) = 1;
        FUN_001f3640(param_1,iVar11 + iVar7 * 0x40 + 0x8b6f8,4,iVar11 + 0x8bb78,100000);
      }
    }
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}

