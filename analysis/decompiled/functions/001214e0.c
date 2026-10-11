/* Ghidra pseudocode. PS2 address: 001214e0. Not validated source. */

undefined4 FUN_001214e0(int *param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  iVar1 = *param_1;
  if ((-1 < *(int *)(iVar1 + 0x8c)) &&
     (pfVar2 = (float *)(iVar1 + *(int *)(iVar1 + 0x8c) * 0x10 + 0x2c),
     fVar3 = (float)FUN_00218328((pfVar2[1] - *(float *)(iVar1 + 0x2e0)) + DAT_002c1a50),
     *(float *)(*param_1 + 0x94) < *pfVar2 * fVar3)) {
    return 1;
  }
  return 0;
}

