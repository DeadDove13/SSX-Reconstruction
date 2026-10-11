/* Ghidra pseudocode. PS2 address: 001592e0. Not validated source. */

int * FUN_001592e0(int param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  do {
    iVar1 = *param_2 + 1;
    if ((&DAT_0027e918)[*param_2 * 6] == param_1) {
      return &DAT_0027e918 + *param_2 * 6;
    }
    *param_2 = iVar1;
  } while (iVar1 < 6);
  return &DAT_0027e990;
}

