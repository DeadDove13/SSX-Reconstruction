/* Ghidra pseudocode. PS2 address: 001ada48. Not validated source. */

void FUN_001ada48(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  uVar3 = FUN_001a94b0(*(undefined4 *)(iVar7 + 0x174),0xffffffffffffffff);
  uVar4 = FUN_001a95b0(*(undefined4 *)(iVar7 + 0x174),0xffffffffffffffff);
  if ((uVar3 & 0x20) != 0) {
    FUN_001a94a0(*(undefined4 *)(iVar7 + 0x174));
    FUN_001acb18(param_1);
    return;
  }
  if ((uVar3 & 0x100) != 0) {
    FUN_001a94a0(*(undefined4 *)(iVar7 + 0x174));
    iVar1 = *(int *)(iVar7 + 0x3f8);
    while (-1 < iVar1) {
      FUN_001acb18(param_1);
      iVar1 = *(int *)(iVar7 + 0x3f8);
    }
    return;
  }
  if ((uVar4 & 0x18000c) == 0) {
    if ((uVar3 & 0x20001) != 0) {
      FUN_001a9498(*(undefined4 *)(iVar7 + 0x174));
      iVar1 = *(int *)(iVar7 + 0x2cc) + -1;
      *(int *)(iVar7 + 0x2cc) = iVar1;
      if (-1 < iVar1) {
        return;
      }
      *(int *)(iVar7 + 0x2cc) = *(int *)(iVar7 + 0x2d0) + -1;
      return;
    }
    if ((uVar3 & 0x40002) == 0) {
      return;
    }
    FUN_001a9498(*(undefined4 *)(iVar7 + 0x174));
    iVar1 = *(int *)(iVar7 + 0x2cc) + 1;
    *(int *)(iVar7 + 0x2cc) = iVar1;
    if (iVar1 != *(int *)(iVar7 + 0x2d0)) {
      return;
    }
    *(undefined4 *)(iVar7 + 0x2cc) = 0;
    return;
  }
  puVar6 = (undefined4 *)(iVar7 + *(int *)(iVar7 + 0x2cc) * 0x18 + 0x2d4);
  if (puVar6[4] == 0) {
    if ((uVar4 & 0x80004) != 0) {
      if ((int)puVar6[2] < (int)puVar6[3]) {
        puVar6[2] = puVar6[2] + 1;
      }
      goto LAB_001adb94;
    }
    iVar1 = puVar6[2];
    if (0 < iVar1) goto LAB_001adb8c;
    uVar2 = *puVar6;
  }
  else {
    if ((uVar4 & 0x80004) == 0) {
      if ((int)puVar6[2] < 1) {
        iVar1 = puVar6[3];
LAB_001adb8c:
        iVar1 = iVar1 + -1;
      }
      else {
        iVar1 = puVar6[2] + -1;
      }
    }
    else {
      iVar1 = puVar6[2] + 1;
      if (puVar6[3] + -1 <= (int)puVar6[2]) {
        puVar6[2] = 0;
        goto LAB_001adb94;
      }
    }
    puVar6[2] = iVar1;
LAB_001adb94:
    uVar2 = *puVar6;
  }
  switch(uVar2) {
  case 6:
    FUN_00187e10((float)(int)puVar6[2] / 50.0,DAT_002859e4);
  default:
switchD_001adbb8_caseD_d:
    FUN_001a94a8(*(undefined4 *)(iVar7 + 0x174));
    return;
  case 7:
    FUN_00187dd8(DAT_002859e4,puVar6[2]);
    goto switchD_001adbb8_caseD_d;
  case 8:
    FUN_001880a0(DAT_002859e4,puVar6[2] != 0);
    goto switchD_001adbb8_caseD_d;
  case 9:
    if ((uVar4 & 0x80004) == 0) {
      FUN_00207218(DAT_002c56e8);
    }
    else {
      FUN_00207268(DAT_002c56e8);
    }
    FUN_001fcda0(DAT_002c56e8);
    return;
  case 10:
    if ((uVar4 & 0x80004) == 0) {
      FUN_001fae00(DAT_002c56e8);
    }
    else {
      FUN_001fad60(DAT_002c56e8);
    }
    iVar7 = (int)(*(float *)(DAT_002c56e8 + 0x8b6d8) * 50.0);
    uVar5 = 2;
    if (puVar6[2] == iVar7) goto LAB_001add70;
    break;
  case 0xb:
    if ((uVar4 & 0x80004) == 0) {
      FUN_001fae20(DAT_002c56e8);
    }
    else {
      FUN_001fad80(DAT_002c56e8);
    }
    iVar7 = (int)(*(float *)(DAT_002c56e8 + 0x8b6dc) * 50.0);
    uVar5 = 5;
    if (puVar6[2] == iVar7) goto LAB_001add70;
    break;
  case 0xc:
    if ((uVar4 & 0x80004) == 0) {
      FUN_001fae60(DAT_002c56e8);
    }
    else {
      FUN_001fadc0(DAT_002c56e8);
    }
    iVar7 = (int)(*(float *)(DAT_002c56e8 + 0x8b6e0) * 50.0);
    uVar5 = 3;
    if (puVar6[2] == iVar7) goto LAB_001add70;
    break;
  case 0xf:
    if ((uVar4 & 0x80004) == 0) {
      FUN_001fae80(DAT_002c56e8);
    }
    else {
      FUN_001fade0(DAT_002c56e8);
    }
    iVar7 = (int)(*(float *)(DAT_002c56e8 + 0x8b6e4) * 50.0);
    uVar5 = 4;
    if (puVar6[2] == iVar7) goto LAB_001add70;
  }
  FUN_001fb4f0(DAT_002c56e8,uVar5);
LAB_001add70:
  puVar6[2] = iVar7;
  return;
}

