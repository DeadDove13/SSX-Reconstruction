/* Ghidra pseudocode. PS2 address: 001bfe80. Not validated source. */

int FUN_001bfe80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = param_1[1];
  if (0 < *param_1) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      if (*(int *)(iVar1 + 0x30) == 0) {
        iVar2 = param_1[1];
        *(undefined4 *)(iVar1 + 0x30) = 1;
        return iVar2 + iVar3;
      }
      iVar3 = iVar3 + 0x60;
      iVar1 = iVar1 + 0x60;
    } while (iVar2 < *param_1);
  }
  return 0;
}

