/* Ghidra pseudocode. PS2 address: 001bfed8. Not validated source. */

void FUN_001bfed8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1[1];
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      if (param_2 == iVar1) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
        return;
      }
      iVar1 = iVar1 + 0x60;
    } while (iVar2 < *param_1);
  }
  return;
}

