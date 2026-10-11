/* Ghidra pseudocode. PS2 address: 0018e620. Not validated source. */

void FUN_0018e620(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if ((param_2 < 0) && (param_2 = param_2 + *(int *)(iVar3 + 4), param_2 < 0)) {
    iVar2 = *(int *)(iVar3 + 8);
  }
  else {
    iVar2 = *(int *)(iVar3 + 8);
  }
  if (param_2 != iVar2) {
    iVar2 = *(int *)(iVar3 + 0x10 + iVar2 * 4);
    iVar1 = *(int *)(iVar2 + 0xc);
    (**(code **)(iVar1 + 0x3c))(iVar2 + *(short *)(iVar1 + 0x38));
    *(int *)(iVar3 + 8) = param_2;
    iVar3 = *(int *)(iVar3 + 0x10 + param_2 * 4);
    iVar2 = *(int *)(iVar3 + 0xc);
    (**(code **)(iVar2 + 0x34))(iVar3 + *(short *)(iVar2 + 0x30),2);
    FUN_0018de10(param_1);
    return;
  }
  return;
}

