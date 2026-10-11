/* Ghidra pseudocode. PS2 address: 0013c838. Not validated source. */

void FUN_0013c838(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x30);
  fVar7 = *(float *)(iVar2 + 0x1e0);
  fVar8 = *(float *)(iVar2 + 0x1ec);
  fVar9 = ((float)*(byte *)(*(int *)(iVar2 + 0x394) + 0x10) * DAT_002c1f30 * DAT_002c1f34 +
          DAT_002c1f38) * DAT_002c1f3c;
  fVar5 = *(float *)(iVar2 + 0x1e8);
  fVar4 = *(float *)(iVar2 + 0x1e4) * DAT_002c1f40;
  if (fVar5 + fVar4 < fVar7) {
    fVar5 = fVar7 - fVar4;
  }
  else if (fVar7 < fVar5 - fVar4) {
    fVar5 = fVar7 + fVar4;
  }
  iVar1 = *(int *)(iVar3 + 0x30);
  *(float *)(iVar2 + 0x1e0) = fVar5;
  fVar4 = *(float *)(iVar1 + 500);
  fVar5 = *(float *)(iVar1 + 0x1f0) * DAT_002c1f44;
  fVar6 = *(float *)(iVar1 + 0x1ec);
  if (fVar4 + fVar5 < fVar6) {
    fVar4 = fVar6 - fVar5;
  }
  else if (fVar6 < fVar4 - fVar5) {
    fVar4 = fVar6 + fVar5;
  }
  *(float *)(iVar1 + 0x1ec) = fVar4;
  if (param_3 == 0) {
    *(float *)(iVar1 + 0x1e4) = fVar9;
    *(undefined4 *)(iVar1 + 0x1e8) = 0;
    *(float *)(iVar1 + 0x1f0) = fVar9;
    *(undefined4 *)(iVar1 + 500) = 0;
  }
  else {
    fVar5 = (float)((*param_2 << 0xc) >> 0x1a) / 31.0;
    fVar4 = (float)((*param_2 << 6) >> 0x1a) / 31.0;
    if (*(int *)(iVar3 + 0x18) != 0) {
      fVar4 = -fVar4;
    }
    FUN_0013ca88(fVar4,fVar9,param_1,iVar3 + 0xc,*(int *)(iVar3 + 0x30) + 0x1ec);
    FUN_0013ca88(fVar5,fVar9,param_1,iVar3 + 8,*(int *)(iVar3 + 0x30) + 0x1e0);
    iVar2 = *(int *)(iVar3 + 0x30);
    if (fVar8 == *(float *)(iVar2 + 0x1ec)) {
      fVar4 = *(float *)(iVar2 + 0x1e0);
    }
    else {
      FUN_001129e8((fVar8 - *(float *)(iVar2 + 0x1ec)) * DAT_002c1f48,iVar2,iVar2 + 0x120);
      iVar2 = *(int *)(iVar3 + 0x30);
      fVar4 = *(float *)(iVar2 + 0x1e0);
    }
    if (fVar7 != fVar4) {
      FUN_001129e8((fVar7 - fVar4) * DAT_002c1f4c,iVar2,iVar2 + 0x130);
      iVar2 = *(int *)(iVar3 + 0x30);
      FUN_001129e8((fVar7 - *(float *)(iVar2 + 0x1e0)) * DAT_002c1f50,iVar2,iVar2 + 0x110);
      return;
    }
  }
  return;
}

