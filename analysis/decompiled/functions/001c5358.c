/* Ghidra pseudocode. PS2 address: 001c5358. Not validated source. */

void FUN_001c5358(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  
  fVar10 = DAT_002c35d8;
  if (*(int *)(param_8 + 0x24c) == 0x31) {
    uStack_a4 = DAT_002c35c0;
    uStack_a0 = DAT_002c35c4;
    fVar7 = DAT_002c35c8;
  }
  else {
    uStack_a4 = DAT_002c35cc;
    uStack_a0 = DAT_002c35d0;
    fVar7 = DAT_002c35d4;
  }
  *(float *)(param_8 + 0x1ec) = param_6;
  *(undefined4 *)(param_8 + 0x1e8) = param_7;
  fVar15 = ((float)*(int *)(param_8 + 0x244) * fVar10) / (float)*(int *)(param_8 + 0x240);
  fStack_a8 = param_4;
  FUN_00218128(param_7,&fStack_b0,(uint)&fStack_b0 | 4);
  fVar16 = param_3 * 0.5;
  fVar10 = fVar16 / (fStack_b0 / fStack_ac);
  fVar11 = fVar10 * fVar15;
  if (*(int *)(param_8 + 0x13c4) == 1) {
    fVar10 = fVar10 * 0.75;
  }
  fVar17 = param_6 - param_5;
  fVar18 = fStack_a8 * 0.5;
  fVar7 = (-fVar7 * param_5) / fVar17;
  *(undefined4 *)(param_8 + 0x1330) = 0;
  fVar13 = 32768.0 - (float)(*(int *)(param_8 + 0x244) << 3);
  *(undefined4 *)(param_8 + 0x1350) = 0;
  *(undefined4 *)(param_8 + 0x1324) = 0;
  *(undefined4 *)(param_8 + 0x1354) = 0;
  *(float *)(param_8 + 0x1348) = fVar7;
  *(undefined4 *)(param_8 + 0x1328) = 0;
  fVar9 = 32768.0 - (float)(*(int *)(param_8 + 0x240) << 3);
  *(undefined4 *)(param_8 + 0x1338) = 0;
  fVar12 = -param_6 * fVar7;
  *(undefined4 *)(param_8 + 0x132c) = 0;
  *(undefined4 *)(param_8 + 0x133c) = 0;
  *(undefined4 *)(param_8 + 0x134c) = 0x3f800000;
  *(undefined4 *)(param_8 + 0x135c) = 0;
  *(undefined4 *)(param_8 + 0x13c0) = 0;
  *(float *)(param_8 + 0x1358) = fVar12;
  fVar14 = param_3 / fStack_a8;
  *(float *)(param_8 + 0x1370) = (param_1 + param_3) * 16.0 + fVar9;
  *(float *)(param_8 + 0x1374) = (param_2 + fStack_a8) * 16.0 + fVar13;
  *(float *)(param_8 + 0x1378) = fVar7 * param_6 + fVar12;
  *(float *)(param_8 + 0x1320) = fVar10 * 16.0;
  *(float *)(param_8 + 0x1340) = (fVar16 + param_1) * 16.0 + fVar9;
  *(float *)(param_8 + 0x1334) = -fVar11 * 16.0;
  *(float *)(param_8 + 0x1344) = (fVar18 + param_2) * 16.0 + fVar13;
  *(float *)(param_8 + 0x1360) = param_1 * 16.0 + fVar9;
  *(float *)(param_8 + 0x1364) = param_2 * 16.0 + fVar13;
  *(float *)(param_8 + 0x1368) = fVar7 * param_5 + fVar12;
  *(float *)(param_8 + 0x136c) = 1.0 / param_5;
  *(float *)(param_8 + 0x137c) = 1.0 / param_6;
  fVar11 = (float)FUN_00252148(param_7);
  fVar11 = 1.0 / fVar11;
  fVar9 = (float)FUN_00252148(param_7);
  fVar7 = DAT_002c35e0;
  fVar10 = DAT_002c35dc;
  fVar15 = (1.0 / fVar9) * fVar15 * fVar14;
  if (*(int *)(param_8 + 0x13c4) == 1) {
    fVar11 = fVar11 * 0.75;
  }
  iVar6 = *(int *)(param_8 + 0x240);
  iVar4 = *(int *)(param_8 + 0x244);
  *(float *)(param_8 + 0x1c0) = fVar16;
  *(float *)(param_8 + 0x140) = fVar11;
  *(undefined4 *)(param_8 + 0x144) = 0;
  *(undefined4 *)(param_8 + 0x148) = 0;
  *(undefined4 *)(param_8 + 0x14c) = 0;
  fVar14 = -((param_6 + param_6) * param_5) / fVar17;
  *(undefined4 *)(param_8 + 0x150) = 0;
  *(float *)(param_8 + 0x154) = fVar15;
  *(undefined4 *)(param_8 + 0x158) = 0;
  fVar17 = (param_6 + param_5) / fVar17;
  *(undefined4 *)(param_8 + 0x15c) = 0;
  fVar12 = -((float)iVar6 * 0.5) + fVar16 + param_1;
  *(undefined4 *)(param_8 + 0x160) = 0;
  fVar13 = -((float)iVar4 * 0.5) + fVar18 + param_2;
  fVar9 = ABS(fVar12);
  fVar16 = ABS(fVar13);
  *(undefined4 *)(param_8 + 0x164) = 0;
  *(undefined4 *)(param_8 + 0x16c) = 0x3f800000;
  *(float *)(param_8 + 0x168) = fVar17;
  fVar10 = fVar10 - (fVar9 + fVar9);
  *(undefined4 *)(param_8 + 0x170) = 0;
  fVar7 = fVar7 - (fVar16 + fVar16);
  *(undefined4 *)(param_8 + 0x174) = 0;
  *(float *)(param_8 + 0x178) = fVar14;
  fVar16 = DAT_002c35e4;
  *(undefined4 *)(param_8 + 0x17c) = 0;
  fVar13 = fVar13 + fVar16;
  *(float *)(param_8 + 0x1c4) = -fVar18;
  fVar12 = fVar12 + fVar16;
  *(undefined4 *)(param_8 + 0x1cc) = 0;
  *(undefined4 *)(param_8 + 0x1c8) = uStack_a4;
  *(float *)(param_8 + 0x1d4) = fVar13;
  *(float *)(param_8 + 0x1d0) = fVar12;
  *(undefined4 *)(param_8 + 0x1dc) = 0;
  *(undefined4 *)(param_8 + 0x1d8) = uStack_a0;
  *(float *)(param_8 + 0xa0) = (param_3 / fVar10) * fVar11;
  *(float *)(param_8 + 0xb4) = (fStack_a8 / fVar7) * fVar15;
  *(undefined4 *)(param_8 + 0xa4) = 0;
  *(undefined4 *)(param_8 + 0xa8) = 0;
  *(undefined4 *)(param_8 + 0xac) = 0;
  *(undefined4 *)(param_8 + 0xb0) = 0;
  *(undefined4 *)(param_8 + 0xb8) = 0;
  *(undefined4 *)(param_8 + 0xbc) = 0;
  *(float *)(param_8 + 200) = fVar17;
  *(undefined4 *)(param_8 + 0xcc) = 0x3f800000;
  *(float *)(param_8 + 0xd8) = fVar14;
  *(float *)(param_8 + 0x120) = fVar10 * 0.5;
  *(float *)(param_8 + 0x124) = -(fVar7 * 0.5);
  *(undefined4 *)(param_8 + 0x128) = uStack_a4;
  *(float *)(param_8 + 0x130) = fVar12;
  *(float *)(param_8 + 0x134) = fVar13;
  *(undefined4 *)(param_8 + 0x138) = uStack_a0;
  *(undefined4 *)(param_8 + 0xc0) = 0;
  *(undefined4 *)(param_8 + 0xc4) = 0;
  *(undefined4 *)(param_8 + 0xd0) = 0;
  *(undefined4 *)(param_8 + 0xd4) = 0;
  *(undefined4 *)(param_8 + 0xdc) = 0;
  *(undefined4 *)(param_8 + 300) = 0;
  *(undefined4 *)(param_8 + 0x13c) = 0;
  iVar8 = (int)param_1;
  if (iVar8 < 0) {
    uVar5 = 0;
  }
  else {
    if (iVar6 + -1 < iVar8) {
      iVar8 = iVar6 + -1;
    }
    uVar5 = (undefined2)iVar8;
  }
  *(undefined2 *)(param_8 + 0x1e0) = uVar5;
  iVar8 = (int)param_2;
  if (iVar8 < 0) {
    uVar5 = 0;
  }
  else {
    if (iVar4 + -1 < iVar8) {
      iVar8 = iVar4 + -1;
    }
    uVar5 = (undefined2)iVar8;
  }
  *(undefined2 *)(param_8 + 0x1e2) = uVar5;
  iVar8 = (int)param_3;
  iVar6 = iVar6 - (uint)*(ushort *)(param_8 + 0x1e0);
  if (iVar8 < 0) {
    uVar5 = 0;
  }
  else {
    if (iVar6 < iVar8) {
      iVar8 = iVar6;
    }
    uVar5 = (undefined2)iVar8;
  }
  *(undefined2 *)(param_8 + 0x1e4) = uVar5;
  uVar3 = DAT_002c35f0;
  uVar2 = DAT_002c35ec;
  uVar1 = DAT_002c35e8;
  iVar6 = (int)fStack_a8;
  iVar4 = iVar4 - (uint)*(ushort *)(param_8 + 0x1e2);
  if (iVar6 < 0) {
    uVar5 = 0;
  }
  else {
    if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
    uVar5 = (undefined2)iVar6;
  }
  *(undefined2 *)(param_8 + 0x1e6) = uVar5;
  *(undefined4 *)(param_8 + 0x20c) = uVar3;
  *(undefined4 *)(param_8 + 0x1f0) = uVar1;
  *(undefined4 *)(param_8 + 0x200) = uVar2;
  *(undefined4 *)(param_8 + 0x204) = 0;
  *(undefined4 *)(param_8 + 0x208) = 0;
  return;
}

