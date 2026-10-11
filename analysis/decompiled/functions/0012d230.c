/* Ghidra pseudocode. PS2 address: 0012d230. Not validated source. */

void FUN_0012d230(int param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(float *)(param_1 + 0xc) <= 0.0) goto LAB_0012d344;
  fVar4 = 1.0;
  fVar3 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 8) = fVar3;
  if (fVar3 < 1.0) goto LAB_0012d344;
  *(float *)(param_1 + 8) = fVar3 - 1.0;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
LAB_0012d31c:
    *(int *)(param_1 + 0x10) = iVar2 + 1;
    if (**(int **)(param_1 + 0x88) <= iVar2 + 1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    iVar2 = **(int **)(param_1 + 0x88);
    if (iVar2 < 2) {
      iVar2 = *(int *)(param_1 + 0x10);
      goto LAB_0012d31c;
    }
    uVar1 = FUN_002109b0();
    fVar5 = ((float)(iVar2 + -1) - 0.0) * ((float)(uVar1 & 0x7fffff | 0x3f800000) - fVar4) + 0.0;
    fVar3 = (float)(int)fVar5;
    if (fVar3 < fVar5) {
      fVar3 = fVar3 + fVar4;
    }
    *(int *)(param_1 + 0x10) = (int)fVar3;
  }
  FUN_001293c8(param_1 + 0x7c,*(undefined4 *)(param_1 + 0x10));
LAB_0012d344:
  FUN_001288c0(param_1 + 0x18);
  return;
}

