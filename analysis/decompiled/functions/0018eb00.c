/* Ghidra pseudocode. PS2 address: 0018eb00. Not validated source. */

void FUN_0018eb00(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  iVar1 = *piVar3;
  *piVar3 = iVar1 + -1;
  iVar2 = *(int *)(piVar3[iVar1] + 0x114);
  (**(code **)(iVar2 + 0x3c))(piVar3[iVar1] + (int)*(short *)(iVar2 + 0x38));
  if (*piVar3 != 0) {
    iVar1 = *(int *)(piVar3[*piVar3] + 0x114);
    (**(code **)(iVar1 + 0x34))(piVar3[*piVar3] + (int)*(short *)(iVar1 + 0x30),param_1);
    if (*piVar3 != 0) {
      return;
    }
  }
  FUN_0018e870(param_1,0);
  return;
}

