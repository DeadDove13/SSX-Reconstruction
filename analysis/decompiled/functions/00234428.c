/* Ghidra pseudocode. PS2 address: 00234428. Not validated source. */

void FUN_00234428(int param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = 1;
    psVar1 = param_2;
    do {
      *(short *)(iVar2 + param_1) = *psVar1;
      if (0x7ffffffe < iVar3) {
        iVar2 = iVar3 << 1;
        break;
      }
      iVar2 = iVar3 * 2;
      psVar1 = param_2 + iVar3;
      iVar3 = iVar3 + 1;
    } while (*psVar1 != 0);
  }
  *(undefined2 *)(iVar2 + param_1) = 0;
  return;
}

