/* Ghidra pseudocode. PS2 address: 0022d3c8. Not validated source. */

undefined4 FUN_0022d3c8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_0029af88;
  if ((int)((uint)DAT_0029af84 << 0x18) < 1) {
    return 1;
  }
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*piVar1 == param_1) {
      return 0;
    }
    piVar1 = piVar1 + 4;
  } while (iVar2 < 8);
  return 1;
}

