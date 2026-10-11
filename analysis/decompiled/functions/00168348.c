/* Ghidra pseudocode. PS2 address: 00168348. Not validated source. */

void FUN_00168348(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x488);
  *param_3 = *(undefined4 *)(param_1 + 0x46c);
  switch(*(undefined4 *)(iVar2 + 0xb38)) {
  case 1:
    uVar1 = 2;
    break;
  case 2:
    if (DAT_0027bc04 != 1) {
      iVar2 = FUN_00182670(0x285290,1);
      uVar1 = 9;
      if (*(int *)(iVar2 + 4) != 0) break;
    }
    uVar1 = 4;
    break;
  case 3:
    uVar1 = 8;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    if (*(int *)(param_1 + 0x470) == 0) {
      uVar1 = 3;
    }
    else {
      uVar1 = 3;
      if (*(int *)(param_1 + 0x46c) == 0) {
        *param_2 = 4;
        *param_3 = 1;
        return;
      }
    }
    goto LAB_0016840c;
  default:
    goto switchD_0016838c_caseD_6;
  case 9:
    uVar1 = 4;
LAB_0016840c:
    *param_2 = uVar1;
    *param_3 = 0;
    goto switchD_0016838c_caseD_6;
  }
  *param_2 = uVar1;
switchD_0016838c_caseD_6:
  return;
}

