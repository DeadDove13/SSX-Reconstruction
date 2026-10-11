/* Ghidra pseudocode. PS2 address: 00240a00. Not validated source. */

undefined4 FUN_00240a00(short param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (0 < *param_2) {
    if (*(short *)param_2[1] != param_1) {
      iVar2 = 1;
      do {
        if (*param_2 <= iVar2) {
          return 0;
        }
        psVar1 = (short *)param_2[1] + iVar2;
        iVar2 = iVar2 + 1;
      } while (*psVar1 != param_1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

