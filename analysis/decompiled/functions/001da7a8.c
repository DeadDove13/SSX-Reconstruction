/* Ghidra pseudocode. PS2 address: 001da7a8. Not validated source. */

void FUN_001da7a8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x34);
  *(int *)(iVar4 + 0x34) = iVar1 + -1;
  if ((iVar1 < 1) && (lVar2 = FUN_00211c98(*(undefined4 *)(iVar4 + 0x16c)), lVar2 == 0)) {
    if (*(int *)(iVar4 + 8) != 0) {
      FUN_001d9670(param_1,7);
      return;
    }
    iVar1 = *(int *)(iVar4 + 0x16c);
    if (*(int *)(iVar4 + 4) == 0) {
      lVar2 = FUN_00211e08(iVar1,*(undefined4 *)(iVar1 + 0xc));
      if (lVar2 == 0) {
        FUN_001d9670(param_1,4);
        return;
      }
      lVar2 = FUN_00211dc0(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
      if (lVar2 != 0) {
        FUN_001d9670(param_1,4);
        return;
      }
      FUN_001d9670(param_1,0x1a);
    }
    else {
      lVar2 = FUN_00211e08(iVar1,*(undefined4 *)(iVar1 + 0xc));
      if (lVar2 == 0) {
        FUN_001d9670(param_1,4);
        return;
      }
      lVar2 = FUN_00211dc0(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
      if (lVar2 != 0) {
        FUN_001d9670(param_1,4);
        return;
      }
      lVar2 = FUN_00211030(*(undefined4 *)(iVar4 + 0x16c));
      if (lVar2 == 0) {
        iVar1 = *(int *)(iVar4 + 0x16c);
        iVar3 = *(int *)(iVar1 + 0x24) + 0x3ff;
        iVar4 = *(int *)(iVar1 + 0x24) + 0x7fe;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
        iVar1 = FUN_00211de8(iVar1,*(undefined4 *)(iVar1 + 0xc));
        if (iVar1 < (iVar4 >> 10) + 0x8a) {
          FUN_001d9670(param_1,0x14);
          return;
        }
      }
      FUN_001d9670(param_1,8);
    }
  }
  return;
}

