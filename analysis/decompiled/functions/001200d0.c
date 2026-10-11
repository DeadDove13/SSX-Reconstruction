/* Ghidra pseudocode. PS2 address: 001200d0. Not validated source. */

void FUN_001200d0(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)param_1[0x227];
  fVar4 = -*(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14);
  if (fVar3 == 1.0) {
    if (fVar4 < 30.0) {
      uVar1 = *param_2;
LAB_0012014c:
      *param_2 = uVar1 & 0xffffffc0 | 0x1f;
      return;
    }
  }
  else if (fVar4 < (fVar3 / DAT_002c19c8) * 30.0) {
    uVar1 = *param_2;
    goto LAB_0012014c;
  }
  if (fVar3 == 1.0) {
    if (fVar4 < 60.0) {
      uVar1 = *param_2;
LAB_001201cc:
      *param_2 = uVar1 & 0xffffffc0 | 0x21;
      return;
    }
    iVar2 = *param_1;
  }
  else {
    if (fVar4 < (fVar3 / DAT_002c19cc) * 60.0) {
      uVar1 = *param_2;
      goto LAB_001201cc;
    }
    iVar2 = *param_1;
  }
  if ((*(float *)(iVar2 + 0x1c8) == 0.0) || ((float)param_1[0x226] == 0.0)) {
    param_1[0x226] = -0x40800000;
  }
  else if (*(float *)(iVar2 + 0x1c8) == 1.0) {
    param_1[0x226] = 0x3f800000;
  }
  *param_2 = *param_2 & 0xffffffc0 | (int)((float)param_1[0x226] * 31.0) & 0x3fU;
  return;
}

