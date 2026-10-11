/* Ghidra pseudocode. PS2 address: 001377d0. Not validated source. */

float FUN_001377d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 auStack_90 [2];
  
  lVar6 = 0;
  lVar3 = FUN_00137fd0(param_1,auStack_90,param_2,param_3,param_4);
  iVar5 = (int)param_1;
  if (lVar3 == 0) {
    lVar6 = 0;
    iVar1 = *(int *)(iVar5 + 0x1a0);
  }
  else {
    if (*(int *)(iVar5 + 0x1c) != 0) {
      *(float *)(iVar5 + 0x20) = *(float *)(iVar5 + 0x20) + DAT_002c1cc4;
    }
    if (param_2 == 0) {
      iVar1 = *(int *)(iVar5 + 0x18);
    }
    else {
      *(float *)(iVar5 + 0x20) = *(float *)(iVar5 + 0x20) + DAT_002c1cc8;
      iVar1 = *(int *)(iVar5 + 0x18);
    }
    if (iVar1 == 0) {
      lVar6 = FUN_00137dd8(param_1,auStack_90);
    }
    FUN_00137c30(param_1,auStack_90,0 < lVar6);
    FUN_00138540(param_1,auStack_90);
    iVar1 = *(int *)(iVar5 + 0x1a0);
  }
  if (*(int *)(iVar1 + 0x348) < 0) {
    iVar4 = (int)lVar6 + 1;
    fVar7 = (float)FUN_00136a48(param_1);
    iVar1 = *(int *)(iVar5 + 0x2c);
    iVar2 = *(int *)(iVar5 + 0x30);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    fVar7 = fVar7 / (float)iVar4;
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + iVar1;
    *(int *)(iVar5 + 100) = *(int *)(iVar5 + 100) + iVar2;
    iVar1 = FUN_00136a70(param_1);
    iVar1 = iVar1 / iVar4;
    if (iVar4 == 0) {
      trap(7);
    }
    if (0 < iVar1) {
      if (lVar6 < 1) {
        FUN_00137ea0(0x40200000,param_1,2,iVar1);
        iVar2 = *(int *)(iVar5 + 0xd0);
      }
      else {
        FUN_00137ea0(0x40200000,param_1,3,iVar1);
        iVar2 = *(int *)(iVar5 + 0xd0);
      }
      *(int *)(iVar5 + 0xd0) = iVar2 + iVar1;
      *(int *)(iVar5 + 0x70) = *(int *)(iVar5 + 0x70) + 1;
    }
    if ((lVar3 != 0) && (*(int *)(iVar5 + 0xc4) < iVar1)) {
      *(int *)(iVar5 + 0xc4) = iVar1;
      *(undefined8 *)(iVar5 + 200) = auStack_90[0];
    }
    fVar8 = (float)*(int *)(iVar5 + 0x40) * DAT_002c1ccc;
    if ((0.0 < fVar8) &&
       (*(float *)(iVar5 + 0xac) = *(float *)(iVar5 + 0xac) + fVar8,
       *(float *)(iVar5 + 0xb8) < fVar8)) {
      *(float *)(iVar5 + 0xb8) = fVar8;
    }
    if (param_2 == 0) {
      FUN_00137bc0(param_1);
    }
    else {
      iVar1 = *(int *)(iVar5 + 0x38);
      FUN_00137bc0(param_1);
      *(int *)(iVar5 + 0x38) = iVar1 + 1;
    }
    *(int *)(iVar5 + 0x1c) = (int)param_2;
    *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
  }
  else {
    FUN_00137bc0(param_1);
    fVar7 = 0.0;
    *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
  }
  return fVar7;
}

