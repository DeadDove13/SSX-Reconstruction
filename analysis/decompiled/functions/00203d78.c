/* Ghidra pseudocode. PS2 address: 00203d78. Not validated source. */

void FUN_00203d78(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = FUN_001f8290();
  iVar3 = DAT_002859e4;
  if (*(int *)(iVar2 + 0x34c) == 1) {
    fVar5 = *(float *)(iVar2 + 0x8344);
  }
  else {
    fVar5 = 0.0;
  }
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x8b6e8) = DAT_002c3950;
  DAT_002c5530 = 0;
  if (((*(int *)(iVar3 + 0x38) != 0) && (*(int *)(*(int *)(iVar3 + 0x38) + 0x4c) != 0)) ||
     (fVar5 <= 0.5)) {
    FUN_00207128(param_1,0x7f);
  }
  else {
    fVar8 = *(float *)(iVar2 + 0x834c);
    DAT_002c5530 = 1;
    fVar5 = (1.0 - fVar5 * DAT_002c3954 * 0.5) * 127.0;
    fVar6 = *(float *)(iVar2 + 0x8350) * 0.5 + fVar8;
    if ((127.0 <= fVar5) || (16.0 <= fVar5)) {
      fVar7 = 127.0;
      if (fVar5 < 127.0) {
        fVar7 = fVar5;
      }
    }
    else {
      fVar7 = 16.0;
    }
    if (fVar8 < fVar6) {
      fVar8 = fVar8 / fVar6;
      fVar5 = 127.0 - fVar8 * 111.0;
      iVar3 = 0x7f;
      if (((fVar5 < 127.0) && (iVar3 = 0x10, 16.0 <= fVar5)) && (iVar3 = 0x7f, fVar5 < 127.0)) {
        iVar3 = (int)(char)(int)fVar5;
      }
      fVar5 = 127.0 - (127.0 - fVar7) * fVar8;
      *(float *)(iVar4 + 0x8b6e8) = (float)(0x8f - iVar3) / 127.0;
      if (fVar5 < 127.0) {
        bVar1 = fVar5 < fVar7;
      }
      else {
        bVar1 = 127.0 < fVar7;
      }
      if ((bVar1) || (iVar3 = 0x7f, fVar7 = fVar5, fVar5 < 127.0)) {
        iVar3 = (int)(char)(int)fVar7;
      }
      *(float *)(iVar4 + 0x8b6ec) = (float)(0x7f - iVar3) / 127.0;
      FUN_00207128(param_1);
    }
    else {
      *(float *)(iVar4 + 0x8b6ec) = (127.0 - fVar7) / 127.0;
      FUN_00207128(param_1,(char)(int)fVar7);
      *(undefined4 *)(iVar4 + 0x8b6e8) = 0x3f800000;
    }
    *(float *)(iVar4 + 0x8b6ec) = *(float *)(iVar4 + 0x8b6ec) * *(float *)(iVar4 + 0x8b6e4);
  }
  *(float *)(iVar4 + 0x8b6e8) = *(float *)(iVar4 + 0x8b6e8) * *(float *)(iVar4 + 0x8b6dc);
  return;
}

