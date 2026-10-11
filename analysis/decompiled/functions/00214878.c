/* Ghidra pseudocode. PS2 address: 00214878. Not validated source. */

int FUN_00214878(undefined8 param_1,ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar4 = (int)param_2;
  if (param_3 == 0) {
    iVar1 = 0;
    if ((param_2 != 0) && (iVar1 = 0x14, param_2 < 0xfc)) {
      iVar1 = *(int *)(iVar5 + *(int *)(iVar5 + 0x2dcc) * 4 + 0x2564) +
              *(int *)(iVar5 + iVar4 * 4 + 0xd44) * 2 + 3;
    }
  }
  else {
    iVar3 = (int)param_3;
    iVar1 = FUN_00214878(param_1,param_2,iVar3 + -1);
    if (*(int *)(iVar5 + (*(int *)(iVar5 + 0x2dcc) + iVar3) * 4 + 0x100) != 0) {
      if (param_3 == 0) {
        trap(7);
      }
      iVar2 = FUN_00214878(param_1,iVar4 - (iVar4 / iVar3) * iVar3,iVar3 + -1);
      iVar2 = iVar2 + *(int *)(iVar5 + (*(int *)(iVar5 + 0x2dcc) + iVar3) * 4 + 0x2564) *
                      (iVar4 / iVar3);
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
    }
  }
  return iVar1;
}

