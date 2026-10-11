/* Ghidra pseudocode. PS2 address: 0021ddd0. Not validated source. */

void FUN_0021ddd0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((-1 < param_2) && (param_2 < *param_1)) {
    piVar2 = (int *)(param_2 * 8 + param_1[2]);
    iVar1 = *piVar2;
    if (iVar1 < 2000000000) {
      *piVar2 = iVar1 + 1;
    }
  }
  return;
}

