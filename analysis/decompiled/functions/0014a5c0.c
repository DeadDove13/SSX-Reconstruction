/* Ghidra pseudocode. PS2 address: 0014a5c0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0014a688) */

void FUN_0014a5c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = (int)param_2;
  iVar1 = *(int *)(iVar3 + 0x220);
  fVar7 = *(float *)(iVar1 + 0x1a4);
  fVar8 = *(float *)(iVar1 + 0x18c);
  fVar9 = ABS(fVar7);
  fVar10 = ABS(fVar8);
  fVar6 = *(float *)(iVar1 + 0x198);
  if (*(int *)(iVar1 + 0x144) != 0) {
    fVar8 = -fVar8;
    fVar7 = -fVar7;
  }
  fVar4 = *(float *)(iVar1 + 0x1ac);
  fVar5 = -*(float *)(iVar1 + 0x1a8) * DAT_002c2374;
  if (fVar4 + fVar5 < fVar7) {
    fVar4 = fVar7 - fVar5;
  }
  else if (fVar7 < fVar4 - fVar5) {
    fVar4 = fVar7 + fVar5;
  }
  if (fVar4 * fVar7 < 0.0) {
    iVar1 = FUN_002109e0();
    *(int *)(iVar3 + 0x21c) = iVar1 % 3;
  }
  iVar1 = *(int *)(iVar3 + 0x21c);
  if (((fVar7 == 0.0) && (fVar10 == 0.0)) && ((fVar6 == 1.0 || (fVar6 == 0.0)))) {
    *(undefined4 *)(iVar3 + 500) = 0x3f800000;
    if (fVar6 == 0.0) {
      FUN_001478c8(param_2,0,0x6a);
    }
    else {
      FUN_001478c8(param_2,0,0x6b);
    }
    *(undefined4 *)(iVar3 + 0x20) = 1;
    *(undefined4 *)(iVar3 + 0x1e4) = 1;
    FUN_00148120(0x3f800000,param_2);
    return;
  }
  if (fVar10 != 0.0) {
    *(float *)(iVar3 + 0x1f8) = fVar10;
    *(undefined4 *)(iVar3 + 0x1e4) = 2;
    *(float *)(iVar3 + 500) = 1.0 - fVar10;
    if (0.0 < fVar7) {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad74c + iVar1 * 0x18));
    }
    else {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad748 + iVar1 * 0x18));
    }
    if (0.0 < fVar8) {
      FUN_001478c8(param_2,1,100);
      iVar1 = *(int *)(iVar3 + 0x224);
    }
    else {
      FUN_001478c8(param_2,1,99);
      iVar1 = *(int *)(iVar3 + 0x224);
    }
    fVar9 = fVar9 * (float)(int)((*(uint *)(*(int *)(iVar1 + 8) + 0xc) >> 7 & 0xff) - 1);
    if (fVar9 < 0.0) {
      *(undefined4 *)(iVar3 + 0x1e8) = 0;
    }
    else {
      *(float *)(iVar3 + 0x1e8) = fVar9;
    }
    fVar10 = fVar10 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar3 + 0x228) + 8) + 0xc) >> 7 &
                                   0xff) - 1);
    if (0.0 <= fVar10) {
      *(float *)(iVar3 + 0x1ec) = fVar10;
      return;
    }
    *(undefined4 *)(iVar3 + 0x1ec) = 0;
    return;
  }
  fVar10 = fVar6 + fVar6;
  if (fVar6 < 0.5) {
    *(float *)(iVar3 + 0x1f8) = fVar10;
    *(float *)(iVar3 + 500) = 1.0 - fVar10;
    if (0.0 < fVar7) {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad74c + iVar1 * 0x18));
      uVar2 = *(undefined4 *)(&DAT_002ad75c + iVar1 * 0x18);
    }
    else {
      FUN_001478c8(param_2,0,*(undefined4 *)(&UNK_002ad748 + iVar1 * 0x18));
      uVar2 = *(undefined4 *)(&DAT_002ad758 + iVar1 * 0x18);
    }
  }
  else {
    *(float *)(iVar3 + 500) = 2.0 - fVar10;
    *(float *)(iVar3 + 0x1f8) = fVar10 - 1.0;
    if (fVar7 <= 0.0) {
      FUN_001478c8(param_2,0,*(undefined4 *)(&DAT_002ad758 + iVar1 * 0x18));
      FUN_001478c8(param_2,1,*(undefined4 *)(&DAT_002ad750 + iVar1 * 0x18));
      iVar1 = *(int *)(iVar3 + 0x224);
      goto LAB_0014a8c4;
    }
    FUN_001478c8(param_2,0,*(undefined4 *)(&DAT_002ad75c + iVar1 * 0x18));
    uVar2 = *(undefined4 *)(&DAT_002ad754 + iVar1 * 0x18);
  }
  FUN_001478c8(param_2,1,uVar2);
  iVar1 = *(int *)(iVar3 + 0x224);
LAB_0014a8c4:
  *(undefined4 *)(iVar3 + 0x1e4) = 2;
  fVar10 = fVar9 * (float)(int)((*(uint *)(*(int *)(iVar1 + 8) + 0xc) >> 7 & 0xff) - 1);
  if (fVar10 < 0.0) {
    *(undefined4 *)(iVar3 + 0x1e8) = 0;
  }
  else {
    *(float *)(iVar3 + 0x1e8) = fVar10;
  }
  fVar9 = fVar9 * (float)(int)((*(uint *)(*(int *)(*(int *)(iVar3 + 0x228) + 8) + 0xc) >> 7 & 0xff)
                              - 1);
  if (0.0 <= fVar9) {
    *(float *)(iVar3 + 0x1ec) = fVar9;
  }
  else {
    *(undefined4 *)(iVar3 + 0x1ec) = 0;
  }
  return;
}

