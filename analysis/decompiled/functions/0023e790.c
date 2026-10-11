/* Ghidra pseudocode. PS2 address: 0023e790. Not validated source. */

void FUN_0023e790(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (DAT_002d0418 == param_1) {
    bVar1 = true;
LAB_0023e7d4:
    if ((bVar1) && ((&DAT_002d0418)[iVar2 * 4] == param_1)) {
      (&DAT_002d0418)[iVar2 * 4] = 0;
    }
  }
  else {
    piVar3 = &DAT_002d0418;
    iVar2 = 1;
    while( true ) {
      bVar1 = iVar2 < 0x10;
      piVar3 = piVar3 + 4;
      if (!bVar1) break;
      if (*piVar3 == param_1) goto LAB_0023e7d4;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

