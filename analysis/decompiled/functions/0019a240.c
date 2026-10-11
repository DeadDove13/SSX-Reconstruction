/* Ghidra pseudocode. PS2 address: 0019a240. Not validated source. */

void FUN_0019a240(int *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (DAT_0027ad04 == 0) {
    param_1[1] = 0;
    return;
  }
  iVar1 = *param_1 + -1;
  if (-1 < iVar1) {
    puVar2 = (uint *)(param_1 + iVar1 * 7 + 0xf);
    do {
      if (*puVar2 <= param_2) {
        param_1[1] = iVar1;
        return;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -7;
    } while (-1 < iVar1);
  }
  param_1[1] = *param_1 + -1;
  return;
}

