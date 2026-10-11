/* Ghidra pseudocode. PS2 address: 00183960. Not validated source. */

void FUN_00183960(int param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x6e4) + *(float *)(param_1 + 0x6e0);
  *(int *)(param_1 + 0x6dc) = *(int *)(param_1 + 0x6dc) + 1;
  iVar1 = (int)fVar2 - (int)*(float *)(param_1 + 0x6e4);
  *(float *)(param_1 + 0x6e4) = fVar2;
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x6e4) = fVar2 - (float)iVar1;
    FUN_001838e8(0x2c80c0,*(int *)(param_1 + 0x6e8) != 0);
    return;
  }
  return;
}

