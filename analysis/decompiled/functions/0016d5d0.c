/* Ghidra pseudocode. PS2 address: 0016d5d0. Not validated source. */

void FUN_0016d5d0(undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined1 auStack_1510 [5152];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  if (param_4 != 0) {
    FUN_0019aa08(auStack_1510);
    bVar2 = false;
    FUN_0019ae30(auStack_1510);
    iVar10 = (int)param_3;
    FUN_0019af18(auStack_1510,*(int *)(iVar10 + 0xb3c) + 0x400);
    FUN_0019af40((float)param_5,(float)param_6,(float)param_7,(float)param_8,auStack_1510);
    FUN_0019b0b8(param_1,param_2,auStack_1510);
    if (param_9 != 0) {
      uStack_c0 = DAT_002c27f4;
      uStack_b4 = 0x3f800000;
      uStack_bc = 0x3f800000;
      uStack_b8 = 0x3f800000;
      uStack_e0 = CONCAT44(0x3f800000,DAT_002c27f4);
      uStack_d8 = 0x3f8000003f800000;
    }
    piVar11 = (int *)param_4;
    iVar4 = 0;
    iVar5 = *piVar11;
    iVar3 = 0;
    while (iVar5 != -999) {
      bVar1 = false;
      iVar9 = iVar3;
      switch(*(undefined4 *)(iVar4 + (int)piVar11)) {
      case 0xfffffff5:
        iVar9 = iVar3 + 1;
        iVar5 = (**(code **)(*(int *)(iVar10 + 4) + 0x24))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x20));
        bVar1 = piVar11[iVar9] != iVar5;
        break;
      case 0xfffffff6:
        uStack_f0 = 0;
        uStack_ec = 0;
        break;
      case 0xfffffff7:
        uStack_ec = 0;
        uStack_f0 = 1;
        break;
      case 0xfffffff8:
        uStack_f0 = 0;
        uStack_ec = 1;
        break;
      case 0xfffffff9:
        bVar2 = true;
        uStack_c8 = 0x41a00000;
      case 0xfffffffa:
        iVar9 = iVar3 + 1;
        iVar5 = FUN_0016f348(param_3,*(undefined4 *)(*(int *)(iVar10 + 0xb3c) + 0x46c));
        if (iVar5 != piVar11[iVar9]) {
          bVar1 = true;
          break;
        }
        lVar6 = (**(code **)(*(int *)(iVar10 + 4) + 0x2c))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x28));
        if (lVar6 != 0) {
          bVar1 = true;
          break;
        }
        iVar9 = iVar3 + 2;
        goto LAB_0016d8ec;
      case 0xfffffffb:
        bVar2 = true;
        uStack_c8 = 0x41a00000;
      case 0xfffffffc:
        iVar9 = iVar3 + 1;
        iVar5 = FUN_0016f348(param_3,*(undefined4 *)(*(int *)(iVar10 + 0xb3c) + 0x46c));
        if (iVar5 != piVar11[iVar9]) {
          bVar1 = true;
          break;
        }
        lVar6 = (**(code **)(*(int *)(iVar10 + 4) + 0x2c))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x28));
        if (lVar6 == 0) {
          bVar1 = true;
          break;
        }
        iVar9 = iVar3 + 2;
        goto LAB_0016d8ec;
      case 0xfffffffd:
        iVar5 = FUN_0016f348(param_3,*(undefined4 *)(*(int *)(iVar10 + 0xb3c) + 0x46c));
        bVar1 = iVar5 != piVar11[iVar3 + 1];
        iVar9 = iVar3 + 1;
        break;
      case 0xfffffffe:
        iVar9 = iVar3 + 2;
        if (piVar11[iVar3 + 1] != -999) {
          if (piVar11[iVar9] == -999) break;
          FUN_0019b0b8((float)piVar11[iVar3 + 1] * 0.00390625,(float)piVar11[iVar9] * 0.00390625,
                       auStack_1510);
          iVar9 = iVar3 + 3;
        }
        goto LAB_0016d8ec;
      default:
        uVar7 = FUN_0019a998();
        FUN_0019af58(auStack_1510,uVar7);
      }
      iVar9 = iVar9 + 1;
LAB_0016d8ec:
      if (bVar1) {
        piVar8 = piVar11 + iVar9;
        do {
          iVar5 = *piVar8;
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar5 != -999);
      }
      iVar4 = iVar9 << 2;
      iVar3 = iVar9;
      iVar5 = piVar11[iVar9];
    }
    FUN_0019b0e0(auStack_1510);
    if (bVar2) {
      FUN_0019ad50(auStack_1510);
    }
    else {
      FUN_0019ac28(auStack_1510);
    }
    uStack_c8 = 0;
    FUN_0019aa30(auStack_1510,2);
  }
  return;
}

