/* Ghidra pseudocode. PS2 address: 0013db40. Not validated source. */

void FUN_0013db40(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  fVar6 = *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x6cf4) + 0x18);
  FUN_00136ff0(*(int *)(param_1 + 0x14) + 0x8370,0);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x194) = 0;
  *(undefined4 *)(iVar1 + 0x18c) = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  fVar3 = DAT_002c1fd4;
  if (*(int *)(iVar1 + 0x16c) == 3) {
    FUN_001129e8(PTR_DAT_002c1fac,iVar1,iVar1 + 0x130);
    fVar3 = DAT_002c1fc0;
    iVar1 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar1 + 0x144) == 0) {
      iVar1 = *(int *)(iVar1 + 0x6cf4);
      fVar3 = (fVar6 - DAT_002c1fc8) * DAT_002c1fcc + 0.5;
      fVar5 = (float)(int)fVar3;
      if (fVar3 < fVar5) {
        fVar5 = fVar5 - 1.0;
      }
      *(float *)(iVar1 + 0x18) = (fVar6 - DAT_002c1fc8) - fVar5 * DAT_002c1fd0;
      FUN_0014cd18(iVar1,0x96,0,5);
      return;
    }
    iVar2 = *(int *)(iVar1 + 0x6cf4);
    if (*(int *)(iVar1 + 0x344) == 2) {
      fVar6 = fVar6 + DAT_002c1fb0;
      fVar3 = fVar6 * DAT_002c1fb4 + 0.5;
      fVar4 = (float)(int)fVar3;
      if (fVar3 < fVar4) {
        fVar4 = fVar4 - 1.0;
      }
      fVar4 = fVar4 * DAT_002c1fb8;
    }
    else {
      fVar6 = fVar6 - DAT_002c1fbc;
      *(undefined4 *)(iVar1 + 0x144) = 0;
      fVar5 = DAT_002c1fc4;
      fVar3 = fVar6 * fVar3 + 0.5;
      fVar4 = (float)(int)fVar3;
      if (fVar3 < fVar4) {
        fVar4 = fVar4 - 1.0;
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      fVar4 = fVar4 * fVar5;
    }
    *(float *)(iVar2 + 0x18) = fVar6 - fVar4;
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x16c) = 4;
    FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),0x97,0,5);
    return;
  }
  if (*(int *)(iVar1 + 0x16c) == 4) {
    FUN_001129e8(DAT_002c1fd4,iVar1,iVar1 + 0x130);
    iVar1 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar1 + 0x144) == 0) {
      iVar1 = *(int *)(iVar1 + 0x6cf4);
      fVar4 = (fVar6 + fVar3) * DAT_002c1fe8 + 0.5;
      fVar5 = (float)(int)fVar4;
      if (fVar4 < fVar5) {
        fVar5 = fVar5 - 1.0;
      }
      *(float *)(iVar1 + 0x18) = (fVar6 + fVar3) - fVar5 * DAT_002c1fec;
      FUN_0014cd18(iVar1,0x97,0,5);
      return;
    }
    if (*(int *)(iVar1 + 0x344) == 2) {
      fVar6 = fVar6 - fVar3;
      iVar2 = *(int *)(iVar1 + 0x6cf4);
      fVar5 = fVar6 * DAT_002c1fd8 + 0.5;
      fVar3 = (float)(int)fVar5;
      if (fVar5 < fVar3) {
        fVar3 = fVar3 - 1.0;
      }
      fVar3 = fVar3 * DAT_002c1fdc;
    }
    else {
      fVar6 = fVar6 + fVar3;
      iVar2 = *(int *)(iVar1 + 0x6cf4);
      fVar4 = fVar6 * DAT_002c1fe0;
      *(undefined4 *)(iVar1 + 0x144) = 0;
      fVar5 = DAT_002c1fe4;
      fVar4 = fVar4 + 0.5;
      fVar3 = (float)(int)fVar4;
      if (fVar4 < fVar3) {
        fVar3 = fVar3 - 1.0;
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      fVar3 = fVar3 * fVar5;
    }
    *(float *)(iVar2 + 0x18) = fVar6 - fVar3;
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x16c) = 3;
    FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),0x96,0,5);
    return;
  }
  FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),0x94,0,5);
  return;
}

