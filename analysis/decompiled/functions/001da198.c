/* Ghidra pseudocode. PS2 address: 001da198. Not validated source. */

void FUN_001da198(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  lVar2 = FUN_00211c98(*(undefined4 *)(iVar3 + 0x16c));
  if (lVar2 != 0) {
    return;
  }
  lVar2 = FUN_00212088(*(undefined4 *)(iVar3 + 0x16c));
  iVar1 = *(int *)(iVar3 + 0x16c);
  if (lVar2 == 0) {
    lVar2 = FUN_00211dc0(iVar1,*(undefined4 *)(iVar1 + 0xc));
    if (lVar2 != 0) {
      FUN_001d9670(param_1,5);
      return;
    }
    FUN_001d9670(param_1,4);
    return;
  }
  if (*(int *)(iVar1 + 0x58) == 0) {
    iVar1 = *(int *)(iVar3 + 4);
  }
  else {
    lVar2 = FUN_00211e08(iVar1,*(undefined4 *)(iVar1 + 0xc));
    if (lVar2 == 0) {
      FUN_00210f40(*(int *)(iVar3 + 0x16c),*(int *)(*(int *)(iVar3 + 0x16c) + 0xc) == 0);
      iVar1 = *(int *)(iVar3 + 4);
    }
    else {
      iVar1 = *(int *)(iVar3 + 4);
    }
  }
  iVar3 = *(int *)(iVar3 + 0x16c);
  if (iVar1 != 0) {
    lVar2 = FUN_00211ec0(iVar3,*(undefined4 *)(iVar3 + 0xc));
    if (lVar2 != 0) {
      FUN_001d9670(param_1,7);
      return;
    }
    FUN_001d9670(param_1,8);
    return;
  }
  lVar2 = FUN_00211ec0(iVar3,*(undefined4 *)(iVar3 + 0xc));
  if (lVar2 != 0) {
    FUN_001d9670(param_1,7);
    return;
  }
  FUN_001d9670(param_1,0x1a);
  return;
}

