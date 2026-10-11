/* Ghidra pseudocode. PS2 address: 00195308. Not validated source. */

void FUN_00195308(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 != 0) {
    iVar2 = (int)param_2;
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar2 = iVar2 + -1;
      iVar1 = *(int *)(iVar1 + 0x28);
    } while (iVar2 != 0);
  }
  return;
}

