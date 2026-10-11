/* Ghidra pseudocode. PS2 address: 00244418. Not validated source. */

void FUN_00244418(uint *param_1,uint param_2,uint param_3)

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
  if (param_1[4] != 0xffffffff) {
    param_1[4] = param_2;
  }
  param_1[8] = param_3;
  *param_1 = *param_1 & 0xfffffff3 | 0x109;
  return;
}

