/* Ghidra pseudocode. PS2 address: 002056a8. Not validated source. */

int FUN_002056a8(int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  param_1 = param_1 + 0x32170;
  while ((lVar1 = FUN_002054a0(param_1), lVar1 == 0 || (param_2 = param_2 + -1, param_2 != 0))) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x2c;
    if (0x2f < iVar2) {
      return -1;
    }
  }
  return iVar2;
}

