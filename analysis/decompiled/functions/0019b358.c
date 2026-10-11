/* Ghidra pseudocode. PS2 address: 0019b358. Not validated source. */

int FUN_0019b358(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = 1;
    while ((param_1 = param_1 + 1, iVar1 < 0x80 && (*param_1 != 0))) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

