/* Ghidra pseudocode. PS2 address: 0019c9e8. Not validated source. */

int FUN_0019c9e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar2 = *(int *)(param_1 + 0xc);
    do {
      if (param_2 == iVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x3c;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return -1;
}

