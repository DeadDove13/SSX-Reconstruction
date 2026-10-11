/* Ghidra pseudocode. PS2 address: 0019a2a8. Not validated source. */

undefined4 FUN_0019a2a8(int *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_0027ad04 != 0) {
    if ((*param_1 < 1) || (iVar1 = param_1[1] + 1, *param_1 <= iVar1)) {
      return 0;
    }
    if ((uint)param_1[iVar1 * 7 + 0xf] <= param_2) {
      param_1[1] = iVar1;
      return 1;
    }
  }
  return 0;
}

