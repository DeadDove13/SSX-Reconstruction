/* Ghidra pseudocode. PS2 address: 0019be28. Not validated source. */

float FUN_0019be28(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  fVar3 = 0.0;
  if (0 < iVar2) {
    pfVar1 = (float *)(*(int *)(param_1 + 0x18) + 0xc);
    do {
      fVar4 = *pfVar1;
      iVar2 = iVar2 + -1;
      pfVar1 = pfVar1 + 4;
      fVar3 = fVar3 + fVar4;
    } while (iVar2 != 0);
  }
  return fVar3;
}

