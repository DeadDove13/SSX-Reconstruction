/* Ghidra pseudocode. PS2 address: 0012a1d0. Not validated source. */

void FUN_0012a1d0(undefined8 param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar5 = (int)param_1;
  iVar4 = *(int *)(iVar5 + 0x40) + -1;
  if ((0 < *(int *)(iVar5 + 0x40)) && (*(int *)(iVar5 + 0x40) = iVar4, iVar4 == 0)) {
    FUN_00129fc0(param_1,*(undefined4 *)(iVar5 + 0x260),1);
  }
  iVar4 = *(int *)(iVar5 + 0x44) + -1;
  if ((0 < *(int *)(iVar5 + 0x44)) && (*(int *)(iVar5 + 0x44) = iVar4, iVar4 == 0)) {
    FUN_00129fc0(param_1,*(undefined4 *)(iVar5 + 0x264),0);
  }
  fVar2 = DAT_002c1b58;
  fVar8 = *(float *)(iVar5 + 0x38);
  fVar7 = *(float *)(iVar5 + 0x34) + *(float *)(iVar5 + 0x3c);
  bVar1 = DAT_002c1b58 <= fVar8;
  *(float *)(iVar5 + 0x34) = fVar7;
  fVar6 = DAT_002c1b60;
  fVar3 = DAT_002c1b5c;
  if ((bVar1) || (fVar2 <= ABS(fVar7))) {
    if (0.0 <= *(float *)(iVar5 + 0x3c)) {
      if (*(float *)(iVar5 + 0x34) < fVar8) {
        return;
      }
      *(float *)(iVar5 + 0x34) = fVar8;
      *(float *)(iVar5 + 0x38) = fVar8 * 0.5;
      fVar6 = -(fVar8 * 0.5) * fVar3;
    }
    else {
      if (-fVar8 < *(float *)(iVar5 + 0x34)) {
        return;
      }
      *(float *)(iVar5 + 0x34) = -fVar8;
      fVar6 = fVar8 * 0.5 * fVar6;
      *(float *)(iVar5 + 0x38) = fVar8 * 0.5;
    }
    *(float *)(iVar5 + 0x3c) = fVar6;
  }
  else {
    (**(code **)(*(int *)(iVar5 + 8) + 0xb4))(iVar5 + *(short *)(*(int *)(iVar5 + 8) + 0xb0),1);
  }
  return;
}

