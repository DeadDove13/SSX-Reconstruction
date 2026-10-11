/* Ghidra pseudocode. PS2 address: 00261908. Not validated source. */

int FUN_00261908(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = *(int *)(param_2 + 0x10);
  iVar1 = *(int *)(param_1 + 0x10) - iVar2;
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar4 = (uint *)(param_1 + 0x14) + iVar2;
  puVar3 = (uint *)(param_2 + 0x14 + iVar2 * 4);
  do {
    puVar4 = puVar4 + -1;
    puVar3 = puVar3 + -1;
    if (*puVar4 != *puVar3) {
      iVar2 = -1;
      if (*puVar3 <= *puVar4) {
        iVar2 = 1;
      }
      return iVar2;
    }
  } while ((uint *)(param_1 + 0x14) < puVar4);
  return 0;
}

