/* Ghidra pseudocode. PS2 address: 0022f1d0. Not validated source. */

void FUN_0022f1d0(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_002a1c9c != 0) {
    FUN_002253d0();
    DAT_002a1c9c = 0;
  }
  piVar1 = &DAT_002a1c0c;
  iVar2 = 1;
  do {
    iVar2 = iVar2 + -1;
    if (*piVar1 != 0) {
      FUN_002253d0();
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while (-1 < iVar2);
  iVar2 = 0;
  if (DAT_002a1b30._5_1_ != 0) {
    piVar1 = &DAT_002a1c1c;
    do {
      if (*piVar1 != 0) {
        FUN_002253d0();
        *piVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < (int)(uint)DAT_002a1b30._5_1_);
  }
  return;
}

