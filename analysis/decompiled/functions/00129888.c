/* Ghidra pseudocode. PS2 address: 00129888. Not validated source. */

void FUN_00129888(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_1 + 0x34) + -1;
  if ((0 < *(int *)(param_1 + 0x34)) && (*(int *)(param_1 + 0x34) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)(param_1 + 8) + 0xb4))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0xb0),1);
    return;
  }
  if (*(float *)(param_1 + 0x3c) <= 0.0) {
    return;
  }
  fVar5 = 1.0;
  fVar4 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x38) = fVar4;
  if (fVar4 < 1.0) {
    return;
  }
  *(float *)(param_1 + 0x38) = fVar4 - 1.0;
  if (*(int *)(param_1 + 0x44) == 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar2 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar2 = **(int **)(param_1 + 0x58);
      if (1 < iVar2) {
        uVar3 = FUN_002109b0();
        fVar6 = ((float)(iVar2 + -1) - 0.0) * ((float)(uVar3 & 0x7fffff | 0x3f800000) - fVar5) + 0.0
        ;
        fVar4 = (float)(int)fVar6;
        if (fVar4 < fVar6) {
          fVar4 = fVar4 + fVar5;
        }
        *(int *)(param_1 + 0x40) = (int)fVar4;
        goto LAB_00129a98;
      }
      iVar2 = *(int *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x40) = iVar2 + 1;
    if (iVar2 + 1 < **(int **)(param_1 + 0x58)) {
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      goto LAB_00129a9c;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar2 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar2 = **(int **)(param_1 + 0x58);
      if (1 < iVar2) {
        uVar3 = FUN_002109b0();
        fVar6 = ((float)(iVar2 + -1) - 0.0) * ((float)(uVar3 & 0x7fffff | 0x3f800000) - fVar5) + 0.0
        ;
        fVar4 = (float)(int)fVar6;
        if (fVar4 < fVar6) {
          fVar4 = fVar4 + fVar5;
        }
        *(int *)(param_1 + 0x40) = (int)fVar4;
        goto LAB_00129a98;
      }
      iVar2 = *(int *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x40) = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *(int *)(param_1 + 0x40) = **(int **)(param_1 + 0x58) + -1;
    }
  }
LAB_00129a98:
  uVar1 = *(undefined4 *)(param_1 + 0x40);
LAB_00129a9c:
  FUN_001293c8(param_1 + 0x4c,uVar1);
  return;
}

