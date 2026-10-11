/* Ghidra pseudocode. PS2 address: 00182690. Not validated source. */

int FUN_00182690(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar3 = (int *)(param_1 + 0x18);
    do {
      iVar1 = *(int *)(*piVar3 + 0x28);
      if (iVar1 != 0) {
        if (param_2 != 0) {
          *(int *)param_2 = iVar2;
        }
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

