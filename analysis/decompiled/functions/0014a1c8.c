/* Ghidra pseudocode. PS2 address: 0014a1c8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0014a290) */

void FUN_0014a1c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = (int)param_2;
  iVar1 = *(int *)(iVar2 + 0x220);
  fVar5 = *(float *)(iVar1 + 0x1a4);
  fVar6 = *(float *)(iVar1 + 0x18c);
  fVar8 = ABS(fVar5);
  fVar9 = ABS(fVar6);
  fVar7 = *(float *)(iVar1 + 0x198);
  if (*(int *)(iVar1 + 0x144) != 0) {
    fVar6 = -fVar6;
    fVar5 = -fVar5;
  }
  fVar3 = *(float *)(iVar1 + 0x1ac);
  fVar4 = -*(float *)(iVar1 + 0x1a8) * DAT_002c2370;
  if (fVar3 + fVar4 < fVar5) {
    fVar3 = fVar5 - fVar4;
  }
  else if (fVar5 < fVar3 - fVar4) {
    fVar3 = fVar5 + fVar4;
  }
  fVar4 = 0.0;
  if (fVar3 * fVar5 < 0.0) {
    iVar1 = FUN_002109e0();
    *(int *)(iVar2 + 0x21c) = iVar1 % 3;
  }
  iVar1 = *(int *)(iVar2 + 0x21c);
  if ((fVar5 == fVar4) && (fVar9 == fVar4)) {
    *(float *)(iVar2 + 0x1f8) = fVar7;
    *(undefined4 *)(iVar2 + 0x1e4) = 2;
    *(float *)(iVar2 + 500) = 1.0 - fVar7;
    FUN_001478c8(param_2,0,0x6a);
    FUN_001478c8(param_2,1,0x6b);
    *(undefined4 *)(iVar2 + 0x20) = 1;
    FUN_00148120(0x3f800000,param_2);
    return;
  }
  if (fVar9 == 0.0) {
    *(float *)(iVar2 + 0x1f8) = fVar7;
    *(undefined4 *)(iVar2 + 0x1e4) = 2;
    *(float *)(iVar2 + 500) = 1.0 - fVar7;
    if (0.0 < fVar5) {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad71c + iVar1 * 0x10));
      FUN_001478c8(param_2,1,*(undefined4 *)(&DAT_002ad724 + iVar1 * 0x10));
      iVar1 = *(int *)(iVar2 + 0x224);
    }
    else {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad718 + iVar1 * 0x10));
      FUN_001478c8(param_2,1,*(undefined4 *)(&DAT_002ad720 + iVar1 * 0x10));
      iVar1 = *(int *)(iVar2 + 0x224);
    }
    fVar9 = fVar8 * (float)(int)((*(uint *)(*(int *)(iVar1 + 8) + 0xc) >> 7 & 0xff) - 1);
    if (fVar9 < 0.0) {
      *(undefined4 *)(iVar2 + 0x1e8) = 0;
    }
    else {
      *(float *)(iVar2 + 0x1e8) = fVar9;
    }
    fVar8 = fVar8 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar2 + 0x228) + 8) + 0xc) >> 7 & 0xff
                                 ) - 1);
    if (0.0 <= fVar8) {
      *(float *)(iVar2 + 0x1ec) = fVar8;
    }
    else {
      *(undefined4 *)(iVar2 + 0x1ec) = 0;
    }
  }
  else {
    *(float *)(iVar2 + 0x1f8) = fVar9;
    *(undefined4 *)(iVar2 + 0x1e4) = 2;
    *(float *)(iVar2 + 500) = 1.0 - fVar9;
    if (0.0 < fVar5) {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad71c + iVar1 * 0x10));
    }
    else {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad718 + iVar1 * 0x10));
    }
    if (0.0 < fVar6) {
      FUN_001478c8(param_2,1,100);
      iVar1 = *(int *)(iVar2 + 0x224);
    }
    else {
      FUN_001478c8(param_2,1,99);
      iVar1 = *(int *)(iVar2 + 0x224);
    }
    fVar8 = fVar8 * (float)(int)((*(uint *)(*(int *)(iVar1 + 8) + 0xc) >> 7 & 0xff) - 1);
    if (fVar8 < 0.0) {
      *(undefined4 *)(iVar2 + 0x1e8) = 0;
    }
    else {
      *(float *)(iVar2 + 0x1e8) = fVar8;
    }
    fVar9 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar2 + 0x228) + 8) + 0xc) >> 7 & 0xff
                                 ) - 1);
    if (fVar9 < 0.0) {
      *(undefined4 *)(iVar2 + 0x1ec) = 0;
    }
    else {
      *(float *)(iVar2 + 0x1ec) = fVar9;
    }
  }
  return;
}

