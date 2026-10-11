/* Ghidra pseudocode. PS2 address: 0013d7c8. Not validated source. */

void FUN_0013d7c8(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 8) + DAT_002c1f84;
  fVar5 = 0.5 - fVar4;
  fVar5 = fVar5 + fVar5;
  *(float *)(param_1 + 8) = fVar4;
  fVar4 = DAT_002c1f88;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(float *)(iVar1 + 0x370) = fVar5;
  fVar5 = *(float *)(param_1 + 8);
  if (fVar4 < fVar5) {
    if (-1 < *(int *)(iVar1 + 0x24)) {
      FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),0xc);
      fVar5 = *(float *)(param_1 + 8);
    }
    fVar4 = 1.0 - (0.5 - fVar5) / DAT_002c1f8c;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    *(float *)(iVar1 + 0x374) = fVar4;
  }
  if (*(float *)(param_1 + 8) <= DAT_002c1f90) goto LAB_0013d9b8;
  if (*(int *)(DAT_002859e4 + 0x38) == 0) {
    fVar4 = *(float *)(param_1 + 0x10);
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18);
    if (iVar2 != 0 && iVar2 < 10) {
      if (DAT_002c4738 != *(int *)(iVar1 + 0x390)) {
        fVar4 = *(float *)(param_1 + 0x10);
        goto LAB_0013d984;
      }
      lVar3 = FUN_0015da60(0x27fea0);
      if ((lVar3 != 0) || (DAT_0027fed0 != 0)) {
        FUN_0015dac8(0x27fea0);
      }
      lVar3 = FUN_0015da60(*(undefined4 *)(DAT_002859e4 + 0xa0));
      if ((lVar3 != 0) || (*(int *)(*(int *)(DAT_002859e4 + 0xa0) + 0x30) != 0)) {
        FUN_0015dac8(*(undefined4 *)(DAT_002859e4 + 0xa0));
      }
    }
    fVar4 = *(float *)(param_1 + 0x10);
  }
LAB_0013d984:
  if (0.0 <= fVar4) {
    FUN_00107408(fVar4,*(undefined4 *)(param_1 + 0xc));
  }
  else {
    FUN_001071f0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  }
LAB_0013d9b8:
  if ((*(int *)(DAT_002859e4 + 0x38) != 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) != 0))
  {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x374) = 0;
  }
  return;
}

