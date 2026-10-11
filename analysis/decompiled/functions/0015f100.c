/* Ghidra pseudocode. PS2 address: 0015f100. Not validated source. */

void FUN_0015f100(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1[10] == 0) && (iVar1 = param_1[0x106] + 1, param_1[0x106] != 1)) {
    param_1[0x106] = iVar1;
    if (6 < iVar1) {
      param_1[0x106] = 2;
    }
    if (param_1[0x106] == 3) {
      param_1[0x106] = 4;
      *param_1 = 1;
    }
    else {
      *param_1 = 1;
    }
  }
  return;
}

