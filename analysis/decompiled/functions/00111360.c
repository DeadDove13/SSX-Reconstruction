/* Ghidra pseudocode. PS2 address: 00111360. Not validated source. */

void FUN_00111360(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(float *)(param_2 + 0xa8) == 0.0) && (*(int *)(param_2 + 0x350) != 6)) {
    if (param_1 < -1.0) {
      param_1 = -1.0;
    }
    else if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  fVar4 = *(float *)(param_2 + 0x1a4);
  fVar2 = *(float *)(param_2 + 0x1ac);
  fVar3 = param_1;
  if ((param_1 != 0.0) && (0.0 < *(float *)(param_2 + 0x198))) {
    fVar3 = 0.0;
  }
  if ((0.0 <= fVar2) || (fVar3 <= 0.0)) {
    if (0.0 < fVar2) {
      if (0.0 <= fVar3) {
        fVar2 = *(float *)(param_2 + 0x18c);
        goto LAB_001114a8;
      }
      goto LAB_00111440;
    }
  }
  else {
LAB_00111440:
    fVar3 = -param_1;
    if ((fVar4 <= 0.0) || (0.0 <= fVar2)) {
      if (0.0 <= fVar4) goto LAB_001114a4;
      if (fVar2 <= 0.0) {
        fVar2 = *(float *)(param_2 + 0x18c);
        goto LAB_001114a8;
      }
      fVar2 = *(float *)(param_2 + 0x18c);
    }
    else {
      fVar2 = *(float *)(param_2 + 0x18c);
    }
    *(float *)(param_2 + 0x194) = fVar3;
    *(float *)(param_2 + 400) = ABS((*(float *)(param_2 + 0x1a8) * fVar2) / fVar4);
  }
LAB_001114a4:
  fVar2 = *(float *)(param_2 + 0x18c);
LAB_001114a8:
  fVar4 = DAT_002c13b0;
  fVar1 = DAT_002c13a8;
  if (DAT_002c13a8 <= ABS(fVar3 - fVar2)) {
    fVar1 = ABS(fVar3 - fVar2);
  }
  if (fVar3 == 0.0) {
    fVar1 = DAT_002c13ac - fVar1;
  }
  *(float *)(param_2 + 0x194) = fVar3;
  *(float *)(param_2 + 400) = fVar1 * fVar4;
  return;
}

