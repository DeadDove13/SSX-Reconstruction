/* Ghidra pseudocode. PS2 address: 00189350. Not validated source. */

int FUN_00189350(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = -1;
  if ((DAT_0027ba88 == 5) || (DAT_0027ba88 == 3)) {
    iVar1 = 0;
    fVar4 = 0.0;
    if (0 < *(int *)(param_1 + 0x298)) {
      piVar2 = (int *)(param_1 + 0xa4);
      do {
        if ((fVar4 < (float)*(int *)(*piVar2 + 0x8440)) || (iVar3 == -1)) {
          fVar4 = (float)*(int *)(*piVar2 + 0x8440);
          iVar3 = iVar1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x20;
      } while (iVar1 < *(int *)(param_1 + 0x298));
      return iVar3;
    }
  }
  else {
    iVar1 = 0;
    fVar4 = 0.0;
    if (0 < *(int *)(param_1 + 0x298)) {
      piVar2 = (int *)(param_1 + 0xa4);
      do {
        if (((float)*(int *)(*piVar2 + 0x348) < fVar4) || (iVar3 == -1)) {
          fVar4 = (float)*(int *)(*piVar2 + 0x348);
          iVar3 = iVar1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x20;
      } while (iVar1 < *(int *)(param_1 + 0x298));
    }
  }
  return iVar3;
}

