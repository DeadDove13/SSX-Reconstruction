/* Ghidra pseudocode. PS2 address: 00109d28. Not validated source. */

uint FUN_00109d28(int param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(DAT_00299cc8 + 0x24);
  uVar1 = *(uint *)(DAT_00299cc8 + 0x28);
  iVar2 = ((int)(((*(float *)(param_1 + 0xc4) - *(float *)(DAT_00299cc8 + 0x10)) + fVar3) / fVar3) +
          -1) * uVar1 +
          (int)(((*(float *)(param_1 + 0xc0) - *(float *)(DAT_00299cc8 + 0xc)) + fVar3) / fVar3) +
          -1;
  if (-1 < iVar2) {
    uVar1 = (uint)(iVar2 < DAT_0029a7ac);
  }
  *(int *)(param_1 + 0xf0) = iVar2;
  return uVar1;
}

