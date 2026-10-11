/* Ghidra pseudocode. PS2 address: 00243ed0. Not validated source. */

void FUN_00243ed0(undefined1 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}

