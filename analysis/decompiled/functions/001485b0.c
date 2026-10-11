/* Ghidra pseudocode. PS2 address: 001485b0. Not validated source. */

long FUN_001485b0(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  lVar3 = 1000;
  while( true ) {
    if (iVar1 == param_1 + 0x1d4) {
      lVar2 = 3;
      if (lVar3 != 1000) {
        lVar2 = lVar3;
      }
      return lVar2;
    }
    if (((*(int *)(iVar1 + 0x200) == 0) && (*(int *)(iVar1 + 0x1e0) != 6)) &&
       (lVar2 = FUN_00147b18(iVar1), lVar2 <= lVar3)) {
      lVar3 = FUN_00147b18(iVar1);
    }
    if (lVar3 < 0) break;
    iVar1 = *(int *)(iVar1 + 0x34);
  }
  return -1;
}

