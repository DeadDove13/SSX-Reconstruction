/* Ghidra pseudocode. PS2 address: 0014b550. Not validated source. */

void FUN_0014b550(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = (int)param_2;
  iVar2 = *(int *)(iVar3 + 0x220);
  iVar1 = *(int *)(iVar2 + 0x16c);
  if (*(int *)(iVar2 + 0x344) == 2) {
    if (iVar1 == 2) {
      *(undefined4 *)(iVar3 + 500) = 0x3f800000;
      FUN_001478c8(param_2,0,0x95);
      *(undefined4 *)(iVar3 + 0x20) = 1;
      *(undefined4 *)(iVar3 + 0x1e4) = 1;
      FUN_00148120(0x3f800000,param_2);
      return;
    }
    fVar4 = *(float *)(iVar2 + 0x198);
  }
  else {
    fVar4 = *(float *)(iVar2 + 0x198);
  }
  fVar5 = *(float *)(iVar2 + 0x1a4);
  fVar6 = ABS(fVar5);
  *(float *)(iVar3 + 0x1f8) = fVar4;
  *(undefined4 *)(iVar3 + 0x1e4) = 2;
  *(float *)(iVar3 + 500) = 1.0 - fVar4;
  if (((fVar6 == 0.0) || (iVar1 == 1)) || (iVar1 == 2)) {
    FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad8a8 + iVar1 * 4));
    FUN_001478c8(param_2,1,*(undefined4 *)(&DAT_002ad8bc + iVar1 * 4));
    *(undefined4 *)(iVar3 + 0x20) = 1;
    FUN_00148120(0x3f800000,param_2);
  }
  else {
    if (0.0 < fVar5) {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad858 + iVar1 * 4));
      FUN_001478c8(param_2,1,*(undefined4 *)(&DAT_002ad86c + iVar1 * 4));
      iVar2 = *(int *)(iVar3 + 0x224);
    }
    else {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad880 + iVar1 * 4));
      FUN_001478c8(param_2,1,*(undefined4 *)(&DAT_002ad894 + iVar1 * 4));
      iVar2 = *(int *)(iVar3 + 0x224);
    }
    fVar4 = fVar6 * (float)(int)((*(uint *)(*(int *)(iVar2 + 8) + 0xc) >> 7 & 0xff) - 1);
    if (fVar4 < 0.0) {
      *(undefined4 *)(iVar3 + 0x1e8) = 0;
    }
    else {
      *(float *)(iVar3 + 0x1e8) = fVar4;
    }
    fVar6 = fVar6 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar3 + 0x228) + 8) + 0xc) >> 7 & 0xff
                                 ) - 1);
    if (fVar6 < 0.0) {
      *(undefined4 *)(iVar3 + 0x1ec) = 0;
    }
    else {
      *(float *)(iVar3 + 0x1ec) = fVar6;
    }
  }
  return;
}

