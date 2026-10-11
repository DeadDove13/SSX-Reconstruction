/* Ghidra pseudocode. PS2 address: 00159298. Not validated source. */

int * FUN_00159298(int param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  do {
    iVar1 = *param_2 + 1;
    if ((&DAT_0027e888)[*param_2 * 6] == param_1) {
      return &DAT_0027e888 + *param_2 * 6;
    }
    *param_2 = iVar1;
  } while (iVar1 < 6);
  return &DAT_0027e900;
}

