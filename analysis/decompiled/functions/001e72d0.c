/* Ghidra pseudocode. PS2 address: 001e72d0. Not validated source. */

void FUN_001e72d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = 0;
  iVar2 = (int)param_1;
  fVar3 = *(float *)(iVar2 + 0x50);
  if (0 < *(int *)(iVar2 + 0x30)) {
    do {
      FUN_001e7370(fVar3,param_1,iVar1,param_2);
      fVar3 = fVar3 + *(float *)(iVar2 + 0x48);
      if (*(float *)(iVar2 + 0x78) <= fVar3) {
        fVar3 = fVar3 - *(float *)(iVar2 + 0x78);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar2 + 0x30));
  }
  return;
}

