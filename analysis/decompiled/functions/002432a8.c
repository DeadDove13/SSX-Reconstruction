/* Ghidra pseudocode. PS2 address: 002432a8. Not validated source. */

long FUN_002432a8(undefined8 param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = -1;
  if (DAT_002c5b30 != 0) {
    iVar4 = (int)param_1;
    iVar2 = 0;
    if (*(char *)(iVar4 + 6) != '\0') {
      if ((*(byte *)(iVar4 + 4) & 0xf0) != 0) {
        iVar2 = ((int)(*(byte *)(iVar4 + 5) + 7) >> 3) + 1;
      }
      pcVar3 = (char *)(iVar4 + (uint)*(byte *)(iVar4 + 5) * ((*(byte *)(iVar4 + 4) & 0xf) + 2) +
                                0xc + iVar2);
      if (*pcVar3 != '\0') {
        return -1;
      }
      iVar2 = 0;
      pcVar1 = pcVar3;
      if (*(byte *)(iVar4 + 6) != 0) {
        do {
          if (pcVar1[1] != -1) {
            return -1;
          }
          iVar2 = iVar2 + 1;
          pcVar1 = pcVar3 + iVar2;
        } while (iVar2 < (int)(uint)*(byte *)(iVar4 + 6));
      }
    }
    lVar5 = FUN_00242f88();
    if (-1 < lVar5) {
      if ((*(byte *)(iVar4 + 4) & 0xf0) != 0) {
        FUN_002431e8(param_1);
      }
      *(int *)((int)lVar5 * 4 + DAT_002c5b30) = iVar4;
    }
  }
  return lVar5;
}

