/* Ghidra pseudocode. PS2 address: 00121460. Not validated source. */

undefined4 FUN_00121460(int *param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  iVar1 = *param_1;
  if ((-1 < *(int *)(iVar1 + 0x8c)) &&
     (pfVar2 = (float *)(iVar1 + *(int *)(iVar1 + 0x8c) * 0x10 + 0x2c),
     fVar3 = (float)FUN_00218328((pfVar2[1] - *(float *)(iVar1 + 0x2e0)) + DAT_002c1a4c),
     *pfVar2 * fVar3 < *(float *)(*param_1 + 0x90))) {
    return 1;
  }
  return 0;
}

