/* Ghidra pseudocode. PS2 address: 0018ea68. Not validated source. */

void FUN_0018ea68(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (*piVar2 != 0) {
    iVar1 = *(int *)(piVar2[*piVar2] + 0x114);
    (**(code **)(iVar1 + 0x3c))(piVar2[*piVar2] + (int)*(short *)(iVar1 + 0x38));
  }
  iVar1 = *piVar2;
  piVar2[iVar1 + 1] = param_2;
  *piVar2 = iVar1 + 1;
  (**(code **)(*(int *)(param_2 + 0x114) + 0x34))
            (param_2 + *(short *)(*(int *)(param_2 + 0x114) + 0x30),param_1);
  FUN_0018e870(param_1,1);
  return;
}

