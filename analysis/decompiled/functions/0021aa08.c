/* Ghidra pseudocode. PS2 address: 0021aa08. Not validated source. */

int FUN_0021aa08(int param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = 0;
  lVar3 = (long)*(short *)(param_1 + 0x42);
  piVar1 = (int *)(*(int *)(param_1 + 0x44) + param_1);
  *(int **)(param_1 + 0x44) = piVar1;
  if (0 < lVar3) {
    do {
      iVar2 = piVar1[1];
      lVar3 = (long)((int)lVar3 + -1);
      piVar1[1] = iVar2 + param_1;
      iVar2 = iVar2 + param_1 + *piVar1 * 0x20;
      piVar1 = piVar1 + 2;
    } while (lVar3 != 0);
  }
  return iVar2;
}

