/* Ghidra pseudocode. PS2 address: 001da380. Not validated source. */

void FUN_001da380(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  lVar2 = FUN_00211e08(*(int *)(iVar3 + 0x16c),*(undefined4 *)(*(int *)(iVar3 + 0x16c) + 0xc));
  iVar1 = *(int *)(iVar3 + 0x16c);
  if (lVar2 == 0) {
    if (*(int *)(iVar1 + 0x58) == 0) {
      lVar2 = FUN_00211dc0(iVar1,*(undefined4 *)(iVar1 + 0xc));
      if (lVar2 != 0) {
        FUN_001d9670(param_1,5);
        return;
      }
      if (*(int *)(iVar3 + 0x44) != 4) {
        FUN_001d9670(param_1,4);
        return;
      }
    }
    else {
      lVar2 = FUN_00211e08(iVar1,*(int *)(iVar1 + 0xc) == 0);
      iVar1 = *(int *)(iVar3 + 0x16c);
      if (lVar2 != 0) {
        FUN_00210f40(iVar1,*(int *)(iVar1 + 0xc) == 0);
        lVar2 = FUN_00211ec0(*(int *)(iVar3 + 0x16c),*(undefined4 *)(*(int *)(iVar3 + 0x16c) + 0xc))
        ;
        if (lVar2 != 0) {
          FUN_001d9670(param_1,7);
          return;
        }
        if (*(int *)(iVar3 + 4) != 0) {
          FUN_001d9670(param_1,8);
          return;
        }
        FUN_001d9670(param_1,0x1a);
        return;
      }
      lVar2 = FUN_00211dc0(iVar1,*(undefined4 *)(iVar1 + 0xc));
      if (lVar2 != 0) {
        FUN_001d9670(param_1,5);
        return;
      }
      lVar2 = FUN_00211dc0(*(int *)(iVar3 + 0x16c),*(int *)(*(int *)(iVar3 + 0x16c) + 0xc) == 0);
      if (lVar2 != 0) {
        FUN_00210f40(*(int *)(iVar3 + 0x16c),*(int *)(*(int *)(iVar3 + 0x16c) + 0xc) == 0);
        FUN_001d9670(param_1,5);
        return;
      }
      if (*(int *)(iVar3 + 0x44) != 4) {
        FUN_001d9670(param_1,4);
        return;
      }
    }
  }
  else {
    lVar2 = FUN_00211ec0(iVar1,*(undefined4 *)(iVar1 + 0xc));
    if (lVar2 == 0) {
      if (*(int *)(iVar3 + 4) != 0) {
        FUN_001d9670(param_1,8);
        return;
      }
      FUN_001d9670(param_1,0x1a);
      return;
    }
    if (param_2 != 0) {
      FUN_001d9670(param_1,7);
      return;
    }
  }
  return;
}

