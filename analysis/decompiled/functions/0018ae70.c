/* Ghidra pseudocode. PS2 address: 0018ae70. Not validated source. */

int FUN_0018ae70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      param_1 = param_1 + 0x21;
      if (*param_1 == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return -1;
}

