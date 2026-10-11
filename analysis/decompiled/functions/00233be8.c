/* Ghidra pseudocode. PS2 address: 00233be8. Not validated source. */

void FUN_00233be8(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 10;
  piVar1 = &DAT_002a31c4;
  do {
    iVar2 = iVar2 + -1;
    if (*piVar1 != 0) {
      FUN_002253d0();
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 9;
  } while (-1 < iVar2);
  return;
}

