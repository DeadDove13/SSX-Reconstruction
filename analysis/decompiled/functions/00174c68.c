/* Ghidra pseudocode. PS2 address: 00174c68. Not validated source. */

void FUN_00174c68(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 3;
  for (iVar1 = param_1[3]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    iVar1 = *piVar2;
    piVar2 = (int *)(iVar1 + 0x20);
  }
  iVar1 = *param_1;
  *piVar2 = param_2;
  *param_1 = iVar1 + 1;
  return;
}

