/* Ghidra pseudocode. PS2 address: 001d21d0. Not validated source. */

void FUN_001d21d0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = DAT_002c3638;
  iVar2 = *(int *)(param_1 + 0x24);
  if (0 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x28);
    do {
      iVar2 = iVar2 + -1;
      *(float *)(iVar3 + 0x54) = *(float *)(iVar3 + 0x54) * fVar1;
      iVar3 = iVar3 + 0x58;
    } while (iVar2 != 0);
  }
  return;
}

