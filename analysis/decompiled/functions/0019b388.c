/* Ghidra pseudocode. PS2 address: 0019b388. Not validated source. */

int FUN_0019b388(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[0x480];
    while( true ) {
      iVar3 = iVar3 + 1;
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      if ((0x7f < iVar3) || (param_1[1] == 0)) break;
      iVar1 = param_1[0x481];
      param_1 = param_1 + 1;
    }
  }
  return iVar2;
}

