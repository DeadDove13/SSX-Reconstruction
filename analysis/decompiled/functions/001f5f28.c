/* Ghidra pseudocode. PS2 address: 001f5f28. Not validated source. */

int FUN_001f5f28(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  iVar2 = 0;
  param_1 = param_1 + 0x329c0;
  do {
    lVar1 = FUN_001f4f18(param_1);
    iVar3 = iVar3 + -1;
    if (lVar1 == 0) {
      if (*(int *)(param_1 + 8) != 0) {
        iVar2 = iVar2 + 1;
      }
    }
    param_1 = param_1 + 0xa0;
  } while (-1 < iVar3);
  return iVar2;
}

