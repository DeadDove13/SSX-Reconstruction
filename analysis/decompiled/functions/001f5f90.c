/* Ghidra pseudocode. PS2 address: 001f5f90. Not validated source. */

int FUN_001f5f90(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  iVar2 = 0;
  param_1 = param_1 + 0x329c0;
  do {
    iVar3 = iVar3 + -1;
    lVar1 = FUN_001f4f18(param_1);
    param_1 = param_1 + 0xa0;
    if (lVar1 == 0) {
      iVar2 = iVar2 + 1;
    }
  } while (-1 < iVar3);
  return iVar2;
}

