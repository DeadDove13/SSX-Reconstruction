/* Ghidra pseudocode. PS2 address: 001099f0. Not validated source. */

void FUN_001099f0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  iVar4 = (int)param_1;
  if ((param_2 == 0) || (*(float *)(iVar4 + 0x1c) <= 0.0)) {
    if ((*(int *)(DAT_002859e4 + 0x38) == 0) ||
       (iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar1 == 0 || 9 < iVar1)) {
      if (param_2 == 0) {
        fVar5 = *(float *)(iVar4 + 0xa8);
      }
      else {
        if (param_3 != 0) {
          FUN_00201948(DAT_002c56e8,param_1);
        }
        fVar5 = *(float *)(iVar4 + 0xa8);
      }
      if (0.0 < fVar5) {
        FUN_00201890(DAT_002c56e8,param_1);
      }
    }
    uVar6 = DAT_002c11ec;
    *(undefined4 *)(iVar4 + 0xa8) = 0;
    *(undefined4 *)(iVar4 + 0x1fc) = uVar6;
    *(undefined4 *)(iVar4 + 0x200) = 0;
    return;
  }
  if (*(float *)(iVar4 + 0xa8) == 0.0) {
    if ((*(int *)(DAT_002859e4 + 0x38) == 0) ||
       (iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar1 == 0 || 9 < iVar1)) {
      FUN_00201448(DAT_002c56e8,param_1,param_3);
    }
    if (param_3 == 0) {
      fVar5 = *(float *)(iVar4 + 0x1c);
      goto LAB_00109ae0;
    }
    uVar6 = DAT_002c11b0;
    if ((*(float *)(iVar4 + 0x1c) <= DAT_002c11ac) &&
       (uVar6 = DAT_002c11bc, *(float *)(iVar4 + 0x1c) <= DAT_002c11b4)) {
      uVar6 = DAT_002c11b8;
    }
    *(undefined4 *)(iVar4 + 0x1fc) = DAT_002c11c0;
    *(undefined4 *)(iVar4 + 0x200) = uVar6;
    *(undefined4 *)(iVar4 + 0x20c) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x204) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x208) = 0;
  }
  fVar5 = *(float *)(iVar4 + 0x1c);
LAB_00109ae0:
  fVar3 = DAT_002c11dc;
  fVar2 = DAT_002c11d4;
  fVar7 = DAT_002c11c8;
  if (DAT_002c11c4 < fVar5) {
    *(undefined4 *)(iVar4 + 0xa8) = 0x3f800000;
  }
  else if (DAT_002c11cc < fVar5) {
    *(undefined4 *)(iVar4 + 0xa8) = DAT_002c11d0;
    fVar7 = fVar2;
  }
  else {
    *(undefined4 *)(iVar4 + 0xa8) = DAT_002c11d8;
    fVar7 = fVar3;
  }
  *(float *)(iVar4 + 0x1c) = fVar5 - DAT_002c11e0;
  uVar6 = DAT_002c11e8;
  fVar5 = DAT_002c11e4;
  if (fVar7 <= *(float *)(iVar4 + 0x1f8)) {
    if (*(float *)(iVar4 + 0x204) == 1.0) {
      *(undefined4 *)(iVar4 + 0x20c) = 0;
      *(float *)(iVar4 + 0x208) = ABS(0.0 - *(float *)(iVar4 + 0x204)) / fVar5;
    }
    else if (*(float *)(iVar4 + 0x204) <= 0.0) {
      *(undefined4 *)(iVar4 + 0x200) = 0;
      *(undefined4 *)(iVar4 + 0x1fc) = uVar6;
    }
  }
  return;
}

