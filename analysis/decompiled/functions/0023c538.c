/* Ghidra pseudocode. PS2 address: 0023c538. Not validated source. */

void FUN_0023c538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_3;
  iVar1 = *(int *)(iVar6 + 0x50);
  if (*(int *)(iVar1 + 0x10) == 1) {
    iVar3 = *(int *)(iVar6 + 0xa8);
    iVar5 = *(int *)(iVar6 + 0xa0);
    bVar2 = *(int *)(iVar1 + 0x58) <= iVar5 + iVar3;
  }
  else {
    iVar3 = FUN_00239028(*(undefined4 *)(iVar6 + 0xa4));
    iVar5 = *(int *)(iVar6 + 0xa0);
    bVar2 = iVar3 < *(int *)(iVar6 + 0xa8);
  }
  *(int *)(iVar6 + 0xa0) = iVar5 + iVar3;
  *(int *)(iVar6 + 0x48) = *(int *)(iVar6 + 0x48) + iVar3;
  lVar4 = FUN_0023c298(param_3);
  if (*(int *)(iVar1 + 4) == 4) {
    FUN_0023c660(param_3,*(undefined4 *)(iVar6 + 0x30));
    return;
  }
  if ((!bVar2) && (lVar4 == 0)) {
    FUN_0023c7f0(param_3,*(undefined4 *)(iVar6 + 0x30));
    return;
  }
  FUN_0023ee58(*(undefined4 *)(iVar6 + 4));
  if (*(int *)(iVar1 + 4) != 4) {
    *(undefined4 *)(iVar1 + 4) = 3;
  }
  FUN_0023ea60(*(undefined4 *)(iVar6 + 4));
  FUN_0023c660(param_3,*(undefined4 *)(iVar6 + 0x30));
  return;
}

