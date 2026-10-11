/* Ghidra pseudocode. PS2 address: 00244500. Not validated source. */

void FUN_00244500(uint *param_1)

{
  int iVar1;
  
  if ((*param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        FUN_0025a720(0x2beb08);
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      iVar1 = iVar1 + -1;
    } while ((*param_1 & 0x100) != 0);
  }
  param_1[8] = 0;
  *param_1 = *param_1 & 0xfffffff2 | 0x104;
  return;
}

