/* Ghidra pseudocode. PS2 address: 00111e98. Not validated source. */

void FUN_00111e98(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar4 + 0x6cf4) + 8);
  switch(*(undefined4 *)(iVar4 + 0x170)) {
  default:
    goto switchD_00111ec4_caseD_0;
  case 1:
    bVar2 = iVar1 - 0x3cU < 3;
    break;
  case 2:
  case 3:
    bVar2 = iVar1 - 0x3aU < 2;
    break;
  case 4:
    iVar3 = 0x44;
    goto LAB_00111ef4;
  case 5:
    bVar2 = iVar1 - 0x42U < 2;
    break;
  case 6:
    iVar3 = 0x45;
LAB_00111ef4:
    if (iVar1 == iVar3) {
      return;
    }
    *(undefined4 *)(iVar4 + 0x170) = 0;
    return;
  case 7:
    if (2 < iVar1 - 0x3fU) {
      *(undefined4 *)(iVar4 + 0x170) = 0;
      FUN_00111d30(param_1);
      return;
    }
    goto switchD_00111ec4_caseD_0;
  }
  if (!bVar2) {
    *(undefined4 *)(iVar4 + 0x170) = 0;
    return;
  }
switchD_00111ec4_caseD_0:
  return;
}

