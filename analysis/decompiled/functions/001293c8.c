/* Ghidra pseudocode. PS2 address: 001293c8. Not validated source. */

void FUN_001293c8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if (param_2 < 0) {
    iVar1 = *piVar3;
    param_2 = 1;
    if (2 < iVar1) {
      fVar5 = 1.0;
      uVar2 = FUN_002109b0();
      fVar6 = ((float)iVar1 - fVar5) * ((float)(uVar2 & 0x7fffff | 0x3f800000) - fVar5) + fVar5;
      fVar4 = (float)(int)fVar6;
      if (fVar4 < fVar6) {
        fVar4 = fVar4 + fVar5;
      }
      param_2 = (int)fVar4;
      piVar3 = *(int **)(param_1 + 0xc);
    }
  }
  if (*piVar3 <= param_2) {
    param_2 = *piVar3 + -1;
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

