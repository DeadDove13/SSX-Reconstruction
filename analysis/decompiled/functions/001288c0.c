/* Ghidra pseudocode. PS2 address: 001288c0. Not validated source. */

void FUN_001288c0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x38) + -1;
  if ((0 < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x38) = iVar1, iVar1 == 0)) {
    (**(code **)(*(int *)(param_1 + 8) + 0xb4))
              (param_1 + *(short *)(*(int *)(param_1 + 8) + 0xb0),1);
    return;
  }
  fVar3 = *(float *)(param_1 + 0x58);
  if (fVar3 <= 0.0) {
    if (*(float *)(param_1 + 0x5c) <= 0.0) {
      return;
    }
    fVar2 = *(float *)(param_1 + 0x44);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x44);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  fVar2 = fVar2 + DAT_002c1b4c;
  *(float *)(param_1 + 0x44) = fVar2;
  if (iVar1 == 0) {
    if (fVar2 < *(float *)(param_1 + 0x5c)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (fVar3 <= 0.0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x48) = 1;
    return;
  }
  if (fVar3 <= fVar2) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (0.0 < *(float *)(param_1 + 0x5c)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x34) - 1U < 2) {
      *(float *)(param_1 + 0x50) = -*(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = -*(float *)(param_1 + 0x54);
    }
  }
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 1) {
    fVar2 = *(float *)(param_1 + 0x50);
    fVar3 = *(float *)(param_1 + 0x58);
    if (fVar2 < 0.0) {
      fVar4 = *(float *)(param_1 + 0x44);
      if (fVar4 < fVar3 * 0.5) {
        *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + (fVar2 * fVar4) / fVar3;
        fVar3 = *(float *)(param_1 + 0x40) + (*(float *)(param_1 + 0x54) * fVar4) / fVar3;
      }
      else {
        *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + (fVar2 * (fVar3 - fVar4)) / fVar3;
        fVar3 = *(float *)(param_1 + 0x40) + (*(float *)(param_1 + 0x54) * (fVar3 - fVar4)) / fVar3;
      }
    }
    else {
      fVar4 = fVar3 - *(float *)(param_1 + 0x44);
      if (fVar4 < fVar3 * 0.5) {
        *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + (fVar2 * fVar4) / fVar3;
        fVar3 = *(float *)(param_1 + 0x40) + (*(float *)(param_1 + 0x54) * fVar4) / fVar3;
      }
      else {
        *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + (fVar2 * (fVar3 - fVar4)) / fVar3;
        fVar3 = *(float *)(param_1 + 0x40) + (*(float *)(param_1 + 0x54) * (fVar3 - fVar4)) / fVar3;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x50);
    fVar3 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x54);
  }
  *(float *)(param_1 + 0x40) = fVar3;
  fVar3 = *(float *)(param_1 + 0x3c);
  if (1.0 < fVar3) {
    fVar3 = fVar3 - 1.0;
  }
  else {
    if (-1.0 <= fVar3) {
      fVar3 = *(float *)(param_1 + 0x40);
      goto LAB_00128b88;
    }
    fVar3 = fVar3 + 1.0;
  }
  *(float *)(param_1 + 0x3c) = fVar3;
  fVar3 = *(float *)(param_1 + 0x40);
LAB_00128b88:
  if (fVar3 <= 1.0) {
    if (fVar3 < -1.0) {
      *(float *)(param_1 + 0x40) = fVar3 + 1.0;
    }
  }
  else {
    *(float *)(param_1 + 0x40) = fVar3 - 1.0;
  }
  return;
}

