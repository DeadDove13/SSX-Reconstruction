/* Ghidra pseudocode. PS2 address: 001f3508. Not validated source. */

void FUN_001f3508(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if ((*(int *)(iVar4 + 0x351f4) == 0) && (*(int *)(iVar4 + 0x35304) != *(int *)(iVar4 + 0x35308)))
  {
    *(undefined4 *)(iVar4 + 0x351f4) = 1;
    if (*(int *)(iVar4 + 0x35304) == *(int *)(iVar4 + 0x35308)) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0x35308) * 4 + *(int *)(iVar4 + 0x35300));
    }
    FUN_001f4898(param_1,uVar1);
    if (*(int *)(iVar4 + 0x35314) == *(int *)(iVar4 + 0x35318)) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar4 + 0x35318) * 4 + *(int *)(iVar4 + 0x35310));
    }
    if (*(int *)(iVar4 + 0x35324) == *(int *)(iVar4 + 0x35328)) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0x35328) * 4 + *(int *)(iVar4 + 0x35320));
    }
    if (*(int *)(iVar4 + 0x35334) == *(int *)(iVar4 + 0x35338)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x35338) * 4 + *(int *)(iVar4 + 0x35330));
    }
    uVar1 = FUN_00235b58(iVar4 + iVar2 * 0x40 + 0x351fc,uVar1,uVar3);
    *(undefined4 *)(iVar4 + 0x351f0) = uVar1;
  }
  return;
}

