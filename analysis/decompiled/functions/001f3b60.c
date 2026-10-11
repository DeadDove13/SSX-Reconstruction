/* Ghidra pseudocode. PS2 address: 001f3b60. Not validated source. */

void FUN_001f3b60(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x351f4) != 0) {
    FUN_00235ff0(*(undefined4 *)(iVar3 + 0x351f0));
    iVar1 = *(int *)(iVar3 + 0x35308);
    uVar2 = 0xffffffff;
    if (*(int *)(iVar3 + 0x35304) != iVar1) {
      uVar2 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar3 + 0x35300));
      *(int *)(iVar3 + 0x35308) = iVar1 + 1;
      if (*(int *)(iVar3 + 0x352fc) <= iVar1 + 1) {
        *(undefined4 *)(iVar3 + 0x35308) = 0;
      }
    }
    FUN_001f4ae8(param_1,uVar2);
    iVar1 = *(int *)(iVar3 + 0x35318) + 1;
    if ((*(int *)(iVar3 + 0x35314) != *(int *)(iVar3 + 0x35318)) &&
       (*(int *)(iVar3 + 0x35318) = iVar1, *(int *)(iVar3 + 0x3530c) <= iVar1)) {
      *(undefined4 *)(iVar3 + 0x35318) = 0;
    }
    iVar1 = *(int *)(iVar3 + 0x35328) + 1;
    if ((*(int *)(iVar3 + 0x35324) != *(int *)(iVar3 + 0x35328)) &&
       (*(int *)(iVar3 + 0x35328) = iVar1, *(int *)(iVar3 + 0x3531c) <= iVar1)) {
      *(undefined4 *)(iVar3 + 0x35328) = 0;
    }
    iVar1 = *(int *)(iVar3 + 0x35338) + 1;
    if ((*(int *)(iVar3 + 0x35334) != *(int *)(iVar3 + 0x35338)) &&
       (*(int *)(iVar3 + 0x35338) = iVar1, *(int *)(iVar3 + 0x3532c) <= iVar1)) {
      *(undefined4 *)(iVar3 + 0x35338) = 0;
    }
    *(undefined4 *)(iVar3 + 0x351f4) = 0;
    FUN_001f3508(param_1);
    return;
  }
  return;
}

