/* Ghidra pseudocode. PS2 address: 002595d0. Not validated source. */

int * FUN_002595d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &DAT_002d54d0;
  iVar2 = DAT_002d54d0;
  while( true ) {
    if (iVar2 == 0) {
      piVar4 = (int *)FUN_002599b8();
      return piVar4;
    }
    piVar1 = (int *)*piVar4;
    iVar2 = piVar1[5];
    if (piVar1[2] == param_1) break;
    piVar4 = piVar1 + 5;
  }
  iVar3 = *piVar1;
  *piVar4 = iVar2;
  if (iVar3 != 0) {
    FUN_00259ae8(piVar1[3]);
  }
  return piVar1;
}

