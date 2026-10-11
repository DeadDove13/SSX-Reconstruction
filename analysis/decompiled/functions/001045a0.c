/* Ghidra pseudocode. PS2 address: 001045a0. Not validated source. */

void FUN_001045a0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = 0x6b;
  do {
    iVar2 = iVar2 + -1;
    if (*piVar1 != 0) {
      *(short *)(piVar1 + 1) = (short)piVar1[1] + -1;
    }
    piVar1 = piVar1 + 2;
  } while (-1 < iVar2);
  return;
}

