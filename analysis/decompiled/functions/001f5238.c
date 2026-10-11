/* Ghidra pseudocode. PS2 address: 001f5238. Not validated source. */

void FUN_001f5238(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  param_1[2] = 1;
  if (*param_1 == 1) {
    iVar7 = param_2 + 0x30000;
    iVar8 = param_2 + 0x320a0;
    *(int *)(param_2 + 0x3201c) = *(int *)(param_2 + 0x3201c) + 1;
    iVar4 = *(int *)(param_2 + 0x3201c) * 0x18 + param_2;
    uVar6 = *(undefined8 *)(param_2 + 0x3200c);
    uVar5 = *(undefined8 *)(param_2 + 0x32014);
    *(undefined8 *)(iVar4 + 0x32020) = *(undefined8 *)(param_2 + 0x32004);
    *(undefined8 *)(iVar4 + 0x32028) = uVar6;
    *(undefined8 *)(iVar4 + 0x32030) = uVar5;
    iVar4 = *(int *)(param_2 + 0x3201c);
    iVar1 = *(int *)(param_2 + 0x3201c);
    iVar2 = *(int *)(param_2 + 0x3201c);
    *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4 + 0x2080) = 0;
    *(undefined4 *)(iVar7 + iVar4 * 4 + 0x2090) = 0;
    *(int *)(iVar8 + iVar1 * 4) = (int)*(char *)(iVar2 * 0x18 + param_2 + 0x32020);
    iVar4 = *(int *)(param_2 + 0x3201c);
    *(undefined4 *)(param_2 + 0x320b0 + *(int *)(param_2 + 0x3201c) * 4) = 0;
    FUN_0025a60c(param_2 + iVar4 * 8 + 0x320c0,0,8);
    iVar4 = *(int *)(param_2 + 0x3201c);
    *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4 + 0x20e0) = 0;
    *(undefined4 *)(iVar7 + iVar4 * 4 + 0x20f0) = 0;
    iVar4 = param_1[0x18];
    iVar1 = *(int *)(param_2 + 0x3201c);
    iVar2 = *(int *)(param_2 + 0x3201c);
    *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4 + 0x2100) = 0;
    *(undefined4 *)(iVar7 + iVar2 * 0x10 + 0x2124) = 0;
    *(undefined4 *)(iVar7 + iVar1 * 4 + 0x2110) = 0;
    *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x3201c) * 0x10 + 0x2120) = 100;
    *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
    *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x3201c) * 0x10 + 0x212c) = 0x32;
    iVar1 = *(int *)(param_2 + 0x3201c);
    *(int *)(param_2 + 0x320b0 + *(int *)(param_2 + 0x3201c) * 4) = iVar4;
    *(undefined4 *)(iVar8 + iVar1 * 4) = 0;
    if ((0x7e < *(int *)(iVar8 + *(int *)(param_2 + 0x3201c) * 4)) ||
       (uVar3 = 0, -1 < *(int *)(iVar8 + *(int *)(param_2 + 0x3201c) * 4))) {
      if (*(int *)(iVar8 + *(int *)(param_2 + 0x3201c) * 4) < 0x7f) {
        uVar3 = *(undefined1 *)(iVar8 + *(int *)(param_2 + 0x3201c) * 4);
      }
      else {
        uVar3 = 0x7f;
      }
    }
    *(undefined1 *)(*(int *)(param_2 + 0x3201c) * 0x18 + param_2 + 0x32020) = uVar3;
    iVar4 = FUN_00225bb0(param_1[3],param_1[4],
                         param_2 + *(int *)(param_2 + 0x3201c) * 0x18 + 0x32020);
    param_1[1] = iVar4;
    *(int *)(param_2 + 0x3201c) = *(int *)(param_2 + 0x3201c) + -1;
  }
  return;
}

