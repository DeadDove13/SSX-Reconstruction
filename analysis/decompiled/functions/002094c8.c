/* Ghidra pseudocode. PS2 address: 002094c8. Not validated source. */

void FUN_002094c8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x8b6c0);
  iVar1 = *piVar2;
  iVar3 = 0;
  while( true ) {
    piVar2 = piVar2 + 1;
    if (iVar1 != 0) {
      FUN_00208f80(iVar1,iVar3);
    }
    if (1 < iVar3 + 1) break;
    iVar1 = *piVar2;
    iVar3 = iVar3 + 1;
  }
  return;
}

