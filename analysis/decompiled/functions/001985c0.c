/* Ghidra pseudocode. PS2 address: 001985c0. Not validated source. */

int FUN_001985c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x14;
  iVar3 = 2;
  piVar2 = (int *)(param_1 + 0xc);
  do {
    iVar3 = iVar3 + -1;
    if (*piVar2 != 0) {
      iVar1 = FUN_00198840();
      iVar4 = iVar4 + iVar1;
    }
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  return iVar4;
}

