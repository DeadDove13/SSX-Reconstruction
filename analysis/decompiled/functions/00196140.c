/* Ghidra pseudocode. PS2 address: 00196140. Not validated source. */

void FUN_00196140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x393c);
  do {
    iVar1 = *piVar3;
    if (iVar1 == param_2) {
      if (iVar1 == 0) {
        *piVar3 = 0;
        return;
      }
      FUN_001969e8(iVar1,3);
      *piVar3 = 0;
      return;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 4);
  return;
}

