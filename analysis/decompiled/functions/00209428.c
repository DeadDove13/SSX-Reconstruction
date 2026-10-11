/* Ghidra pseudocode. PS2 address: 00209428. Not validated source. */

void FUN_00209428(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0x8b6c0);
  do {
    if (*piVar1 == 0) {
      *piVar1 = 0;
    }
    else {
      FUN_00208e28(*piVar1,3);
      *piVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (-1 < iVar2);
  FUN_00242cb0();
  return;
}

