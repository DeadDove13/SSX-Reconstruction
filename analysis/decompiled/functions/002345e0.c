/* Ghidra pseudocode. PS2 address: 002345e0. Not validated source. */

undefined2 * FUN_002345e0(undefined2 *param_1,long param_2,long param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_1 = param_1 + -1;
    *param_1 = *param_4;
  }
  else {
    iVar2 = (int)param_2;
    do {
      iVar1 = iVar2 / (int)param_3;
      if (param_3 == 0) {
        trap(7);
      }
      param_1 = param_1 + -1;
      *param_1 = param_4[iVar2 % (int)param_3];
      if (param_3 == 0) {
        trap(7);
      }
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
  return param_1;
}

