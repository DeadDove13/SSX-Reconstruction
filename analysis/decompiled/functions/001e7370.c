/* Ghidra pseudocode. PS2 address: 001e7370. Not validated source. */

void FUN_001e7370(int param_1,int param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = 0.0;
  fVar6 = 0.0;
  FUN_00218a00(param_1 + 100,*(int *)(param_1 + 0x80) + param_2 * 0x20);
  fVar5 = *(float *)(param_1 + 0x44) + DAT_002c3840;
  if (*(int *)(param_1 + 0x34) == 2) {
    if (*(float *)(param_1 + 0x4c) < 0.0) {
      fVar5 = fVar5 + DAT_002c3844;
      goto LAB_001e73f8;
    }
    iVar1 = *(int *)(param_1 + 0x38);
  }
  else {
LAB_001e73f8:
    iVar1 = *(int *)(param_1 + 0x38);
  }
  if (1 < iVar1 - 2U) {
    fVar4 = *param_3;
    fVar2 = param_3[1];
    if (fVar4 == 0.0) {
      if (fVar2 != 0.0) {
        if (0.0 <= fVar2) {
          fVar5 = fVar5 - DAT_002c384c;
        }
        else {
          fVar5 = fVar5 - (float)PTR_DAT_002c3848;
        }
        goto LAB_001e74a0;
      }
    }
    else {
      fVar3 = fVar2;
      fVar2 = (float)FUN_00218510(fVar2 / fVar4);
      if (fVar4 < 0.0) {
        if (0.0 < fVar3) {
          fVar2 = fVar2 + DAT_002c3850;
        }
        else {
          fVar2 = fVar2 - DAT_002c3854;
        }
      }
      iVar1 = *(int *)(param_1 + 0x38);
    }
    fVar5 = fVar5 - fVar2;
  }
LAB_001e74a0:
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      iVar1 = *(int *)(param_1 + 0x80);
      goto LAB_001e74dc;
    }
    if (*(float *)(param_1 + 0x4c) < 0.0) {
      fVar7 = fVar6 + param_3[2];
    }
    else {
      fVar7 = fVar6 - param_3[2];
    }
  }
  iVar1 = *(int *)(param_1 + 0x80);
LAB_001e74dc:
  iVar1 = param_2 * 0x20 + iVar1;
  *(float *)(iVar1 + 0x10) = fVar7;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(float *)(iVar1 + 0x18) = fVar5;
  return;
}

