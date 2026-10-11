/* Ghidra pseudocode. PS2 address: 0015bbe0. Not validated source. */

void FUN_0015bbe0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0x27fea0) {
    FUN_0015bbe0();
  }
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0xa4c) = param_2;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar4 = iVar4 + 1) {
    iVar1 = FUN_00189b78(DAT_002859e4,iVar4);
    if (iVar1 != *(int *)(iVar5 + 0xa4c)) {
      uVar2 = FUN_00189b78(DAT_002859e4,iVar4);
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar5 + iVar3 * 0x20 + 0xa4c) = uVar2;
    }
  }
  return;
}

