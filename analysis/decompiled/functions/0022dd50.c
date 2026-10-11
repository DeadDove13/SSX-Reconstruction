/* Ghidra pseudocode. PS2 address: 0022dd50. Not validated source. */

int FUN_0022dd50(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = DAT_0029a8f4;
  if (DAT_0029a820._4_2_ != 0) {
    do {
      if (*piVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < (int)(uint)DAT_0029a820._4_2_);
  }
  return -9;
}

