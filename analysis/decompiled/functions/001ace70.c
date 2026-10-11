/* Ghidra pseudocode. PS2 address: 001ace70. Not validated source. */

void FUN_001ace70(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar3;
  
  iVar8 = (int)param_1;
  uVar5 = FUN_001a94b0(*(undefined4 *)(iVar8 + 0x174),0xffffffffffffffff);
  if ((uVar5 & 0x120) != 0) {
    FUN_001a94a0(*(undefined4 *)(iVar8 + 0x174));
    FUN_001acb18(param_1);
    return;
  }
  if ((uVar5 & 0x20001) != 0) {
    FUN_001a9498(*(undefined4 *)(iVar8 + 0x174));
    iVar4 = *(int *)(iVar8 + 0x194) + -1;
    *(int *)(iVar8 + 0x194) = iVar4;
    if (-1 < iVar4) {
      return;
    }
    *(int *)(iVar8 + 0x194) = *(int *)(iVar8 + 0x198) + -1;
    return;
  }
  if ((uVar5 & 0x40002) != 0) {
    FUN_001a9498(*(undefined4 *)(iVar8 + 0x174));
    iVar4 = *(int *)(iVar8 + 0x194) + 1;
    *(int *)(iVar8 + 0x194) = iVar4;
    if (iVar4 != *(int *)(iVar8 + 0x198)) {
      return;
    }
    *(undefined4 *)(iVar8 + 0x194) = 0;
    return;
  }
  if ((uVar5 & 0x800) == 0) {
    return;
  }
  FUN_001a94a8(*(undefined4 *)(iVar8 + 0x174));
  iVar4 = *(int *)(*(int *)(iVar8 + 0x194) * 0x18 + iVar8 + 0x19c);
  if (iVar4 == 3) {
    uVar1 = *(undefined4 *)(iVar8 + 0x174);
    *(undefined4 *)(iVar8 + 0x3fc) = 0;
    *(undefined4 *)(iVar8 + 0x178) = 0;
  }
  else {
    if (iVar4 < 4) {
      if (iVar4 != 1) {
        return;
      }
      FUN_001acb18(param_1);
      return;
    }
    if (iVar4 != 4) {
      if (iVar4 != 5) {
        return;
      }
      FUN_001ac988(param_1,1);
      return;
    }
    *(undefined4 *)(iVar8 + 0x3fc) = 1;
    lVar6 = FUN_00152f20(0x27a598);
    if (lVar6 != 0) {
      *(undefined4 *)(iVar8 + 0x178) = 1;
      uVar1 = *(undefined4 *)(iVar8 + 0x174);
      uVar2 = DAT_002c5228;
      uVar3 = DAT_002c521c;
      uVar7 = DAT_002c5220;
      goto LAB_001ad020;
    }
    uVar1 = *(undefined4 *)(iVar8 + 0x174);
    *(undefined4 *)(iVar8 + 0x178) = 0;
  }
  uVar7 = 0;
  uVar2 = DAT_002c522c;
  uVar3 = DAT_002c5220;
LAB_001ad020:
  FUN_001a9e20(uVar1,uVar2,0,DAT_002c5224,uVar7,uVar3);
  return;
}

