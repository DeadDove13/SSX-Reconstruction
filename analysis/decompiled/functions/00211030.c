/* Ghidra pseudocode. PS2 address: 00211030. Not validated source. */

int FUN_00211030(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar3 = param_1 + 0x178;
    do {
      iVar4 = iVar4 + 1;
      lVar1 = FUN_0025bcf8(iVar3);
      iVar3 = iVar3 + 0x6c;
      if (lVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  return iVar2;
}

