/* Ghidra pseudocode. PS2 address: 0023b3e8. Not validated source. */

void FUN_0023b3e8(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_002a33c8;
  iVar1 = 0;
  do {
    if (*piVar2 != 0) {
      FUN_0023afc0(iVar1);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x10);
  if (DAT_002c5ad4 != 0) {
    FUN_00259ae8();
  }
  DAT_002c5ad4 = 0;
  return;
}

