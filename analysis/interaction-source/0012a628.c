
void FUN_0012a628(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x38) + ABS(param_1);
  *(float *)(param_2 + 0x38) = fVar1;
  if (1.0 < fVar1) {
    *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
  }
  if (*(float *)(param_2 + 0x3c) == 0.0) {
    fVar1 = *(float *)(param_2 + 0x38);
    if (param_1 < 0.0) {
      fVar1 = fVar1 * DAT_002c1b68;
      goto LAB_0012a6ac;
    }
  }
  else {
    fVar1 = *(float *)(param_2 + 0x38);
    if (*(float *)(param_2 + 0x3c) < 0.0) {
      fVar1 = fVar1 * DAT_002c1b6c;
      goto LAB_0012a6ac;
    }
  }
  fVar1 = fVar1 * DAT_002c1b70;
LAB_0012a6ac:
  *(float *)(param_2 + 0x3c) = fVar1;
  return;
}

