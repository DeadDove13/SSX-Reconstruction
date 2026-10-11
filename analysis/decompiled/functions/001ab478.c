/* Ghidra pseudocode. PS2 address: 001ab478. Not validated source. */

void FUN_001ab478(float param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(DAT_002859e4 + 0x58) + 0xc);
  DAT_0028b200 = param_1 + (float)*(int *)(*(int *)(DAT_002859e4 + 0x5c) + 0xc) + 4.0;
  pfVar1 = (float *)&DAT_0028b204;
  iVar2 = 0xf;
  DAT_002c5218 = param_1;
  do {
    iVar2 = iVar2 + -1;
    *pfVar1 = pfVar1[-1] + (float)iVar3 + 2.0;
    pfVar1 = pfVar1 + 1;
  } while (-1 < iVar2);
  return;
}

