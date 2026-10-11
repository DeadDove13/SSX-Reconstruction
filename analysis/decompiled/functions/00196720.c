/* Ghidra pseudocode. PS2 address: 00196720. Not validated source. */

void FUN_00196720(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 3;
  piVar1 = (int *)(param_1 + 0x392c);
  do {
    iVar2 = iVar2 + -1;
    if (*piVar1 != 0) {
      FUN_001982b8();
    }
    piVar1 = piVar1 + 1;
  } while (-1 < iVar2);
  return;
}

