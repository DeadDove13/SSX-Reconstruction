/* Ghidra pseudocode. PS2 address: 001f5e68. Not validated source. */

int * FUN_001f5e68(int param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x329c0);
  while( true ) {
    lVar1 = FUN_001f4f18(piVar2);
    iVar3 = iVar3 + 1;
    if (((lVar1 == 0) && (*piVar2 == 1)) && (piVar2[1] == param_2)) break;
    piVar2 = piVar2 + 0x28;
    if (0x3f < iVar3) {
      return (int *)0x0;
    }
  }
  return piVar2;
}

