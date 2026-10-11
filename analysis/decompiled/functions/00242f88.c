/* Ghidra pseudocode. PS2 address: 00242f88. Not validated source. */

int FUN_00242f88(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (0 < DAT_002c5b34) {
    if (*DAT_002c5b30 == 0) {
      iVar2 = 0;
    }
    else {
      for (iVar1 = 1;
          (iVar2 = -1, iVar1 < DAT_002c5b34 && (iVar2 = iVar1, DAT_002c5b30[iVar1] != 0));
          iVar1 = iVar1 + 1) {
      }
    }
  }
  return iVar2;
}

